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
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.WantsToRun
	 */
	struct AShapeshifter_Large_Character_BP_C_WantsToRun_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnNonInstanceJumpOffWallInput
	 */
	struct AShapeshifter_Large_Character_BP_C_OnNonInstanceJumpOffWallInput_Params
	{
	public:
		float                                                      HoldTime;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetLatchJumpSpeedThresholdForRotate
	 */
	struct AShapeshifter_Large_Character_BP_C_GetLatchJumpSpeedThresholdForRotate_Params
	{
	public:
		float                                                      res;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPHandleControllerInitiatedAttack
	 */
	struct AShapeshifter_Large_Character_BP_C_BPHandleControllerInitiatedAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AdjustIKHalfLegLength
	 */
	struct AShapeshifter_Large_Character_BP_C_AdjustIKHalfLegLength_Params
	{
	public:
		bool                                                       Default;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FCBV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPCanCryo
	 */
	struct AShapeshifter_Large_Character_BP_C_BPCanCryo_Params
	{
	public:
		class AShooterPlayerController*                            ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPDinoPostBeginPlay
	 */
	struct AShapeshifter_Large_Character_BP_C_BPDinoPostBeginPlay_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.CanSequentialJump
	 */
	struct AShapeshifter_Large_Character_BP_C_CanSequentialJump_Params
	{
	public:
		bool                                                       Ret;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FTEQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Throttled TickFn
	 */
	struct AShapeshifter_Large_Character_BP_C_ThrottledTickFn_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPAcknowledgeServerCorrection
	 */
	struct AShapeshifter_Large_Character_BP_C_BPAcknowledgeServerCorrection_Params
	{
	public:
		float                                                      TimeStamp;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NewLoc;                                                  // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NewVel;                                                  // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QXQR[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimitiveComponent*                                 NewBase;                                                 // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                NewBaseBoneName;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bHasBase;                                                // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBaseRelativePosition;                                   // 0x0031(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              ServerMovementMode;                                      // 0x0032(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0033(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ReplicateMovementToSimulatedClients
	 */
	struct AShapeshifter_Large_Character_BP_C_ReplicateMovementToSimulatedClients_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.UpdateBerzerk
	 */
	struct AShapeshifter_Large_Character_BP_C_UpdateBerzerk_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetCameraInterpSpeed
	 */
	struct AShapeshifter_Large_Character_BP_C_GetCameraInterpSpeed_Params
	{
	public:
		float                                                      InterpSpeed;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.InitUnTransformEvents
	 */
	struct AShapeshifter_Large_Character_BP_C_InitUnTransformEvents_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnJumpFromGround
	 */
	struct AShapeshifter_Large_Character_BP_C_OnJumpFromGround_Params
	{
	public:
		float                                                      HoldTime;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BP_OnSetDeath
	 */
	struct AShapeshifter_Large_Character_BP_C_BP_OnSetDeath_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetProjectileTypeForRockThrow
	 */
	struct AShapeshifter_Large_Character_BP_C_GetProjectileTypeForRockThrow_Params
	{
	public:
		class FName                                                TypeName;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Get RockThrowAttack Anim Index from Idle Anim
	 */
	struct AShapeshifter_Large_Character_BP_C_GetRockThrowAttackAnimIndexfromIdleAnim_Params
	{
	public:
		int32_t                                                    Ret;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GrabRock
	 */
	struct AShapeshifter_Large_Character_BP_C_GrabRock_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.CanJumpInternal
	 */
	struct AShapeshifter_Large_Character_BP_C_CanJumpInternal_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SLTJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ThrowRock
	 */
	struct AShapeshifter_Large_Character_BP_C_ThrowRock_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Is Super Uberpounce
	 */
	struct AShapeshifter_Large_Character_BP_C_IsSuperUberpounce_Params
	{
	public:
		bool                                                       Ret;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetUberpounceInterpSpeed
	 */
	struct AShapeshifter_Large_Character_BP_C_GetUberpounceInterpSpeed_Params
	{
	public:
		float                                                      Speed;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetInitialAnimationForUberpounce
	 */
	struct AShapeshifter_Large_Character_BP_C_GetInitialAnimationForUberpounce_Params
	{
	public:
		bool                                                       QuickUberpounce;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GLEU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimMontage*                                        OutAnim;                                                 // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                RetStartSectionName;                                     // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.UpdateIdleAnim
	 */
	struct AShapeshifter_Large_Character_BP_C_UpdateIdleAnim_Params
	{
	public:
		EShapeshifterIdleAnimEnum                                  newIdle;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetUberpounceRangeBase
	 */
	struct AShapeshifter_Large_Character_BP_C_GetUberpounceRangeBase_Params
	{
	public:
		float                                                      Ret;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetUberpounceMaxRange
	 */
	struct AShapeshifter_Large_Character_BP_C_GetUberpounceMaxRange_Params
	{
	public:
		float                                                      Ret;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPGetCrosshairAlpha
	 */
	struct AShapeshifter_Large_Character_BP_C_BPGetCrosshairAlpha_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetDamageResistancePercentFromAddiction
	 */
	struct AShapeshifter_Large_Character_BP_C_GetDamageResistancePercentFromAddiction_Params
	{
	public:
		float                                                      Result;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Reset Untransform Time
	 */
	struct AShapeshifter_Large_Character_BP_C_ResetUntransformTime_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Get Transformation Lifetime Reduction PercentFrom Addiction
	 */
	struct AShapeshifter_Large_Character_BP_C_GetTransformationLifetimeReductionPercentFromAddiction_Params
	{
	public:
		float                                                      Result;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Get Transformation Lifetime Reduction from Addiction
	 */
	struct AShapeshifter_Large_Character_BP_C_GetTransformationLifetimeReductionfromAddiction_Params
	{
	public:
		float                                                      Result;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Get AnimSpeedBonus from Addiction
	 */
	struct AShapeshifter_Large_Character_BP_C_GetAnimSpeedBonusfromAddiction_Params
	{
	public:
		float                                                      Result;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetDamageMultiFromAddiction
	 */
	struct AShapeshifter_Large_Character_BP_C_GetDamageMultiFromAddiction_Params
	{
	public:
		float                                                      Result;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnUberpounceStateChanged
	 */
	struct AShapeshifter_Large_Character_BP_C_OnUberpounceStateChanged_Params
	{
	public:
		EUberpounceState                                           NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EUberpounceState                                           PrevState;                                               // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPDinoTooltipCustomTorpidityProgressBar
	 */
	struct AShapeshifter_Large_Character_BP_C_BPDinoTooltipCustomTorpidityProgressBar_Params
	{
	public:
		bool                                                       overrideTorpidityProgressBarIfActive;                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SIOJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      progressPercent;                                         // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              Label;                                                   // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MG75[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPGetMultiUseEntries
	 */
	struct AShapeshifter_Large_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AddBerzerkDamage
	 */
	struct AShapeshifter_Large_Character_BP_C_AddBerzerkDamage_Params
	{
	public:
		float                                                      Dmg;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnRep_LatchIdleAnimRep
	 */
	struct AShapeshifter_Large_Character_BP_C_OnRep_LatchIdleAnimRep_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPOverrideTamingDescriptionLabel
	 */
	struct AShapeshifter_Large_Character_BP_C_BPOverrideTamingDescriptionLabel_Params
	{
	public:
		struct FSlateColor                                         TextColor;                                               // 0x0000(0x0028)  (Parm, OutParm, ReferenceParm)
		class FString                                              ReturnValue;                                             // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AllowPlayMontage
	 */
	struct AShapeshifter_Large_Character_BP_C_AllowPlayMontage_Params
	{
	public:
		class UAnimMontage*                                        AnimMontage;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.PrintHealth
	 */
	struct AShapeshifter_Large_Character_BP_C_PrintHealth_Params
	{
	public:
		class UPrimalCharacterStatusComponent*                     Status;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnRep_FullyReplicatedOnInitialize
	 */
	struct AShapeshifter_Large_Character_BP_C_OnRep_FullyReplicatedOnInitialize_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.StartUberPounce
	 */
	struct AShapeshifter_Large_Character_BP_C_StartUberPounce_Params
	{
	public:
		struct FUberpounceData                                     Data;                                                    // 0x0000(0x0030)  (Parm)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.K2_OnMovementModeChanged
	 */
	struct AShapeshifter_Large_Character_BP_C_K2_OnMovementModeChanged_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EMovementMode                                              NewMovementMode;                                         // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              PrevCustomMode;                                          // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              NewCustomMode;                                           // 0x0003(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnRep_LastUberpounceJumpTime
	 */
	struct AShapeshifter_Large_Character_BP_C_OnRep_LastUberpounceJumpTime_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.LatchedJumpAttached
	 */
	struct AShapeshifter_Large_Character_BP_C_LatchedJumpAttached_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.On Uberpounce AttachedToLocation
	 */
	struct AShapeshifter_Large_Character_BP_C_OnUberpounceAttachedToLocation_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPDisplayTamedMessage
	 */
	struct AShapeshifter_Large_Character_BP_C_BPDisplayTamedMessage_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.PrintStats
	 */
	struct AShapeshifter_Large_Character_BP_C_PrintStats_Params
	{
	public:
		class UPrimalCharacterStatusComponent*                     StatusComp;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Get Pounce Latched Anim
	 */
	struct AShapeshifter_Large_Character_BP_C_GetPounceLatchedAnim_Params
	{
	public:
		class UAnimMontage*                                        Anim;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                StartSectionName;                                        // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ResetMeshRelativeLocation
	 */
	struct AShapeshifter_Large_Character_BP_C_ResetMeshRelativeLocation_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BlueprintAdjustOutputDamage
	 */
	struct AShapeshifter_Large_Character_BP_C_BlueprintAdjustOutputDamage_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      OriginalDamageAmount;                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              HitActor;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              OutDamageType;                                           // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      OutDamageImpulse;                                        // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.RidingTick
	 */
	struct AShapeshifter_Large_Character_BP_C_RidingTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPOnAnimPlayedNotify
	 */
	struct AShapeshifter_Large_Character_BP_C_BPOnAnimPlayedNotify_Params
	{
	public:
		class UAnimMontage*                                        AnimMontage;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      InPlayRate;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                StartSectionName;                                        // 0x000C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bReplicate;                                              // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bReplicateToOwner;                                       // 0x0015(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bForceTickPoseAndServerUpdateMesh;                       // 0x0016(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bForceTickPoseOnServer;                                  // 0x0017(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPDinoTooltipCustomTamingProgressBar
	 */
	struct AShapeshifter_Large_Character_BP_C_BPDinoTooltipCustomTamingProgressBar_Params
	{
	public:
		bool                                                       overrideTamingProgressBarIfActive;                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YONA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      progressPercent;                                         // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              Label;                                                   // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E3ID[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BlueprintCanAttack
	 */
	struct AShapeshifter_Large_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HHUD[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5V8Z[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.CalculateDamageTakenRequiredForBerzerk
	 */
	struct AShapeshifter_Large_Character_BP_C_CalculateDamageTakenRequiredForBerzerk_Params
	{
	public:
		float                                                      Ret;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPAdjustDamage
	 */
	struct AShapeshifter_Large_Character_BP_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2UNO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P0BY[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.CalculateTotalTimeTransformed
	 */
	struct AShapeshifter_Large_Character_BP_C_CalculateTotalTimeTransformed_Params
	{
	public:
		float                                                      Result;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.SetSmallsInstance
	 */
	struct AShapeshifter_Large_Character_BP_C_SetSmallsInstance_Params
	{
	public:
		class APrimalDinoCharacter*                                Instance;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.SpawnSmalls
	 */
	struct AShapeshifter_Large_Character_BP_C_SpawnSmalls_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BP_InterceptMoveRight
	 */
	struct AShapeshifter_Large_Character_BP_C_BP_InterceptMoveRight_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnPinnedBuffEnded
	 */
	struct AShapeshifter_Large_Character_BP_C_OnPinnedBuffEnded_Params
	{
	public:
		class APrimalCharacter*                                    BuffTarget;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BP_InterceptMoveForward
	 */
	struct AShapeshifter_Large_Character_BP_C_BP_InterceptMoveForward_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PRI1[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetUberpounceRotationFromSocket
	 */
	struct AShapeshifter_Large_Character_BP_C_GetUberpounceRotationFromSocket_Params
	{
	public:
		class APrimalCharacter*                                    Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                Socket;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            Rotation;                                                // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.QueueSequential Jump
	 */
	struct AShapeshifter_Large_Character_BP_C_QueueSequentialJump_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BP_PreventMovementMode
	 */
	struct AShapeshifter_Large_Character_BP_C_BP_PreventMovementMode_Params
	{
	public:
		EMovementMode                                              NewMovementMode;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              NewCustomMode;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPOverrideGetAttackAnimationIndex
	 */
	struct AShapeshifter_Large_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PCTI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UAnimMontage*>                                AnimationArray;                                          // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		int32_t                                                    ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPGetHUDElements
	 */
	struct AShapeshifter_Large_Character_BP_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetSmalls
	 */
	struct AShapeshifter_Large_Character_BP_C_GetSmalls_Params
	{
	public:
		class AShapeshifter_Small_Character_BP_C*                  Smalls;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.StartBerzerk
	 */
	struct AShapeshifter_Large_Character_BP_C_StartBerzerk_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPOnDinoCheat
	 */
	struct AShapeshifter_Large_Character_BP_C_BPOnDinoCheat_Params
	{
	public:
		class FName                                                CheatName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSetValue;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MXHS[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.IsBerzerk
	 */
	struct AShapeshifter_Large_Character_BP_C_IsBerzerk_Params
	{
	public:
		bool                                                       Ret;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BP_OnJumpReleased
	 */
	struct AShapeshifter_Large_Character_BP_C_BP_OnJumpReleased_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPUnstasis
	 */
	struct AShapeshifter_Large_Character_BP_C_BPUnstasis_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Un TransformFn
	 */
	struct AShapeshifter_Large_Character_BP_C_UnTransformFn_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPIsBasedOnActor
	 */
	struct AShapeshifter_Large_Character_BP_C_BPIsBasedOnActor_Params
	{
	public:
		class AActor*                                              Other;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetDebugString
	 */
	struct AShapeshifter_Large_Character_BP_C_GetDebugString_Params
	{
	public:
		class FString                                              Output;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.UpdateUberpounceFn
	 */
	struct AShapeshifter_Large_Character_BP_C_UpdateUberpounceFn_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.GetInitialAnimationForUberpouncePublic
	 */
	struct AShapeshifter_Large_Character_BP_C_GetInitialAnimationForUberpouncePublic_Params
	{
	public:
		class UAnimMontage*                                        AnimMontage;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnPounceStarted
	 */
	struct AShapeshifter_Large_Character_BP_C_OnPounceStarted_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.UpdatePounceFn
	 */
	struct AShapeshifter_Large_Character_BP_C_UpdatePounceFn_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Compute Pounce Transform
	 */
	struct AShapeshifter_Large_Character_BP_C_ComputePounceTransform_Params
	{
	public:
		struct FVector                                             CurrentLoc;                                              // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            CurrentRot;                                              // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NewLocation;                                             // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            NewRotation;                                             // 0x0024(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UpdatedTransform;                                        // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPPreventOrderAllowed
	 */
	struct AShapeshifter_Large_Character_BP_C_BPPreventOrderAllowed_Params
	{
	public:
		class APrimalCharacter*                                    FromCharacter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EDinoTamedOrder                                            OrderType;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bForce;                                                  // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7QZ4[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              enemyTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       orderNotExecuted;                                        // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0019(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Get Pounce Target
	 */
	struct AShapeshifter_Large_Character_BP_C_GetPounceTarget_Params
	{
	public:
		struct FVector                                             Loc;                                                     // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            Rot;                                                     // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPServerHandleNetExecCommand
	 */
	struct AShapeshifter_Large_Character_BP_C_BPServerHandleNetExecCommand_Params
	{
	public:
		class APlayerController*                                   FromPC;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                CommandName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0010(0x0040)  (Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.PounceAttachToCharacter
	 */
	struct AShapeshifter_Large_Character_BP_C_PounceAttachToCharacter_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnRep_PounceStateReplicated
	 */
	struct AShapeshifter_Large_Character_BP_C_OnRep_PounceStateReplicated_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.SetPounceState
	 */
	struct AShapeshifter_Large_Character_BP_C_SetPounceState_Params
	{
	public:
		EShapeshifter_Large_PounceState                            NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.EndPounce
	 */
	struct AShapeshifter_Large_Character_BP_C_EndPounce_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.StartPounce
	 */
	struct AShapeshifter_Large_Character_BP_C_StartPounce_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.SetPounceTarget
	 */
	struct AShapeshifter_Large_Character_BP_C_SetPounceTarget_Params
	{
	public:
		class APrimalCharacter*                                    Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPNotifyClearRider
	 */
	struct AShapeshifter_Large_Character_BP_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BPNotifySetRider
	 */
	struct AShapeshifter_Large_Character_BP_C_BPNotifySetRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderSetting;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.OnLanded
	 */
	struct AShapeshifter_Large_Character_BP_C_OnLanded_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.TrySet Collision
	 */
	struct AShapeshifter_Large_Character_BP_C_TrySetCollision_Params
	{
	public:
		bool                                                       Enable;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.DrawDebugRotator
	 */
	struct AShapeshifter_Large_Character_BP_C_DrawDebugRotator_Params
	{
	public:
		struct FVector                                             Position;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Duration;                                                // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Thickness;                                               // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Scale;                                                   // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ReceiveTick
	 */
	struct AShapeshifter_Large_Character_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ReceivePossessed
	 */
	struct AShapeshifter_Large_Character_BP_C_ReceivePossessed_Params
	{
	public:
		class AController*                                         NewController;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ReceiveBeginPlay
	 */
	struct AShapeshifter_Large_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.UserConstructionScript
	 */
	struct AShapeshifter_Large_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_254
	 */
	struct AShapeshifter_Large_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_254_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_253
	 */
	struct AShapeshifter_Large_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_253_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_252
	 */
	struct AShapeshifter_Large_Character_BP_C_InpActEvt_Prone_K2Node_InputActionEvent_252_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_251
	 */
	struct AShapeshifter_Large_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_251_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_250
	 */
	struct AShapeshifter_Large_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_250_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.InpActEvt_Gamepad_LeftStick_Down_K2Node_InputKeyEvent_68
	 */
	struct AShapeshifter_Large_Character_BP_C_InpActEvt_Gamepad_LeftStick_Down_K2Node_InputKeyEvent_68_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.Initialize
	 */
	struct AShapeshifter_Large_Character_BP_C_Initialize_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_Initialize
	 */
	struct AShapeshifter_Large_Character_BP_C_AnimNotify_Initialize_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_CompleteTransform
	 */
	struct AShapeshifter_Large_Character_BP_C_AnimNotify_CompleteTransform_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.MultiOnLanded
	 */
	struct AShapeshifter_Large_Character_BP_C_MultiOnLanded_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerSetPounceTarget
	 */
	struct AShapeshifter_Large_Character_BP_C_ServerSetPounceTarget_Params
	{
	public:
		class APrimalCharacter*                                    Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerEndPounce
	 */
	struct AShapeshifter_Large_Character_BP_C_ServerEndPounce_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.MultiEndPounce
	 */
	struct AShapeshifter_Large_Character_BP_C_MultiEndPounce_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.UpdatePounce
	 */
	struct AShapeshifter_Large_Character_BP_C_UpdatePounce_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.UnTransform
	 */
	struct AShapeshifter_Large_Character_BP_C_UnTransform_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerStartJump
	 */
	struct AShapeshifter_Large_Character_BP_C_ServerStartJump_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_DoJump
	 */
	struct AShapeshifter_Large_Character_BP_C_AnimNotify_DoJump_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_AteElement
	 */
	struct AShapeshifter_Large_Character_BP_C_AnimNotify_AteElement_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.QueueSequentialJumpEvent
	 */
	struct AShapeshifter_Large_Character_BP_C_QueueSequentialJumpEvent_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerSetLastTimeReleaseJumpWhileFalling
	 */
	struct AShapeshifter_Large_Character_BP_C_ServerSetLastTimeReleaseJumpWhileFalling_Params
	{
	public:
		double                                                     Time;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Velocity;                                                // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             CameraDirection;                                         // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_SequentialJumpTakeOff
	 */
	struct AShapeshifter_Large_Character_BP_C_AnimNotify_SequentialJumpTakeOff_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerForwardInputDuringSequentialJump
	 */
	struct AShapeshifter_Large_Character_BP_C_ServerForwardInputDuringSequentialJump_Params
	{
	public:
		float                                                      Axis;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.MultiUpdateVelocity
	 */
	struct AShapeshifter_Large_Character_BP_C_MultiUpdateVelocity_Params
	{
	public:
		struct FVector                                             NewVelocity;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_AOEGroundPound
	 */
	struct AShapeshifter_Large_Character_BP_C_AnimNotify_AOEGroundPound_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_SwipeAttack
	 */
	struct AShapeshifter_Large_Character_BP_C_AnimNotify_SwipeAttack_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_ChargingMeleeStart
	 */
	struct AShapeshifter_Large_Character_BP_C_AnimNotify_ChargingMeleeStart_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_ChargingMeleeEnd
	 */
	struct AShapeshifter_Large_Character_BP_C_AnimNotify_ChargingMeleeEnd_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ChargingMeleeTick
	 */
	struct AShapeshifter_Large_Character_BP_C_ChargingMeleeTick_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_CameraShake
	 */
	struct AShapeshifter_Large_Character_BP_C_AnimNotify_CameraShake_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerLeftRightInputDuringSequentialJump
	 */
	struct AShapeshifter_Large_Character_BP_C_ServerLeftRightInputDuringSequentialJump_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_CameraShakeLight
	 */
	struct AShapeshifter_Large_Character_BP_C_AnimNotify_CameraShakeLight_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.DeleteSmallsEvent
	 */
	struct AShapeshifter_Large_Character_BP_C_DeleteSmallsEvent_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.StartBerzerkEvent
	 */
	struct AShapeshifter_Large_Character_BP_C_StartBerzerkEvent_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BerzerkPassout
	 */
	struct AShapeshifter_Large_Character_BP_C_BerzerkPassout_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.SetAllowRiding
	 */
	struct AShapeshifter_Large_Character_BP_C_SetAllowRiding_Params
	{
	public:
		bool                                                       Allowed;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_ResetAnimSpeed
	 */
	struct AShapeshifter_Large_Character_BP_C_AnimNotify_ResetAnimSpeed_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_ThrowRider
	 */
	struct AShapeshifter_Large_Character_BP_C_AnimNotify_ThrowRider_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_StartRoar
	 */
	struct AShapeshifter_Large_Character_BP_C_AnimNotify_StartRoar_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_StopRoar
	 */
	struct AShapeshifter_Large_Character_BP_C_AnimNotify_StopRoar_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.StartUnTransform
	 */
	struct AShapeshifter_Large_Character_BP_C_StartUnTransform_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_UnTransform
	 */
	struct AShapeshifter_Large_Character_BP_C_AnimNotify_UnTransform_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_ClearRider
	 */
	struct AShapeshifter_Large_Character_BP_C_AnimNotify_ClearRider_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_InitializeSize
	 */
	struct AShapeshifter_Large_Character_BP_C_AnimNotify_InitializeSize_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_CheckForFallingLatch
	 */
	struct AShapeshifter_Large_Character_BP_C_AnimNotify_CheckForFallingLatch_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerRequestUberpounceJump
	 */
	struct AShapeshifter_Large_Character_BP_C_ServerRequestUberpounceJump_Params
	{
	public:
		struct FVector                                             Velocity;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_DoUberpounceJump
	 */
	struct AShapeshifter_Large_Character_BP_C_AnimNotify_DoUberpounceJump_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.BackupDestroy
	 */
	struct AShapeshifter_Large_Character_BP_C_BackupDestroy_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_LatchedJumpAttached
	 */
	struct AShapeshifter_Large_Character_BP_C_AnimNotify_LatchedJumpAttached_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.InitSmalls
	 */
	struct AShapeshifter_Large_Character_BP_C_InitSmalls_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_QueuedRoar
	 */
	struct AShapeshifter_Large_Character_BP_C_AnimNotify_QueuedRoar_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerSetPounceAnticipationIdle
	 */
	struct AShapeshifter_Large_Character_BP_C_ServerSetPounceAnticipationIdle_Params
	{
	public:
		bool                                                       IsAnticipIdle;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerSetIsHoldingCrouch
	 */
	struct AShapeshifter_Large_Character_BP_C_ServerSetIsHoldingCrouch_Params
	{
	public:
		bool                                                       HoldingCrouch;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_GrabRock
	 */
	struct AShapeshifter_Large_Character_BP_C_AnimNotify_GrabRock_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_ThrowRock
	 */
	struct AShapeshifter_Large_Character_BP_C_AnimNotify_ThrowRock_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerUpdateCameraLocationForBoulderThrow
	 */
	struct AShapeshifter_Large_Character_BP_C_ServerUpdateCameraLocationForBoulderThrow_Params
	{
	public:
		struct FVector                                             Loc;                                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerRequestSequentialJump
	 */
	struct AShapeshifter_Large_Character_BP_C_ServerRequestSequentialJump_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_AOEJumpStart
	 */
	struct AShapeshifter_Large_Character_BP_C_AnimNotify_AOEJumpStart_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_AOEJumpEnd
	 */
	struct AShapeshifter_Large_Character_BP_C_AnimNotify_AOEJumpEnd_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_EnableIK
	 */
	struct AShapeshifter_Large_Character_BP_C_AnimNotify_EnableIK_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_DisableIK
	 */
	struct AShapeshifter_Large_Character_BP_C_AnimNotify_DisableIK_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_ShouldCancelLatch
	 */
	struct AShapeshifter_Large_Character_BP_C_AnimNotify_ShouldCancelLatch_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ServerRequestJumpOffWallWithAnticipation
	 */
	struct AShapeshifter_Large_Character_BP_C_ServerRequestJumpOffWallWithAnticipation_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_PushOffWall
	 */
	struct AShapeshifter_Large_Character_BP_C_AnimNotify_PushOffWall_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.AnimNotify_StartTransform
	 */
	struct AShapeshifter_Large_Character_BP_C_AnimNotify_StartTransform_Params
	{	};

	/**
	 * Function Shapeshifter_Large_Character_BP.Shapeshifter_Large_Character_BP_C.ExecuteUbergraph_Shapeshifter_Large_Character_BP
	 */
	struct AShapeshifter_Large_Character_BP_C_ExecuteUbergraph_Shapeshifter_Large_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
