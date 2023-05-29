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
	 * Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPNotifyBabyAgeIncrement
	 */
	struct AProcoptodon_Character_BP_C_BPNotifyBabyAgeIncrement_Params
	{
	public:
		float                                                      PreviousAge;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      NewAge;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPTimerServer
	 */
	struct AProcoptodon_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.UpdateNursingBuff
	 */
	struct AProcoptodon_Character_BP_C_UpdateNursingBuff_Params
	{
	public:
		bool                                                       ShouldAdd;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_V8CH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrimalCharacter*                                    TargetToNurse;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPNotifyMateBoostChanged
	 */
	struct AProcoptodon_Character_BP_C_BPNotifyMateBoostChanged_Params
	{	};

	/**
	 * Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPTimerNonDedicated
	 */
	struct AProcoptodon_Character_BP_C_BPTimerNonDedicated_Params
	{	};

	/**
	 * Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPNotifySetRider
	 */
	struct AProcoptodon_Character_BP_C_BPNotifySetRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderSetting;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPCharacterSleeped
	 */
	struct AProcoptodon_Character_BP_C_BPCharacterSleeped_Params
	{	};

	/**
	 * Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPNotifyClearRider
	 */
	struct AProcoptodon_Character_BP_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.ServerStopJump
	 */
	struct AProcoptodon_Character_BP_C_ServerStopJump_Params
	{	};

	/**
	 * Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPOnMovementModeChangedNotify
	 */
	struct AProcoptodon_Character_BP_C_BPOnMovementModeChangedNotify_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              PreviousCustomMode;                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CYIK[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.GetLaunchDirection
	 */
	struct AProcoptodon_Character_BP_C_GetLaunchDirection_Params
	{
	public:
		class AActor*                                              CalcActor;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.LaunchAtTracePoint
	 */
	struct AProcoptodon_Character_BP_C_LaunchAtTracePoint_Params
	{	};

	/**
	 * Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.ExecuteJump
	 */
	struct AProcoptodon_Character_BP_C_ExecuteJump_Params
	{	};

	/**
	 * Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.Prep Jump
	 */
	struct AProcoptodon_Character_BP_C_PrepJump_Params
	{	};

	/**
	 * Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.ShouldStopJumpRotation
	 */
	struct AProcoptodon_Character_BP_C_ShouldStopJumpRotation_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JVJF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.GetClampedLookDir
	 */
	struct AProcoptodon_Character_BP_C_GetClampedLookDir_Params
	{
	public:
		bool                                                       LimitLowerPitch;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8ZHM[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             ReturnValue;                                             // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.JumpingTrace
	 */
	struct AProcoptodon_Character_BP_C_JumpingTrace_Params
	{	};

	/**
	 * Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.ShortestAngleDistance
	 */
	struct AProcoptodon_Character_BP_C_ShortestAngleDistance_Params
	{
	public:
		float                                                      AngleCurrent;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      AngleTarget;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Difference;                                              // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPNotifyCarriedDinoBabyAgeIncrement
	 */
	struct AProcoptodon_Character_BP_C_BPNotifyCarriedDinoBabyAgeIncrement_Params
	{
	public:
		class APrimalDinoCharacter*                                AgingCarriedDino;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      PreviousAge;                                             // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      NewAge;                                                  // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.Find Leap Dir
	 */
	struct AProcoptodon_Character_BP_C_FindLeapDir_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPNotifyClearPassenger
	 */
	struct AProcoptodon_Character_BP_C_BPNotifyClearPassenger_Params
	{
	public:
		class APrimalCharacter*                                    PassengerChar;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    SeatIndex;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NST1[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BlueprintCanRiderAttack
	 */
	struct AProcoptodon_Character_BP_C_BlueprintCanRiderAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPNotifyAddPassenger
	 */
	struct AProcoptodon_Character_BP_C_BPNotifyAddPassenger_Params
	{
	public:
		class APrimalCharacter*                                    PassengerChar;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    SeatIndex;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EQC4[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BlueprintAdjustOutputDamage
	 */
	struct AProcoptodon_Character_BP_C_BlueprintAdjustOutputDamage_Params
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
	 * Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.Can Pouch Carry
	 */
	struct AProcoptodon_Character_BP_C_CanPouchCarry_Params
	{
	public:
		class AActor*                                              GrabTarget;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       SkipCarryCheck;                                          // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TUCA[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPServerHandleNetExecCommand
	 */
	struct AProcoptodon_Character_BP_C_BPServerHandleNetExecCommand_Params
	{
	public:
		class APlayerController*                                   FromPC;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                CommandName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0010(0x0040)  (Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VPIB[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.CreatePouchGrabbableEntry
	 */
	struct AProcoptodon_Character_BP_C_CreatePouchGrabbableEntry_Params
	{
	public:
		class APrimalCharacter*                                    CharToAdd;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              Name;                                                    // 0x0008(0x0010)  (Parm, ZeroConstructor)
		struct FMultiUseEntry                                      MultiUseEntry;                                           // 0x0018(0x0048)  (Parm, OutParm)
	};

	/**
	 * Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPTryMultiUse
	 */
	struct AProcoptodon_Character_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z43W[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPClientDoMultiUse
	 */
	struct AProcoptodon_Character_BP_C_BPClientDoMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ClientUseIndex;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPDoAttack
	 */
	struct AProcoptodon_Character_BP_C_BPDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPGetMultiUseEntries
	 */
	struct AProcoptodon_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.UserConstructionScript
	 */
	struct AProcoptodon_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.TryPouchGrab
	 */
	struct AProcoptodon_Character_BP_C_TryPouchGrab_Params
	{
	public:
		class APrimalCharacter*                                    TargetCharacter;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.AnimNotify_KickHop
	 */
	struct AProcoptodon_Character_BP_C_AnimNotify_KickHop_Params
	{	};

	/**
	 * Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BP_OnJumpPressed
	 */
	struct AProcoptodon_Character_BP_C_BP_OnJumpPressed_Params
	{	};

	/**
	 * Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BP_OnJumpReleased
	 */
	struct AProcoptodon_Character_BP_C_BP_OnJumpReleased_Params
	{	};

	/**
	 * Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.DelayedPress
	 */
	struct AProcoptodon_Character_BP_C_DelayedPress_Params
	{	};

	/**
	 * Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.Request Jump Response
	 */
	struct AProcoptodon_Character_BP_C_RequestJumpResponse_Params
	{
	public:
		bool                                                       isHoldingJump;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.Multi_SetPreventMovement
	 */
	struct AProcoptodon_Character_BP_C_Multi_SetPreventMovement_Params
	{
	public:
		bool                                                       NewPreventMovement;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.DelayedClearJumping
	 */
	struct AProcoptodon_Character_BP_C_DelayedClearJumping_Params
	{	};

	/**
	 * Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.Server_TraceTargetDir
	 */
	struct AProcoptodon_Character_BP_C_Server_TraceTargetDir_Params
	{
	public:
		struct FVector                                             AimLoc;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AimHit;                                                  // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       JumpInstant;                                             // 0x000D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.StartJumpIdle
	 */
	struct AProcoptodon_Character_BP_C_StartJumpIdle_Params
	{	};

	/**
	 * Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.ClearJump
	 */
	struct AProcoptodon_Character_BP_C_ClearJump_Params
	{
	public:
		bool                                                       ForceImmediateClear;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.Multi_TraceTargetDir
	 */
	struct AProcoptodon_Character_BP_C_Multi_TraceTargetDir_Params
	{
	public:
		struct FVector                                             AimLoc;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AimHit;                                                  // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.UpdateAllJumpRotation
	 */
	struct AProcoptodon_Character_BP_C_UpdateAllJumpRotation_Params
	{	};

	/**
	 * Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.UpdateJumpRotation
	 */
	struct AProcoptodon_Character_BP_C_UpdateJumpRotation_Params
	{	};

	/**
	 * Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.AnimNotify_JumpStart
	 */
	struct AProcoptodon_Character_BP_C_AnimNotify_JumpStart_Params
	{	};

	/**
	 * Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.RequestJumpReady
	 */
	struct AProcoptodon_Character_BP_C_RequestJumpReady_Params
	{	};

	/**
	 * Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.ServerArrestMovement
	 */
	struct AProcoptodon_Character_BP_C_ServerArrestMovement_Params
	{	};

	/**
	 * Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.ResetArrestMovement
	 */
	struct AProcoptodon_Character_BP_C_ResetArrestMovement_Params
	{	};

	/**
	 * Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.DelayedCarryingResponseBehavior
	 */
	struct AProcoptodon_Character_BP_C_DelayedCarryingResponseBehavior_Params
	{	};

	/**
	 * Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.ExecuteUbergraph_Procoptodon_Character_BP
	 */
	struct AProcoptodon_Character_BP_C_ExecuteUbergraph_Procoptodon_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
