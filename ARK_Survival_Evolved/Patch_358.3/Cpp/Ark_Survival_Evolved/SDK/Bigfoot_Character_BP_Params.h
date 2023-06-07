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
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.UpdateAttackAnimWeights
	 */
	struct ABigfoot_Character_BP_C_UpdateAttackAnimWeights_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_44SU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPNotifySetRider
	 */
	struct ABigfoot_Character_BP_C_BPNotifySetRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderSetting;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPNotifyAddPassenger
	 */
	struct ABigfoot_Character_BP_C_BPNotifyAddPassenger_Params
	{
	public:
		class APrimalCharacter*                                    PassengerChar;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    SeatIndex;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K3D0[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPNotifyClearPassenger
	 */
	struct ABigfoot_Character_BP_C_BPNotifyClearPassenger_Params
	{
	public:
		class APrimalCharacter*                                    PassengerChar;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    SeatIndex;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3FRQ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.CanJumpInternal
	 */
	struct ABigfoot_Character_BP_C_CanJumpInternal_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.RemovePassengers
	 */
	struct ABigfoot_Character_BP_C_RemovePassengers_Params
	{	};

	/**
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BlueprintCanAttack
	 */
	struct ABigfoot_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A8AJ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BlueprintCanRiderAttack
	 */
	struct ABigfoot_Character_BP_C_BlueprintCanRiderAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPTryMultiUse
	 */
	struct ABigfoot_Character_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPGetMultiUseEntries
	 */
	struct ABigfoot_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.Update Non Dedi Limits
	 */
	struct ABigfoot_Character_BP_C_UpdateNonDediLimits_Params
	{	};

	/**
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.UpdateNonDediActive
	 */
	struct ABigfoot_Character_BP_C_UpdateNonDediActive_Params
	{	};

	/**
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.UpdateCrosshair
	 */
	struct ABigfoot_Character_BP_C_UpdateCrosshair_Params
	{	};

	/**
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.DrawCrosshairIfNeeded
	 */
	struct ABigfoot_Character_BP_C_DrawCrosshairIfNeeded_Params
	{	};

	/**
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.Get Throw Anim
	 */
	struct ABigfoot_Character_BP_C_GetThrowAnim_Params
	{
	public:
		bool                                                       overheadThrow;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1VEX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimMontage*                                        startThrowAnim;                                          // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.IsStartThrowAnimPlaying
	 */
	struct ABigfoot_Character_BP_C_IsStartThrowAnimPlaying_Params
	{
	public:
		bool                                                       IsPlaying;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.GetStartThrowAnim
	 */
	struct ABigfoot_Character_BP_C_GetStartThrowAnim_Params
	{
	public:
		bool                                                       overheadThrow;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SCEQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimMontage*                                        startThrowAnim;                                          // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.isGrabbing
	 */
	struct ABigfoot_Character_BP_C_isGrabbing_Params
	{
	public:
		bool                                                       isGrabbing;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IMFU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.On Throw Released
	 */
	struct ABigfoot_Character_BP_C_OnThrowReleased_Params
	{
	public:
		bool                                                       releasedOverhead;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.On Throw Pressed
	 */
	struct ABigfoot_Character_BP_C_OnThrowPressed_Params
	{
	public:
		bool                                                       overheadThrow;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.IsThrowing
	 */
	struct ABigfoot_Character_BP_C_IsThrowing_Params
	{
	public:
		bool                                                       retValue;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.GetLaunchDirection
	 */
	struct ABigfoot_Character_BP_C_GetLaunchDirection_Params
	{
	public:
		struct FVector                                             NewParam;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.LaunchAtTracePoint
	 */
	struct ABigfoot_Character_BP_C_LaunchAtTracePoint_Params
	{	};

	/**
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.ThrowGrabbedCharacters
	 */
	struct ABigfoot_Character_BP_C_ThrowGrabbedCharacters_Params
	{	};

	/**
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPOnMovementModeChangedNotify
	 */
	struct ABigfoot_Character_BP_C_BPOnMovementModeChangedNotify_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              PreviousCustomMode;                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPNotifyClearRider
	 */
	struct ABigfoot_Character_BP_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPCharacterSleeped
	 */
	struct ABigfoot_Character_BP_C_BPCharacterSleeped_Params
	{	};

	/**
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPDoAttack
	 */
	struct ABigfoot_Character_BP_C_BPDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.ServerStopThrow
	 */
	struct ABigfoot_Character_BP_C_ServerStopThrow_Params
	{	};

	/**
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPTimerNonDedicated
	 */
	struct ABigfoot_Character_BP_C_BPTimerNonDedicated_Params
	{	};

	/**
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.ProcessThrow
	 */
	struct ABigfoot_Character_BP_C_ProcessThrow_Params
	{	};

	/**
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.IsBigfootSubmerged
	 */
	struct ABigfoot_Character_BP_C_IsBigfootSubmerged_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C5ZJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.ShortestAngleDistance
	 */
	struct ABigfoot_Character_BP_C_ShortestAngleDistance_Params
	{
	public:
		float                                                      AngleCurrent;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      AngleTarget;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Difference;                                              // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.GetClampedLookDir
	 */
	struct ABigfoot_Character_BP_C_GetClampedLookDir_Params
	{
	public:
		bool                                                       LimitLowerPitch;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K59W[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             ReturnValue;                                             // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.ThrowTrace
	 */
	struct ABigfoot_Character_BP_C_ThrowTrace_Params
	{	};

	/**
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.CarryDino
	 */
	struct ABigfoot_Character_BP_C_CarryDino_Params
	{
	public:
		class APrimalCharacter*                                    dinoToCarry;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BlueprintAdjustOutputDamage
	 */
	struct ABigfoot_Character_BP_C_BlueprintAdjustOutputDamage_Params
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
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPHandleOnStopTargeting
	 */
	struct ABigfoot_Character_BP_C_BPHandleOnStopTargeting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.CanThrowRidingDino
	 */
	struct ABigfoot_Character_BP_C_CanThrowRidingDino_Params
	{
	public:
		bool                                                       canThrow;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YH93[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPHandleControllerInitiatedAttack
	 */
	struct ABigfoot_Character_BP_C_BPHandleControllerInitiatedAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BPModifyHarvestDamage
	 */
	struct ABigfoot_Character_BP_C_BPModifyHarvestDamage_Params
	{
	public:
		class UPrimalHarvestingComponent*                          harvestComponent;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      inDamage;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.UserConstructionScript
	 */
	struct ABigfoot_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_266
	 */
	struct ABigfoot_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_266_Params
	{	};

	/**
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_265
	 */
	struct ABigfoot_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_265_Params
	{	};

	/**
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_264
	 */
	struct ABigfoot_Character_BP_C_InpActEvt_Prone_K2Node_InputActionEvent_264_Params
	{	};

	/**
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_263
	 */
	struct ABigfoot_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_263_Params
	{	};

	/**
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_262
	 */
	struct ABigfoot_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_262_Params
	{	};

	/**
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.ServerRequestGrab
	 */
	struct ABigfoot_Character_BP_C_ServerRequestGrab_Params
	{
	public:
		bool                                                       buttonHeld;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.ServerRequestThrow
	 */
	struct ABigfoot_Character_BP_C_ServerRequestThrow_Params
	{
	public:
		bool                                                       buttonHeld;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.DelayedGrab
	 */
	struct ABigfoot_Character_BP_C_DelayedGrab_Params
	{	};

	/**
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.Server_TraceTargetDir
	 */
	struct ABigfoot_Character_BP_C_Server_TraceTargetDir_Params
	{
	public:
		struct FVector                                             AimLoc;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AimHit;                                                  // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ThrowInstant;                                            // 0x000D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.Multi_TraceTargetDir
	 */
	struct ABigfoot_Character_BP_C_Multi_TraceTargetDir_Params
	{
	public:
		struct FVector                                             AimLoc;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AimHit;                                                  // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.Request Throw
	 */
	struct ABigfoot_Character_BP_C_RequestThrow_Params
	{
	public:
		bool                                                       IsHolding;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ToggleAction;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       overheadThrow;                                           // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.StartThrowIdle
	 */
	struct ABigfoot_Character_BP_C_StartThrowIdle_Params
	{
	public:
		bool                                                       overheadThrow;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.Multi_SetPreventMovement
	 */
	struct ABigfoot_Character_BP_C_Multi_SetPreventMovement_Params
	{
	public:
		bool                                                       NewPreventMovement;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.ClearThrow
	 */
	struct ABigfoot_Character_BP_C_ClearThrow_Params
	{	};

	/**
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.DelayedThrowPress
	 */
	struct ABigfoot_Character_BP_C_DelayedThrowPress_Params
	{	};

	/**
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.DelayedClearThrowing
	 */
	struct ABigfoot_Character_BP_C_DelayedClearThrowing_Params
	{	};

	/**
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 */
	struct ABigfoot_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.RemovePassengers_Server
	 */
	struct ABigfoot_Character_BP_C_RemovePassengers_Server_Params
	{	};

	/**
	 * Function Bigfoot_Character_BP.Bigfoot_Character_BP_C.ExecuteUbergraph_Bigfoot_Character_BP
	 */
	struct ABigfoot_Character_BP_C_ExecuteUbergraph_Bigfoot_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
