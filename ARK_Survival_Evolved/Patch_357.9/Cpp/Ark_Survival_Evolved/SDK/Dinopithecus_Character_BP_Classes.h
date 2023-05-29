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
	 * BlueprintGeneratedClass Dinopithecus_Character_BP.Dinopithecus_Character_BP_C
	 * Size -> 0x17C8 (FullSize[0x4D08] - InheritedSize[0x3540])
	 */
	class ADinopithecus_Character_BP_C : public ADeinonychus_Character_BP_C
	{
	public:
		class UParticleSystemComponent*                            RightHandTail;                                           // 0x3540(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            LeftHandTail;                                            // 0x3548(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UDinoCharacterStatusComponent_BP_Dinopithecus_C*     DinoCharacterStatus_BP_Dinopithecus_C1;                  // 0x3550(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            tail;                                                    // 0x3558(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            ClimbingTail;                                            // 0x3560(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UZiplineComponent_Dinopithecus_C*                    Zipline_Dinopithecus_C1;                                 // 0x3568(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStaticMeshComponent*                                ProjectileMesh;                                          // 0x3570(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       SoftAttachToSmalls;                                      // 0x3578(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DebugModeBigly;                                          // 0x3579(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J2ZT[0x2];                                   // 0x357A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ShapeshifterAttachSocket;                                // 0x357C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             AttachToOwnerOffset;                                     // 0x3584(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      LandedCameraShakeScale;                                  // 0x3590(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3R28[0x4];                                   // 0x3594(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastTransformationTime;                                  // 0x3598(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class UClass*                                              RiderBuff;                                               // 0x35A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class APrimalCharacter*                                    ShapeshifterPounceTarget;                                // 0x35A8(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EShapeshifter_Large_PounceState                            PounceState;                                             // 0x35B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8EEA[0x3];                                   // 0x35B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                PounceSocketName;                                        // 0x35B4(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      PounceDistanceToTargetToBeAttached;                      // 0x35BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              PounceStateReplicated;                                   // 0x35C0(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_38YJ[0x7];                                   // 0x35C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ServerDebugString_1;                                     // 0x35C8(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance
		float                                                      PounceLocationInterpSpeed;                               // 0x35D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      PounceRotationSpeed;                                     // 0x35DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             StartPounceLoc;                                          // 0x35E0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      HideSmallsDelay;                                         // 0x35EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Transformed;                                             // 0x35F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_N8S9[0x3];                                   // 0x35F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TransformedScaleInterpSpeed;                             // 0x35F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             ChachedWorldLoc;                                         // 0x35F8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             ServerPosition;                                          // 0x3604(0x000C) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TransformedDetachFromSmallsDelay;                        // 0x3610(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsBerzerk;                                              // 0x3614(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BBGQ[0x3];                                   // 0x3615(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PlayLandedAnim2DSpeedThreshold;                          // 0x3618(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6TXA[0x4];                                   // 0x361C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastTimeReleaseJumpWhileFalling;                         // 0x3620(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AddictionIncreasePerElement;                             // 0x3628(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxTransformedTimeReducedFromAddiction;                  // 0x362C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             VelocityAddedOnSequentialJump;                           // 0x3630(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TimeBeforeLandingToAllowSequentialJumpInput;             // 0x363C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SequentialJumpDelay;                                     // 0x3640(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             VelocityAtLastTimeReleasedJumpWhileFalling;              // 0x3644(0x000C) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UCurveFloat*                                         VelocityMultOnSequentialJumpFromNumSequentialJumps;      // 0x3650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    NumSequentialJumps;                                      // 0x3658(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxHorizontalVelocityForSequentialJumps;                 // 0x365C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             CameraDirectionWhenReleasedJumpWhileFalling;             // 0x3660(0x000C) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CameraRotationClampOnSequentialJump;                     // 0x366C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LastTimeChangedFallingVelocityFromInput;                 // 0x3670(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CooldownOnChangingFallingVelocity;                       // 0x3678(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      PercentToReduceSpeedOnFallingVecityWithInput;            // 0x367C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AOEGroundPoundRange;                                     // 0x3680(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AOEImpulseGround;                                        // 0x3684(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AOEImpulseMassThreshold;                                 // 0x3688(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ImpulseOnSwipeAttack;                                    // 0x368C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              AOEGroundPoundTargetBuff;                                // 0x3690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class APrimalCharacter*                                    SwipeAttackTarget;                                       // 0x3698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ImpulseOnChargingMelee;                                  // 0x36A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RequiredRunSpeedForChargingMeleeTick;                    // 0x36A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SpeedAddedOnLeftRightInputWhileSequentialJumping;        // 0x36A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxLeftRightSpeedOnLeftRightInputOnSequencialJump;       // 0x36AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FARKDinoData                                        SmallsDinoData;                                          // 0x36B0(0x0040) Edit, BlueprintVisible, DisableEditOnInstance, SaveGame, NativeAccessSpecifierPublic
		bool                                                       DebugModeText;                                           // 0x36F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KK4C[0x3];                                   // 0x36F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AddictedAmount;                                          // 0x36F4(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      MaxTimeReducedFromTransformDurationDueToAddiction;       // 0x36F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AddictedAmountAtTransformedTime;                         // 0x36FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      PercentOfMaxHealthAsDamageThresholdForBerzerkBase;       // 0x3700(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DamageTaken;                                             // 0x3704(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FHUDElement                                         DmgTakenHUDElement;                                      // 0x3708(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		struct FHUDElement                                         TimeRemainingHUDElement;                                 // 0x3858(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      ThrowRiderSpeed;                                         // 0x39A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_H5LG[0x4];                                   // 0x39AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHUDElement                                         AddictionHUDElement;                                     // 0x39B0(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UAnimMontage*>                                AddictedSpedUpAnims;                                     // 0x3B00(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UCurveFloat*                                         AddictionAmountToAnimSpeedAdditiveCurve;                 // 0x3B10(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     TimeAddedOnEatingElement;                                // 0x3B18(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TimeAddedOnElementConsumed;                              // 0x3B20(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_F1E0[0x4];                                   // 0x3B24(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalCharacter*                                    PrevRider;                                               // 0x3B28(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ContinuousCameraShake;                                   // 0x3B30(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BAYH[0x3];                                   // 0x3B31(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxTamingEffectivenessBumpFromDamage;                    // 0x3B34(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    TransformationCount;                                     // 0x3B38(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AMSC[0x4];                                   // 0x3B3C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         CharacterLevelToTransformationCountForTamingCurve;       // 0x3B40(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DebugFastTaming;                                         // 0x3B48(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HHVU[0x3];                                   // 0x3B49(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      JumpSpeedTowardsLocationMult;                            // 0x3B4C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxJumpSpeedTowardsLocation;                             // 0x3B50(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxZVelocityOnSequntialJump;                             // 0x3B54(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             UberpounceJumpVelocity;                                  // 0x3B58(0x000C) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DebugModeStatSync;                                       // 0x3B64(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DebugModeStats;                                          // 0x3B65(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5HAF[0x2];                                   // 0x3B66(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterPlayerController*                            TamingPlayerController;                                  // 0x3B68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsUberpounceJump;                                        // 0x3B70(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PP16[0x7];                                   // 0x3B71(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastUberpounceJumpTime;                                  // 0x3B78(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EShapeshifterIdleAnimEnum                                  LatchIdleAnim;                                           // 0x3B80(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              LatchIdleAnimRep;                                        // 0x3B81(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_1PY2[0x6];                                   // 0x3B82(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastTimeStartedFalling;                                  // 0x3B88(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MinimumTimeFallingForSequentialJump;                     // 0x3B90(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      PercentStaminaOnAteElement;                              // 0x3B94(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             LocOnStartFalling;                                       // 0x3B98(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MinJumpDistanceForSequentialJump;                        // 0x3BA4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FString                                              AddictionExtendedInfoTooltip;                            // 0x3BA8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class FString                                              RemainingTimeExtendedInfoTooltip;                        // 0x3BB8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       DebugModeGroundPound;                                    // 0x3BC8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DebugModeChargingMelee;                                  // 0x3BC9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JWST[0x2];                                   // 0x3BCA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DamageMultiFromBerzerkToEnemyPrimalStructures;           // 0x3BCC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DamageMultiplierFromBerzerk;                             // 0x3BD0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DamageMultiFromBerzerkToAllyPrimalStructures;            // 0x3BD4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       QueueRoarOnTransform;                                    // 0x3BD8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UseLeftClaw;                                             // 0x3BD9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NDCU[0x6];                                   // 0x3BDA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         AddictionAmountToDamageMultCurve;                        // 0x3BE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UCurveFloat*                                         AddictionAmountToLifeTimeReudctionPercentCurve;          // 0x3BE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UCurveFloat*                                         AddictionAmountToDamageResistancePercent;                // 0x3BF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    MinimumLifetimeRemainingToHideTimeInHUD;                 // 0x3BF8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PA5Y[0x4];                                   // 0x3BFC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         JumpKeyHoldTimeToUberpounceRangeCurve;                   // 0x3C00(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UsingAnticipationIdle;                                   // 0x3C08(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EShapeshifterIdleAnimEnum                                  CurrentIdleAnim;                                         // 0x3C09(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JAR6[0x2];                                   // 0x3C0A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SuperUberpounceCameraShakeScale;                         // 0x3C0C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SuperUberpounceInterpSpeed;                              // 0x3C10(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QXUN[0x4];                                   // 0x3C14(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastTimeEatElement;                                      // 0x3C18(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsHoldingProne;                                          // 0x3C20(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_L9HQ[0x3];                                   // 0x3C21(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CameraLocation;                                          // 0x3C24(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      BoulderThrowRange;                                       // 0x3C30(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DebugDrawRockThrow;                                      // 0x3C34(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_O4Q4[0x3];                                   // 0x3C35(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastThrowRockTime;                                       // 0x3C38(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             TPVOffsetHoldingProne;                                   // 0x3C40(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      LandedWindowForSequentialJump;                           // 0x3C4C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             PreviousLocation;                                        // 0x3C50(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RIHT[0x4];                                   // 0x3C5C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastTimeFellLargeDistance;                               // 0x3C60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DistanceThresholdForLargeFall;                           // 0x3C68(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CameraInterpSpeed;                                       // 0x3C6C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AddictionRequiredForNaturalBerzerk;                      // 0x3C70(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       EnableIgnoreServerCorrections;                           // 0x3C74(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_P05I[0x3];                                   // 0x3C75(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Min2dForwardSpeedForSequentialJump;                      // 0x3C78(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Q3DL[0x4];                                   // 0x3C7C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHUDElement                                         AddictionDescriptionHUDElement;                          // 0x3C80(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      TamedTransformedTimeMultiplier;                          // 0x3DD0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LZVC[0x4];                                   // 0x3DD4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastSequentialJumpTime;                                  // 0x3DD8(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      GravityIncreaseTimeOutOnSequentialJump;                  // 0x3DE0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      PendingJumpOffWallHoldTime;                              // 0x3DE4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      WalkingIntoFallingAutoLatchDelay;                        // 0x3DE8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AOEGroundPoundDestructionRangeOutFront;                  // 0x3DEC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AOEGroundDestructionRadius;                              // 0x3DF0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DebugModeAOEGroundPound;                                 // 0x3DF4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IDHR[0x3];                                   // 0x3DF5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    LastFrameForwardInput;                                   // 0x3DF8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ImpulseOnBeginPlay;                                      // 0x3DFC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TimeSinceTransformation;                                 // 0x3E00(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1K5J[0x4];                                   // 0x3E04(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     BeginPlayTime;                                           // 0x3E08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UseSuperForJumpReleased;                                 // 0x3E10(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       StatFixUp;                                               // 0x3E11(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DebugModeSpawning;                                       // 0x3E12(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JNE9[0x5];                                   // 0x3E13(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      ProjectileTypes;                                         // 0x3E18(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    SelectedProjectile;                                      // 0x3E28(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MYR9[0x4];                                   // 0x3E2C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UStaticMesh*>                                 ProjectileMeshes;                                        // 0x3E30(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class UClass*>                                      RequiredAmmoItems;                                       // 0x3E40(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		class UClass*                                              LastUsedPoopItemClass;                                   // 0x3E50(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceFanTraceDistanceToCamera;                      // 0x3E58(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceFanRange;                                      // 0x3E5C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<float>                                              UberpounceFanTraceSteps;                                 // 0x3E60(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      LastMoveForwardAxisValue;                                // 0x3E70(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      LastMoveRightAxisValue;                                  // 0x3E74(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      LatchingSurfaceTraceDotProductThreshold;                 // 0x3E78(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      LatchingSurfaceDistanceForValidLatchPoint;               // 0x3E7C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ELatchedJumpType                                           LatchedJumpType;                                         // 0x3E80(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NB5X[0x7];                                   // 0x3E81(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              FallingLatchAnglesLeft;                                  // 0x3E88(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<float>                                              FallingLatchAnglesRight;                                 // 0x3E98(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FVector                                             PrevMeshWorldLocation;                                   // 0x3EA8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MeshInterpSpeedLatching;                                 // 0x3EB4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MeshInterpTimeOnLatch;                                   // 0x3EB8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            PrevMeshWorldRotation;                                   // 0x3EBC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MeshInterpSpeed;                                         // 0x3EC8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FallingAdaptRotToSurfaceInterpSpeed;                     // 0x3ECC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class AShooterProjectile*                                  FiredProjectile;                                         // 0x3ED0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsAmmoWheelOpen;                                        // 0x3ED8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UVQ8[0x7];                                   // 0x3ED9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCustomWheelEntry>                           AmmoTypeWheelEntries;                                    // 0x3EE0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FCustomWheelSettings                                AmmoTypeWheelSetting;                                    // 0x3EF0(0x0040) Edit, BlueprintVisible, DisableEditOnInstance
		struct FLinearColor                                        AmmoTypeWheelHasAmmoColor;                               // 0x3F30(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        AmmoTypeWheelNoAmmoColor;                                // 0x3F40(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FString                                              NoAmmoNotificationText;                                  // 0x3F50(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FLinearColor                                        NoAmmoNotificationColor;                                 // 0x3F60(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             CameraDirection;                                         // 0x3F70(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MFH3[0x4];                                   // 0x3F7C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              BattlecrySearchClass;                                    // 0x3F80(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      BattlecrySearchRadius;                                   // 0x3F88(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      BattlecryTargetingDistance;                              // 0x3F8C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsHoldingCrouch;                                         // 0x3F90(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KPJL[0x7];                                   // 0x3F91(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              BattlecryTarget;                                         // 0x3F98(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      BattlecryTargetingRadius;                                // 0x3FA0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      BattlecryJumpPeakHeight;                                 // 0x3FA4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        BattlecryBiteAnim;                                       // 0x3FA8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsInBattlecryJump;                                      // 0x3FB0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_B9AQ[0x3];                                   // 0x3FB1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BattlecryJumpGravity;                                    // 0x3FB4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		TArray<class APrimalDinoCharacter*>                        BattlecryCharsToIgnore;                                  // 0x3FB8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		float                                                      BattlecryJumpDuration;                                   // 0x3FC8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_H5V7[0x4];                                   // 0x3FCC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     PoopMuzzleFX;                                            // 0x3FD0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LastTimeJump;                                            // 0x3FD8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      LastJumpHoldTime;                                        // 0x3FE0(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             TPVOffsetHoldingCrouch;                                  // 0x3FE4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        GrabPoopAnim;                                            // 0x3FF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        GrabPoopZiplineAnim;                                     // 0x3FF8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bLastIsHoldingProne;                                     // 0x4000(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_G0CW[0x3];                                   // 0x4001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             BattlecryTraceHalfSize;                                  // 0x4004(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      BattlecryMinDistanceForJump;                             // 0x4010(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ThrowAimYawLimit;                                        // 0x4014(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       QueuedAOEOnLanding;                                      // 0x4018(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VDMU[0x3];                                   // 0x4019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PercentChanceEmitAlphaPoop;                              // 0x401C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      PercentChanceToEmitTwoPoops;                             // 0x4020(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RT49[0x4];                                   // 0x4024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              AlphaPoopItemClass;                                      // 0x4028(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UUserWidget*                                         HudWidgetInstance;                                       // 0x4030(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              HUDWidget;                                               // 0x4038(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FString                                              CurrentHUDText;                                          // 0x4040(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FLinearColor                                        BattlecryCrosshairColor;                                 // 0x4050(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        ThrowPoopCrosshairColor;                                 // 0x4060(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        LastCrosshairColor;                                      // 0x4070(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      LastCrosshairAlpha;                                      // 0x4080(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ConstInterpSpeed;                                        // 0x4084(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RecentlyLatchedCameraInterpThreshold;                    // 0x4088(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             PreviousMeshWorldLocation;                               // 0x408C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DebugMeshLocation;                                       // 0x4098(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JJ3H[0x3];                                   // 0x4099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AOEOnLandingGravityScale;                                // 0x409C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      CheckingForFallingLatchTextFadeTime;                     // 0x40A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bRequestedNoAmmoNotification;                            // 0x40A4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_79SZ[0x3];                                   // 0x40A5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastNoAmmoNotificationTime;                              // 0x40A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      LatchedJumpAnimTimeFromEndToBeConsideredFinished;        // 0x40B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      UberpounceInterpSpeedRecentlyUlatched;                   // 0x40B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      PickupPoopRadius;                                        // 0x40B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      BaseAOEGroundPoundDamage;                                // 0x40BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     TimeQueuedAOEOnLanding;                                  // 0x40C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UAnimMontage*                                        GroundPoundAnimOnLanding;                                // 0x40C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxDamageMultiOnGroundPoundFromAirTime;                  // 0x40D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TimeAfterQueuedAOEGroundPoundToAllowStructureDamage;     // 0x40D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             LocationQueuedAOEGroundPound;                            // 0x40D8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      DistanceAfterQueuedAOEGroundPoundToAllowStructureDamage; // 0x40E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      LatchedJumpAnimTimeFromEndToBeConsideredFinishedPingAdditive; // 0x40E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BH6W[0x4];                                   // 0x40EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastTimePlayedSpashVFX;                                  // 0x40F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      SplashVFXCooldown;                                       // 0x40F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      AmmoWheelHoldDuration;                                   // 0x40FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     RightShoulderPressedTime;                                // 0x4100(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bTargetingFromGamepad;                                   // 0x4108(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bCrouchFromGamepad;                                      // 0x4109(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_29K1[0x2];                                   // 0x410A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             TPVOffsetMultiplierUberpouncing;                         // 0x410C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      TPVOffsetMultiplierInterpSpeed;                          // 0x4118(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0PEZ[0x4];                                   // 0x411C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastTimeJumpFromUberpounce;                              // 0x4120(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LastUpdateInventoryTime;                                 // 0x4128(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       BabyRidingAdult;                                         // 0x4130(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HMJZ[0x3];                                   // 0x4131(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxBabyRidingAge;                                        // 0x4134(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     LastDismountTime;                                        // 0x4138(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		double                                                     NextDismountTime;                                        // 0x4140(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    MaxPoopsOnAOEGroundPound;                                // 0x4148(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YEKK[0x4];                                   // 0x414C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              PoopItemClassForThrow;                                   // 0x4150(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              GrenadeItemClassForThrow;                                // 0x4158(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    PackMembersKilled;                                       // 0x4160(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PackIsDead;                                              // 0x4164(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_G9NY[0x3];                                   // 0x4165(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PercentHealthRequiredForTame;                            // 0x4168(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       HasEverStartedPassiveTame;                               // 0x416C(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0K7Z[0x3];                                   // 0x416D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LastPoopThrowScalar;                                     // 0x4170(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxPoopExplosionRadiusScalar;                            // 0x4174(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             FPVOffsetUberpounce;                                     // 0x4178(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      FPVOffsetInterpSpeed;                                    // 0x4184(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bHadWeapon;                                              // 0x4188(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_S11Y[0x3];                                   // 0x4189(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PingMultForLatchDelayAfterLatchedJump;                   // 0x418C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxDelayAfterLatchedJumpForAutoLatch;                    // 0x4190(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CLJK[0x4];                                   // 0x4194(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FIKLegInfo>                                  IKLegsSaved;                                             // 0x4198(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		float                                                      AdjustIKHalfLegLengthMulti;                              // 0x41A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FRotator                                            CurrentCamRot;                                           // 0x41AC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             TPVOffsetLatched;                                        // 0x41B8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             CurrentCameraOriginTarget;                               // 0x41C4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FVector                                             TPVCameraOffsetMultiplierWallTarget;                     // 0x41D0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DebugExtraTargetingValidation;                           // 0x41DC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NWV3[0x3];                                   // 0x41DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             UberpounceTargetingTraceOffset;                          // 0x41E0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       OverrideCameraStartLocation;                             // 0x41EC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DebugNetworkedLocation;                                  // 0x41ED(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_14SK[0x2];                                   // 0x41EE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinAnimSpeedOnLatchAnim;                                 // 0x41F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      MaxAnimSpeedOnLatchAnim;                                 // 0x41F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      ArmorDurabilityDecreaseMultiplier;                       // 0x41F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       QueuedZiplineAttach;                                     // 0x41FC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HF1Y[0x3];                                   // 0x41FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             TargetFPVOffsetFalling;                                  // 0x4200(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_BoolBool_ReturnValue;                // 0x420C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_BoolBool_ReturnValue2;               // 0x420D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_BoolBool_ReturnValue3;               // 0x420E(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_BoolBool_ReturnValue4;               // 0x420F(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_BoolBool_ReturnValue5;               // 0x4210(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_BoolBool_ReturnValue6;               // 0x4211(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_BoolBool_ReturnValue7;               // 0x4212(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MUYU[0x1];                                   // 0x4213(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_GetUpVector_ReturnValue;                        // 0x4214(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_ProjectVectorOnToPlane_ReturnValue;             // 0x4220(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue;                // 0x422C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Normal_ReturnValue;                             // 0x4230(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Normal_ReturnValue2;                            // 0x423C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_GetActorRightVector_ReturnValue;                // 0x4248(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_DegreesToRadians_ReturnValue;                   // 0x4254(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Dot_VectorVector_ReturnValue;                   // 0x4258(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Cos_ReturnValue;                                // 0x425C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue;                 // 0x4260(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DG3A[0x7];                                   // 0x4261(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                CallFunc_Conv_FloatToText_ReturnValue;                   // 0x4268(0x0018) ELEMENT_SIZE_MISMATCH Transient, DuplicateTransient
		unsigned char                                              UnknownData_GZRB[0x10];                                  // 0x4280(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FFormatTextArgument                                 K2Node_MakeStruct_FormatTextArgument;                    // 0x4290(0x0050) Transient, DuplicateTransient
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue;                // 0x42E0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsServer_ReturnValue;                           // 0x42EC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IKFC[0x3];                                   // 0x42ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        CallFunc_SelectColor_ReturnValue;                        // 0x42F0(0x0010) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_CustomEvent_Axis;                                 // 0x4300(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue2;                // 0x4304(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_U73B[0x3];                                   // 0x4305(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             K2Node_CustomEvent_newVelocity;                          // 0x4308(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SPWI[0x4];                                   // 0x4314(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue;                        // 0x4318(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_X;                                  // 0x4320(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_Y;                                  // 0x4324(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_Z;                                  // 0x4328(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6S7D[0x4];                                   // 0x432C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CallFunc_GetNetworkTimeInSeconds_ReturnValue;            // 0x4330(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_MakeVector_ReturnValue;                         // 0x4338(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Normal_ReturnValue3;                            // 0x4344(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_VSize_ReturnValue;                              // 0x4350(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsTimeSince_Network_ReturnValue;                // 0x4354(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LT75[0x3];                                   // 0x4355(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue2;               // 0x4358(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue3;               // 0x435C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_SelectFloat_ReturnValue;                        // 0x4360(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Add_FloatFloat_ReturnValue;                     // 0x4364(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AController*                                         CallFunc_GetController_ReturnValue;                      // 0x4368(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Multiply_VectorFloat_ReturnValue;               // 0x4370(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UPJZ[0x4];                                   // 0x437C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APlayerController*                                   CallFunc_CastToPlayerController_ReturnValue;             // 0x4380(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_X2;                                 // 0x4388(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_Y2;                                 // 0x438C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_Z2;                                 // 0x4390(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_MakeVector_ReturnValue2;                        // 0x4394(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue;                  // 0x43A0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BO8O[0x3];                                   // 0x43A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_GetSocketLocation_ReturnValue;                  // 0x43A4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            CallFunc_SpawnEmitterAtLocation_ReturnValue;             // 0x43B0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		ENetModeBP                                                 CallFunc_SwitchNetworkMode_OutNetworkMode;               // 0x43B8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue2;                 // 0x43B9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchEnum_CmpSuccess;                            // 0x43BA(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue3;                 // 0x43BB(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_GetActorRightVector_ReturnValue2;               // 0x43BC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_GetActorUpVector_ReturnValue;                   // 0x43C8(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Add_VectorVector_ReturnValue;                   // 0x43D4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue2;                       // 0x43E0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_GetSocketLocation_ReturnValue2;                 // 0x43E8(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EVN3[0x4];                                   // 0x43F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDinoAttackInfo                                     CallFunc_Array_Get_Item;                                 // 0x43F8(0x0130) Transient, DuplicateTransient
		TArray<class AActor*>                                      CallFunc_ServerOctreeOverlapActors_ReturnValue;          // 0x4528(0x0010) ZeroConstructor, Transient, DuplicateTransient
		int32_t                                                    CallFunc_Array_Length_ReturnValue;                       // 0x4538(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		ENetModeBP                                                 CallFunc_SwitchNetworkMode_OutNetworkMode2;              // 0x453C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue4;                 // 0x453D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchEnum2_CmpSuccess;                           // 0x453E(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		ENetModeBP                                                 CallFunc_SwitchNetworkMode_OutNetworkMode3;              // 0x453F(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchEnum3_CmpSuccess;                           // 0x4540(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsRunning_ReturnValue;                          // 0x4541(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1W5S[0x2];                                   // 0x4542(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_VSize_ReturnValue2;                             // 0x4544(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ByteByte_ReturnValue;                // 0x4548(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue3;                // 0x4549(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue;                         // 0x454A(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue2;                        // 0x454B(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue;                            // 0x454C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SWST[0x3];                                   // 0x454D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CallFunc_Conv_ObjectToString_ReturnValue;                // 0x4550(0x0010) ZeroConstructor, Transient, DuplicateTransient
		class APrimalBuff*                                         CallFunc_GetBuff_ReturnValue;                            // 0x4560(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue2;                           // 0x4568(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6ZIH[0x3];                                   // 0x4569(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_GetActorForwardVector_ReturnValue;              // 0x456C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Add_VectorVector_ReturnValue2;                  // 0x4578(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsLocallyControlledByPlayer_ReturnValue;        // 0x4584(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IVY6[0x3];                                   // 0x4585(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_Normal_ReturnValue4;                            // 0x4588(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Multiply_VectorFloat_ReturnValue2;              // 0x4594(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AController*                                         CallFunc_GetController_ReturnValue2;                     // 0x45A0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APlayerController*                                   CallFunc_CastToPlayerController_ReturnValue2;            // 0x45A8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_CustomEvent_AxisValue;                            // 0x45B0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QY63[0x4];                                   // 0x45B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue3;                       // 0x45B8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue4;                // 0x45C0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_PLZB[0x7];                                   // 0x45C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CallFunc_GetNetworkTimeInSeconds_ReturnValue2;           // 0x45C8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsTimeSince_Network_ReturnValue2;               // 0x45D0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_DoubleDouble_ReturnValue;            // 0x45D1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KOAY[0x2];                                   // 0x45D2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_GetActorForwardVector_ReturnValue2;             // 0x45D4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_GetActorRightVector_ReturnValue3;               // 0x45E0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue4;               // 0x45EC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_SelectFloat_ReturnValue2;                       // 0x45F0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsLocallyControlledByPlayer_ReturnValue2;       // 0x45F4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7WIR[0x3];                                   // 0x45F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_Multiply_VectorFloat_ReturnValue3;              // 0x45F8(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Add_VectorVector_ReturnValue3;                  // 0x4604(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AController*                                         CallFunc_GetController_ReturnValue3;                     // 0x4610(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APlayerController*                                   CallFunc_CastToPlayerController_ReturnValue3;            // 0x4618(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_ProjectVectorOnToPlane_ReturnValue2;            // 0x4620(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_VSize_ReturnValue3;                             // 0x462C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_FloatFloat_ReturnValue;                    // 0x4630(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DCFX[0x7];                                   // 0x4631(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FARKDinoData                                        CallFunc_GetDinoData_OutDinoData;                        // 0x4638(0x0040) Transient, DuplicateTransient
		bool                                                       CallFunc_BooleanAND_ReturnValue3;                        // 0x4678(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4HOC[0x3];                                   // 0x4679(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Add_FloatFloat_ReturnValue2;                    // 0x467C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		ENetModeBP                                                 CallFunc_SwitchNetworkMode_OutNetworkMode4;              // 0x4680(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FUZ2[0x3];                                   // 0x4681(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_GetActorForwardVector_ReturnValue3;             // 0x4684(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchEnum4_CmpSuccess;                           // 0x4690(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_B6FX[0x3];                                   // 0x4691(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_Multiply_VectorFloat_ReturnValue4;              // 0x4694(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_GetUpVector_ReturnValue2;                       // 0x46A0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Add_VectorVector_ReturnValue4;                  // 0x46AC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Multiply_VectorFloat_ReturnValue5;              // 0x46B8(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Normal_ReturnValue5;                            // 0x46C4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsLocallyControlledByPlayer_ReturnValue3;       // 0x46D0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsLocallyControlledByPlayer_ReturnValue4;       // 0x46D1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2L9Z[0x6];                                   // 0x46D2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APlayerController*                                   CallFunc_GetPlayerController_ReturnValue;                // 0x46D8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APlayerController*                                   CallFunc_GetPlayerController_ReturnValue2;               // 0x46E0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue4;                       // 0x46E8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             K2Node_CustomEvent_velocity;                             // 0x46F0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsTimeSince_Network_ReturnValue3;               // 0x46FC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XZ25[0x3];                                   // 0x46FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_PlayAnimEx_ReturnValue;                         // 0x4700(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		ENetModeBP                                                 CallFunc_SwitchNetworkMode_OutNetworkMode5;              // 0x4704(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchEnum5_CmpSuccess;                           // 0x4705(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7TBZ[0x2];                                   // 0x4706(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue;                         // 0x4708(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		ENetModeBP                                                 CallFunc_SwitchNetworkMode_OutNetworkMode6;              // 0x470C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchEnum6_CmpSuccess;                           // 0x470D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_IntInt_ReturnValue;                  // 0x470E(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Y1ZR[0x1];                                   // 0x470F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CallFunc_GetNetworkTimeInSeconds_ReturnValue3;           // 0x4710(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             K2Node_CustomEvent_Location;                             // 0x4718(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_DoubleDouble_ReturnValue2;           // 0x4724(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9B3B[0x3];                                   // 0x4725(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Conv_IntToFloat_ReturnValue;                    // 0x4728(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		ENetModeBP                                                 CallFunc_SwitchNetworkMode_OutNetworkMode7;              // 0x472C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchEnum7_CmpSuccess;                           // 0x472D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ABYL[0x2];                                   // 0x472E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_PlayAnimEx_ReturnValue2;                        // 0x4730(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_IsAnticipIdle;                        // 0x4734(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_HoldingCrouch2;                       // 0x4735(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A2OU[0x2];                                   // 0x4736(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             K2Node_CustomEvent_CameraLocation;                       // 0x4738(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             K2Node_CustomEvent_CameraDirection;                      // 0x4744(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_bReset;                               // 0x4750(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x4751(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_BoolBool_ReturnValue8;               // 0x4752(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NotEqual_BoolBool_ReturnValue;                  // 0x4753(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		ENetModeBP                                                 CallFunc_SwitchNetworkMode_OutNetworkMode8;              // 0x4754(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchEnum8_CmpSuccess;                           // 0x4755(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_60MJ[0x2];                                   // 0x4756(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Temp_int_Loop_Counter_Variable;                          // 0x4758(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_IntInt_ReturnValue;                        // 0x475C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KZHZ[0x3];                                   // 0x475D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              CallFunc_Array_Get_Item2;                                // 0x4760(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APrimalCharacter*                                    K2Node_DynamicCast_AsPrimalCharacter;                    // 0x4768(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast_CastSuccess;                          // 0x4770(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HLJ5[0x3];                                   // 0x4771(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue2;                        // 0x4774(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue2;                       // 0x4778(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OPCP[0x7];                                   // 0x4779(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalBuff*                                         CallFunc_StaticAddBuff_ReturnValue;                      // 0x4780(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_CanAttack_ReturnValue;                          // 0x4788(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ByteByte_ReturnValue2;               // 0x4789(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XZKZ[0x2];                                   // 0x478A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_GetFloatValue_ReturnValue;                      // 0x478C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_X3;                                 // 0x4790(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_Y3;                                 // 0x4794(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_Z3;                                 // 0x4798(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Multiply_VectorFloat_ReturnValue6;              // 0x479C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_MakeVector_ReturnValue3;                        // 0x47A8(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Add_VectorVector_ReturnValue5;                  // 0x47B4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		ENetModeBP                                                 CallFunc_SwitchNetworkMode_OutNetworkMode9;              // 0x47C0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VKHI[0x3];                                   // 0x47C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_Normal_ReturnValue6;                            // 0x47C4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchEnum9_CmpSuccess;                           // 0x47D0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D2CX[0x3];                                   // 0x47D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_Dot_VectorVector_ReturnValue2;                  // 0x47D4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_VSize_ReturnValue4;                             // 0x47D8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_L95U[0x4];                                   // 0x47DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                CallFunc_Conv_FloatToText_ReturnValue2;                  // 0x47E0(0x0018) ELEMENT_SIZE_MISMATCH Transient, DuplicateTransient
		unsigned char                                              UnknownData_81UH[0x10];                                  // 0x47F8(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FVector                                             CallFunc_Multiply_VectorFloat_ReturnValue7;              // 0x4808(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3OPT[0x4];                                   // 0x4814(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFormatTextArgument                                 K2Node_MakeStruct_FormatTextArgument2;                   // 0x4818(0x0050) Transient, DuplicateTransient
		bool                                                       CallFunc_Greater_FloatFloat_ReturnValue5;                // 0x4868(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_SRXS[0x3];                                   // 0x4869(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_ProjectVectorOnToPlane_ReturnValue3;            // 0x486C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class FText                                                CallFunc_Conv_BoolToText_ReturnValue;                    // 0x4878(0x0018) ELEMENT_SIZE_MISMATCH Transient, DuplicateTransient
		unsigned char                                              UnknownData_O4QZ[0x10];                                  // 0x4890(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FVector                                             CallFunc_RotateAngleAxis_ReturnValue;                    // 0x48A0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_I2BF[0x4];                                   // 0x48AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFormatTextArgument                                 K2Node_MakeStruct_FormatTextArgument3;                   // 0x48B0(0x0050) Transient, DuplicateTransient
		struct FVector                                             CallFunc_Normal_ReturnValue7;                            // 0x4900(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XMRH[0x4];                                   // 0x490C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FFormatTextArgument>                         K2Node_MakeArray_Array;                                  // 0x4910(0x0010) ZeroConstructor, Transient, DuplicateTransient
		struct FVector                                             CallFunc_Multiply_VectorFloat_ReturnValue8;              // 0x4920(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6JYV[0x4];                                   // 0x492C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                CallFunc_Format_ReturnValue;                             // 0x4930(0x0018) ELEMENT_SIZE_MISMATCH Transient, DuplicateTransient
		unsigned char                                              UnknownData_IKUE[0x10];                                  // 0x4948(0x0010) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		struct FVector                                             CallFunc_Add_VectorVector_ReturnValue6;                  // 0x4958(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RIM2[0x4];                                   // 0x4964(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CallFunc_Conv_TextToString_ReturnValue;                  // 0x4968(0x0010) ZeroConstructor, Transient, DuplicateTransient
		struct FVector                                             CallFunc_RotateAngleAxis_ReturnValue2;                   // 0x4978(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4T5V[0x4];                                   // 0x4984(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     K2Node_CustomEvent_Time;                                 // 0x4988(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             K2Node_CustomEvent_Velocity2;                            // 0x4990(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             K2Node_CustomEvent_CameraDirection2;                     // 0x499C(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Normal_ReturnValue8;                            // 0x49A8(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Multiply_VectorFloat_ReturnValue9;              // 0x49B4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Add_VectorVector_ReturnValue7;                  // 0x49C0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_SelectVector_ReturnValue;                       // 0x49CC(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_SelectVector_ReturnValue2;                      // 0x49D8(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Add_VectorVector_ReturnValue8;                  // 0x49E4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_DoubleDouble_ReturnValue3;           // 0x49F0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_N7ON[0x3];                                   // 0x49F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_BreakVector_X4;                                 // 0x49F4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_Y4;                                 // 0x49F8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_Z4;                                 // 0x49FC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FMin_ReturnValue;                               // 0x4A00(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_MakeVector_ReturnValue4;                        // 0x4A04(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Normal_ReturnValue9;                            // 0x4A10(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_VSize_ReturnValue5;                             // 0x4A1C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FClamp_ReturnValue;                             // 0x4A20(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FMin_ReturnValue2;                              // 0x4A24(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Multiply_VectorFloat_ReturnValue10;             // 0x4A28(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_X5;                                 // 0x4A34(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_Y5;                                 // 0x4A38(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_BreakVector_Z5;                                 // 0x4A3C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_MakeVector_ReturnValue5;                        // 0x4A40(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_91NT[0x4];                                   // 0x4A4C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalCharacter*                                    K2Node_CustomEvent_Target2;                              // 0x4A50(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ObjectObject_ReturnValue;            // 0x4A58(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_R119[0x7];                                   // 0x4A59(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CallFunc_GetNetworkTimeInSeconds_ReturnValue4;           // 0x4A60(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_DoubleDouble_ReturnValue4;           // 0x4A68(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Has_Latchable_SurfaceWhileFalling_RetSucccess;  // 0x4A69(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MAYQ[0x6];                                   // 0x4A6A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FUberpounceData                                     CallFunc_Has_Latchable_SurfaceWhileFalling_RetResultUberpounceData; // 0x4A70(0x0030) Transient, DuplicateTransient
		float                                                      CallFunc_PlayAnimEx_ReturnValue3;                        // 0x4AA0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		EMovementMode                                              CallFunc_GetPrimalCharMovementMode_ReturnValue;          // 0x4AA4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchEnum10_CmpSuccess;                          // 0x4AA5(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchEnum11_CmpSuccess;                          // 0x4AA6(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5S2D[0x1];                                   // 0x4AA7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_PlayAnimEx_ReturnValue4;                        // 0x4AA8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		ENetModeBP                                                 CallFunc_SwitchNetworkMode_OutNetworkMode10;             // 0x4AAC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D63S[0x3];                                   // 0x4AAD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            CallFunc_GetControlRotation_ReturnValue;                 // 0x4AB0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchEnum12_CmpSuccess;                          // 0x4ABC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XPNL[0x3];                                   // 0x4ABD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_Conv_RotatorToVector_ReturnValue;               // 0x4AC0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_FClamp_ReturnValue2;                            // 0x4ACC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_ComputeJumpVector_Ret;                          // 0x4AD0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Multiply_FloatFloat_ReturnValue5;               // 0x4ADC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_Multiply_VectorFloat_ReturnValue11;             // 0x4AE0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsHostileTo_ReturnValue;                        // 0x4AEC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue4;                        // 0x4AED(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		ELatchedJumpType                                           K2Node_CustomEvent_Type;                                 // 0x4AEE(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue5;                        // 0x4AEF(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ByteByte_ReturnValue3;               // 0x4AF0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue3;                           // 0x4AF1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue3;                       // 0x4AF2(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DYTS[0x1];                                   // 0x4AF3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_GetActorForwardVector_ReturnValue4;             // 0x4AF4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		struct FVector                                             CallFunc_K2_GetActorLocation_ReturnValue2;               // 0x4B00(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RD59[0x4];                                   // 0x4B0C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHitResult                                          CallFunc_MakeHitResult_ReturnValue;                      // 0x4B10(0x0088) Transient, DuplicateTransient
		bool                                                       CallFunc_IsServer_ReturnValue2;                          // 0x4B98(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XK46[0x3];                                   // 0x4B99(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    K2Node_CustomEvent_NewAmmoType;                          // 0x4B9C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue4;                       // 0x4BA0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_IntInt_ReturnValue2;                 // 0x4BA1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_HasRequiredAmmoItems_bFoundAllItems;            // 0x4BA2(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QXPN[0x1];                                   // 0x4BA3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_HasRequiredAmmoItems_OutQuantity;               // 0x4BA4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_CustomEvent_HoldingCrouch;                        // 0x4BA8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_509T[0x7];                                   // 0x4BA9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              K2Node_CustomEvent_target;                               // 0x4BB0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_CanAttack_ReturnValue2;                         // 0x4BB8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_NotEqual_BoolBool_ReturnValue2;                 // 0x4BB9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue4;                           // 0x4BBA(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_IntInt_ReturnValue3;                 // 0x4BBB(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_IntInt_ReturnValue4;                 // 0x4BBC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanOR_ReturnValue;                          // 0x4BBD(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_51A1[0x2];                                   // 0x4BBE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CallFunc_GetSocketLocation_ReturnValue3;                 // 0x4BC0(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_CustomEvent_HoldTime;                             // 0x4BCC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UParticleSystemComponent*                            CallFunc_SpawnEmitterAtLocation_ReturnValue2;            // 0x4BD0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_FloatFloat_ReturnValue;              // 0x4BD8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3R3C[0x7];                                   // 0x4BD9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue5;                       // 0x4BE0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsTimeSince_Network_ReturnValue4;               // 0x4BE8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_CanAttack_ReturnValue3;                         // 0x4BE9(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_H0UQ[0x6];                                   // 0x4BEA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        K2Node_Select_ReturnValue;                               // 0x4BF0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_Select_CmpSuccess;                                // 0x4BF8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_S4SX[0x7];                                   // 0x4BF9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalCharacter*                                    K2Node_DynamicCast_AsPrimalCharacter2;                   // 0x4C00(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast2_CastSuccess;                         // 0x4C08(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ED9Z[0x3];                                   // 0x4C09(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CallFunc_GetSimpleMontageDuration_ReturnValue;           // 0x4C0C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_PlayAnimEx_ReturnValue5;                        // 0x4C10(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_PlayAnimEx_ReturnValue6;                        // 0x4C14(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APrimalBuff*                                         CallFunc_StaticAddBuff_ReturnValue2;                     // 0x4C18(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    K2Node_CustomEvent_NrOfHits;                             // 0x4C20(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MULP[0x4];                                   // 0x4C24(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalCharacter*                                    K2Node_CustomEvent_Char;                                 // 0x4C28(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class FName                                                K2Node_CustomEvent_Bone;                                 // 0x4C30(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_NameName_ReturnValue;                // 0x4C38(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Z1HK[0x3];                                   // 0x4C39(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                K2Node_Select_ReturnValue2;                              // 0x4C3C(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_Select2_CmpSuccess;                               // 0x4C44(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_LessEqual_IntInt_ReturnValue;                   // 0x4C45(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_LessEqual_IntInt_ReturnValue2;                  // 0x4C46(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JGNS[0x1];                                   // 0x4C47(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     K2Node_Select_ReturnValue3;                              // 0x4C48(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_Select3_CmpSuccess;                               // 0x4C50(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GRD4[0x7];                                   // 0x4C51(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     K2Node_Select_ReturnValue4;                              // 0x4C58(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_Select4_CmpSuccess;                               // 0x4C60(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J5BZ[0x7];                                   // 0x4C61(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystemComponent*                            CallFunc_SpawnEmitterAttached_ReturnValue;               // 0x4C68(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UObject*                                             CallFunc_GetClassDefaultObject_ReturnValue;              // 0x4C70(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class APrimalCharacter*                                    K2Node_DynamicCast_AsPrimalCharacter3;                   // 0x4C78(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast3_CastSuccess;                         // 0x4C80(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ByteByte_ReturnValue4;               // 0x4C81(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_HasBuff_ReturnValue;                            // 0x4C82(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue5;                       // 0x4C83(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue6;                        // 0x4C84(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ByteByte_ReturnValue5;               // 0x4C85(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4UDQ[0x2];                                   // 0x4C86(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APlayerController*                                   CallFunc_GetOwnerController_ReturnValue;                 // 0x4C88(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class AShooterPlayerController*                            K2Node_DynamicCast_AsShooterPlayerController;            // 0x4C90(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_DynamicCast4_CastSuccess;                         // 0x4C98(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_F01I[0x7];                                   // 0x4C99(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CallFunc_GetGameTimeInSeconds_ReturnValue;               // 0x4CA0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class UWorld*                                              CallFunc_K2_GetWorld_ReturnValue6;                       // 0x4CA8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_TimeSince_ReturnValue;                          // 0x4CB0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_Subtract_FloatFloat_ReturnValue;                // 0x4CB4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_GreaterEqual_FloatFloat_ReturnValue;            // 0x4CB8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DB9Z[0x7];                                   // 0x4CB9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CallFunc_GetGameTimeInSeconds_ReturnValue2;              // 0x4CC0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      CallFunc_PlayAnimEx_ReturnValue7;                        // 0x4CC8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_DoubleDouble_ReturnValue5;           // 0x4CCC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LWSS[0x3];                                   // 0x4CCD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CallFunc_Conv_FloatToString_ReturnValue;                 // 0x4CD0(0x0010) ZeroConstructor, Transient, DuplicateTransient
		EMovementMode                                              CallFunc_GetPrimalCharMovementMode_ReturnValue2;         // 0x4CE0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_SwitchEnum13_CmpSuccess;                          // 0x4CE1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_EqualEqual_ByteByte_ReturnValue6;               // 0x4CE2(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HB66[0x5];                                   // 0x4CE3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      CallFunc_SphereTraceMultiForObjects_ActorsToIgnore_RefProperty; // 0x4CE8(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm
		TArray<class AActor*>                                      CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty; // 0x4CF8(0x0010) OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm

	public:
		bool BPCanBeBaseForCharacter(class APawn* Pawn);
		void IsUsingZipline(bool* Ret);
		float BPGetArmorDurabilityDecreaseMultiplier();
		void EndUberpounce(const struct FVector& Velocity, class UAnimMontage* MontageToPlayOnNonZeroVelocity);
		void UpdateAnimSpeed();
		void UberpounceDesyncDetected();
		struct FVector BPGetRiderUnboardLocation(class APrimalCharacter* RidingCharacter);
		void UpdateServerCorrections();
		bool CanUpdateRotation();
		struct FVector GetUberpounceTraceStartingLocation();
		void IsValidUberpounceTargetingData(const struct FUberpounceData& TargetingData, bool* Ret);
		void BPTriggerStasisEvent();
		void MultiRequestJumpFn(const struct FVector& Velocity);
		void BP_OverrideCameraTargetOriginLocation(struct FVector* OutOverrideOrigin, const class FName& WithCameraStyle);
		void CanContinueUberpounce(bool* Ret);
		bool BP_OverrideCarriedCharacterTransform(class APrimalCharacter* ForCarriedChar);
		bool AllowWakingTame(class APlayerController* ForPC);
		void GetDelayBeforeLatchAfterLatchedJump(float* LatchedJumpTimeToAutoLatch);
		bool HasAnyStamina();
		void BPOverrideCameraViewTarget(const class FName& CurrentCameraMode, const struct FVector& DesiredCameraLocation, const struct FRotator& DesiredCameraRotation, float DesiredFOV, bool* bOverrideCameraLocation, struct FVector* CameraLocation, bool* bOverrideCameraRotation, struct FRotator* CameraRotation, bool* bOverrideCameraFOV, float* CameraFOV);
		void CanAdultCarryBaby(class ADinopithecus_Character_BP_C* Dino, bool* Allowed);
		void UpdateTaming();
		void PackMemberDied(class ADino_Character_BP_Pack_C* DeadDino);
		void UpdateTickThrottles();
		void UpdateBabyRiding();
		void BabyStopRiding();
		void BabyStartRiding();
		void FindAdultToRide();
		bool CanBabyRide();
		class FName BPGetDragSocketDinoName(class APrimalDinoCharacter* aGrabbedDino);
		void BPDidClearCarriedCharacter(class APrimalCharacter* PreviousCarriedCharacter);
		void BabyTryMount();
		void OverrideRandomWanderLocation(struct FVector* originalDestination, struct FVector* inVec);
		void UpdateCamera();
		void UpdateClientInterpSpeeds();
		int32_t BPAdjustAttackIndex(int32_t AttackIndex);
		bool BPHandleRightShoulderButton();
		void PlaySplashVFXAWaterSurfaceFromLocation(const struct FVector& Location);
		void GetPingMult(float* Ret);
		void UpdateAOEGroundPound();
		void AOEGroundPound();
		void PickupPoop();
		ECameraStyle BPForceCameraStyle(class APrimalCharacter* ForViewTarget);
		bool BPOverrideMoveToOrder(const struct FVector& MoveToLocation, class AShooterCharacter* OrderingPlayer);
		void IsCheckingForFallingLatch(bool* Ret);
		float GetTargetFOV();
		void UpdateHUDWidget();
		void ReceiveDestroyed();
		void BPNotifyToggleHUD(bool bHudHidden);
		void SetupHUDWidget(class AActor* Rider);
		void DestroyHudWidget(bool DestroyNow);
		bool BPHandlePoop();
		bool BPShouldCancelDoAttack(int32_t AttackIndex);
		struct FRotator BPLimitPlayerRotation(class APrimalCharacter* viewingCharacter, const struct FRotator& InViewRotation);
		void UpdateVFX();
		void ApplyJump(const struct FVector& Velocity, class UAnimMontage* Anim);
		float BPGetGravityZScale();
		void TickBattlecryAttack();
		void DoBattlecryAttack();
		struct FLinearColor BPGetCrosshairColor();
		void BPDoAttack(int32_t AttackIndex);
		void DoBattlecry();
		void TickSetRotation(float DeltaTime);
		void HasLatchableSurfaceWhileFalling(bool* RetSucccess, struct FUberpounceData* RetResultUberpounceData);
		void CheckForFallingLatchFn(bool AutoJumpAfterLatch);
		bool IsAllowedToThrowPoop();
		void OnAmmoWheelSlotSelected();
		void SetAmmoWheelVisibility(bool bNewVisible, bool bFromGamepad);
		void BPOnDinoFiredProjectile(class AShooterProjectile* Projectile);
		void BPSetInitialAimOffsetTargets(const struct FVector& TargetRootLoc, const struct FRotator& TargetAimRot, struct FVector* OutTargetRootLoc, struct FRotator* OutTargetAimRot);
		void GetFallingLatchingAngles(TArray<float>* FallingLatchingAngles);
		void IsValidUberpounceDataForLatching(const struct FUberpounceData& Data, bool* Ret);
		bool IsValidDirectionForLatchingSurfaceTrace(const struct FVector& Direction);
		void OnMoveLeftPressed();
		void OnMoveLeftReleased();
		void OnMoveRightPressed();
		void OnMoveRightReleased();
		void OnMoveBackwardPressed();
		void OnMoveForwardPressed();
		void OnMoveBackwardReleased();
		void OnMoveForwardReleased();
		void InterceptInputEvent(const class FString& InputName);
		void FindNextValidUberpounceLocation();
		void BlueprintAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject);
		bool BPOnStartJump();
		void BPTimerServer();
		void BPTimerNonDedicated();
		void HasRequiredAmmoItems(int32_t TypeIndex, bool* bFoundAllItems, int32_t* OutQuantity);
		bool BlueprintCanRiderAttack(int32_t AttackIndex);
		void GetBestPoopItem(class UPrimalItem** BestPoop);
		void GetAmmoItemsToConsume(int32_t TypeIndex, TArray<class UPrimalItem*>* Items, bool* bFoundAllItems);
		void GetMeshForProjectileType(int32_t SelectedIndex, class UStaticMesh** Mesh);
		void WantsToRun(bool* Result);
		void OnNonInstanceJumpOffWallInput(float HoldTime);
		void GetLatchJumpSpeedThresholdForRotate(float* res);
		bool BPHandleControllerInitiatedAttack(int32_t AttackIndex);
		void AdjustIKHalfLegLength(bool Default);
		bool BPCanCryo(class AShooterPlayerController* ForPC);
		void CanSequentialJump(bool* Ret);
		void ThrottledTickFn();
		bool BPAcknowledgeServerCorrection(float TimeStamp, const struct FVector& NewLoc, const struct FVector& NewVel, class UPrimitiveComponent* NewBase, const class FName& NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode);
		bool ReplicateMovementToSimulatedClients();
		void UpdateBerzerk();
		void GetCameraInterpSpeed(float* InterpSpeed);
		void OnJumpFromGround(float HoldTime);
		void GetProjectileTypeForRockThrow(class UClass** TypeName);
		void GetRockThrowAttackAnimIndexfromIdleAnim(int32_t* Ret);
		void GrabRock();
		bool CanJumpInternal();
		void ThrowRock();
		void IsSuperUberpounce(bool* Ret);
		void GetUberpounceInterpSpeed(float* Speed);
		void GetInitialAnimationForUberpounce(bool QuickUberpounce, class UAnimMontage** OutAnim, class FName* RetStartSectionName);
		void UpdateIdleAnim(EShapeshifterIdleAnimEnum newIdle);
		void GetUberpounceRangeBase(float* Ret);
		void GetUberpounceMaxRange(float* Ret);
		float BPGetCrosshairAlpha();
		void GetDamageResistancePercentFromAddiction(float* Result);
		void GetAnimSpeedBonusfromAddiction(float* Result);
		void GetDamageMultiFromAddiction(float* Result);
		void OnUberpounceStateChanged(EUberpounceState NewState, EUberpounceState PrevState);
		bool BPDinoTooltipCustomTorpidityProgressBar(bool* overrideTorpidityProgressBarIfActive, float* progressPercent, class FString* Label);
		TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
		void AddBerzerkDamage(float Dmg);
		void OnRep_LatchIdleAnimRep();
		class FString BPOverrideTamingDescriptionLabel(struct FSlateColor* TextColor);
		bool AllowPlayMontage(class UAnimMontage* AnimMontage);
		void PrintHealth(class UPrimalCharacterStatusComponent* Status);
		void StartUberPounce(const struct FUberpounceData& Data);
		void K2_OnMovementModeChanged(EMovementMode PrevMovementMode, EMovementMode NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode);
		void OnRep_LastUberpounceJumpTime();
		void LatchedJumpAttached();
		void OnUberpounceAttachedToLocation();
		bool BPDisplayTamedMessage();
		void PrintStats(class UPrimalCharacterStatusComponent* StatusComp);
		void GetPounceLatchedAnim(class UAnimMontage** Anim, class FName* StartSectionName);
		void ResetMeshRelativeLocation();
		void RidingTick(float DeltaSeconds);
		void BPOnAnimPlayedNotify(class UAnimMontage* AnimMontage, float InPlayRate, const class FName& StartSectionName, bool bReplicate, bool bReplicateToOwner, bool bForceTickPoseAndServerUpdateMesh, bool bForceTickPoseOnServer);
		bool BPDinoTooltipCustomTamingProgressBar(bool* overrideTamingProgressBarIfActive, float* progressPercent, class FString* Label);
		bool BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget);
		void CalculateDamageTakenRequiredForBerzerk(float* Ret);
		float BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo);
		void CalculateTotalTimeTransformed(float* Result);
		void SetSmallsInstance(class APrimalDinoCharacter* Instance);
		void SpawnSmalls();
		bool BP_InterceptMoveRight(float AxisValue);
		void OnPinnedBuffEnded(class APrimalCharacter* BuffTarget);
		bool BP_InterceptMoveForward(float AxisValue);
		void GetUberpounceRotationFromSocket(class APrimalCharacter* Target, const class FName& Socket, struct FRotator* Rotation);
		void QueueSequentialJump();
		bool BP_PreventMovementMode(EMovementMode NewMovementMode, unsigned char NewCustomMode);
		int32_t BPOverrideGetAttackAnimationIndex(int32_t AttackIndex, TArray<class UAnimMontage*>* AnimationArray);
		void BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements);
		void StartBerzerk();
		void IsBerzerk(bool* Ret);
		void BP_OnJumpReleased();
		void BPUnstasis();
		void GetDebugString(class FString* Output);
		void UpdateUberpounceFn();
		void GetInitialAnimationForUberpouncePublic(class UAnimMontage** AnimMontage);
		void OnPounceStarted();
		void UpdatePounceFn();
		void ComputePounceTransform(const struct FVector& CurrentLoc, const struct FRotator& CurrentRot, struct FVector* NewLocation, struct FRotator* NewRotation, bool* UpdatedTransform);
		bool BPPreventOrderAllowed(class APrimalCharacter* FromCharacter, EDinoTamedOrder OrderType, bool bForce, class AActor* enemyTarget, bool orderNotExecuted);
		void GetPounceTarget(struct FVector* Loc, struct FRotator* Rot);
		bool BPServerHandleNetExecCommand(class APlayerController* FromPC, const class FName& CommandName, struct FBPNetExecParams* ExecParams);
		void PounceAttachToCharacter();
		void OnRep_PounceStateReplicated();
		void SetPounceState(EShapeshifter_Large_PounceState NewState);
		void EndPounce();
		void StartPounce();
		void SetPounceTarget(class APrimalCharacter* Target);
		void BPNotifyClearRider(class AShooterCharacter* RiderClearing);
		void BPNotifySetRider(class AShooterCharacter* RiderSetting);
		void OnLanded(struct FHitResult* Hit);
		void DrawDebugRotator(const struct FVector& Position, const struct FRotator& Rotation, float Duration, float Thickness, float Scale);
		void ReceiveTick(float DeltaSeconds);
		void ReceivePossessed(class AController* NewController);
		void ReceiveBeginPlay();
		void UserConstructionScript();
		void InpActEvt_Crouch_K2Node_InputActionEvent_256();
		void MultiOnLanded(const struct FVector& Location);
		void ServerSetPounceTarget(class APrimalCharacter* Target);
		void ServerEndPounce();
		void MultiEndPounce();
		void UpdatePounce();
		void ServerStartJump();
		void AnimNotify_DoJump();
		void QueueSequentialJumpEvent();
		void ServerSetLastTimeReleaseJumpWhileFalling(double Time, const struct FVector& Velocity, const struct FVector& CameraDirection);
		void AnimNotify_SequentialJumpTakeOff();
		void ServerForwardInputDuringSequentialJump(float Axis);
		void MultiUpdateVelocity(const struct FVector& NewVelocity);
		void AnimNotify_AOEGroundPound();
		void AnimNotify_SwipeAttack();
		void AnimNotify_ChargingMeleeStart();
		void AnimNotify_ChargingMeleeEnd();
		void ChargingMeleeTick();
		void AnimNotify_CameraShake();
		void ServerLeftRightInputDuringSequentialJump(float AxisValue);
		void AnimNotify_CameraShakeLight();
		void DeleteSmallsEvent();
		void StartBerzerkEvent();
		void AnimNotify_ResetAnimSpeed();
		void AnimNotify_ThrowRider();
		void AnimNotify_StartRoar();
		void AnimNotify_StopRoar();
		void AnimNotify_ClearRider();
		void AnimNotify_CheckForFallingLatch();
		void ServerRequestUberpounceJump(const struct FVector& Velocity);
		void AnimNotify_DoUberpounceJump();
		void BackupDestroy();
		void AnimNotify_LatchedJumpAttached();
		void AnimNotify_QueuedRoar();
		void ServerSetPounceAnticipationIdle(bool IsAnticipIdle);
		void ServerSetIsHoldingProne(bool HoldingCrouch, const struct FVector& CameraLocation, const struct FVector& CameraDirection, bool bReset);
		void AnimNotify_GrabRock();
		void AnimNotify_ThrowRock();
		void ServerRequestSequentialJump();
		void AnimNotify_AOEJumpStart();
		void AnimNotify_AOEJumpEnd();
		void AnimNotify_EnableIK();
		void AnimNotify_DisableIK();
		void AnimNotify_ShouldCancelLatch();
		void ServerRequestJumpOffWallWithAnticipation();
		void AnimNotify_PushOffWall();
		void ServerSetLatchJumpType(ELatchedJumpType Type);
		void MultiExplodeProjectile();
		void ServerSetAmmoType(int32_t NewAmmoType);
		void ServerSetIsHoldingCrouch(bool HoldingCrouch, class AActor* Target);
		void ServerSetLastJumpHoldTime(float HoldTime);
		void Multicast_BattlecryHitFX(int32_t NrOfHits, class APrimalCharacter* Char, const class FName& Bone);
		void ClearHUDReference();
		void Server_HideWeapon();
		void Server_ShowWeapon();
		void RunOnServer_UpdateInventory();
		void Multi_ResetProjectileMesh();
		void ClientStartBabyRiding();
		void Multi_GrabRock();
		void ClearUberpounceOnClearRider();
		void ExecuteUbergraph_Dinopithecus_Character_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
