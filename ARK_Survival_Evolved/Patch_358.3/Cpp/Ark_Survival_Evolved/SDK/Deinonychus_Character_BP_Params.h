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
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsUsingZipline
	 */
	struct ADeinonychus_Character_BP_C_IsUsingZipline_Params
	{
	public:
		bool                                                       ret;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Is Playing Latched Jump Anim Public
	 */
	struct ADeinonychus_Character_BP_C_IsPlayingLatchedJumpAnimPublic_Params
	{
	public:
		float                                                      TimeFromEndToConsiderFinished;                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ret;                                                     // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.CanUpdateRotation
	 */
	struct ADeinonychus_Character_BP_C_CanUpdateRotation_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QPMN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.updateRotation
	 */
	struct ADeinonychus_Character_BP_C_updateRotation_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetUberpounceTraceStartingLocation
	 */
	struct ADeinonychus_Character_BP_C_GetUberpounceTraceStartingLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6CPU[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UpdateErrorTolerance
	 */
	struct ADeinonychus_Character_BP_C_UpdateErrorTolerance_Params
	{	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsValidUberpounceTargetingData
	 */
	struct ADeinonychus_Character_BP_C_IsValidUberpounceTargetingData_Params
	{
	public:
		struct FUberpounceData                                     TargetingData;                                           // 0x0000(0x0030)  (Parm)
		bool                                                       ret;                                                     // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.MultiRequestJumpFn
	 */
	struct ADeinonychus_Character_BP_C_MultiRequestJumpFn_Params
	{
	public:
		struct FVector                                             Velocity;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.CanContinueUberpounce
	 */
	struct ADeinonychus_Character_BP_C_CanContinueUberpounce_Params
	{
	public:
		bool                                                       ret;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KNTQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetDelayBeforeLatchAfterLatchedJump
	 */
	struct ADeinonychus_Character_BP_C_GetDelayBeforeLatchAfterLatchedJump_Params
	{
	public:
		float                                                      LatchedJumpTimeToAutoLatch;                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.JumpFromUberpounce
	 */
	struct ADeinonychus_Character_BP_C_JumpFromUberpounce_Params
	{
	public:
		float                                                      JumpStrength;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsPlayingLatchedJumpAnim
	 */
	struct ADeinonychus_Character_BP_C_IsPlayingLatchedJumpAnim_Params
	{
	public:
		float                                                      TimeFromEndToConsiderFinished;                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ret;                                                     // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LIHJ[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetTargetFOV
	 */
	struct ADeinonychus_Character_BP_C_GetTargetFOV_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerEndUberpounceFn
	 */
	struct ADeinonychus_Character_BP_C_ServerEndUberpounceFn_Params
	{
	public:
		struct FVector                                             Velocity;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7VEP[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimMontage*                                        MontageToPlayOnNonZeroVelocity;                          // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.TickSetRotation
	 */
	struct ADeinonychus_Character_BP_C_TickSetRotation_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UpdateRotationForUberpounce
	 */
	struct ADeinonychus_Character_BP_C_UpdateRotationForUberpounce_Params
	{
	public:
		float                                                      PercentDistanceToTarget;                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            TargetRotation;                                          // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ret;                                                     // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E51L[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetFallingLatchingAngles
	 */
	struct ADeinonychus_Character_BP_C_GetFallingLatchingAngles_Params
	{
	public:
		TArray<float>                                              FallingLatchingAngles;                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsValidUberpounceDataForLatching
	 */
	struct ADeinonychus_Character_BP_C_IsValidUberpounceDataForLatching_Params
	{
	public:
		struct FUberpounceData                                     Data;                                                    // 0x0000(0x0030)  (Parm)
		bool                                                       ret;                                                     // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsValidDirectionForLatchingSurfaceTrace
	 */
	struct ADeinonychus_Character_BP_C_IsValidDirectionForLatchingSurfaceTrace_Params
	{
	public:
		struct FVector                                             Direction;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPRemovedAsPassenger
	 */
	struct ADeinonychus_Character_BP_C_BPRemovedAsPassenger_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BP_OnEndCarried
	 */
	struct ADeinonychus_Character_BP_C_BP_OnEndCarried_Params
	{
	public:
		bool                                                       bFromDino;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bCancelAnyCarryBuffs;                                    // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0T7V[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPServerHandleNetExecCommand
	 */
	struct ADeinonychus_Character_BP_C_BPServerHandleNetExecCommand_Params
	{
	public:
		class APlayerController*                                   FromPC;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                CommandName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0010(0x0040)  (Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.OnNonInstanceJumpOffWallInput
	 */
	struct ADeinonychus_Character_BP_C_OnNonInstanceJumpOffWallInput_Params
	{
	public:
		float                                                      HoldTime;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetLatchJumpSpeedThresholdForRotate
	 */
	struct ADeinonychus_Character_BP_C_GetLatchJumpSpeedThresholdForRotate_Params
	{
	public:
		float                                                      Res;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.SpawnUberJumpFX
	 */
	struct ADeinonychus_Character_BP_C_SpawnUberJumpFX_Params
	{
	public:
		TArray<class FName>                                        AttachPointNames;                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		class UParticleSystem*                                     FXToSpawn;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            Rotation;                                                // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Is Recently Unlatched
	 */
	struct ADeinonychus_Character_BP_C_IsRecentlyUnlatched_Params
	{
	public:
		float                                                      Threshold;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ret;                                                     // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TRWS[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetCameraInterpSpeed
	 */
	struct ADeinonychus_Character_BP_C_GetCameraInterpSpeed_Params
	{
	public:
		float                                                      InterpSpeed;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.OnJumpFromGround
	 */
	struct ADeinonychus_Character_BP_C_OnJumpFromGround_Params
	{
	public:
		float                                                      HoldTime;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetUberpounceInterpSpeed
	 */
	struct ADeinonychus_Character_BP_C_GetUberpounceInterpSpeed_Params
	{
	public:
		float                                                      Speed;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.CalcCurrentJump Hold Time
	 */
	struct ADeinonychus_Character_BP_C_CalcCurrentJumpHoldTime_Params
	{
	public:
		float                                                      Result;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E55K[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ClearOutOfRangeData
	 */
	struct ADeinonychus_Character_BP_C_ClearOutOfRangeData_Params
	{	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetUberpounceRangeBase
	 */
	struct ADeinonychus_Character_BP_C_GetUberpounceRangeBase_Params
	{
	public:
		float                                                      ret;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetUberpounceMaxRange
	 */
	struct ADeinonychus_Character_BP_C_GetUberpounceMaxRange_Params
	{
	public:
		float                                                      ret;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UpdateTickThrottles
	 */
	struct ADeinonychus_Character_BP_C_UpdateTickThrottles_Params
	{	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPTimerNonDedicated
	 */
	struct ADeinonychus_Character_BP_C_BPTimerNonDedicated_Params
	{	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Throttled TickFn
	 */
	struct ADeinonychus_Character_BP_C_ThrottledTickFn_Params
	{	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPTimerServer
	 */
	struct ADeinonychus_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.On Uberpounce AttachedToLocation
	 */
	struct ADeinonychus_Character_BP_C_OnUberpounceAttachedToLocation_Params
	{	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ScheduleChecking Falling Latch
	 */
	struct ADeinonychus_Character_BP_C_ScheduleCheckingFallingLatch_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.TryAddPinnedBuff
	 */
	struct ADeinonychus_Character_BP_C_TryAddPinnedBuff_Params
	{
	public:
		class APrimalCharacter*                                    Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ApplyJump
	 */
	struct ADeinonychus_Character_BP_C_ApplyJump_Params
	{
	public:
		struct FVector                                             Velocity;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CPLV[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimMontage*                                        Anim;                                                    // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Get Pounce Latched Anim
	 */
	struct ADeinonychus_Character_BP_C_GetPounceLatchedAnim_Params
	{
	public:
		class UAnimMontage*                                        Anim;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                StartSectionName;                                        // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetInitialAnimationForUberpounce
	 */
	struct ADeinonychus_Character_BP_C_GetInitialAnimationForUberpounce_Params
	{
	public:
		bool                                                       QuickUberpounce;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U1RV[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimMontage*                                        OutAnim;                                                 // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                RetStartSectionName;                                     // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Los
	 */
	struct ADeinonychus_Character_BP_C_Los_Params
	{
	public:
		struct FVector                                             Start;                                                   // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             End;                                                     // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Radius;                                                  // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L5YH[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrimalCharacter*                                    Target;                                                  // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ret;                                                     // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.OnRep_UberpounceServerState
	 */
	struct ADeinonychus_Character_BP_C_OnRep_UberpounceServerState_Params
	{	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UberpounceSurface Normal Allows Sliding
	 */
	struct ADeinonychus_Character_BP_C_UberpounceSurfaceNormalAllowsSliding_Params
	{
	public:
		bool                                                       Allowed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BMS1[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Direction;                                               // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       EndUberpounce;                                           // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IOGC[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPDoAttack
	 */
	struct ADeinonychus_Character_BP_C_BPDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsGroundRotation
	 */
	struct ADeinonychus_Character_BP_C_IsGroundRotation_Params
	{
	public:
		struct FRotator                                            Rotation;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsCeiling;                                               // 0x000D(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5SX2[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsPounceTarget
	 */
	struct ADeinonychus_Character_BP_C_IsPounceTarget_Params
	{
	public:
		class APrimalCharacter*                                    Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UberpounceCollisionCheck
	 */
	struct ADeinonychus_Character_BP_C_UberpounceCollisionCheck_Params
	{
	public:
		bool                                                       RetHitSomething;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_28HV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.SpawnNestEgg
	 */
	struct ADeinonychus_Character_BP_C_SpawnNestEgg_Params
	{	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetUberpounceLocationOffsetForSocket
	 */
	struct ADeinonychus_Character_BP_C_GetUberpounceLocationOffsetForSocket_Params
	{
	public:
		struct FRotator                                            Rotation;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Offset;                                                  // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.TerrainCheck
	 */
	struct ADeinonychus_Character_BP_C_TerrainCheck_Params
	{
	public:
		struct FVector                                             Start;                                                   // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             End;                                                     // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Radius;                                                  // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HitSomething;                                            // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsAnotherDeinonychusAttachedToSocket
	 */
	struct ADeinonychus_Character_BP_C_IsAnotherDeinonychusAttachedToSocket_Params
	{
	public:
		class APrimalCharacter*                                    Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                Socket;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ret;                                                     // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8KKJ[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.AllowPlayMontage
	 */
	struct ADeinonychus_Character_BP_C_AllowPlayMontage_Params
	{
	public:
		class UAnimMontage*                                        AnimMontage;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_D3ST[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.OnPounceTargetDodged
	 */
	struct ADeinonychus_Character_BP_C_OnPounceTargetDodged_Params
	{
	public:
		class APrimalCharacter*                                    Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPModifyAimOffsetNoTarget
	 */
	struct ADeinonychus_Character_BP_C_BPModifyAimOffsetNoTarget_Params
	{
	public:
		struct FRotator                                            Aim;                                                     // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FRotator                                            ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Get Uberpounce Position Offset Curves
	 */
	struct ADeinonychus_Character_BP_C_GetUberpouncePositionOffsetCurves_Params
	{
	public:
		class UCurveFloat*                                         RetZOffset;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UCurveFloat*                                         RetXYMult;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Has Latchable SurfaceWhileFalling
	 */
	struct ADeinonychus_Character_BP_C_HasLatchableSurfaceWhileFalling_Params
	{
	public:
		bool                                                       RetSucccess;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KE28[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FUberpounceData                                     RetResultUberpounceData;                                 // 0x0008(0x0030)  (Parm, OutParm)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetInitialDamageOnUberpounceLatch
	 */
	struct ADeinonychus_Character_BP_C_GetInitialDamageOnUberpounceLatch_Params
	{
	public:
		class APrimalCharacter*                                    Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EYGR[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Get Uberpounce Stamina Cost Over Time
	 */
	struct ADeinonychus_Character_BP_C_GetUberpounceStaminaCostOverTime_Params
	{
	public:
		float                                                      StaminaCost;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SBYA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.DeductStamina
	 */
	struct ADeinonychus_Character_BP_C_DeductStamina_Params
	{
	public:
		float                                                      amount;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       SuccessfullyRemovedStamina;                              // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.OnPinnedBuffEnded
	 */
	struct ADeinonychus_Character_BP_C_OnPinnedBuffEnded_Params
	{
	public:
		class APrimalCharacter*                                    BuffTarget;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ComputeJumpVector
	 */
	struct ADeinonychus_Character_BP_C_ComputeJumpVector_Params
	{
	public:
		struct FVector                                             ret;                                                     // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.PushbackAfterPounceFn
	 */
	struct ADeinonychus_Character_BP_C_PushbackAfterPounceFn_Params
	{	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Latched Jump Launched
	 */
	struct ADeinonychus_Character_BP_C_LatchedJumpLaunched_Params
	{	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.LatchedJumpStart
	 */
	struct ADeinonychus_Character_BP_C_LatchedJumpStart_Params
	{	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ResetMeshRelativeRotation
	 */
	struct ADeinonychus_Character_BP_C_ResetMeshRelativeRotation_Params
	{	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.JumpPressedAndHeldFn
	 */
	struct ADeinonychus_Character_BP_C_JumpPressedAndHeldFn_Params
	{	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.CheckForFallingLatchFn
	 */
	struct ADeinonychus_Character_BP_C_CheckForFallingLatchFn_Params
	{
	public:
		bool                                                       AutoJumpAfterLatch;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.OnDeinonychusLatchedAttack
	 */
	struct ADeinonychus_Character_BP_C_OnDeinonychusLatchedAttack_Params
	{	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.AllowSurfaceNormalForUberpounce
	 */
	struct ADeinonychus_Character_BP_C_AllowSurfaceNormalForUberpounce_Params
	{
	public:
		struct FVector                                             surfaceNormal;                                           // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ret;                                                     // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_V4DH[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.TryAIBufferedUberpounce
	 */
	struct ADeinonychus_Character_BP_C_TryAIBufferedUberpounce_Params
	{	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.SetQueuedUberpounceData
	 */
	struct ADeinonychus_Character_BP_C_SetQueuedUberpounceData_Params
	{
	public:
		struct FUberpounceData                                     Data;                                                    // 0x0000(0x0030)  (Parm)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Get Uberpounce Transform Public
	 */
	struct ADeinonychus_Character_BP_C_GetUberpounceTransformPublic_Params
	{
	public:
		struct FUberpounceData                                     UberpounceData;                                          // 0x0000(0x0030)  (Parm)
		struct FVector                                             Location;                                                // 0x0030(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            Rotation;                                                // 0x003C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsGroundSurface;                                         // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GPDJ[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.OnUberpounceStateChanged
	 */
	struct ADeinonychus_Character_BP_C_OnUberpounceStateChanged_Params
	{
	public:
		EUberpounceState                                           NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EUberpounceState                                           PrevState;                                               // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.SetUberpounceState
	 */
	struct ADeinonychus_Character_BP_C_SetUberpounceState_Params
	{
	public:
		EUberpounceState                                           NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.LatchedJump
	 */
	struct ADeinonychus_Character_BP_C_LatchedJump_Params
	{
	public:
		float                                                      JumpStrength;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsLatchedAutoJump;                                       // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E4NA[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             WallHugDirection;                                        // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             DirectionOverride;                                       // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsNonAuthoritativeClient
	 */
	struct ADeinonychus_Character_BP_C_IsNonAuthoritativeClient_Params
	{
	public:
		bool                                                       ret;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.SendClientMovementAdjustments
	 */
	struct ADeinonychus_Character_BP_C_SendClientMovementAdjustments_Params
	{	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsDebugModeNonAuthoritativeClient
	 */
	struct ADeinonychus_Character_BP_C_IsDebugModeNonAuthoritativeClient_Params
	{
	public:
		bool                                                       ret;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.StartUberpounceFromFalling
	 */
	struct ADeinonychus_Character_BP_C_StartUberpounceFromFalling_Params
	{
	public:
		struct FUberpounceData                                     Data;                                                    // 0x0000(0x0030)  (Parm)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ClearQueuedData
	 */
	struct ADeinonychus_Character_BP_C_ClearQueuedData_Params
	{	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.on Jump Input Released
	 */
	struct ADeinonychus_Character_BP_C_onJumpInputReleased_Params
	{
	public:
		bool                                                       QueryOnly;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       PounceOnly;                                              // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       QueryOnlyOnGroundTarget;                                 // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OCR2[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FUberpounceData                                     UberpounceData;                                          // 0x0008(0x0030)  (Parm, OutParm)
		bool                                                       Result;                                                  // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PYU7[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrimalCharacter*                                    RaptorPounceTarget;                                      // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPHandleControllerInitiatedAttack
	 */
	struct ADeinonychus_Character_BP_C_BPHandleControllerInitiatedAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsValidGeoTypeForUberpounce
	 */
	struct ADeinonychus_Character_BP_C_IsValidGeoTypeForUberpounce_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       RetIsFoliage;                                            // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JOZR[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPAdjustAttackIndex
	 */
	struct ADeinonychus_Character_BP_C_BPAdjustAttackIndex_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.CanTryUberpounce
	 */
	struct ADeinonychus_Character_BP_C_CanTryUberpounce_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ResetMeshRelativeLocation
	 */
	struct ADeinonychus_Character_BP_C_ResetMeshRelativeLocation_Params
	{	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.K2_OnMovementModeChanged
	 */
	struct ADeinonychus_Character_BP_C_K2_OnMovementModeChanged_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EMovementMode                                              NewMovementMode;                                         // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              PrevCustomMode;                                          // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              NewCustomMode;                                           // 0x0003(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BP_OnJumpPressed
	 */
	struct ADeinonychus_Character_BP_C_BP_OnJumpPressed_Params
	{	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UberpounceFanTrace
	 */
	struct ADeinonychus_Character_BP_C_UberpounceFanTrace_Params
	{
	public:
		TArray<float>                                              FanAngles;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		struct FVector                                             Direction;                                               // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Start;                                                   // 0x001C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            Rotation;                                                // 0x0028(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DQMV[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FUberpounceData                                     ResultData;                                              // 0x0038(0x0030)  (Parm, OutParm)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.OnError
	 */
	struct ADeinonychus_Character_BP_C_OnError_Params
	{
	public:
		class FString                                              Msg;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ComputeBufferedUberpounce
	 */
	struct ADeinonychus_Character_BP_C_ComputeBufferedUberpounce_Params
	{
	public:
		struct FUberpounceData                                     CurrentUberpounceData;                                   // 0x0000(0x0030)  (Parm)
		struct FVector                                             PreviousUberpounceStartLocation;                         // 0x0030(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JMRR[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FUberpounceData                                     ResultData;                                              // 0x0040(0x0030)  (Parm, OutParm)
		bool                                                       IsValid;                                                 // 0x0070(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPOnDinoCheat
	 */
	struct ADeinonychus_Character_BP_C_BPOnDinoCheat_Params
	{
	public:
		class FName                                                CheatName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSetValue;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2YY2[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsUberpounceDataNearlyEqual
	 */
	struct ADeinonychus_Character_BP_C_IsUberpounceDataNearlyEqual_Params
	{
	public:
		struct FUberpounceData                                     L;                                                       // 0x0000(0x0030)  (Parm)
		struct FUberpounceData                                     R;                                                       // 0x0030(0x0030)  (Parm)
		float                                                      FloatErrorTolerance;                                     // 0x0060(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0064(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KB5Z[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.RidingTick
	 */
	struct ADeinonychus_Character_BP_C_RidingTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPOverrideGetAttackAnimationIndex
	 */
	struct ADeinonychus_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L3DP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UAnimMontage*>                                AnimationArray;                                          // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		int32_t                                                    ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.CanJumpInternal
	 */
	struct ADeinonychus_Character_BP_C_CanJumpInternal_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BP_OnJumpReleased
	 */
	struct ADeinonychus_Character_BP_C_BP_OnJumpReleased_Params
	{	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.OnLanded
	 */
	struct ADeinonychus_Character_BP_C_OnLanded_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C. Uberpounce Trace
	 */
	struct ADeinonychus_Character_BP_C_UberpounceTrace_Params
	{
	public:
		struct FVector                                             Start;                                                   // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             End;                                                     // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      InClosestTargetDistance;                                 // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       TraceForLocations;                                       // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZI8I[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             DeinonychusLocation;                                     // 0x0020(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            DeinonychusRotation;                                     // 0x002C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       DebugMode;                                               // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OSXU[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<float>                                              TraceRadii;                                              // 0x0040(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       CheckDinoDotProduct;                                     // 0x0050(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0T07[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             DotProductCompareVector;                                 // 0x0054(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DotProductThreshold;                                     // 0x0060(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             DotProductLocation;                                      // 0x0064(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       TraceForCharacters;                                      // 0x0070(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QEXU[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FUberpounceData                                     Result;                                                  // 0x0078(0x0030)  (Parm, OutParm)
		bool                                                       RetFoundTarget;                                          // 0x00A8(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       RetTargetOutOfRange;                                     // 0x00A9(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LXO3[0x2];                                   // 0x00AA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      RetClosestTargetDistance;                                // 0x00AC(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    RetFoundIndex;                                           // 0x00B0(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BlueprintDrawFloatingHUD
	 */
	struct ADeinonychus_Character_BP_C_BlueprintDrawFloatingHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterX;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterY;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DrawScale;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetCurrentSocketLevel
	 */
	struct ADeinonychus_Character_BP_C_GetCurrentSocketLevel_Params
	{
	public:
		class APrimalCharacter*                                    forCharacter;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    OutLevel;                                                // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Get Socket Level
	 */
	struct ADeinonychus_Character_BP_C_GetSocketLevel_Params
	{
	public:
		class FString                                              SocketName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor)
		int32_t                                                    OutLevel;                                                // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HVBF[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.EnableTurnToFaceRotation
	 */
	struct ADeinonychus_Character_BP_C_EnableTurnToFaceRotation_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.FindScreenEdgeLocation
	 */
	struct ADeinonychus_Character_BP_C_FindScreenEdgeLocation_Params
	{
	public:
		struct FVector                                             WorldLocation;                                           // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      EdgeMarginPct;                                           // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector2D                                           ScreenPosition;                                          // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetBleed HUDData for Character
	 */
	struct ADeinonychus_Character_BP_C_GetBleedHUDDataforCharacter_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    index;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector2D                                           WorldLocToScreenLoc;                                     // 0x000C(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector2D                                           ScreenLoc;                                               // 0x0014(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ProgressBar;                                             // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              RetBuffCountString;                                      // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor)
		class FString                                              DinoName;                                                // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor)
		float                                                      Scale;                                                   // 0x0040(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FLinearColor                                        TextColor;                                               // 0x0044(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0054(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0V8K[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPDrawToRiderHUD
	 */
	struct ADeinonychus_Character_BP_C_BPDrawToRiderHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.RemoveBleed
	 */
	struct ADeinonychus_Character_BP_C_RemoveBleed_Params
	{
	public:
		class APrimalCharacter*                                    Instigator;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.AddBleed
	 */
	struct ADeinonychus_Character_BP_C_AddBleed_Params
	{
	public:
		class APrimalCharacter*                                    Instigator;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetDebugString
	 */
	struct ADeinonychus_Character_BP_C_GetDebugString_Params
	{
	public:
		class FString                                              Output;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Get RotationAndLocation for UberpounceOnSurface
	 */
	struct ADeinonychus_Character_BP_C_GetRotationAndLocationforUberpounceOnSurface_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             surfaceNormal;                                           // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             DeinonychusLocation;                                     // 0x0020(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            retRotation;                                             // 0x002C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             retLocation;                                             // 0x0038(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Success;                                                 // 0x0044(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4GDZ[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsValidGeoLocationForUberpounce
	 */
	struct ADeinonychus_Character_BP_C_IsValidGeoLocationForUberpounce_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             surfaceNormal;                                           // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              Actor;                                                   // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             DeinonychusLocation;                                     // 0x0020(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            DeinonychusRotation;                                     // 0x002C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 HitComponent;                                            // 0x0038(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsGround;                                                // 0x0041(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsFoliage;                                               // 0x0042(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BP_InterceptTurnInput
	 */
	struct ADeinonychus_Character_BP_C_BP_InterceptTurnInput_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsUberpounceActive
	 */
	struct ADeinonychus_Character_BP_C_IsUberpounceActive_Params
	{
	public:
		bool                                                       Active;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPOverrideCameraViewTarget
	 */
	struct ADeinonychus_Character_BP_C_BPOverrideCameraViewTarget_Params
	{
	public:
		class FName                                                CurrentCameraMode;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             DesiredCameraLocation;                                   // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            DesiredCameraRotation;                                   // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DesiredFOV;                                              // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOverrideCameraLocation;                                 // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_68CC[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             CameraLocation;                                          // 0x0028(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOverrideCameraRotation;                                 // 0x0034(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T52K[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            CameraRotation;                                          // 0x0038(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOverrideCameraFOV;                                      // 0x0044(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ENVM[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      CameraFOV;                                               // 0x0048(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetUberpounceTransform
	 */
	struct ADeinonychus_Character_BP_C_GetUberpounceTransform_Params
	{
	public:
		struct FUberpounceData                                     UberpounceData;                                          // 0x0000(0x0030)  (Parm)
		struct FVector                                             Location;                                                // 0x0030(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            Rotation;                                                // 0x003C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsGroundSurface;                                         // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UpdateAttachedUberpounceFn
	 */
	struct ADeinonychus_Character_BP_C_UpdateAttachedUberpounceFn_Params
	{	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.SetUberpounceCollision
	 */
	struct ADeinonychus_Character_BP_C_SetUberpounceCollision_Params
	{
	public:
		bool                                                       UberpounceActive;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.DebugDrawRotator
	 */
	struct ADeinonychus_Character_BP_C_DebugDrawRotator_Params
	{
	public:
		struct FRotator                                            Rotator;                                                 // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DrawScale;                                               // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Location;                                                // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Duration;                                                // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Thinkness;                                               // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetUberpounceRotationFromSocket
	 */
	struct ADeinonychus_Character_BP_C_GetUberpounceRotationFromSocket_Params
	{
	public:
		class APrimalCharacter*                                    Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                Socket;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            Rotation;                                                // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.StopUberpounceTargeting
	 */
	struct ADeinonychus_Character_BP_C_StopUberpounceTargeting_Params
	{	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPNotifyClearRider
	 */
	struct ADeinonychus_Character_BP_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPGetHUDElements
	 */
	struct ADeinonychus_Character_BP_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.EndUberpounce
	 */
	struct ADeinonychus_Character_BP_C_EndUberpounce_Params
	{
	public:
		struct FVector                                             Velocity;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IWIF[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimMontage*                                        MontageToPlayOnNonZeroVelocity;                          // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BP_InterceptMoveForward
	 */
	struct ADeinonychus_Character_BP_C_BP_InterceptMoveForward_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BP_InterceptMoveRight
	 */
	struct ADeinonychus_Character_BP_C_BP_InterceptMoveRight_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UpdateUberpounceFn
	 */
	struct ADeinonychus_Character_BP_C_UpdateUberpounceFn_Params
	{	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.StartUberPounce
	 */
	struct ADeinonychus_Character_BP_C_StartUberPounce_Params
	{
	public:
		struct FUberpounceData                                     Data;                                                    // 0x0000(0x0030)  (Parm)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Find BestUberpounce Socket on Character
	 */
	struct ADeinonychus_Character_BP_C_FindBestUberpounceSocketonCharacter_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             StartTrace;                                              // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             EndTrace;                                                // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CurrentClosestSocketDistance;                            // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ImpactLocation;                                          // 0x0024(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      NewClosestSocketDistance;                                // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                RetTargetSocket;                                         // 0x0034(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_49K9[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMeshComponent*                                      RetTargetMesh;                                           // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       RetFoundSocket;                                          // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZRHG[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            RetTargetRotation;                                       // 0x004C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UpdateUberPounceTargetingFn
	 */
	struct ADeinonychus_Character_BP_C_UpdateUberPounceTargetingFn_Params
	{	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPNotifySetRider
	 */
	struct ADeinonychus_Character_BP_C_BPNotifySetRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderSetting;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.TryStartUberPounceTargeting
	 */
	struct ADeinonychus_Character_BP_C_TryStartUberPounceTargeting_Params
	{	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BlueprintCanAttack
	 */
	struct ADeinonychus_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9AO2[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BlueprintCanRiderAttack
	 */
	struct ADeinonychus_Character_BP_C_BlueprintCanRiderAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 */
	struct ADeinonychus_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UserConstructionScript
	 */
	struct ADeinonychus_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_249
	 */
	struct ADeinonychus_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_249_Params
	{	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_248
	 */
	struct ADeinonychus_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_248_Params
	{	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UpdateUberPounceTargeting
	 */
	struct ADeinonychus_Character_BP_C_UpdateUberPounceTargeting_Params
	{	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UpdateUberpounce
	 */
	struct ADeinonychus_Character_BP_C_UpdateUberpounce_Params
	{	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerEndUberpounce
	 */
	struct ADeinonychus_Character_BP_C_ServerEndUberpounce_Params
	{
	public:
		struct FVector                                             Velocity;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EZEH[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimMontage*                                        MontageToPlayOnNonZeroVelocity;                          // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UpdateAttachedUberpounce
	 */
	struct ADeinonychus_Character_BP_C_UpdateAttachedUberpounce_Params
	{	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerRequestUberpounce
	 */
	struct ADeinonychus_Character_BP_C_ServerRequestUberpounce_Params
	{
	public:
		struct FUberpounceData                                     QueuedUberpounceData;                                    // 0x0000(0x0030)  (Parm)
		bool                                                       QuickUberpounce;                                         // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.MultiEndUberpounce
	 */
	struct ADeinonychus_Character_BP_C_MultiEndUberpounce_Params
	{
	public:
		struct FVector                                             Velocity;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2H2B[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimMontage*                                        MontageToPlayOnNonZeroVelocity;                          // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.JumpPressedAndHeld
	 */
	struct ADeinonychus_Character_BP_C_JumpPressedAndHeld_Params
	{	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerRequestPounce
	 */
	struct ADeinonychus_Character_BP_C_ServerRequestPounce_Params
	{
	public:
		class APrimalCharacter*                                    Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ClearPounceEvent
	 */
	struct ADeinonychus_Character_BP_C_ClearPounceEvent_Params
	{	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerRequestJump
	 */
	struct ADeinonychus_Character_BP_C_ServerRequestJump_Params
	{
	public:
		struct FVector                                             Velocity;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.MultiRequestJump
	 */
	struct ADeinonychus_Character_BP_C_MultiRequestJump_Params
	{
	public:
		struct FVector                                             Velocity;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.MultiSetLocation
	 */
	struct ADeinonychus_Character_BP_C_MultiSetLocation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.MultiUpdateCurrentDataLocation
	 */
	struct ADeinonychus_Character_BP_C_MultiUpdateCurrentDataLocation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EUberpounceState                                           VerifiedState;                                           // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerStartUberpounceFromFalling
	 */
	struct ADeinonychus_Character_BP_C_ServerStartUberpounceFromFalling_Params
	{
	public:
		struct FUberpounceData                                     Data;                                                    // 0x0000(0x0030)  (Parm)
		struct FVector                                             Location;                                                // 0x0030(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            Rotation;                                                // 0x003C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.MultiStartUberpounceFromFalling
	 */
	struct ADeinonychus_Character_BP_C_MultiStartUberpounceFromFalling_Params
	{
	public:
		struct FUberpounceData                                     Data;                                                    // 0x0000(0x0030)  (Parm)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.QueuedUberpounce
	 */
	struct ADeinonychus_Character_BP_C_QueuedUberpounce_Params
	{	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ReceiveBeginPlay
	 */
	struct ADeinonychus_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.StartCheckingForFallingLatch
	 */
	struct ADeinonychus_Character_BP_C_StartCheckingForFallingLatch_Params
	{	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerRequestLatchedAutoJump
	 */
	struct ADeinonychus_Character_BP_C_ServerRequestLatchedAutoJump_Params
	{
	public:
		struct FVector                                             Velocity;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.CheckForFallingLatch
	 */
	struct ADeinonychus_Character_BP_C_CheckForFallingLatch_Params
	{	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerRequestLatchedJump
	 */
	struct ADeinonychus_Character_BP_C_ServerRequestLatchedJump_Params
	{
	public:
		struct FVector                                             Velocity;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.MultiOnPounceStarted
	 */
	struct ADeinonychus_Character_BP_C_MultiOnPounceStarted_Params
	{	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerEndPouncing
	 */
	struct ADeinonychus_Character_BP_C_ServerEndPouncing_Params
	{	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.MULTI_ApplyAtCliffTopVelocity
	 */
	struct ADeinonychus_Character_BP_C_MULTI_ApplyAtCliffTopVelocity_Params
	{	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.MULTI_TargetDodgedUberPounce
	 */
	struct ADeinonychus_Character_BP_C_MULTI_TargetDodgedUberPounce_Params
	{
	public:
		struct FVector                                             NewTargetLocation;                                       // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            NewTargetRotation;                                       // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APrimalCharacter*                                    OldTarget;                                               // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPUnstasis
	 */
	struct ADeinonychus_Character_BP_C_BPUnstasis_Params
	{	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.MULTI_SetLocation
	 */
	struct ADeinonychus_Character_BP_C_MULTI_SetLocation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UberpounceDesyncDetected
	 */
	struct ADeinonychus_Character_BP_C_UberpounceDesyncDetected_Params
	{	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerSetLocDuringLatchedJump
	 */
	struct ADeinonychus_Character_BP_C_ServerSetLocDuringLatchedJump_Params
	{
	public:
		struct FVector                                             Loc;                                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Client_CallServerMulticast_JumpFX
	 */
	struct ADeinonychus_Character_BP_C_Client_CallServerMulticast_JumpFX_Params
	{
	public:
		class UParticleSystem*                                     FXToSpawn;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<class FName>                                        AttachPointNames;                                        // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Multicast_JumpFX
	 */
	struct ADeinonychus_Character_BP_C_Multicast_JumpFX_Params
	{
	public:
		class UParticleSystem*                                     FXToSpawn;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<class FName>                                        AttachPointNames;                                        // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.SpawnLocalClinetSuperJumpFX
	 */
	struct ADeinonychus_Character_BP_C_SpawnLocalClinetSuperJumpFX_Params
	{	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerSlideInputPressed
	 */
	struct ADeinonychus_Character_BP_C_ServerSlideInputPressed_Params
	{	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerSlideInputReleased
	 */
	struct ADeinonychus_Character_BP_C_ServerSlideInputReleased_Params
	{	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.TimeOutUberpounceRequest
	 */
	struct ADeinonychus_Character_BP_C_TimeOutUberpounceRequest_Params
	{	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerUpdateTransformDuringLatchedJump
	 */
	struct ADeinonychus_Character_BP_C_ServerUpdateTransformDuringLatchedJump_Params
	{
	public:
		struct FVector                                             L;                                                       // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            R;                                                       // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ExecuteUbergraph_Deinonychus_Character_BP
	 */
	struct ADeinonychus_Character_BP_C_ExecuteUbergraph_Deinonychus_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.NewEventDispatcher__DelegateSignature
	 */
	struct ADeinonychus_Character_BP_C_NewEventDispatcher__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
