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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanUpdateTetherLength
	 */
	struct ABuff_Grappled_BogSpider_C_CanUpdateTetherLength_Params
	{
	public:
		struct FGrappleTether                                      ForTether;                                               // 0x0000(0x0168)  (Parm, OutParm, ReferenceParm)
		float                                                      WithLength;                                              // 0x0168(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x016C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ShouldUseDynamicTetherTension
	 */
	struct ABuff_Grappled_BogSpider_C_ShouldUseDynamicTetherTension_Params
	{
	public:
		struct FGrappleTether                                      ForTether;                                               // 0x0000(0x0168)  (Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0168(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanDrawSpiderVisionOutlines
	 */
	struct ABuff_Grappled_BogSpider_C_CanDrawSpiderVisionOutlines_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.DisplayGrappleSystemHudNotification
	 */
	struct ABuff_Grappled_BogSpider_C_DisplayGrappleSystemHudNotification_Params
	{
	public:
		class AShooterPlayerController*                            ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              FromActor;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              NotificationType;                                        // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7L17[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    NotificationID;                                          // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              ReasonString;                                            // 0x0018(0x0010)  (Parm, ZeroConstructor)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ShouldReturnToIdleGrappleState
	 */
	struct ABuff_Grappled_BogSpider_C_ShouldReturnToIdleGrappleState_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.IsOwnerLookingAtAgainstSurface
	 */
	struct ABuff_Grappled_BogSpider_C_IsOwnerLookingAtAgainstSurface_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZWVX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanTraceForSwingCollisions
	 */
	struct ABuff_Grappled_BogSpider_C_CanTraceForSwingCollisions_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1E40[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ResetOwnerClientPositionErrorTolerance
	 */
	struct ABuff_Grappled_BogSpider_C_ResetOwnerClientPositionErrorTolerance_Params
	{	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetPullingSlingshotRatio
	 */
	struct ABuff_Grappled_BogSpider_C_GetPullingSlingshotRatio_Params
	{
	public:
		float                                                      Ratio;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.IsGrappledCharHardAttached
	 */
	struct ABuff_Grappled_BogSpider_C_IsGrappledCharHardAttached_Params
	{
	public:
		class APrimalCharacter*                                    forChar;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EEQV[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetGrappleTetherReleaseMaxVelocity
	 */
	struct ABuff_Grappled_BogSpider_C_GetGrappleTetherReleaseMaxVelocity_Params
	{
	public:
		class APrimalCharacter*                                    ForReleasingChar;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FGrappleTether                                      ForTether;                                               // 0x0008(0x0168)  (Parm, OutParm, ReferenceParm)
		float                                                      ReturnValue;                                             // 0x0170(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetMaxTetherLength
	 */
	struct ABuff_Grappled_BogSpider_C_GetMaxTetherLength_Params
	{
	public:
		struct FGrappleTether                                      ForTether;                                               // 0x0000(0x0168)  (Parm, OutParm, ReferenceParm)
		float                                                      ReturnValue;                                             // 0x0168(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetIdealSwingHeightAboveFloor
	 */
	struct ABuff_Grappled_BogSpider_C_GetIdealSwingHeightAboveFloor_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanSyncGrappleTetherLengths
	 */
	struct ABuff_Grappled_BogSpider_C_CanSyncGrappleTetherLengths_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.BPOverrideCharacterNewFallVelocity
	 */
	struct ABuff_Grappled_BogSpider_C_BPOverrideCharacterNewFallVelocity_Params
	{
	public:
		struct FVector                                             InitialVelocity;                                         // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             Gravity;                                                 // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      DeltaTime;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.OnSwingTracePredictedHitFound
	 */
	struct ABuff_Grappled_BogSpider_C_OnSwingTracePredictedHitFound_Params
	{
	public:
		struct FVector                                             AtHitLocation;                                           // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanUseWebSlingshot
	 */
	struct ABuff_Grappled_BogSpider_C_CanUseWebSlingshot_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ResetOwnerVars
	 */
	struct ABuff_Grappled_BogSpider_C_ResetOwnerVars_Params
	{	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.OnGrappledCharDeath
	 */
	struct ABuff_Grappled_BogSpider_C_OnGrappledCharDeath_Params
	{
	public:
		class APrimalCharacter*                                    DyingChar;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanBeGrappledAgainstSurface
	 */
	struct ABuff_Grappled_BogSpider_C_CanBeGrappledAgainstSurface_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.SetActorComponentsCustomDepthStencilValue
	 */
	struct ABuff_Grappled_BogSpider_C_SetActorComponentsCustomDepthStencilValue_Params
	{
	public:
		class AActor*                                              forActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    Value;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IBGN[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.SetActorComponentsRenderCustomDepth
	 */
	struct ABuff_Grappled_BogSpider_C_SetActorComponentsRenderCustomDepth_Params
	{
	public:
		class AActor*                                              forActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bRender;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_11G8[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.UpdateSpiderVisionActorBounds
	 */
	struct ABuff_Grappled_BogSpider_C_UpdateSpiderVisionActorBounds_Params
	{
	public:
		bool                                                       bReset;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DZTK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.SetSpiderVisionEnabled
	 */
	struct ABuff_Grappled_BogSpider_C_SetSpiderVisionEnabled_Params
	{
	public:
		class APlayerController*                                   ForController;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bEnabled;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.Tick_CheckForDeactivate
	 */
	struct ABuff_Grappled_BogSpider_C_Tick_CheckForDeactivate_Params
	{	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.BPDeactivated
	 */
	struct ABuff_Grappled_BogSpider_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.UpdateSpiderVisionPostProcess
	 */
	struct ABuff_Grappled_BogSpider_C_UpdateSpiderVisionPostProcess_Params
	{	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanPullChar
	 */
	struct ABuff_Grappled_BogSpider_C_CanPullChar_Params
	{
	public:
		class APrimalCharacter*                                    PullChar;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bForStart;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.IsPullingBioGrappledChar
	 */
	struct ABuff_Grappled_BogSpider_C_IsPullingBioGrappledChar_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.UpdateOwnerMovementSpeed
	 */
	struct ABuff_Grappled_BogSpider_C_UpdateOwnerMovementSpeed_Params
	{
	public:
		struct FVector                                             WithCharVelocity;                                        // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.OnGrappleTetherRemoved
	 */
	struct ABuff_Grappled_BogSpider_C_OnGrappleTetherRemoved_Params
	{
	public:
		struct FGrappleTether                                      RemovedTether;                                           // 0x0000(0x0168)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.OnGrappleTetherAdded
	 */
	struct ABuff_Grappled_BogSpider_C_OnGrappleTetherAdded_Params
	{
	public:
		struct FGrappleTether                                      AddedTether;                                             // 0x0000(0x0168)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.RotateSwingingVelocityWithLookDir
	 */
	struct ABuff_Grappled_BogSpider_C_RotateSwingingVelocityWithLookDir_Params
	{
	public:
		struct FVector                                             CurrentVelDir;                                           // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DeltaTime;                                               // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             RotatedVelDir;                                           // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             TargetVelDir;                                            // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.AddAntiGravityPullVelocity
	 */
	struct ABuff_Grappled_BogSpider_C_AddAntiGravityPullVelocity_Params
	{
	public:
		struct FVector                                             ToVelocity;                                              // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EXB0[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrimalCharacter*                                    forChar;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CheckForAutoBreakTether
	 */
	struct ABuff_Grappled_BogSpider_C_CheckForAutoBreakTether_Params
	{
	public:
		struct FGrappleTether                                      CheckTether;                                             // 0x0000(0x0168)  (Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0168(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ShouldReplicateOwnerInputs
	 */
	struct ABuff_Grappled_BogSpider_C_ShouldReplicateOwnerInputs_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OY3I[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetCurrentTetherMoveDir
	 */
	struct ABuff_Grappled_BogSpider_C_GetCurrentTetherMoveDir_Params
	{
	public:
		struct FGrappleTether                                      ForTether;                                               // 0x0000(0x0168)  (Parm, OutParm, ReferenceParm)
		struct FVector                                             ReturnValue;                                             // 0x0168(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ApplyTetherMoveVelocity
	 */
	struct ABuff_Grappled_BogSpider_C_ApplyTetherMoveVelocity_Params
	{
	public:
		struct FVector                                             CurrentVelocity;                                         // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      DeltaTime;                                               // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.SyncSlingshotRatios
	 */
	struct ABuff_Grappled_BogSpider_C_SyncSlingshotRatios_Params
	{
	public:
		bool                                                       bForceSync;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ForceStopSlingshot
	 */
	struct ABuff_Grappled_BogSpider_C_ForceStopSlingshot_Params
	{	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.IsSlingshotLaunching
	 */
	struct ABuff_Grappled_BogSpider_C_IsSlingshotLaunching_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.IsSlingshotLaunchingPure
	 */
	struct ABuff_Grappled_BogSpider_C_IsSlingshotLaunchingPure_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ClampGrappleVelocity
	 */
	struct ABuff_Grappled_BogSpider_C_ClampGrappleVelocity_Params
	{
	public:
		struct FVector                                             ClampVelocity;                                           // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XTI1[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetTetherBreakLimit_OwnerPastCurrentLengthDelta
	 */
	struct ABuff_Grappled_BogSpider_C_GetTetherBreakLimit_OwnerPastCurrentLengthDelta_Params
	{
	public:
		struct FGrappleTether                                      ForTether;                                               // 0x0000(0x0168)  (Parm, OutParm, ReferenceParm)
		float                                                      ReturnValue;                                             // 0x0168(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ShouldTetherBreak
	 */
	struct ABuff_Grappled_BogSpider_C_ShouldTetherBreak_Params
	{
	public:
		struct FGrappleTether                                      ForTether;                                               // 0x0000(0x0168)  (Parm, OutParm, ReferenceParm)
		class APrimalCharacter*                                    forChar;                                                 // 0x0168(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      OverrideBreakPastDist;                                   // 0x0170(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0174(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.IsSpiderTryingToSlingshot
	 */
	struct ABuff_Grappled_BogSpider_C_IsSpiderTryingToSlingshot_Params
	{
	public:
		struct FGrappleTether                                      ForTether;                                               // 0x0000(0x0168)  (Parm, OutParm, ReferenceParm)
		struct FVector                                             WithVelocity;                                            // 0x0168(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bResult;                                                 // 0x0174(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.SimulateTautTetherForces
	 */
	struct ABuff_Grappled_BogSpider_C_SimulateTautTetherForces_Params
	{
	public:
		struct FVector                                             WithCharVelocity;                                        // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      DeltaTime;                                               // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      LastGravityZ;                                            // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.BPGetGravityZScale
	 */
	struct ABuff_Grappled_BogSpider_C_BPGetGravityZScale_Params
	{
	public:
		float                                                      currentScale;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.IsTetherLeftWeb
	 */
	struct ABuff_Grappled_BogSpider_C_IsTetherLeftWeb_Params
	{
	public:
		struct FGrappleTether                                      Tether;                                                  // 0x0000(0x0168)  (Parm, OutParm, ReferenceParm)
		bool                                                       bIsWebTether;                                            // 0x0168(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsLeftWeb;                                              // 0x0169(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.WhichWebIsOnRightSideOfView
	 */
	struct ABuff_Grappled_BogSpider_C_WhichWebIsOnRightSideOfView_Params
	{
	public:
		struct FRotator                                            WithViewRot;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bLeft;                                                   // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2YIA[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanOwnerGrappleSwing
	 */
	struct ABuff_Grappled_BogSpider_C_CanOwnerGrappleSwing_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetCurrentGrappleState
	 */
	struct ABuff_Grappled_BogSpider_C_GetCurrentGrappleState_Params
	{
	public:
		struct FGrappleTether                                      ForTether;                                               // 0x0000(0x0168)  (Parm, OutParm, ReferenceParm)
		EGrappleState                                              ReturnValue;                                             // 0x0168(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanRotateCharVelocity
	 */
	struct ABuff_Grappled_BogSpider_C_CanRotateCharVelocity_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ModifyOverriddenCharVelocity
	 */
	struct ABuff_Grappled_BogSpider_C_ModifyOverriddenCharVelocity_Params
	{
	public:
		struct FVector                                             CurrentCharVelocity;                                     // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      DeltaTime;                                               // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.OnReleasedPrimalChar
	 */
	struct ABuff_Grappled_BogSpider_C_OnReleasedPrimalChar_Params
	{
	public:
		class APrimalCharacter*                                    ReleasedChar;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.OnGrappledPrimalChar
	 */
	struct ABuff_Grappled_BogSpider_C_OnGrappledPrimalChar_Params
	{
	public:
		class APrimalCharacter*                                    GrappledChar;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FGrappleTether                                      WithMasterTether;                                        // 0x0008(0x0168)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.IsValidSwingHit
	 */
	struct ABuff_Grappled_BogSpider_C_IsValidSwingHit_Params
	{
	public:
		struct FHitResult                                          CheckHit;                                                // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
		bool                                                       IsValid;                                                 // 0x0088(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_59ME[0x3];                                   // 0x0089(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ReceiveBeginPlay
	 */
	struct ABuff_Grappled_BogSpider_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ModifyTetherMoveVelocity
	 */
	struct ABuff_Grappled_BogSpider_C_ModifyTetherMoveVelocity_Params
	{
	public:
		struct FVector                                             CurrentMoveVelocity;                                     // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RQ0B[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGrappleTether                                      ForTether;                                               // 0x0010(0x0168)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.BuffTickServer
	 */
	struct ABuff_Grappled_BogSpider_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CheckForSwingCollision
	 */
	struct ABuff_Grappled_BogSpider_C_CheckForSwingCollision_Params
	{
	public:
		struct FVector                                             AtProjectedLocation;                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       foundHit;                                                // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4J2N[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          swingHit;                                                // 0x0010(0x0088)  (Parm, OutParm)
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.BuffTickClient
	 */
	struct ABuff_Grappled_BogSpider_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.Tick_TraceForSwingCollisions
	 */
	struct ABuff_Grappled_BogSpider_C_Tick_TraceForSwingCollisions_Params
	{	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetGrappleTetherPullMaxVelocity
	 */
	struct ABuff_Grappled_BogSpider_C_GetGrappleTetherPullMaxVelocity_Params
	{
	public:
		class APrimalCharacter*                                    ForPullingChar;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FGrappleTether                                      ForTether;                                               // 0x0008(0x0168)  (Parm, OutParm, ReferenceParm)
		float                                                      ReturnValue;                                             // 0x0170(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetGrappleTetherPullAcceleration
	 */
	struct ABuff_Grappled_BogSpider_C_GetGrappleTetherPullAcceleration_Params
	{
	public:
		class APrimalCharacter*                                    ForPullingChar;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FGrappleTether                                      ForTether;                                               // 0x0008(0x0168)  (Parm, OutParm, ReferenceParm)
		float                                                      ReturnValue;                                             // 0x0170(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.GetGrappleVelocityDampingRate
	 */
	struct ABuff_Grappled_BogSpider_C_GetGrappleVelocityDampingRate_Params
	{
	public:
		class APrimalCharacter*                                    forChar;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FGrappleTether                                      ForTether;                                               // 0x0008(0x0168)  (Parm, OutParm, ReferenceParm)
		float                                                      ReturnValue;                                             // 0x0170(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.CanChangeGrappleState
	 */
	struct ABuff_Grappled_BogSpider_C_CanChangeGrappleState_Params
	{
	public:
		unsigned char                                              DesiredGrappleState;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ShouldForceOwnerIntoFallingState
	 */
	struct ABuff_Grappled_BogSpider_C_ShouldForceOwnerIntoFallingState_Params
	{
	public:
		struct FGrappleTether                                      ForTether;                                               // 0x0000(0x0168)  (Parm, OutParm, ReferenceParm)
		struct FVector                                             WithOwnerVelocity;                                       // 0x0168(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		EMovementMode                                              CheckMovementModeOverride;                               // 0x0174(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0175(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.OnGrappleTethersChanged
	 */
	struct ABuff_Grappled_BogSpider_C_OnGrappleTethersChanged_Params
	{	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.EndGrapple
	 */
	struct ABuff_Grappled_BogSpider_C_EndGrapple_Params
	{	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.OnGrappleStateChangedNotify
	 */
	struct ABuff_Grappled_BogSpider_C_OnGrappleStateChangedNotify_Params
	{
	public:
		unsigned char                                              NewGrappleState;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		bool                                                       bIsEarlyNotify;                                          // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.UserConstructionScript
	 */
	struct ABuff_Grappled_BogSpider_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.Server_OnSwingTracePredictedHitFound
	 */
	struct ABuff_Grappled_BogSpider_C_Server_OnSwingTracePredictedHitFound_Params
	{
	public:
		struct FVector                                             AtProjectedLocation;                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.Multi_ForceStopSlingshot
	 */
	struct ABuff_Grappled_BogSpider_C_Multi_ForceStopSlingshot_Params
	{	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.Multi_SyncSlingshotRatios
	 */
	struct ABuff_Grappled_BogSpider_C_Multi_SyncSlingshotRatios_Params
	{
	public:
		struct FVector2D                                           Ratios;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Grappled_BogSpider.Buff_Grappled_BogSpider_C.ExecuteUbergraph_Buff_Grappled_BogSpider
	 */
	struct ABuff_Grappled_BogSpider_C_ExecuteUbergraph_Buff_Grappled_BogSpider_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
