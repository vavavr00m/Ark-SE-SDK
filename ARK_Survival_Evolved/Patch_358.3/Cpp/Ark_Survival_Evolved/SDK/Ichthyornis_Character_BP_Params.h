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
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPClientHandleNetExecCommand
	 */
	struct AIchthyornis_Character_BP_C_BPClientHandleNetExecCommand_Params
	{
	public:
		class FName                                                CommandName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0008(0x0040)  (Parm, OutParm, ReferenceParm)
		class APlayerController*                                   ForPC;                                                   // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5WRI[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.IsOverweightThreshold_F
	 */
	struct AIchthyornis_Character_BP_C_IsOverweightThreshold_F_Params
	{
	public:
		bool                                                       NewParam;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ESA6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPModifyHarvestingQuantity
	 */
	struct AIchthyornis_Character_BP_C_BPModifyHarvestingQuantity_Params
	{
	public:
		float                                                      originalQuantity;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NB37[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              resourceSelected;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T0RA[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CheckWeightCondition
	 */
	struct AIchthyornis_Character_BP_C_CheckWeightCondition_Params
	{
	public:
		class APrimalCharacter*                                    Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       shouldntAttack;                                          // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPDidClearCarriedCharacter
	 */
	struct AIchthyornis_Character_BP_C_BPDidClearCarriedCharacter_Params
	{
	public:
		class APrimalCharacter*                                    PreviousCarriedCharacter;                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.RemoveDragWeightIfNeeded
	 */
	struct AIchthyornis_Character_BP_C_RemoveDragWeightIfNeeded_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CancelAttack
	 */
	struct AIchthyornis_Character_BP_C_CancelAttack_Params
	{
	public:
		bool                                                       GoBackToOwner;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.GetTamedOrderFromAggressionState
	 */
	struct AIchthyornis_Character_BP_C_GetTamedOrderFromAggressionState_Params
	{
	public:
		int32_t                                                    aggressionState;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EDinoTamedOrder                                            tamedOrder;                                              // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPOnClearMountedDino
	 */
	struct AIchthyornis_Character_BP_C_BPOnClearMountedDino_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.OnCancelledAttack
	 */
	struct AIchthyornis_Character_BP_C_OnCancelledAttack_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.SetLastPlayerOrder
	 */
	struct AIchthyornis_Character_BP_C_SetLastPlayerOrder_Params
	{
	public:
		class APawn*                                               Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.StartGoBackToOwner
	 */
	struct AIchthyornis_Character_BP_C_StartGoBackToOwner_Params
	{
	public:
		bool                                                       isFailedLaunch;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Disable Landing
	 */
	struct AIchthyornis_Character_BP_C_DisableLanding_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.SetAttackStage
	 */
	struct AIchthyornis_Character_BP_C_SetAttackStage_Params
	{
	public:
		int32_t                                                    attackStage;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      BackToOwnerRadius;                                       // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isFailedLaunch;                                          // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.AllowLanding
	 */
	struct AIchthyornis_Character_BP_C_AllowLanding_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Set Aggression State
	 */
	struct AIchthyornis_Character_BP_C_SetAggressionState_Params
	{
	public:
		int32_t                                                    aggressionState;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Finish Attack
	 */
	struct AIchthyornis_Character_BP_C_FinishAttack_Params
	{
	public:
		bool                                                       forceFinish;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.On DeadPrey Actions
	 */
	struct AIchthyornis_Character_BP_C_OnDeadPreyActions_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Going Back to Owner Actions
	 */
	struct AIchthyornis_Character_BP_C_GoingBacktoOwnerActions_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DivingActions
	 */
	struct AIchthyornis_Character_BP_C_DivingActions_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPSetupTamed
	 */
	struct AIchthyornis_Character_BP_C_BPSetupTamed_Params
	{
	public:
		bool                                                       bWasJustTamed;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Improve HarvestingComponent for Dragged Character
	 */
	struct AIchthyornis_Character_BP_C_ImproveHarvestingComponentforDraggedCharacter_Params
	{
	public:
		class APrimalCharacter*                                    killedCharacter;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPKilledSomethingEvent
	 */
	struct AIchthyornis_Character_BP_C_BPKilledSomethingEvent_Params
	{
	public:
		class APrimalCharacter*                                    killedTarget;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.SetTargetForLaunchedAttack
	 */
	struct AIchthyornis_Character_BP_C_SetTargetForLaunchedAttack_Params
	{
	public:
		class APrimalCharacter*                                    NewTarget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DoLaunchAttack
	 */
	struct AIchthyornis_Character_BP_C_DoLaunchAttack_Params
	{
	public:
		class APrimalCharacter*                                    launchedTarget;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPOnTamedProcessOrder
	 */
	struct AIchthyornis_Character_BP_C_BPOnTamedProcessOrder_Params
	{
	public:
		class APrimalCharacter*                                    FromCharacter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EDinoTamedOrder                                            OrderType;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bForce;                                                  // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YJR7[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              enemyTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       orderNotExecuted;                                        // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H9UM[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.GetOwnerCharacter
	 */
	struct AIchthyornis_Character_BP_C_GetOwnerCharacter_Params
	{
	public:
		class APawn*                                               Owner;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Clear FocusAndAggression
	 */
	struct AIchthyornis_Character_BP_C_ClearFocusAndAggression_Params
	{
	public:
		EDinoTamedOrder                                            overrideTamedMode;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       useTameModeOverride;                                     // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Start LaunchAttack
	 */
	struct AIchthyornis_Character_BP_C_StartLaunchAttack_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Clear Launched Throw
	 */
	struct AIchthyornis_Character_BP_C_ClearLaunchedThrow_Params
	{
	public:
		bool                                                       disableLaunchVariable;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPCanAutodrag
	 */
	struct AIchthyornis_Character_BP_C_BPCanAutodrag_Params
	{
	public:
		class APrimalCharacter*                                    characterToDrag;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.SpawnWaterEffectsIfNeeded
	 */
	struct AIchthyornis_Character_BP_C_SpawnWaterEffectsIfNeeded_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.UpdateDamageFlag
	 */
	struct AIchthyornis_Character_BP_C_UpdateDamageFlag_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Is Water Dino or Swimming Amphibious
	 */
	struct AIchthyornis_Character_BP_C_IsWaterDinoorSwimmingAmphibious_Params
	{
	public:
		class APrimalCharacter*                                    Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isWaterOrAmph;                                           // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Can StealFromCharacter
	 */
	struct AIchthyornis_Character_BP_C_CanStealFromCharacter_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CanUse;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.OnOwnerReached
	 */
	struct AIchthyornis_Character_BP_C_OnOwnerReached_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.PreDiveDownRotationActions
	 */
	struct AIchthyornis_Character_BP_C_PreDiveDownRotationActions_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.UseEmergencyDiveUp
	 */
	struct AIchthyornis_Character_BP_C_UseEmergencyDiveUp_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CanUseBiteAttack
	 */
	struct AIchthyornis_Character_BP_C_CanUseBiteAttack_Params
	{
	public:
		class APrimalCharacter*                                    Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CanUse;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1O2Z[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.OnLaunched
	 */
	struct AIchthyornis_Character_BP_C_OnLaunched_Params
	{
	public:
		struct FVector                                             LaunchVelocity;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bXYOverride;                                             // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bZOverride;                                              // 0x000D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8AGI[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPCharacterSleeped
	 */
	struct AIchthyornis_Character_BP_C_BPCharacterSleeped_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.GetDiveDownDelay
	 */
	struct AIchthyornis_Character_BP_C_GetDiveDownDelay_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPOnMovementModeChangedNotify
	 */
	struct AIchthyornis_Character_BP_C_BPOnMovementModeChangedNotify_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              PreviousCustomMode;                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.OnClearCarriedCharacter
	 */
	struct AIchthyornis_Character_BP_C_OnClearCarriedCharacter_Params
	{
	public:
		bool                                                       stopTimerServer;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_815L[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrimalCharacter*                                    PreviousCarriedCharacter;                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Can Use Wild Dive
	 */
	struct AIchthyornis_Character_BP_C_CanUseWildDive_Params
	{
	public:
		class APrimalCharacter*                                    Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       canDoAttack;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CanUseDiveAttack
	 */
	struct AIchthyornis_Character_BP_C_CanUseDiveAttack_Params
	{
	public:
		class APrimalCharacter*                                    Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       canUseAttack;                                            // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_X05A[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.ApplyChewDamage
	 */
	struct AIchthyornis_Character_BP_C_ApplyChewDamage_Params
	{
	public:
		float                                                      amount;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.SetDivingState
	 */
	struct AIchthyornis_Character_BP_C_SetDivingState_Params
	{
	public:
		int32_t                                                    NewState;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       forceSetState;                                           // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.OnRep_divingStatus
	 */
	struct AIchthyornis_Character_BP_C_OnRep_divingStatus_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPOnSetMountedDino
	 */
	struct AIchthyornis_Character_BP_C_BPOnSetMountedDino_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.UnequipOrSteal
	 */
	struct AIchthyornis_Character_BP_C_UnequipOrSteal_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       couldSteal;                                              // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VJQ2[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.ChangeHuntingMode
	 */
	struct AIchthyornis_Character_BP_C_ChangeHuntingMode_Params
	{
	public:
		int32_t                                                    NewMode;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       changeToNextMode;                                        // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       onlyUpdateOffsets;                                       // 0x0005(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_32YW[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CanUseGrabAttack
	 */
	struct AIchthyornis_Character_BP_C_CanUseGrabAttack_Params
	{
	public:
		class APrimalCharacter*                                    PrimalCharacter;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CanUse;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Remove Weapon
	 */
	struct AIchthyornis_Character_BP_C_RemoveWeapon_Params
	{
	public:
		class APrimalCharacter*                                    Owner;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OOJK[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Remove Helmet
	 */
	struct AIchthyornis_Character_BP_C_RemoveHelmet_Params
	{
	public:
		class APrimalCharacter*                                    Owner;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CanStealItem
	 */
	struct AIchthyornis_Character_BP_C_CanStealItem_Params
	{
	public:
		class UPrimalItem*                                         Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isFoodItem;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       canSteal;                                                // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZDTY[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DoStealItem
	 */
	struct AIchthyornis_Character_BP_C_DoStealItem_Params
	{
	public:
		class APrimalCharacter*                                    CharacterToStealFrom;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimalItem*                                         itemToSteal;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Success;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YQBE[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.TryToStealFoodItem
	 */
	struct AIchthyornis_Character_BP_C_TryToStealFoodItem_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    NumItems;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       stoleFood;                                               // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QBM2[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.ReceiveAnyDamage
	 */
	struct AIchthyornis_Character_BP_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QN2W[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CarryingLivePreyActions
	 */
	struct AIchthyornis_Character_BP_C_CarryingLivePreyActions_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Rotate Z To Point
	 */
	struct AIchthyornis_Character_BP_C_RotateZToPoint_Params
	{
	public:
		struct FVector                                             offsetFromCurrentLocation;                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Time;                                                    // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.OnCarriedCharacter
	 */
	struct AIchthyornis_Character_BP_C_OnCarriedCharacter_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Start Follow Player
	 */
	struct AIchthyornis_Character_BP_C_StartFollowPlayer_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BlueprintDrawFloatingHUD
	 */
	struct AIchthyornis_Character_BP_C_BlueprintDrawFloatingHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterX;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterY;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DrawScale;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPGetMultiUseEntries
	 */
	struct AIchthyornis_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPTryMultiUse
	 */
	struct AIchthyornis_Character_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPCanDragCharacter
	 */
	struct AIchthyornis_Character_BP_C_BPCanDragCharacter_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BlueprintAdjustOutputDamage
	 */
	struct AIchthyornis_Character_BP_C_BlueprintAdjustOutputDamage_Params
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
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPTimerServer
	 */
	struct AIchthyornis_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPDidSetCarriedCharacter
	 */
	struct AIchthyornis_Character_BP_C_BPDidSetCarriedCharacter_Params
	{
	public:
		class APrimalCharacter*                                    PreviousCarriedCharacter;                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Calculate Dive Up Impulse
	 */
	struct AIchthyornis_Character_BP_C_CalculateDiveUpImpulse_Params
	{
	public:
		float                                                      immersionDepth;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Impulse;                                                 // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CanGrabPawn
	 */
	struct AIchthyornis_Character_BP_C_CanGrabPawn_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CanGrab;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Rotate Z to Target
	 */
	struct AIchthyornis_Character_BP_C_RotateZtoTarget_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Calculate DiveDown Impulse
	 */
	struct AIchthyornis_Character_BP_C_CalculateDiveDownImpulse_Params
	{
	public:
		struct FVector                                             Impulse;                                                 // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Can UseRegularDive
	 */
	struct AIchthyornis_Character_BP_C_CanUseRegularDive_Params
	{
	public:
		class APrimalCharacter*                                    Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       canDoAttack;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPDoAttack
	 */
	struct AIchthyornis_Character_BP_C_BPDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SLE2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BlueprintCanAttack
	 */
	struct AIchthyornis_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_64LK[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8FWI[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.UserConstructionScript
	 */
	struct AIchthyornis_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.RotationToTarget__FinishedFunc
	 */
	struct AIchthyornis_Character_BP_C_RotationToTarget__FinishedFunc_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.RotationToTarget__UpdateFunc
	 */
	struct AIchthyornis_Character_BP_C_RotationToTarget__UpdateFunc_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DiveAttack
	 */
	struct AIchthyornis_Character_BP_C_DiveAttack_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.PreDiveDownActions
	 */
	struct AIchthyornis_Character_BP_C_PreDiveDownActions_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.StartDiveUp
	 */
	struct AIchthyornis_Character_BP_C_StartDiveUp_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.FinishDiveDown
	 */
	struct AIchthyornis_Character_BP_C_FinishDiveDown_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.PreDiveUpActions
	 */
	struct AIchthyornis_Character_BP_C_PreDiveUpActions_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.PostDiveUpActions
	 */
	struct AIchthyornis_Character_BP_C_PostDiveUpActions_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.SlowlyRotateZTo
	 */
	struct AIchthyornis_Character_BP_C_SlowlyRotateZTo_Params
	{
	public:
		struct FRotator                                            TargetRotation;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Time;                                                    // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            initialRotation;                                         // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DropCarriedAfterTime
	 */
	struct AIchthyornis_Character_BP_C_DropCarriedAfterTime_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       dropDragged;                                             // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       DropCarried;                                             // 0x0005(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       restoreFollowingVariables;                               // 0x0006(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DropCarried
	 */
	struct AIchthyornis_Character_BP_C_DropCarried_Params
	{
	public:
		bool                                                       dropDragged;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       DropCarried;                                             // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       restoreFollowingVariables;                               // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.SpawnWaterParticles
	 */
	struct AIchthyornis_Character_BP_C_SpawnWaterParticles_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 */
	struct AIchthyornis_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DebugTrajectory_Multicast
	 */
	struct AIchthyornis_Character_BP_C_DebugTrajectory_Multicast_Params
	{
	public:
		struct FVector                                             beginning;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             End;                                                     // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DebugTrajectory
	 */
	struct AIchthyornis_Character_BP_C_DebugTrajectory_Params
	{
	public:
		struct FVector                                             beginning;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             End;                                                     // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.FinishDiveUp
	 */
	struct AIchthyornis_Character_BP_C_FinishDiveUp_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.CheckForWaterEffects
	 */
	struct AIchthyornis_Character_BP_C_CheckForWaterEffects_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.ShowBag_Multicast
	 */
	struct AIchthyornis_Character_BP_C_ShowBag_Multicast_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.HideBag_Multicast
	 */
	struct AIchthyornis_Character_BP_C_HideBag_Multicast_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.ShowBag
	 */
	struct AIchthyornis_Character_BP_C_ShowBag_Params
	{
	public:
		bool                                                       IsDiving;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.EnablePendingEatAnim
	 */
	struct AIchthyornis_Character_BP_C_EnablePendingEatAnim_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.HarvestPreyAfterDelay
	 */
	struct AIchthyornis_Character_BP_C_HarvestPreyAfterDelay_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.SpawnVitaminEffects_Multicast
	 */
	struct AIchthyornis_Character_BP_C_SpawnVitaminEffects_Multicast_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DebugTrajectorySphere_Multicast
	 */
	struct AIchthyornis_Character_BP_C_DebugTrajectorySphere_Multicast_Params
	{
	public:
		struct FVector                                             beginning;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             End;                                                     // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Radius;                                                  // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.DebugTrajectorySphere
	 */
	struct AIchthyornis_Character_BP_C_DebugTrajectorySphere_Params
	{
	public:
		struct FVector                                             beginning;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             End;                                                     // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Radius;                                                  // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.BPUnstasis
	 */
	struct AIchthyornis_Character_BP_C_BPUnstasis_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.ReceiveBeginPlay
	 */
	struct AIchthyornis_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.InitializeLandingVariables
	 */
	struct AIchthyornis_Character_BP_C_InitializeLandingVariables_Params
	{	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.Debug_TorporAfterTime
	 */
	struct AIchthyornis_Character_BP_C_Debug_TorporAfterTime_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.GoBackToOwnerAfterDelay
	 */
	struct AIchthyornis_Character_BP_C_GoBackToOwnerAfterDelay_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isFailedLaunch;                                          // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ichthyornis_Character_BP.Ichthyornis_Character_BP_C.ExecuteUbergraph_Ichthyornis_Character_BP
	 */
	struct AIchthyornis_Character_BP_C_ExecuteUbergraph_Ichthyornis_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
