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
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsSpooderInSPACE
	 */
	struct ABogSpider_Character_BP_C_IsSpooderInSPACE_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PD03[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnWallJump
	 */
	struct ABogSpider_Character_BP_C_OnWallJump_Params
	{
	public:
		struct FVector                                             wallJumpVelocity;                                        // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnClimberFinishedAttaching
	 */
	struct ABogSpider_Character_BP_C_OnClimberFinishedAttaching_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.StoreClimb Trace Socket Offsets
	 */
	struct ABogSpider_Character_BP_C_StoreClimbTraceSocketOffsets_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetSpiderClimbingTraceTransform
	 */
	struct ABogSpider_Character_BP_C_GetSpiderClimbingTraceTransform_Params
	{
	public:
		int32_t                                                    traceIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bWorldSpace;                                             // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NMPS[0xB];                                   // 0x0005(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct UObject_FTransform                                  TraceTransform;                                          // 0x0010(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsClimbingTraceHitResultValid
	 */
	struct ABogSpider_Character_BP_C_IsClimbingTraceHitResultValid_Params
	{
	public:
		bool                                                       bValidHit;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8CTK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          Hit;                                                     // 0x0008(0x0088)  (Parm, OutParm, ReferenceParm)
		struct FVector                                             TraceStart;                                              // 0x0090(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             TraceEnd;                                                // 0x009C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    traceIndex;                                              // 0x00A8(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    TraceRetryNum;                                           // 0x00AC(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bResult;                                                 // 0x00B0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanClimberOverrideRetriedTraceResult
	 */
	struct ABogSpider_Character_BP_C_CanClimberOverrideRetriedTraceResult_Params
	{
	public:
		struct FHitResult                                          WithHit;                                                 // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
		bool                                                       bResult;                                                 // 0x0088(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanSpiderStopNonDediTick
	 */
	struct ABogSpider_Character_BP_C_CanSpiderStopNonDediTick_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HHGL[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanClimberStopNonDediTick_NonControlled
	 */
	struct ABogSpider_Character_BP_C_CanClimberStopNonDediTick_NonControlled_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanClimberStopNonDediTick_Controlled
	 */
	struct ABogSpider_Character_BP_C_CanClimberStopNonDediTick_Controlled_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Can ClimberContinueClimbing
	 */
	struct ABogSpider_Character_BP_C_CanClimberContinueClimbing_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanSpiderUseAbilities
	 */
	struct ABogSpider_Character_BP_C_CanSpiderUseAbilities_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdateSpiderRandomTickDelay
	 */
	struct ABogSpider_Character_BP_C_UpdateSpiderRandomTickDelay_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.StopAllSpiderCameraShake
	 */
	struct ABogSpider_Character_BP_C_StopAllSpiderCameraShake_Params
	{
	public:
		class APrimalCharacter*                                    ForRider;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdateNonControlledClimber
	 */
	struct ABogSpider_Character_BP_C_UpdateNonControlledClimber_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsPlayingJumpDetachAnim
	 */
	struct ABogSpider_Character_BP_C_IsPlayingJumpDetachAnim_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanPrimalCharBeUsedForTaming
	 */
	struct ABogSpider_Character_BP_C_CanPrimalCharBeUsedForTaming_Params
	{
	public:
		class APrimalCharacter*                                    Char;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		bool                                                       bResult;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.AddTamingAffinityFromLifeSteal
	 */
	struct ABogSpider_Character_BP_C_AddTamingAffinityFromLifeSteal_Params
	{
	public:
		class AShooterCharacter*                                   ForPlayer;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPClientDoMultiUse
	 */
	struct ABogSpider_Character_BP_C_BPClientDoMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ClientUseIndex;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.RefreshSpiderVision
	 */
	struct ABogSpider_Character_BP_C_RefreshSpiderVision_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_CacheWebTracePreviewHits
	 */
	struct ABogSpider_Character_BP_C_Tick_CacheWebTracePreviewHits_Params
	{
	public:
		TArray<struct FHitResult>                                  TraceHits;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.CalcAirJumpVelocity
	 */
	struct ABogSpider_Character_BP_C_CalcAirJumpVelocity_Params
	{
	public:
		struct FVector2D                                           WithInputs;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             WithVelocity;                                            // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            WithControlRot;                                          // 0x0014(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x0020(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPGetMultiUseEntries
	 */
	struct ABogSpider_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetSpiderAnimBP
	 */
	struct ABogSpider_Character_BP_C_GetSpiderAnimBP_Params
	{
	public:
		class UBogSpider_AnimBlueprint_C*                          animBP;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.AddChargeJumpVelocity
	 */
	struct ABogSpider_Character_BP_C_AddChargeJumpVelocity_Params
	{
	public:
		float                                                      WithChargeRatio;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoChargeJump_Server
	 */
	struct ABogSpider_Character_BP_C_DoChargeJump_Server_Params
	{
	public:
		double                                                     ClientTimestamp;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.StartChargeJump_Server
	 */
	struct ABogSpider_Character_BP_C_StartChargeJump_Server_Params
	{
	public:
		double                                                     ClientTimestamp;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateClientWaterWalkingBuff
	 */
	struct ABogSpider_Character_BP_C_Tick_UpdateClientWaterWalkingBuff_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPAcknowledgeServerCorrection
	 */
	struct ABogSpider_Character_BP_C_BPAcknowledgeServerCorrection_Params
	{
	public:
		float                                                      TimeStamp;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NewLoc;                                                  // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NewVel;                                                  // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DKFR[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimitiveComponent*                                 NewBase;                                                 // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                NewBaseBoneName;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bHasBase;                                                // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBaseRelativePosition;                                   // 0x0031(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              ServerMovementMode;                                      // 0x0032(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0033(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.SpiderPrintShippingMessage
	 */
	struct ABogSpider_Character_BP_C_SpiderPrintShippingMessage_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPOnDinoCheat
	 */
	struct ABogSpider_Character_BP_C_BPOnDinoCheat_Params
	{
	public:
		class FName                                                CheatName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSetValue;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GC24[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.BP_OverrideRiderCameraCollisionSweep
	 */
	struct ABogSpider_Character_BP_C_BP_OverrideRiderCameraCollisionSweep_Params
	{
	public:
		struct FVector                                             SweepStart;                                              // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             SweepEnd;                                                // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FHitResult                                          ReturnValue;                                             // 0x0018(0x0088)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.AdjustClimbTraceTransform
	 */
	struct ABogSpider_Character_BP_C_AdjustClimbTraceTransform_Params
	{
	public:
		class FName                                                WithSocketName;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A768[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct UObject_FTransform                                  WithTraceTransform;                                      // 0x0010(0x0030)  (Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
		struct UObject_FTransform                                  climberTransform;                                        // 0x0040(0x0030)  (Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
		struct UObject_FTransform                                  AdjustedTransform;                                       // 0x0070(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsRiderLookDirParallelWithClimbUp
	 */
	struct ABogSpider_Character_BP_C_IsRiderLookDirParallelWithClimbUp_Params
	{
	public:
		struct FVector2D                                           WithinAngleRange;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bResult;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HW27[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      angleDelta;                                              // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetSpiderTransformForEnsnare
	 */
	struct ABogSpider_Character_BP_C_GetSpiderTransformForEnsnare_Params
	{
	public:
		struct UObject_FTransform                                  Transform;                                               // 0x0000(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.BP_OverrideCarriedCharacterTransform
	 */
	struct ABogSpider_Character_BP_C_BP_OverrideCarriedCharacterTransform_Params
	{
	public:
		class APrimalCharacter*                                    ForCarriedChar;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.WantsToAirBrake
	 */
	struct ABogSpider_Character_BP_C_WantsToAirBrake_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdateClimberOverrideFallVelocity
	 */
	struct ABogSpider_Character_BP_C_UpdateClimberOverrideFallVelocity_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.ModifySpiderFallingVelocity
	 */
	struct ABogSpider_Character_BP_C_ModifySpiderFallingVelocity_Params
	{
	public:
		struct FVector                                             Velocity;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      DeltaTime;                                               // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Rotate RotatorForwardVector to Target Constant
	 */
	struct ABogSpider_Character_BP_C_RotateRotatorForwardVectortoTargetConstant_Params
	{
	public:
		struct FRotator                                            currentRotator;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             targetForward;                                           // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      RotationRate;                                            // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            newRotator;                                              // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetCurrentClimbingRotationSpeed
	 */
	struct ABogSpider_Character_BP_C_GetCurrentClimbingRotationSpeed_Params
	{
	public:
		float                                                      RotationSpeed;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Rotate Climber To TargetClimbingRotation
	 */
	struct ABogSpider_Character_BP_C_RotateClimberToTargetClimbingRotation_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPDidSetCarriedCharacter
	 */
	struct ABogSpider_Character_BP_C_BPDidSetCarriedCharacter_Params
	{
	public:
		class APrimalCharacter*                                    PreviousCarriedCharacter;                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JMCS[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanClimberRestoreToSeeking
	 */
	struct ABogSpider_Character_BP_C_CanClimberRestoreToSeeking_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsSpiderClimbRunning
	 */
	struct ABogSpider_Character_BP_C_IsSpiderClimbRunning_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1C0U[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_SimulateClimbingBetweenFrames
	 */
	struct ABogSpider_Character_BP_C_Tick_SimulateClimbingBetweenFrames_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsClimberGrounded
	 */
	struct ABogSpider_Character_BP_C_IsClimberGrounded_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPGetCrosshairColor
	 */
	struct ABogSpider_Character_BP_C_BPGetCrosshairColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Get CorrectDetachAnim
	 */
	struct ABogSpider_Character_BP_C_GetCorrectDetachAnim_Params
	{
	public:
		class UAnimMontage*                                        Anim;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanSpiderRunSeek
	 */
	struct ABogSpider_Character_BP_C_CanSpiderRunSeek_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateSpiderRunSeeking
	 */
	struct ABogSpider_Character_BP_C_Tick_UpdateSpiderRunSeeking_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateSpiderCameraShake
	 */
	struct ABogSpider_Character_BP_C_Tick_UpdateSpiderCameraShake_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.ClimberCheckForAboveWalkableGround
	 */
	struct ABogSpider_Character_BP_C_ClimberCheckForAboveWalkableGround_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P7M8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Get Correct Surface Trace OffsetTransforms
	 */
	struct ABogSpider_Character_BP_C_GetCorrectSurfaceTraceOffsetTransforms_Params
	{
	public:
		bool                                                       overrideUseMap;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5CJ2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<bool>                                               newUseMp;                                                // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct UObject_FTransform>                          offsetTransforms;                                        // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor)
		TArray<int32_t>                                            TraceIndeces;                                            // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.DisplaySpiderHudNotification
	 */
	struct ABogSpider_Character_BP_C_DisplaySpiderHudNotification_Params
	{
	public:
		class FString                                              Notification;                                            // 0x0000(0x0010)  (Parm, ZeroConstructor)
		struct FLinearColor                                        Color;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector2D                                           DisplayScaleAndTime;                                     // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UTexture2D*                                          Icon;                                                    // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USoundBase*                                          Sound;                                                   // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_ManageBloodSuckingClientBuff
	 */
	struct ABogSpider_Character_BP_C_Tick_ManageBloodSuckingClientBuff_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.UnriddenSpiderTryBioGrappleTarget
	 */
	struct ABogSpider_Character_BP_C_UnriddenSpiderTryBioGrappleTarget_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Climber_AllowMovementWhileClimbing
	 */
	struct ABogSpider_Character_BP_C_Climber_AllowMovementWhileClimbing_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Climber_AI_OnSetTarget
	 */
	struct ABogSpider_Character_BP_C_Climber_AI_OnSetTarget_Params
	{
	public:
		class AActor*                                              NewTarget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdateClimbingClimber
	 */
	struct ABogSpider_Character_BP_C_UpdateClimbingClimber_Params
	{
	public:
		bool                                                       IgnoreFailure;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       canKeepClimbing;                                         // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetSpiderVisionActive
	 */
	struct ABogSpider_Character_BP_C_SetSpiderVisionActive_Params
	{
	public:
		bool                                                       bNewActive;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.ToggleSpiderVision
	 */
	struct ABogSpider_Character_BP_C_ToggleSpiderVision_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanClimberSeek
	 */
	struct ABogSpider_Character_BP_C_CanClimberSeek_Params
	{
	public:
		bool                                                       isForStart;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Get CurrentClimbingVelocityMax
	 */
	struct ABogSpider_Character_BP_C_GetCurrentClimbingVelocityMax_Params
	{
	public:
		float                                                      Velocity;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Can Climber Rotate to Target Rotation
	 */
	struct ABogSpider_Character_BP_C_CanClimberRotatetoTargetRotation_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetClimbingMoveDirFromRotation
	 */
	struct ABogSpider_Character_BP_C_GetClimbingMoveDirFromRotation_Params
	{
	public:
		struct FRotator                                            Rotation;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             moveDir;                                                 // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.CheckForUpdateSpiderClimbMoving
	 */
	struct ABogSpider_Character_BP_C_CheckForUpdateSpiderClimbMoving_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdateClimber Inputs
	 */
	struct ABogSpider_Character_BP_C_UpdateClimberInputs_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Init Climber
	 */
	struct ABogSpider_Character_BP_C_InitClimber_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsNormalClimbable
	 */
	struct ABogSpider_Character_BP_C_IsNormalClimbable_Params
	{
	public:
		struct FVector                                             Normal;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isAverageNormal;                                         // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x000D(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6LT5[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Replicate Index Update Server And Client Climber
	 */
	struct ABogSpider_Character_BP_C_ReplicateIndexUpdateServerAndClientClimber_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Check For Prevent Stop Climbing
	 */
	struct ABogSpider_Character_BP_C_CheckForPreventStopClimbing_Params
	{
	public:
		TArray<bool>                                               traceHitsArray;                                          // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		int32_t                                                    numValidHits;                                            // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    numTraces;                                               // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AllowClimbing;                                           // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetCorrectSurfaceTraceDistance
	 */
	struct ABogSpider_Character_BP_C_GetCorrectSurfaceTraceDistance_Params
	{
	public:
		bool                                                       isForRetry;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MR85[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      traceDist;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.InterpolateClimberMesh
	 */
	struct ABogSpider_Character_BP_C_InterpolateClimberMesh_Params
	{
	public:
		class USkeletalMeshComponent*                              meshToInterpolate;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPOverrideCharacterNewFallVelocity
	 */
	struct ABogSpider_Character_BP_C_BPOverrideCharacterNewFallVelocity_Params
	{
	public:
		struct FVector                                             InitialVelocity;                                         // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             Gravity;                                                 // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      DeltaTime;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsWebSprinting
	 */
	struct ABogSpider_Character_BP_C_IsWebSprinting_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.FireQuickWebs_Both
	 */
	struct ABogSpider_Character_BP_C_FireQuickWebs_Both_Params
	{
	public:
		struct FVector                                             WithHitLocation_A;                                       // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             WithHitLocation_B;                                       // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanQuickFireWebs
	 */
	struct ABogSpider_Character_BP_C_CanQuickFireWebs_Params
	{
	public:
		bool                                                       bSingle;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bResult;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_D3UI[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.FireQuickWebs_Single
	 */
	struct ABogSpider_Character_BP_C_FireQuickWebs_Single_Params
	{
	public:
		struct FVector                                             WithHitLocation;                                         // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K3MV[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrimalCharacter*                                    WithBioGrappleTarget;                                    // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoWebSearch_Both
	 */
	struct ABogSpider_Character_BP_C_DoWebSearch_Both_Params
	{
	public:
		struct FRotator                                            ViewRot;                                                 // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bFoundAny;                                               // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bFoundOne;                                               // 0x000D(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O0WT[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             FoundHitLoc_A;                                           // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BVFV[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              FoundHitActor_A;                                         // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             FoundHitLoc_B;                                           // 0x0028(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4Q5V[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              FoundHitActor_B;                                         // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoWebSearch_Single
	 */
	struct ABogSpider_Character_BP_C_DoWebSearch_Single_Params
	{
	public:
		struct FRotator                                            ViewRot;                                                 // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bFoundHit;                                               // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CA3W[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             FoundHitLoc;                                             // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K3VS[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              FoundHitActor;                                           // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetAirJumpVelocity
	 */
	struct ABogSpider_Character_BP_C_SetAirJumpVelocity_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoAirJump
	 */
	struct ABogSpider_Character_BP_C_DoAirJump_Params
	{
	public:
		struct FVector2D                                           WithMoveInputs;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             WithVelocity;                                            // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            WithControlRot;                                          // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanAirJump
	 */
	struct ABogSpider_Character_BP_C_CanAirJump_Params
	{
	public:
		bool                                                       bForStart;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bResult;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.TryDoAirJump
	 */
	struct ABogSpider_Character_BP_C_TryDoAirJump_Params
	{
	public:
		struct FVector2D                                           WithMoveInputs;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             WithVelocity;                                            // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            WithControlRot;                                          // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanAttachWebsToCharInPVE
	 */
	struct ABogSpider_Character_BP_C_CanAttachWebsToCharInPVE_Params
	{
	public:
		class APrimalCharacter*                                    ToChar;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bResult;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.BreakWebVisually
	 */
	struct ABogSpider_Character_BP_C_BreakWebVisually_Params
	{
	public:
		bool                                                       bBreakLeft;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HFPM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnWebTetherImpact
	 */
	struct ABogSpider_Character_BP_C_OnWebTetherImpact_Params
	{
	public:
		struct FHitResult                                          WithHit;                                                 // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsSpiderBloodHangry
	 */
	struct ABogSpider_Character_BP_C_IsSpiderBloodHangry_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.InterceptRiderEmoteAnim
	 */
	struct ABogSpider_Character_BP_C_InterceptRiderEmoteAnim_Params
	{
	public:
		class UAnimMontage*                                        EmoteAnim;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.NetSyncInputBitmask
	 */
	struct ABogSpider_Character_BP_C_NetSyncInputBitmask_Params
	{
	public:
		class FString                                              TriggeredByInput;                                        // 0x0000(0x0010)  (Parm, ZeroConstructor)
		bool                                                       bSuccess;                                                // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsBioGrappleOnCooldown
	 */
	struct ABogSpider_Character_BP_C_IsBioGrappleOnCooldown_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.BP_OnStartCarried
	 */
	struct ABogSpider_Character_BP_C_BP_OnStartCarried_Params
	{
	public:
		class APrimalDinoCharacter*                                aDino;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnWebShootybangFailed
	 */
	struct ABogSpider_Character_BP_C_OnWebShootybangFailed_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.AddBioGrappledBuffToChar
	 */
	struct ABogSpider_Character_BP_C_AddBioGrappledBuffToChar_Params
	{
	public:
		class APrimalCharacter*                                    ToChar;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APrimalBuff*                                         AddedBuff;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.ReleaseEnsnaredChar
	 */
	struct ABogSpider_Character_BP_C_ReleaseEnsnaredChar_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnBioGrappledCharBreakWeb
	 */
	struct ABogSpider_Character_BP_C_OnBioGrappledCharBreakWeb_Params
	{
	public:
		class APrimalCharacter*                                    BreakingChar;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetEnsnaredCharRef
	 */
	struct ABogSpider_Character_BP_C_SetEnsnaredCharRef_Params
	{
	public:
		class APrimalCharacter*                                    NewCharRef;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetWebVisibility
	 */
	struct ABogSpider_Character_BP_C_SetWebVisibility_Params
	{
	public:
		bool                                                       bNewVisibility;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.StopSpiderJump
	 */
	struct ABogSpider_Character_BP_C_StopSpiderJump_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoRealSpiderJump
	 */
	struct ABogSpider_Character_BP_C_DoRealSpiderJump_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.ShouldPreventWebShootWhileHoldingInputs
	 */
	struct ABogSpider_Character_BP_C_ShouldPreventWebShootWhileHoldingInputs_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2WLO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetChargeJumpRatio
	 */
	struct ABogSpider_Character_BP_C_GetChargeJumpRatio_Params
	{
	public:
		float                                                      Ratio;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EVOP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnKillEnsnaredDino
	 */
	struct ABogSpider_Character_BP_C_OnKillEnsnaredDino_Params
	{
	public:
		class APrimalDinoCharacter*                                KilledDino;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.ResetMeshRotation
	 */
	struct ABogSpider_Character_BP_C_ResetMeshRotation_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPOverrideCameraViewTarget
	 */
	struct ABogSpider_Character_BP_C_BPOverrideCameraViewTarget_Params
	{
	public:
		class FName                                                CurrentCameraMode;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             DesiredCameraLocation;                                   // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            DesiredCameraRotation;                                   // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DesiredFOV;                                              // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOverrideCameraLocation;                                 // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EWN6[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             CameraLocation;                                          // 0x0028(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOverrideCameraRotation;                                 // 0x0034(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MZYM[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            CameraRotation;                                          // 0x0038(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOverrideCameraFOV;                                      // 0x0044(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1PAR[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      CameraFOV;                                               // 0x0048(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPOverrideStencilAllianceForTarget
	 */
	struct ABogSpider_Character_BP_C_BPOverrideStencilAllianceForTarget_Params
	{
	public:
		class APrimalCharacter*                                    TargetDino;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 Component;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EStencilAlliance                                           ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0CQM[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.BP_OverrideTerminalVelocity
	 */
	struct ABogSpider_Character_BP_C_BP_OverrideTerminalVelocity_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetImpendingLand
	 */
	struct ABogSpider_Character_BP_C_SetImpendingLand_Params
	{
	public:
		bool                                                       NewValue;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanChargeJump
	 */
	struct ABogSpider_Character_BP_C_CanChargeJump_Params
	{
	public:
		bool                                                       bForStart;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bResult;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.CancelChargeJump
	 */
	struct ABogSpider_Character_BP_C_CancelChargeJump_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoChargeJump_Client
	 */
	struct ABogSpider_Character_BP_C_DoChargeJump_Client_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.StartChargeJump_Client
	 */
	struct ABogSpider_Character_BP_C_StartChargeJump_Client_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateSpiderChargeJump
	 */
	struct ABogSpider_Character_BP_C_Tick_UpdateSpiderChargeJump_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.StartBioGrappleCooldown
	 */
	struct ABogSpider_Character_BP_C_StartBioGrappleCooldown_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnWebTetherBroken
	 */
	struct ABogSpider_Character_BP_C_OnWebTetherBroken_Params
	{
	public:
		bool                                                       bIsLeft;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WMJ0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGrappleTether                                      BrokenTether;                                            // 0x0008(0x0168)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_ManageSpiderSounds
	 */
	struct ABogSpider_Character_BP_C_Tick_ManageSpiderSounds_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.RotateDirToTargetWithLimit
	 */
	struct ABogSpider_Character_BP_C_RotateDirToTargetWithLimit_Params
	{
	public:
		struct FVector                                             RotateDir;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ToTargetDir;                                             // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      RotatingLimitDegrees;                                    // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NewDir;                                                  // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.CheckForInstantHarvestDeadEnsnaredChar
	 */
	struct ABogSpider_Character_BP_C_CheckForInstantHarvestDeadEnsnaredChar_Params
	{
	public:
		class APrimalCharacter*                                    forChar;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsSpiderRotating
	 */
	struct ABogSpider_Character_BP_C_IsSpiderRotating_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E1LU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Net_OnWebTethersCreated
	 */
	struct ABogSpider_Character_BP_C_Net_OnWebTethersCreated_Params
	{
	public:
		struct FHitResult                                          TetherHits_Left;                                         // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
		struct FHitResult                                          TetherHits_Right;                                        // 0x0088(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.CreateWebVisually
	 */
	struct ABogSpider_Character_BP_C_CreateWebVisually_Params
	{
	public:
		bool                                                       bIsLeft;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4FDA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.ResetReelingCables
	 */
	struct ABogSpider_Character_BP_C_ResetReelingCables_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnGrappleBuffActiveStateChanged
	 */
	struct ABogSpider_Character_BP_C_OnGrappleBuffActiveStateChanged_Params
	{
	public:
		bool                                                       bIsActive;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnSpiderTargetSet
	 */
	struct ABogSpider_Character_BP_C_OnSpiderTargetSet_Params
	{
	public:
		class AActor*                                              NewTarget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetMeshInterpSpeed_Rotation
	 */
	struct ABogSpider_Character_BP_C_GetMeshInterpSpeed_Rotation_Params
	{
	public:
		float                                                      InterpSpeed;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetMeshInterpSpeed_Location
	 */
	struct ABogSpider_Character_BP_C_GetMeshInterpSpeed_Location_Params
	{
	public:
		float                                                      InterpSpeed;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoStupidThings
	 */
	struct ABogSpider_Character_BP_C_DoStupidThings_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.ShouldShowStupid Name
	 */
	struct ABogSpider_Character_BP_C_ShouldShowStupidName_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.BP_OverrideDinoName
	 */
	struct ABogSpider_Character_BP_C_BP_OverrideDinoName_Params
	{
	public:
		class FString                                              CurrentDinoName;                                         // 0x0000(0x0010)  (Parm, ZeroConstructor)
		class APlayerController*                                   ForPC;                                                   // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateSpiderTargetLocation
	 */
	struct ABogSpider_Character_BP_C_Tick_UpdateSpiderTargetLocation_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetMeshTargetRotOffset
	 */
	struct ABogSpider_Character_BP_C_GetMeshTargetRotOffset_Params
	{
	public:
		struct FRotator                                            TargetRotOffset;                                         // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetMeshTargetLocOffset
	 */
	struct ABogSpider_Character_BP_C_GetMeshTargetLocOffset_Params
	{
	public:
		struct FVector                                             TargetLocOffset;                                         // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetSpiderVelocityVars_Pure
	 */
	struct ABogSpider_Character_BP_C_GetSpiderVelocityVars_Pure_Params
	{
	public:
		struct FVector                                             Velocity;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      VelocitySize;                                            // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             VelocityDir;                                             // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector2D                                           Velocity2D;                                              // 0x001C(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      VelocitySize2D;                                          // 0x0024(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetSpiderVelocityVars
	 */
	struct ABogSpider_Character_BP_C_GetSpiderVelocityVars_Params
	{
	public:
		struct FVector                                             Velocity;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      VelocitySize;                                            // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             VelocityDir;                                             // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector2D                                           Velocity2D;                                              // 0x001C(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      VelocitySize2D;                                          // 0x0024(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsAirBraking
	 */
	struct ABogSpider_Character_BP_C_IsAirBraking_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.HideWebCables
	 */
	struct ABogSpider_Character_BP_C_HideWebCables_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsInterpolatingMesh
	 */
	struct ABogSpider_Character_BP_C_IsInterpolatingMesh_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z9IJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.ClearBioGrappledBuff
	 */
	struct ABogSpider_Character_BP_C_ClearBioGrappledBuff_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnBioGrappleReleased
	 */
	struct ABogSpider_Character_BP_C_OnBioGrappleReleased_Params
	{
	public:
		class APrimalCharacter*                                    ReleasedChar;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnBioGrappledChar
	 */
	struct ABogSpider_Character_BP_C_OnBioGrappledChar_Params
	{
	public:
		class APrimalCharacter*                                    GrappledChar;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanTraceForLandingImpact
	 */
	struct ABogSpider_Character_BP_C_CanTraceForLandingImpact_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.ResetLastFallingVelocity
	 */
	struct ABogSpider_Character_BP_C_ResetLastFallingVelocity_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetIsAirBraking
	 */
	struct ABogSpider_Character_BP_C_SetIsAirBraking_Params
	{
	public:
		bool                                                       NewAirBraking;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetSpiderVelocity
	 */
	struct ABogSpider_Character_BP_C_SetSpiderVelocity_Params
	{
	public:
		struct FVector                                             NewVelocity;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.CacheLastVelocityVars
	 */
	struct ABogSpider_Character_BP_C_CacheLastVelocityVars_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.CacheCurrentVelocityVars
	 */
	struct ABogSpider_Character_BP_C_CacheCurrentVelocityVars_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPSetupTamed
	 */
	struct ABogSpider_Character_BP_C_BPSetupTamed_Params
	{
	public:
		bool                                                       bWasJustTamed;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateTimerIntervals
	 */
	struct ABogSpider_Character_BP_C_Tick_UpdateTimerIntervals_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanHardLand
	 */
	struct ABogSpider_Character_BP_C_CanHardLand_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4N1W[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_TraceForLandingImpact
	 */
	struct ABogSpider_Character_BP_C_Tick_TraceForLandingImpact_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnSpiderLanded
	 */
	struct ABogSpider_Character_BP_C_OnSpiderLanded_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.StopAllWebDetachAnims
	 */
	struct ABogSpider_Character_BP_C_StopAllWebDetachAnims_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.PlayWebDetachMontage
	 */
	struct ABogSpider_Character_BP_C_PlayWebDetachMontage_Params
	{
	public:
		bool                                                       bIsJumpDetach;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B0JY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsStuckToWall
	 */
	struct ABogSpider_Character_BP_C_IsStuckToWall_Params
	{
	public:
		bool                                                       bIncludeUnsticking;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bResult;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsStuckToWall_Pure
	 */
	struct ABogSpider_Character_BP_C_IsStuckToWall_Pure_Params
	{
	public:
		bool                                                       bIncludeUnsticking;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bResult;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPGetLookOffsetSocketName
	 */
	struct ABogSpider_Character_BP_C_BPGetLookOffsetSocketName_Params
	{
	public:
		class APrimalCharacter*                                    ForPrimalChar;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPDidClearCarriedCharacter
	 */
	struct ABogSpider_Character_BP_C_BPDidClearCarriedCharacter_Params
	{
	public:
		class APrimalCharacter*                                    PreviousCarriedCharacter;                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPUnstasis
	 */
	struct ABogSpider_Character_BP_C_BPUnstasis_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetSwingingVelocityRatio
	 */
	struct ABogSpider_Character_BP_C_GetSwingingVelocityRatio_Params
	{
	public:
		float                                                      Ratio;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.RotateCharControlRotationTowardsSpider
	 */
	struct ABogSpider_Character_BP_C_RotateCharControlRotationTowardsSpider_Params
	{
	public:
		class APrimalCharacter*                                    forChar;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsValidBioGrappleTarget
	 */
	struct ABogSpider_Character_BP_C_IsValidBioGrappleTarget_Params
	{
	public:
		class APrimalCharacter*                                    ForGrappleTarget;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bForStart;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bPreventTraces;                                          // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bResult;                                                 // 0x000A(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPAllowCarryCharacter
	 */
	struct ABogSpider_Character_BP_C_BPAllowCarryCharacter_Params
	{
	public:
		class APrimalCharacter*                                    checkCharacter;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.ReceiveAnyDamage
	 */
	struct ABogSpider_Character_BP_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E1D2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.InitBogSpider
	 */
	struct ABogSpider_Character_BP_C_InitBogSpider_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.TryUnstickFromWall
	 */
	struct ABogSpider_Character_BP_C_TryUnstickFromWall_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPDoAttack
	 */
	struct ABogSpider_Character_BP_C_BPDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanDoBioGrapple
	 */
	struct ABogSpider_Character_BP_C_CanDoBioGrapple_Params
	{
	public:
		bool                                                       bForStart;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bResult;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdatePullingBioGrappledCharVars
	 */
	struct ABogSpider_Character_BP_C_UpdatePullingBioGrappledCharVars_Params
	{
	public:
		bool                                                       bPulling;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.WebShootybangBioGrapple
	 */
	struct ABogSpider_Character_BP_C_WebShootybangBioGrapple_Params
	{
	public:
		class AActor*                                              TryBioGrappleActor;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSuccess;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KXIF[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPOnTamedProcessOrder
	 */
	struct ABogSpider_Character_BP_C_BPOnTamedProcessOrder_Params
	{
	public:
		class APrimalCharacter*                                    FromCharacter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EDinoTamedOrder                                            OrderType;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bForce;                                                  // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O6E2[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              enemyTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       orderNotExecuted;                                        // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsWebSprinting_Pure
	 */
	struct ABogSpider_Character_BP_C_IsWebSprinting_Pure_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetBitmaskAsString
	 */
	struct ABogSpider_Character_BP_C_GetBitmaskAsString_Params
	{
	public:
		int32_t                                                    bitMask;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E203[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              String;                                                  // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_InputHeartbeat
	 */
	struct ABogSpider_Character_BP_C_Tick_InputHeartbeat_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.GenerateInputBitMask
	 */
	struct ABogSpider_Character_BP_C_GenerateInputBitMask_Params
	{
	public:
		class FString                                              TriggeredByInput;                                        // 0x0000(0x0010)  (Parm, ZeroConstructor)
		int32_t                                                    NewBitMask;                                              // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.ProcessSyncedInputs
	 */
	struct ABogSpider_Character_BP_C_ProcessSyncedInputs_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.ReceiveDestroyed
	 */
	struct ABogSpider_Character_BP_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.DestroyWebAnchors
	 */
	struct ABogSpider_Character_BP_C_DestroyWebAnchors_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetupCosmeticsForRider
	 */
	struct ABogSpider_Character_BP_C_SetupCosmeticsForRider_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_ManageWebs
	 */
	struct ABogSpider_Character_BP_C_Tick_ManageWebs_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsGrapplePullJumping
	 */
	struct ABogSpider_Character_BP_C_IsGrapplePullJumping_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetWantsToWallStick
	 */
	struct ABogSpider_Character_BP_C_SetWantsToWallStick_Params
	{
	public:
		bool                                                       bWantsToStick;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_TraceForStickableWall
	 */
	struct ABogSpider_Character_BP_C_Tick_TraceForStickableWall_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetIgnoreWebHitRadius
	 */
	struct ABogSpider_Character_BP_C_GetIgnoreWebHitRadius_Params
	{
	public:
		float                                                      Radius;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 */
	struct ABogSpider_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPGetOverrideCameraInterpSpeed
	 */
	struct ABogSpider_Character_BP_C_BPGetOverrideCameraInterpSpeed_Params
	{
	public:
		float                                                      DefaultTPVCameraSpeedInterpolationMultiplier;            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DefaultTPVOffsetInterpSpeed;                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      TPVCameraSpeedInterpolationMultiplier;                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      TPVOffsetInterpSpeed;                                    // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateForceSkidAnims
	 */
	struct ABogSpider_Character_BP_C_Tick_UpdateForceSkidAnims_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.WantsToSwing
	 */
	struct ABogSpider_Character_BP_C_WantsToSwing_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.HasEnoughStamina
	 */
	struct ABogSpider_Character_BP_C_HasEnoughStamina_Params
	{
	public:
		float                                                      requiredStamina;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateSpiderStamina
	 */
	struct ABogSpider_Character_BP_C_Tick_UpdateSpiderStamina_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoGrapplePullJump
	 */
	struct ABogSpider_Character_BP_C_DoGrapplePullJump_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPGetRiderUnboardDirection
	 */
	struct ABogSpider_Character_BP_C_BPGetRiderUnboardDirection_Params
	{
	public:
		class APrimalCharacter*                                    RidingCharacter;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.ToggleTallModeState
	 */
	struct ABogSpider_Character_BP_C_ToggleTallModeState_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateGrappleState
	 */
	struct ABogSpider_Character_BP_C_Tick_UpdateGrappleState_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsAirBraking_Pure
	 */
	struct ABogSpider_Character_BP_C_IsAirBraking_Pure_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnRiderMountNotify
	 */
	struct ABogSpider_Character_BP_C_OnRiderMountNotify_Params
	{
	public:
		class APrimalCharacter*                                    RiderRef;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsRiding;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.AllowPlayMontage
	 */
	struct ABogSpider_Character_BP_C_AllowPlayMontage_Params
	{
	public:
		class UAnimMontage*                                        AnimMontage;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanEnsnare
	 */
	struct ABogSpider_Character_BP_C_CanEnsnare_Params
	{
	public:
		bool                                                       bIsForStart;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSuccess;                                                // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.TickUpdateEnsnaredChar
	 */
	struct ABogSpider_Character_BP_C_TickUpdateEnsnaredChar_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_StuckToWall
	 */
	struct ABogSpider_Character_BP_C_Tick_StuckToWall_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.BlueprintCanAttack
	 */
	struct ABogSpider_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_41XT[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_55WS[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsHangingFromWeb
	 */
	struct ABogSpider_Character_BP_C_IsHangingFromWeb_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnStickToWallHit
	 */
	struct ABogSpider_Character_BP_C_OnStickToWallHit_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanStickToWall
	 */
	struct ABogSpider_Character_BP_C_CanStickToWall_Params
	{
	public:
		bool                                                       bNotifyOfInsufficientStamina;                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIgnorePostJumpCooldown;                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.ReceiveHit
	 */
	struct ABogSpider_Character_BP_C_ReceiveHit_Params
	{
	public:
		class UPrimitiveComponent*                                 MyComp;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              Other;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSelfMoved;                                              // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_S3EG[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             HitLocation;                                             // 0x001C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             HitNormal;                                               // 0x0028(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NormalImpulse;                                           // 0x0034(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHitResult                                          Hit;                                                     // 0x0040(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.BlueprintCanRiderAttack
	 */
	struct ABogSpider_Character_BP_C_BlueprintCanRiderAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.TryManualWebDetach
	 */
	struct ABogSpider_Character_BP_C_TryManualWebDetach_Params
	{
	public:
		bool                                                       bDetachLeft;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.PlaySpiderCameraShake
	 */
	struct ABogSpider_Character_BP_C_PlaySpiderCameraShake_Params
	{
	public:
		class UClass*                                              CameraShakeClass;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ShakeScale;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ShakeSpeed;                                              // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bScaleShakeWithVelocity;                                 // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SDVA[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ShakeBaseVelocity;                                       // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bAllowReplication;                                       // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MX7G[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector2D                                           ShakeScaleClamps;                                        // 0x001C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector2D                                           ShakeSpeedClamps;                                        // 0x0024(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateShowCrosshair
	 */
	struct ABogSpider_Character_BP_C_Tick_UpdateShowCrosshair_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnWaterWalkingSurfaceStateChanged
	 */
	struct ABogSpider_Character_BP_C_OnWaterWalkingSurfaceStateChanged_Params
	{
	public:
		bool                                                       NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_CheckForWalkingOnWaterSurface
	 */
	struct ABogSpider_Character_BP_C_Tick_CheckForWalkingOnWaterSurface_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdateWaterWalkingState
	 */
	struct ABogSpider_Character_BP_C_UpdateWaterWalkingState_Params
	{
	public:
		bool                                                       NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bForceUpdate;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetCurrentJumpMontage
	 */
	struct ABogSpider_Character_BP_C_GetCurrentJumpMontage_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPOnStartJump
	 */
	struct ABogSpider_Character_BP_C_BPOnStartJump_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateSpiderTargetTransform
	 */
	struct ABogSpider_Character_BP_C_Tick_UpdateSpiderTargetTransform_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsWalkingOnWaterSurface
	 */
	struct ABogSpider_Character_BP_C_IsWalkingOnWaterSurface_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateOptimalWebHitDist
	 */
	struct ABogSpider_Character_BP_C_Tick_UpdateOptimalWebHitDist_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetWebTraceHitValue
	 */
	struct ABogSpider_Character_BP_C_GetWebTraceHitValue_Params
	{
	public:
		struct FHitResult                                          forWebTraceHit;                                          // 0x0000(0x0088)  (Parm)
		bool                                                       bDebug;                                                  // 0x0088(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_46CV[0x3];                                   // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      hitValue;                                                // 0x008C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_CheckForTallMode
	 */
	struct ABogSpider_Character_BP_C_Tick_CheckForTallMode_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.ShouldTallMode
	 */
	struct ABogSpider_Character_BP_C_ShouldTallMode_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.RiderHasWeaponEquipped
	 */
	struct ABogSpider_Character_BP_C_RiderHasWeaponEquipped_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnTakeOff
	 */
	struct ABogSpider_Character_BP_C_OnTakeOff_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.WebTrace
	 */
	struct ABogSpider_Character_BP_C_WebTrace_Params
	{
	public:
		struct FVector                                             TraceStart;                                              // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             TraceEnd;                                                // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       confirmTraceHits;                                        // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LDFU[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      updateAimedCharsRadus;                                   // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bAllowHitPullableChars;                                  // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       foundHit;                                                // 0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_X8XB[0x6];                                   // 0x0022(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          webHit;                                                  // 0x0028(0x0088)  (Parm, OutParm)
		float                                                      webHitValue;                                             // 0x00B0(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.TraceForBioGrappleTargetInLookDir
	 */
	struct ABogSpider_Character_BP_C_TraceForBioGrappleTargetInLookDir_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9XFG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          snarableCharHit;                                         // 0x0008(0x0088)  (Parm, OutParm)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPCharacterSleeped
	 */
	struct ABogSpider_Character_BP_C_BPCharacterSleeped_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.BP_OnSetDeath
	 */
	struct ABogSpider_Character_BP_C_BP_OnSetDeath_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdateRotateToControlRotation
	 */
	struct ABogSpider_Character_BP_C_UpdateRotateToControlRotation_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanJumpInternal
	 */
	struct ABogSpider_Character_BP_C_CanJumpInternal_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.ReceiveTick
	 */
	struct ABogSpider_Character_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H34A[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateSpiderTargetRotation
	 */
	struct ABogSpider_Character_BP_C_Tick_UpdateSpiderTargetRotation_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnGrappleBuffStateChanged
	 */
	struct ABogSpider_Character_BP_C_OnGrappleBuffStateChanged_Params
	{
	public:
		EGrappleState                                              NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.InterpSpiderMesh
	 */
	struct ABogSpider_Character_BP_C_InterpSpiderMesh_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CLJB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.SoftSetSpiderWorldLocation
	 */
	struct ABogSpider_Character_BP_C_SoftSetSpiderWorldLocation_Params
	{
	public:
		struct FVector                                             NewWorldLocation;                                        // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.SoftSetSpiderWorldRotation
	 */
	struct ABogSpider_Character_BP_C_SoftSetSpiderWorldRotation_Params
	{
	public:
		struct FRotator                                            newWorldRotation;                                        // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPOnMovementModeChangedNotify
	 */
	struct ABogSpider_Character_BP_C_BPOnMovementModeChangedNotify_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              PreviousCustomMode;                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetClosestLocationToScreenCenter
	 */
	struct ABogSpider_Character_BP_C_GetClosestLocationToScreenCenter_Params
	{
	public:
		struct FVector                                             LocationA;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             LocationB;                                               // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            WithViewRot;                                             // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       A;                                                       // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_57O2[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsValidStickToWallHit
	 */
	struct ABogSpider_Character_BP_C_IsValidStickToWallHit_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
		bool                                                       bPreventConfirmTraces;                                   // 0x0088(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsValid;                                                // 0x0089(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_11EX[0x2];                                   // 0x008A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             ValidStickNormal;                                        // 0x008C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.BP_InterceptMoveForward
	 */
	struct ABogSpider_Character_BP_C_BP_InterceptMoveForward_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.BP_InterceptMoveRight
	 */
	struct ABogSpider_Character_BP_C_BP_InterceptMoveRight_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.TryStickingToWall
	 */
	struct ABogSpider_Character_BP_C_TryStickingToWall_Params
	{
	public:
		struct FVector                                             AtLocation;                                              // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		bool                                                       Success;                                                 // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OI3S[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.TryEnsnareChar
	 */
	struct ABogSpider_Character_BP_C_TryEnsnareChar_Params
	{
	public:
		class APrimalCharacter*                                    Char;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZXRC[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.TickBioGrapple
	 */
	struct ABogSpider_Character_BP_C_TickBioGrapple_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPTimerNonDedicated
	 */
	struct ABogSpider_Character_BP_C_BPTimerNonDedicated_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Has Webs Attached
	 */
	struct ABogSpider_Character_BP_C_HasWebsAttached_Params
	{
	public:
		int32_t                                                    RequireNumWebs;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.ReceiveBeginPlay
	 */
	struct ABogSpider_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_SearchForGrapplePoints
	 */
	struct ABogSpider_Character_BP_C_Tick_SearchForGrapplePoints_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanJumpDetach
	 */
	struct ABogSpider_Character_BP_C_CanJumpDetach_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.HasEnoughStaminaPure
	 */
	struct ABogSpider_Character_BP_C_HasEnoughStaminaPure_Params
	{
	public:
		float                                                      requiredStamina;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.ReduceSpiderStamina
	 */
	struct ABogSpider_Character_BP_C_ReduceSpiderStamina_Params
	{
	public:
		float                                                      Stamina;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoLifeSteal
	 */
	struct ABogSpider_Character_BP_C_DoLifeSteal_Params
	{
	public:
		class APrimalCharacter*                                    FromChar;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPTimerServer
	 */
	struct ABogSpider_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateSpiderCamera
	 */
	struct ABogSpider_Character_BP_C_Tick_UpdateSpiderCamera_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetGrappledBuffClassOverride
	 */
	struct ABogSpider_Character_BP_C_GetGrappledBuffClassOverride_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdateGrappledVars
	 */
	struct ABogSpider_Character_BP_C_UpdateGrappledVars_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPNotifyClearRider
	 */
	struct ABogSpider_Character_BP_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPNotifySetRider
	 */
	struct ABogSpider_Character_BP_C_BPNotifySetRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderSetting;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPModifyFOV
	 */
	struct ABogSpider_Character_BP_C_BPModifyFOV_Params
	{
	public:
		float                                                      FOVIn;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.IsWeb Trace Hit Valid
	 */
	struct ABogSpider_Character_BP_C_IsWebTraceHitValid_Params
	{
	public:
		struct FHitResult                                          ForHit;                                                  // 0x0000(0x0088)  (Parm)
		bool                                                       bAllowHitPullableChars;                                  // 0x0088(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0089(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bDidHitPullableChar;                                     // 0x008A(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F8PO[0x1];                                   // 0x008B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.WebShootybang
	 */
	struct ABogSpider_Character_BP_C_WebShootybang_Params
	{
	public:
		bool                                                       shootOne;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DKW4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             hitA;                                                    // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             hitB;                                                    // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.ConfirmWebTraceHit
	 */
	struct ABogSpider_Character_BP_C_ConfirmWebTraceHit_Params
	{
	public:
		struct FVector                                             HitLocation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bUpdateAimedChars;                                       // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bAllowHitPullableChars;                                  // 0x000D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       confirmed;                                               // 0x000E(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F7LO[0x1];                                   // 0x000F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          confirmedHit;                                            // 0x0010(0x0088)  (Parm, OutParm)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.ProcessWebTraceHits
	 */
	struct ABogSpider_Character_BP_C_ProcessWebTraceHits_Params
	{
	public:
		struct FRotator                                            WithViewRotation;                                        // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3Z2T[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          centerHit;                                               // 0x0010(0x0088)  (Parm)
		struct FHitResult                                          LeftHit;                                                 // 0x0098(0x0088)  (Parm)
		struct FHitResult                                          RightHit;                                                // 0x0120(0x0088)  (Parm)
		struct FHitResult                                          bestHit_Single;                                          // 0x01A8(0x0088)  (Parm, OutParm)
		struct FHitResult                                          bestHit_Left;                                            // 0x0230(0x0088)  (Parm, OutParm)
		struct FHitResult                                          bestHit_Right;                                           // 0x02B8(0x0088)  (Parm, OutParm)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.SearchForAllGrapplePoints
	 */
	struct ABogSpider_Character_BP_C_SearchForAllGrapplePoints_Params
	{
	public:
		struct FRotator                                            WithViewRot;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bUseCachedAnchorHits;                                    // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bFoundAny;                                               // 0x000D(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4RSM[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          foundHit_Center;                                         // 0x0010(0x0088)  (Parm, OutParm)
		struct FHitResult                                          foundHit_Left;                                           // 0x0098(0x0088)  (Parm, OutParm)
		struct FHitResult                                          foundHit_Right;                                          // 0x0120(0x0088)  (Parm, OutParm)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.HasWebsAttached_Pure
	 */
	struct ABogSpider_Character_BP_C_HasWebsAttached_Pure_Params
	{
	public:
		int32_t                                                    RequireNumWebs;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetSpiderGrappleState
	 */
	struct ABogSpider_Character_BP_C_SetSpiderGrappleState_Params
	{
	public:
		EGrappleState                                              NewGrappleState;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.AutoSetDesiredGrappleState
	 */
	struct ABogSpider_Character_BP_C_AutoSetDesiredGrappleState_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.InterceptInputEvent
	 */
	struct ABogSpider_Character_BP_C_InterceptInputEvent_Params
	{
	public:
		class FString                                              InputName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.BPPreventFallDamage
	 */
	struct ABogSpider_Character_BP_C_BPPreventFallDamage_Params
	{
	public:
		struct FHitResult                                          HitResult;                                               // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
		float                                                      FallDamageAmount;                                        // 0x0088(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x008C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoJumpDetach
	 */
	struct ABogSpider_Character_BP_C_DoJumpDetach_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.UpdateGrappleBuffRef
	 */
	struct ABogSpider_Character_BP_C_UpdateGrappleBuffRef_Params
	{
	public:
		bool                                                       bAddIfNotFound;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.DetachBothWebs
	 */
	struct ABogSpider_Character_BP_C_DetachBothWebs_Params
	{
	public:
		bool                                                       bIsJumpDetach;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bPreventAnim;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       detachedAny;                                             // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.DetachWeb
	 */
	struct ABogSpider_Character_BP_C_DetachWeb_Params
	{
	public:
		bool                                                       bLeft;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.GetClosestSideToLocation
	 */
	struct ABogSpider_Character_BP_C_GetClosestSideToLocation_Params
	{
	public:
		struct FVector                                             ToLoc;                                                   // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bLeft;                                                   // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1J6D[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.CanDoWebTraces
	 */
	struct ABogSpider_Character_BP_C_CanDoWebTraces_Params
	{
	public:
		bool                                                       bRequireStamina;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bNotifyOfInsufficientStamina;                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Tick_UpdateGrapplePointPreviews
	 */
	struct ABogSpider_Character_BP_C_Tick_UpdateGrapplePointPreviews_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QIIE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.CreateWebGrappleTether
	 */
	struct ABogSpider_Character_BP_C_CreateWebGrappleTether_Params
	{
	public:
		struct FHitResult                                          FromHit;                                                 // 0x0000(0x0088)  (Parm)
		bool                                                       bLeft;                                                   // 0x0088(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bPreventNetSync;                                         // 0x0089(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_62ED[0x2];                                   // 0x008A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    NewTetherIndex;                                          // 0x008C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.SearchInDirForValidGrapplePoint
	 */
	struct ABogSpider_Character_BP_C_SearchInDirForValidGrapplePoint_Params
	{
	public:
		struct FRotator                                            WithViewRot;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      traceDir;                                                // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bWantsCenter;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bFoundAny;                                               // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E8ZE[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          retHit;                                                  // 0x0018(0x0088)  (Parm, OutParm)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.TraceForWebHit
	 */
	struct ABogSpider_Character_BP_C_TraceForWebHit_Params
	{
	public:
		struct FRotator                                            WithViewRot;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bCenterTrace;                                            // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSuccess;                                                // 0x000D(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I177[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          foundHit;                                                // 0x0010(0x0088)  (Parm, OutParm)
		float                                                      foundHitValue;                                           // 0x0098(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VP39[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.UserConstructionScript
	 */
	struct ABogSpider_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.BlendSpiderVision__FinishedFunc
	 */
	struct ABogSpider_Character_BP_C_BlendSpiderVision__FinishedFunc_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.BlendSpiderVision__UpdateFunc
	 */
	struct ABogSpider_Character_BP_C_BlendSpiderVision__UpdateFunc_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_DetachBothWebs
	 */
	struct ABogSpider_Character_BP_C_Server_DetachBothWebs_Params
	{
	public:
		bool                                                       bIsJumpDetach;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bPreventAnim;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_WebShootybang
	 */
	struct ABogSpider_Character_BP_C_Server_WebShootybang_Params
	{
	public:
		struct FVector                                             HitRelLoc_A;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8DV9[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              HitActor_A;                                              // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             HitRelLoc_B;                                             // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2BL5[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              HitActor_B;                                              // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_WebShootybang_One
	 */
	struct ABogSpider_Character_BP_C_Server_WebShootybang_One_Params
	{
	public:
		struct FVector                                             HitRelLoc;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RWIT[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              HitActor;                                                // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_SetWalkOnWaterState
	 */
	struct ABogSpider_Character_BP_C_Multi_SetWalkOnWaterState_Params
	{
	public:
		bool                                                       bNewState;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_SetWalkOnWaterState
	 */
	struct ABogSpider_Character_BP_C_Server_SetWalkOnWaterState_Params
	{
	public:
		bool                                                       bNewState;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_TryStickingToWall
	 */
	struct ABogSpider_Character_BP_C_Server_TryStickingToWall_Params
	{
	public:
		struct FVector                                             AtLocation;                                              // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_ReleaseEnsnaredChar
	 */
	struct ABogSpider_Character_BP_C_Server_ReleaseEnsnaredChar_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_UnstickFromWall
	 */
	struct ABogSpider_Character_BP_C_Server_UnstickFromWall_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_WebShootybang_BioGrapple
	 */
	struct ABogSpider_Character_BP_C_Server_WebShootybang_BioGrapple_Params
	{
	public:
		class AActor*                                              EnsnaredActor;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_ToggleTallModeState
	 */
	struct ABogSpider_Character_BP_C_Server_ToggleTallModeState_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_ToggleTallModeState
	 */
	struct ABogSpider_Character_BP_C_Multi_ToggleTallModeState_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_SpiderJump
	 */
	struct ABogSpider_Character_BP_C_Server_SpiderJump_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.DoSpiderJump
	 */
	struct ABogSpider_Character_BP_C_DoSpiderJump_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_SpiderJump
	 */
	struct ABogSpider_Character_BP_C_Multi_SpiderJump_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_OnWaterWalkingSurfaceStateChanged
	 */
	struct ABogSpider_Character_BP_C_Multi_OnWaterWalkingSurfaceStateChanged_Params
	{
	public:
		bool                                                       NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_DetachWeb
	 */
	struct ABogSpider_Character_BP_C_Server_DetachWeb_Params
	{
	public:
		bool                                                       bLeft;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_OnDoubleDetach
	 */
	struct ABogSpider_Character_BP_C_Multi_OnDoubleDetach_Params
	{
	public:
		bool                                                       bJumpDetach;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.FinishedReleasingEnsnaredChar
	 */
	struct ABogSpider_Character_BP_C_FinishedReleasingEnsnaredChar_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.ToggleTallModeAfterDelay
	 */
	struct ABogSpider_Character_BP_C_ToggleTallModeAfterDelay_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_DoGrapplePullJump
	 */
	struct ABogSpider_Character_BP_C_Multi_DoGrapplePullJump_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Client_OnShootWeb
	 */
	struct ABogSpider_Character_BP_C_Client_OnShootWeb_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_SyncWantsToWallStick
	 */
	struct ABogSpider_Character_BP_C_Server_SyncWantsToWallStick_Params
	{
	public:
		bool                                                       bWantsToStick;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.NextTick_SpawnCosmeticActors
	 */
	struct ABogSpider_Character_BP_C_NextTick_SpawnCosmeticActors_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_SyncInputs_OnInputChange
	 */
	struct ABogSpider_Character_BP_C_Server_SyncInputs_OnInputChange_Params
	{
	public:
		int32_t                                                    SyncInputBitMask;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_SyncInputs_Heartbeat
	 */
	struct ABogSpider_Character_BP_C_Server_SyncInputs_Heartbeat_Params
	{
	public:
		int32_t                                                    SyncInputBitMask;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetWebSprintToggle
	 */
	struct ABogSpider_Character_BP_C_SetWebSprintToggle_Params
	{
	public:
		bool                                                       NewToggle;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.ResetControlRot
	 */
	struct ABogSpider_Character_BP_C_ResetControlRot_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_SetActorRotation
	 */
	struct ABogSpider_Character_BP_C_Multi_SetActorRotation_Params
	{
	public:
		struct FRotator                                            NewRotation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bUseSoftSet;                                             // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Client_OnJumpDetach
	 */
	struct ABogSpider_Character_BP_C_Client_OnJumpDetach_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Client_DamageBrokeWebs
	 */
	struct ABogSpider_Character_BP_C_Client_DamageBrokeWebs_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.UnstickFromWallAfterDelay
	 */
	struct ABogSpider_Character_BP_C_UnstickFromWallAfterDelay_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_SetImpendingLand
	 */
	struct ABogSpider_Character_BP_C_Server_SetImpendingLand_Params
	{
	public:
		bool                                                       bNewVal;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_OnSetEnsnaredChar
	 */
	struct ABogSpider_Character_BP_C_Multi_OnSetEnsnaredChar_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_OnWebTethersCreated
	 */
	struct ABogSpider_Character_BP_C_Multi_OnWebTethersCreated_Params
	{
	public:
		struct FHitResult                                          WithTetherHit_Left;                                      // 0x0000(0x0088)  (Parm)
		struct FHitResult                                          WithTetherHit_Right;                                     // 0x0088(0x0088)  (Parm)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_OnStartChargeJump
	 */
	struct ABogSpider_Character_BP_C_Multi_OnStartChargeJump_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_DoChargeJump
	 */
	struct ABogSpider_Character_BP_C_Multi_DoChargeJump_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_CancelChargeJump
	 */
	struct ABogSpider_Character_BP_C_Multi_CancelChargeJump_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.OnTryWebShootyBang
	 */
	struct ABogSpider_Character_BP_C_OnTryWebShootyBang_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.ResetCreatingWeb
	 */
	struct ABogSpider_Character_BP_C_ResetCreatingWeb_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_OnWebShootybangFailed
	 */
	struct ABogSpider_Character_BP_C_Multi_OnWebShootybangFailed_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_TryDoAirJump
	 */
	struct ABogSpider_Character_BP_C_Server_TryDoAirJump_Params
	{
	public:
		struct FVector2D                                           WithMoveInputs;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             WithVelocity;                                            // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            WithControlRot;                                          // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.ResetCanAirJump
	 */
	struct ABogSpider_Character_BP_C_ResetCanAirJump_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_FireQuickWebs_Single
	 */
	struct ABogSpider_Character_BP_C_Server_FireQuickWebs_Single_Params
	{
	public:
		struct FVector                                             HitLocation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KB9Z[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              HitActor;                                                // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_FireQuickWebs_Both
	 */
	struct ABogSpider_Character_BP_C_Server_FireQuickWebs_Both_Params
	{
	public:
		struct FVector                                             HitLocation_A;                                           // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1EYZ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              HitActor_A;                                              // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             HitLocation_B;                                           // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OHB4[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              HitActor_B;                                              // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.CreateWebVisually_Left
	 */
	struct ABogSpider_Character_BP_C_CreateWebVisually_Left_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.CreateWebVisually_Right
	 */
	struct ABogSpider_Character_BP_C_CreateWebVisually_Right_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.BreakWebVisually_Left
	 */
	struct ABogSpider_Character_BP_C_BreakWebVisually_Left_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.BreakWebVisually_Right
	 */
	struct ABogSpider_Character_BP_C_BreakWebVisually_Right_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_SyncSpiderClimbingInputs
	 */
	struct ABogSpider_Character_BP_C_Server_SyncSpiderClimbingInputs_Params
	{
	public:
		struct FVector2D                                           Inputs;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.BlendSpiderVision_Play
	 */
	struct ABogSpider_Character_BP_C_BlendSpiderVision_Play_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.BlendSpiderVision_Reverse
	 */
	struct ABogSpider_Character_BP_C_BlendSpiderVision_Reverse_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.RefreshWaterWalkState
	 */
	struct ABogSpider_Character_BP_C_RefreshWaterWalkState_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Multi_OnQuickFireWebs
	 */
	struct ABogSpider_Character_BP_C_Multi_OnQuickFireWebs_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.StartWebSprintToggle
	 */
	struct ABogSpider_Character_BP_C_StartWebSprintToggle_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_StartChargeJump
	 */
	struct ABogSpider_Character_BP_C_Server_StartChargeJump_Params
	{
	public:
		double                                                     ClientTimestamp;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.Server_DoChargeJump
	 */
	struct ABogSpider_Character_BP_C_Server_DoChargeJump_Params
	{
	public:
		double                                                     ClientTimestamp;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetSpiderVisionBlendTime
	 */
	struct ABogSpider_Character_BP_C_SetSpiderVisionBlendTime_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.ResetSpiderTamingVars
	 */
	struct ABogSpider_Character_BP_C_ResetSpiderTamingVars_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.SetTamerAsRider
	 */
	struct ABogSpider_Character_BP_C_SetTamerAsRider_Params
	{	};

	/**
	 * Function BogSpider_Character_BP.BogSpider_Character_BP_C.ExecuteUbergraph_BogSpider_Character_BP
	 */
	struct ABogSpider_Character_BP_C_ExecuteUbergraph_BogSpider_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
