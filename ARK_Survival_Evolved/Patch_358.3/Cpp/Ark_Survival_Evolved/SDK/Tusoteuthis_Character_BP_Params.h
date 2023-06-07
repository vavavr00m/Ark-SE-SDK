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
	 * Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.GetSocketForMeleeTraceForHitBlockers
	 */
	struct ATusoteuthis_Character_BP_C_GetSocketForMeleeTraceForHitBlockers_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                ReturnValue;                                             // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.BPDidClearCarriedCharacter
	 */
	struct ATusoteuthis_Character_BP_C_BPDidClearCarriedCharacter_Params
	{
	public:
		class APrimalCharacter*                                    PreviousCarriedCharacter;                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.BPDidSetCarriedCharacter
	 */
	struct ATusoteuthis_Character_BP_C_BPDidSetCarriedCharacter_Params
	{
	public:
		class APrimalCharacter*                                    PreviousCarriedCharacter;                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.BPTryMultiUse
	 */
	struct ATusoteuthis_Character_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.BPGetMultiUseEntries
	 */
	struct ATusoteuthis_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.PrepareForCrushingPrey
	 */
	struct ATusoteuthis_Character_BP_C_PrepareForCrushingPrey_Params
	{	};

	/**
	 * Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.BPNotifySetRider
	 */
	struct ATusoteuthis_Character_BP_C_BPNotifySetRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderSetting;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.BPNotifyClearRider
	 */
	struct ATusoteuthis_Character_BP_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.BPSetupTamed
	 */
	struct ATusoteuthis_Character_BP_C_BPSetupTamed_Params
	{
	public:
		bool                                                       bWasJustTamed;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.DoesPreyEscape
	 */
	struct ATusoteuthis_Character_BP_C_DoesPreyEscape_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.CanGrab
	 */
	struct ATusoteuthis_Character_BP_C_CanGrab_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BTGO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.BPFedWakingTameEvent
	 */
	struct ATusoteuthis_Character_BP_C_BPFedWakingTameEvent_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.GetDefaultDino
	 */
	struct ATusoteuthis_Character_BP_C_GetDefaultDino_Params
	{
	public:
		class ATusoteuthis_Character_BP_C*                         Ref;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.OnRep_UTurnTargetRot
	 */
	struct ATusoteuthis_Character_BP_C_OnRep_UTurnTargetRot_Params
	{	};

	/**
	 * Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 */
	struct ATusoteuthis_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.CheckForIsCrushingPrey
	 */
	struct ATusoteuthis_Character_BP_C_CheckForIsCrushingPrey_Params
	{	};

	/**
	 * Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.Update MovementByTurnState
	 */
	struct ATusoteuthis_Character_BP_C_UpdateMovementByTurnState_Params
	{	};

	/**
	 * Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.OnRep_bIsCrushingPrey
	 */
	struct ATusoteuthis_Character_BP_C_OnRep_bIsCrushingPrey_Params
	{	};

	/**
	 * Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.BPDoAttack
	 */
	struct ATusoteuthis_Character_BP_C_BPDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.CheckForResetTurn
	 */
	struct ATusoteuthis_Character_BP_C_CheckForResetTurn_Params
	{	};

	/**
	 * Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.BPTimerServer
	 */
	struct ATusoteuthis_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.CanTargetBeCrushed
	 */
	struct ATusoteuthis_Character_BP_C_CanTargetBeCrushed_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.ResetTurnState
	 */
	struct ATusoteuthis_Character_BP_C_ResetTurnState_Params
	{
	public:
		bool                                                       ForceReset;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.TurnAround
	 */
	struct ATusoteuthis_Character_BP_C_TurnAround_Params
	{
	public:
		bool                                                       newTurnState;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Y495[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.NetSetIsTurnedAround
	 */
	struct ATusoteuthis_Character_BP_C_NetSetIsTurnedAround_Params
	{
	public:
		bool                                                       NewValue;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       forceSuccess;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.OnRep_bIsTurnedAround
	 */
	struct ATusoteuthis_Character_BP_C_OnRep_bIsTurnedAround_Params
	{	};

	/**
	 * Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.TryCrushingPrey
	 */
	struct ATusoteuthis_Character_BP_C_TryCrushingPrey_Params
	{	};

	/**
	 * Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.RemoveCarryBuffFromPrey
	 */
	struct ATusoteuthis_Character_BP_C_RemoveCarryBuffFromPrey_Params
	{	};

	/**
	 * Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.SyphonHealthFromPrey
	 */
	struct ATusoteuthis_Character_BP_C_SyphonHealthFromPrey_Params
	{	};

	/**
	 * Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.DropPrey
	 */
	struct ATusoteuthis_Character_BP_C_DropPrey_Params
	{
	public:
		bool                                                       playDropAnim;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       forceSuccess;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QYV5[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.IsCrushingValidCharacter
	 */
	struct ATusoteuthis_Character_BP_C_IsCrushingValidCharacter_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.BlueprintCanAttack
	 */
	struct ATusoteuthis_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XO23[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5UI5[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.BlueprintCanRiderAttack
	 */
	struct ATusoteuthis_Character_BP_C_BlueprintCanRiderAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.ReceiveAnyDamage
	 */
	struct ATusoteuthis_Character_BP_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0F6B[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.UserConstructionScript
	 */
	struct ATusoteuthis_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.TurnMeshAround__FinishedFunc
	 */
	struct ATusoteuthis_Character_BP_C_TurnMeshAround__FinishedFunc_Params
	{	};

	/**
	 * Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.TurnMeshAround__UpdateFunc
	 */
	struct ATusoteuthis_Character_BP_C_TurnMeshAround__UpdateFunc_Params
	{	};

	/**
	 * Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.TurnMeshAround__Turnt__EventFunc
	 */
	struct ATusoteuthis_Character_BP_C_TurnMeshAround__Turnt__EventFunc_Params
	{	};

	/**
	 * Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.TurnActorAround__FinishedFunc
	 */
	struct ATusoteuthis_Character_BP_C_TurnActorAround__FinishedFunc_Params
	{	};

	/**
	 * Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.TurnActorAround__UpdateFunc
	 */
	struct ATusoteuthis_Character_BP_C_TurnActorAround__UpdateFunc_Params
	{	};

	/**
	 * Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.InpActEvt_Jump_K2Node_InputActionEvent_268
	 */
	struct ATusoteuthis_Character_BP_C_InpActEvt_Jump_K2Node_InputActionEvent_268_Params
	{	};

	/**
	 * Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.AnimNotify_ParalyzePrey
	 */
	struct ATusoteuthis_Character_BP_C_AnimNotify_ParalyzePrey_Params
	{	};

	/**
	 * Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.InkAttackFX
	 */
	struct ATusoteuthis_Character_BP_C_InkAttackFX_Params
	{	};

	/**
	 * Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.PlayAttackTurnTimeline
	 */
	struct ATusoteuthis_Character_BP_C_PlayAttackTurnTimeline_Params
	{	};

	/**
	 * Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.ReceiveBeginPlay
	 */
	struct ATusoteuthis_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.Multi_UpdateMovementByTurnState
	 */
	struct ATusoteuthis_Character_BP_C_Multi_UpdateMovementByTurnState_Params
	{	};

	/**
	 * Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.AnimNotify_DamagePrey
	 */
	struct ATusoteuthis_Character_BP_C_AnimNotify_DamagePrey_Params
	{	};

	/**
	 * Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.PlayUTurnTimeline
	 */
	struct ATusoteuthis_Character_BP_C_PlayUTurnTimeline_Params
	{	};

	/**
	 * Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.Server_JumpPressed
	 */
	struct ATusoteuthis_Character_BP_C_Server_JumpPressed_Params
	{	};

	/**
	 * Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.UpdateMovementAfterDelay
	 */
	struct ATusoteuthis_Character_BP_C_UpdateMovementAfterDelay_Params
	{	};

	/**
	 * Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.AnimNotify_GrabAllies
	 */
	struct ATusoteuthis_Character_BP_C_AnimNotify_GrabAllies_Params
	{	};

	/**
	 * Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.ExecuteUbergraph_Tusoteuthis_Character_BP
	 */
	struct ATusoteuthis_Character_BP_C_ExecuteUbergraph_Tusoteuthis_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
