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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.ModifyInflationValue
	 */
	struct AGasBags_Character_BP_C_ModifyInflationValue_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       DeltaIsPercent;                                          // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Subtract;                                                // 0x0005(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_V9EX[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      NewInflationPercent;                                     // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.GetInflationValue
	 */
	struct AGasBags_Character_BP_C_GetInflationValue_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Percent;                                                 // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.BPCharacterUnsleeped
	 */
	struct AGasBags_Character_BP_C_BPCharacterUnsleeped_Params
	{	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.BP_ForceAllowMountedWeapon
	 */
	struct AGasBags_Character_BP_C_BP_ForceAllowMountedWeapon_Params
	{
	public:
		class UClass*                                              WeaponTemplate;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.BPOnLethalDamage
	 */
	struct AGasBags_Character_BP_C_BPOnLethalDamage_Params
	{
	public:
		float                                                      KillingDamage;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8UK7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0008(0x0020)  (Parm, OutParm, ReferenceParm)
		class AController*                                         Killer;                                                  // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bPreventDeath;                                           // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.BPCharacterSleeped
	 */
	struct AGasBags_Character_BP_C_BPCharacterSleeped_Params
	{	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.GetCurrentFloatingForceDirection
	 */
	struct AGasBags_Character_BP_C_GetCurrentFloatingForceDirection_Params
	{
	public:
		struct FVector                                             Dir;                                                     // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.IsInhaleSocketUnderwater
	 */
	struct AGasBags_Character_BP_C_IsInhaleSocketUnderwater_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JA91[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.OnJumped
	 */
	struct AGasBags_Character_BP_C_OnJumped_Params
	{	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.BPOverrideGetAttackAnimationIndex
	 */
	struct AGasBags_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HQ1Q[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UAnimMontage*>                                AnimationArray;                                          // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		int32_t                                                    ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.GetDmgDirectionHelper
	 */
	struct AGasBags_Character_BP_C_GetDmgDirectionHelper_Params
	{
	public:
		class AActor*                                              DmgCauser;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsPointDmg;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_S03Q[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             DamageDir;                                               // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Dir;                                                     // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.BPNotifySetRider
	 */
	struct AGasBags_Character_BP_C_BPNotifySetRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderSetting;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.BPOverrideHurtAnim
	 */
	struct AGasBags_Character_BP_C_BPOverrideHurtAnim_Params
	{
	public:
		float                                                      DamageTaken;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_X420[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0008(0x0020)  (Parm, OutParm, ReferenceParm)
		class APawn*                                               PawnInstigator;                                          // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsLocalPath;                                            // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0039(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TY34[0x2];                                   // 0x003A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             PointDamageLocation;                                     // 0x003C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             PointDamageHitNormal;                                    // 0x0048(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Y0VL[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimMontage*                                        ReturnValue;                                             // 0x0058(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.AllowedToInflate
	 */
	struct AGasBags_Character_BP_C_AllowedToInflate_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.TrySubtractStamina
	 */
	struct AGasBags_Character_BP_C_TrySubtractStamina_Params
	{
	public:
		float                                                      amount;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       FailIfNotEnough;                                         // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Success;                                                 // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_69GM[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      RemainingStamina;                                        // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.GetCurrentExhaleStaminaCost
	 */
	struct AGasBags_Character_BP_C_GetCurrentExhaleStaminaCost_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.RawDamageToInflationDamage
	 */
	struct AGasBags_Character_BP_C_RawDamageToInflationDamage_Params
	{
	public:
		float                                                      RawDamageAmount;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsFallDamage;                                            // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RWPP[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      HealthDamage;                                            // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      InflationDamage;                                         // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.GetFloatingVFX
	 */
	struct AGasBags_Character_BP_C_GetFloatingVFX_Params
	{
	public:
		class FName                                                SocketName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UParticleSystemComponent*                            Comp;                                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.NonDediTickFloatingVFX
	 */
	struct AGasBags_Character_BP_C_NonDediTickFloatingVFX_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.OnRep_IsFloating
	 */
	struct AGasBags_Character_BP_C_OnRep_IsFloating_Params
	{	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.ServerTickRandomImpulses
	 */
	struct AGasBags_Character_BP_C_ServerTickRandomImpulses_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F6MS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Impulse;                                                 // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.BPGrabDebugSnapshot
	 */
	struct AGasBags_Character_BP_C_BPGrabDebugSnapshot_Params
	{
	public:
		TArray<struct FBlueprintVisualLogEntry>                    ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.BPOnDinoCheat
	 */
	struct AGasBags_Character_BP_C_BPOnDinoCheat_Params
	{
	public:
		class FName                                                CheatName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSetValue;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9UNY[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.BPCheckJumpInput
	 */
	struct AGasBags_Character_BP_C_BPCheckJumpInput_Params
	{
	public:
		bool                                                       bUseCustomErrorMessage;                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3WHO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ErrorMessageToDisplay;                                   // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.CanJumpInternal
	 */
	struct AGasBags_Character_BP_C_CanJumpInternal_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.ClampFloatingVelocity
	 */
	struct AGasBags_Character_BP_C_ClampFloatingVelocity_Params
	{
	public:
		struct FVector                                             DesiredVelocity;                                         // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ClampedVelocity;                                         // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.BPTimerServer
	 */
	struct AGasBags_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.GetEnvironmentData
	 */
	struct AGasBags_Character_BP_C_GetEnvironmentData_Params
	{
	public:
		float                                                      Temperature;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.BPPreventStasis
	 */
	struct AGasBags_Character_BP_C_BPPreventStasis_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.GetExhaleCooldown
	 */
	struct AGasBags_Character_BP_C_GetExhaleCooldown_Params
	{
	public:
		double                                                     Clock;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Duration;                                                // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.BPPreventFallDamage
	 */
	struct AGasBags_Character_BP_C_BPPreventFallDamage_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
		float                                                      FallDamageAmount;                                        // 0x0088(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x008C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3AOF[0x3];                                   // 0x008D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.BlueprintCanAttack
	 */
	struct AGasBags_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7EH2[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BJWF[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.GetMaxInflation
	 */
	struct AGasBags_Character_BP_C_GetMaxInflation_Params
	{
	public:
		bool                                                       GetBaseValue;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XIQB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      MaxInflationAmount;                                      // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.BPGetOverrideCameraInterpSpeed
	 */
	struct AGasBags_Character_BP_C_BPGetOverrideCameraInterpSpeed_Params
	{
	public:
		float                                                      DefaultTPVCameraSpeedInterpolationMultiplier;            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DefaultTPVOffsetInterpSpeed;                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      TPVCameraSpeedInterpolationMultiplier;                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      TPVOffsetInterpSpeed;                                    // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.GetFloatingForceDirection
	 */
	struct AGasBags_Character_BP_C_GetFloatingForceDirection_Params
	{
	public:
		struct FVector                                             Direction;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.ReceiveBeginPlay
	 */
	struct AGasBags_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.BPOnMovementModeChangedNotify
	 */
	struct AGasBags_Character_BP_C_BPOnMovementModeChangedNotify_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              PreviousCustomMode;                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.LaunchAbilityFinish
	 */
	struct AGasBags_Character_BP_C_LaunchAbilityFinish_Params
	{	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.DoLaunchAbility
	 */
	struct AGasBags_Character_BP_C_DoLaunchAbility_Params
	{
	public:
		struct FVector                                             Direction;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Success;                                                 // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OEM6[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.BPGetGravityZScale
	 */
	struct AGasBags_Character_BP_C_BPGetGravityZScale_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.ExhaleAttackFinish
	 */
	struct AGasBags_Character_BP_C_ExhaleAttackFinish_Params
	{	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.Get Current Aim Direction
	 */
	struct AGasBags_Character_BP_C_GetCurrentAimDirection_Params
	{
	public:
		float                                                      VerticalAngleOffset;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             AimDirection;                                            // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.DoExhaleAttack
	 */
	struct AGasBags_Character_BP_C_DoExhaleAttack_Params
	{
	public:
		struct FVector                                             Direction;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.BPHandleControllerInitiatedAttack
	 */
	struct AGasBags_Character_BP_C_BPHandleControllerInitiatedAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.BPHandleOnStopTargeting
	 */
	struct AGasBags_Character_BP_C_BPHandleOnStopTargeting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.StopInflating
	 */
	struct AGasBags_Character_BP_C_StopInflating_Params
	{	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.StartInflating
	 */
	struct AGasBags_Character_BP_C_StartInflating_Params
	{	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.OnRep_IsInflating
	 */
	struct AGasBags_Character_BP_C_OnRep_IsInflating_Params
	{	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.BlueprintCanRiderAttack
	 */
	struct AGasBags_Character_BP_C_BlueprintCanRiderAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.BPGetHUDElements
	 */
	struct AGasBags_Character_BP_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.BPAdjustDamage
	 */
	struct AGasBags_Character_BP_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BN38[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U9TL[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.Get Inflation
	 */
	struct AGasBags_Character_BP_C_GetInflation_Params
	{
	public:
		bool                                                       SmoothedValues;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TP59[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Percent;                                                 // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.ReceiveTick
	 */
	struct AGasBags_Character_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.UserConstructionScript
	 */
	struct AGasBags_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.ServerRequestStopInflating
	 */
	struct AGasBags_Character_BP_C_ServerRequestStopInflating_Params
	{	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.ServerRequestStartInflating
	 */
	struct AGasBags_Character_BP_C_ServerRequestStartInflating_Params
	{	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.ServerUpdateFloatDirection
	 */
	struct AGasBags_Character_BP_C_ServerUpdateFloatDirection_Params
	{
	public:
		struct FVector                                             Direction;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.MultiUpdateFloatingDirection
	 */
	struct AGasBags_Character_BP_C_MultiUpdateFloatingDirection_Params
	{
	public:
		struct FVector                                             Direction;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Duration;                                                // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.MultiUpdateVelocity
	 */
	struct AGasBags_Character_BP_C_MultiUpdateVelocity_Params
	{
	public:
		struct FVector                                             vel;                                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.ServerRequestAttachment
	 */
	struct AGasBags_Character_BP_C_ServerRequestAttachment_Params
	{	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.MultiUpdateAttachState
	 */
	struct AGasBags_Character_BP_C_MultiUpdateAttachState_Params
	{
	public:
		bool                                                       Attached;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CFGG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Location;                                                // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            Rotation;                                                // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.ServerRequestDetach
	 */
	struct AGasBags_Character_BP_C_ServerRequestDetach_Params
	{	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.ClientUpdateFloatingAirControlValue
	 */
	struct AGasBags_Character_BP_C_ClientUpdateFloatingAirControlValue_Params
	{
	public:
		float                                                      val;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.ClientUpdateInflationMultiplier
	 */
	struct AGasBags_Character_BP_C_ClientUpdateInflationMultiplier_Params
	{
	public:
		float                                                      val;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.MultiOnHardLanding
	 */
	struct AGasBags_Character_BP_C_MultiOnHardLanding_Params
	{
	public:
		float                                                      LandingForcePercent;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.ClientShowErrorMessage
	 */
	struct AGasBags_Character_BP_C_ClientShowErrorMessage_Params
	{
	public:
		unsigned char                                              MessageType;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BRVX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      DisplayTime;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsSingleton;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.MultiNotifyRandomImpulse
	 */
	struct AGasBags_Character_BP_C_MultiNotifyRandomImpulse_Params
	{
	public:
		struct FVector                                             RandomImpulse;                                           // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.MultiOnLaunched
	 */
	struct AGasBags_Character_BP_C_MultiOnLaunched_Params
	{	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.MultiExhaleImpulse
	 */
	struct AGasBags_Character_BP_C_MultiExhaleImpulse_Params
	{
	public:
		struct FVector                                             Velocity;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.MultiNotifyInflationDamage
	 */
	struct AGasBags_Character_BP_C_MultiNotifyInflationDamage_Params
	{
	public:
		float                                                      InflationDamage;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9D98[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsPointDamage;                                           // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_37OB[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             PointDamageNormal;                                       // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GasBags_Character_BP.GasBags_Character_BP_C.ExecuteUbergraph_GasBags_Character_BP
	 */
	struct AGasBags_Character_BP_C_ExecuteUbergraph_GasBags_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
