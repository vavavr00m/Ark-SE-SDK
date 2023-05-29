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
	 * Function Canoe_BP.Canoe_BP_C.AllowGrappling
	 */
	struct ACanoe_BP_C_AllowGrappling_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.OnCanoeAtRestStateChanged
	 */
	struct ACanoe_BP_C_OnCanoeAtRestStateChanged_Params
	{	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.UpdateCanoeAtRest
	 */
	struct ACanoe_BP_C_UpdateCanoeAtRest_Params
	{	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.GetCanoeVelocity_External
	 */
	struct ACanoe_BP_C_GetCanoeVelocity_External_Params
	{
	public:
		struct FVector                                             Velocity;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.GetCanoeVelocity
	 */
	struct ACanoe_BP_C_GetCanoeVelocity_Params
	{
	public:
		struct FVector                                             Velocity;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.BPAllowMovementSound
	 */
	struct ACanoe_BP_C_BPAllowMovementSound_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2BII[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.CanModifyCanoeDesiredRotation
	 */
	struct ACanoe_BP_C_CanModifyCanoeDesiredRotation_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.GetCanoeNumPassengers
	 */
	struct ACanoe_BP_C_GetCanoeNumPassengers_Params
	{
	public:
		int32_t                                                    NumPassengers;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q53D[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.DoesCanoeHaveAnyPassengers
	 */
	struct ACanoe_BP_C_DoesCanoeHaveAnyPassengers_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.IsPlayerCanoePassenger
	 */
	struct ACanoe_BP_C_IsPlayerCanoePassenger_Params
	{
	public:
		class AShooterCharacter*                                   CheckPlayer;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bResult;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.UpdateCanoeHudTextOverlay
	 */
	struct ACanoe_BP_C_UpdateCanoeHudTextOverlay_Params
	{	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.RemoveCanoeHudTextOverlayFromPassenger
	 */
	struct ACanoe_BP_C_RemoveCanoeHudTextOverlayFromPassenger_Params
	{
	public:
		class AShooterCharacter*                                   FromPassenger;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.AddCanoeHudTextOverlayToPassenger
	 */
	struct ACanoe_BP_C_AddCanoeHudTextOverlayToPassenger_Params
	{
	public:
		class AShooterCharacter*                                   ToPassenger;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.BPRemovedAttachmentsForItem
	 */
	struct ACanoe_BP_C_BPRemovedAttachmentsForItem_Params
	{
	public:
		class UPrimalItem*                                         anItem;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.BP_OnPaintingComponentInitialized
	 */
	struct ACanoe_BP_C_BP_OnPaintingComponentInitialized_Params
	{
	public:
		class UStructurePaintingComponent*                         PaintingComp;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.CanUsePassengerReplicatedInputQueue
	 */
	struct ACanoe_BP_C_CanUsePassengerReplicatedInputQueue_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.OnRep_bPreventCanoeExitingWater
	 */
	struct ACanoe_BP_C_OnRep_bPreventCanoeExitingWater_Params
	{	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.CanDynamicalyPreventExitingWater
	 */
	struct ACanoe_BP_C_CanDynamicalyPreventExitingWater_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TYRM[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.UpdateBeachInputHUD
	 */
	struct ACanoe_BP_C_UpdateBeachInputHUD_Params
	{	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.OnUpdateCanoePreventExitingWater
	 */
	struct ACanoe_BP_C_OnUpdateCanoePreventExitingWater_Params
	{
	public:
		bool                                                       bNewVal;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.UpdateCanoeWantsToBeach
	 */
	struct ACanoe_BP_C_UpdateCanoeWantsToBeach_Params
	{	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.BP_PreventMovementMode
	 */
	struct ACanoe_BP_C_BP_PreventMovementMode_Params
	{
	public:
		EMovementMode                                              NewMovementMode;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              NewCustomMode;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.UpdatePreventCanoeFromExitingWater
	 */
	struct ACanoe_BP_C_UpdatePreventCanoeFromExitingWater_Params
	{	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.PackInputAxesIntoVector2D
	 */
	struct ACanoe_BP_C_PackInputAxesIntoVector2D_Params
	{
	public:
		float                                                      Forward;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Right;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector2D                                           Result;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.ProcessReceivedPassengerInputsQueue_Right
	 */
	struct ACanoe_BP_C_ProcessReceivedPassengerInputsQueue_Right_Params
	{	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.ProcessReceivedPassengerInputsQueue_Forward
	 */
	struct ACanoe_BP_C_ProcessReceivedPassengerInputsQueue_Forward_Params
	{	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.ConvertServerReceivedPassengerInputsIntoVector2Ds
	 */
	struct ACanoe_BP_C_ConvertServerReceivedPassengerInputsIntoVector2Ds_Params
	{
	public:
		TArray<struct FVector2D>                                   Inputs;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.BP_OverrideSwimmingAcceleration
	 */
	struct ACanoe_BP_C_BP_OverrideSwimmingAcceleration_Params
	{
	public:
		struct FVector                                             ModifyAcceleration;                                      // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      DeltaTime;                                               // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.ReceivedSavedPassengerInputStruct
	 */
	struct ACanoe_BP_C_ReceivedSavedPassengerInputStruct_Params
	{
	public:
		struct FCanoePassengerClientInputAxes                      ClientSavedInputs;                                       // 0x0000(0x0010)  (Parm)
		class AShooterCharacter*                                   ForPassengerPlayer;                                      // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.BPOverridePassengerAdditiveAnim
	 */
	struct ACanoe_BP_C_BPOverridePassengerAdditiveAnim_Params
	{
	public:
		class APrimalCharacter*                                    ForPassenger;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequence*                                       ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.IsCanoeAdvancedSimProxy
	 */
	struct ACanoe_BP_C_IsCanoeAdvancedSimProxy_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.CleanUpAllOarWeapons
	 */
	struct ACanoe_BP_C_CleanUpAllOarWeapons_Params
	{	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.BP_OnSetDeath
	 */
	struct ACanoe_BP_C_BP_OnSetDeath_Params
	{	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.SetPlayerUseOarWeapon
	 */
	struct ACanoe_BP_C_SetPlayerUseOarWeapon_Params
	{
	public:
		class AShooterCharacter*                                   ForPlayer;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bNewUse;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A87H[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.BPAddedAttachmentsForItem
	 */
	struct ACanoe_BP_C_BPAddedAttachmentsForItem_Params
	{
	public:
		class UPrimalItem*                                         anItem;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.BPOnRefreshColorization
	 */
	struct ACanoe_BP_C_BPOnRefreshColorization_Params
	{
	public:
		TArray<struct FLinearColor>                                Colors;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.DebugPrintReplicatedInputs
	 */
	struct ACanoe_BP_C_DebugPrintReplicatedInputs_Params
	{	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.DebugCanoeMovementVars
	 */
	struct ACanoe_BP_C_DebugCanoeMovementVars_Params
	{	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.BPOverrideSwimmingVelocity
	 */
	struct ACanoe_BP_C_BPOverrideSwimmingVelocity_Params
	{
	public:
		struct FVector                                             InitialVelocity;                                         // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Gravity;                                                 // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      FluidFriction;                                           // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      NetBuoyancy;                                             // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DeltaTime;                                               // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x0024(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.TryRow
	 */
	struct ACanoe_BP_C_TryRow_Params
	{
	public:
		double                                                     WithGameTime;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.FetchLocallyControlledPassengerInputs
	 */
	struct ACanoe_BP_C_FetchLocallyControlledPassengerInputs_Params
	{	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.ForceClearPassengerInputs
	 */
	struct ACanoe_BP_C_ForceClearPassengerInputs_Params
	{	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.SetUseAdvancedCanoeSimMovement
	 */
	struct ACanoe_BP_C_SetUseAdvancedCanoeSimMovement_Params
	{
	public:
		bool                                                       bNewValue;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.ResetSimCanoeVars
	 */
	struct ACanoe_BP_C_ResetSimCanoeVars_Params
	{	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.BPOnMovementModeChangedNotify
	 */
	struct ACanoe_BP_C_BPOnMovementModeChangedNotify_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              PreviousCustomMode;                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.ShouldUseAdvancedSimMovement
	 */
	struct ACanoe_BP_C_ShouldUseAdvancedSimMovement_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.BP_OnBasedPawnRemovedNotify
	 */
	struct ACanoe_BP_C_BP_OnBasedPawnRemovedNotify_Params
	{
	public:
		class AActor*                                              RemovedActor;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.BP_OnBasedPawnAddedNotify
	 */
	struct ACanoe_BP_C_BP_OnBasedPawnAddedNotify_Params
	{
	public:
		class AActor*                                              AddedActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.DebugPerPassengerMovementVars
	 */
	struct ACanoe_BP_C_DebugPerPassengerMovementVars_Params
	{	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.UpdateCurrentPassengerInputs
	 */
	struct ACanoe_BP_C_UpdateCurrentPassengerInputs_Params
	{
	public:
		bool                                                       bAnyActive;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.OnRep_ReplicatedPassengerInputs
	 */
	struct ACanoe_BP_C_OnRep_ReplicatedPassengerInputs_Params
	{	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.UnpackReplicatedPassengerInputs
	 */
	struct ACanoe_BP_C_UnpackReplicatedPassengerInputs_Params
	{	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.PackReplicatedPassengerInputs
	 */
	struct ACanoe_BP_C_PackReplicatedPassengerInputs_Params
	{	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.PerformSimCanoeMovement
	 */
	struct ACanoe_BP_C_PerformSimCanoeMovement_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.BPTimerNonDedicated
	 */
	struct ACanoe_BP_C_BPTimerNonDedicated_Params
	{	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.BPTimerServer
	 */
	struct ACanoe_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.BP_OverrideCameraTargetOriginLocation
	 */
	struct ACanoe_BP_C_BP_OverrideCameraTargetOriginLocation_Params
	{
	public:
		struct FVector                                             OutOverrideOrigin;                                       // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		class FName                                                WithCameraStyle;                                         // 0x000C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.ReceiveHit
	 */
	struct ACanoe_BP_C_ReceiveHit_Params
	{
	public:
		class UPrimitiveComponent*                                 MyComp;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              Other;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSelfMoved;                                              // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8FXK[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             HitLocation;                                             // 0x001C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             HitNormal;                                               // 0x0028(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NormalImpulse;                                           // 0x0034(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FHitResult                                          Hit;                                                     // 0x0040(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.BPCanTakePassenger
	 */
	struct ACanoe_BP_C_BPCanTakePassenger_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    PassengerSeatIndex;                                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bForcePassenger;                                         // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bAllowFlyersAndWaterDinos;                               // 0x000D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000E(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IY4F[0x1];                                   // 0x000F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.GetPlayerSpawnLocation
	 */
	struct ACanoe_BP_C_GetPlayerSpawnLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C3BH[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.BPServerHandleNetExecCommand
	 */
	struct ACanoe_BP_C_BPServerHandleNetExecCommand_Params
	{
	public:
		class APlayerController*                                   FromPC;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                CommandName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0010(0x0040)  (Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.BPDinoPostBeginPlay
	 */
	struct ACanoe_BP_C_BPDinoPostBeginPlay_Params
	{	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.BP_ForceAllowAddBuff
	 */
	struct ACanoe_BP_C_BP_ForceAllowAddBuff_Params
	{
	public:
		class UClass*                                              BuffClass;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KIMQ[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.HandleFX
	 */
	struct ACanoe_BP_C_HandleFX_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.SortSeatsByDistance
	 */
	struct ACanoe_BP_C_SortSeatsByDistance_Params
	{
	public:
		struct FVector                                             ToLocation;                                              // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WYID[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrimalCharacter*                                    forCharacter;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FSaddlePassengerSeatDefinition>              SortedSeatDefinitons;                                    // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor)
		TArray<int32_t>                                            Sortedindices;                                           // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.BPCameraBaseOrientation
	 */
	struct ACanoe_BP_C_BPCameraBaseOrientation_Params
	{
	public:
		class APrimalCharacter*                                    viewingCharacter;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            ReturnValue;                                             // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1OKQ[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.BPLimitPlayerRotation
	 */
	struct ACanoe_BP_C_BPLimitPlayerRotation_Params
	{
	public:
		class APrimalCharacter*                                    viewingCharacter;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            InViewRotation;                                          // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            ReturnValue;                                             // 0x0014(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.BPModifyDesiredRotation
	 */
	struct ACanoe_BP_C_BPModifyDesiredRotation_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            InDesiredRotation;                                       // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FRotator                                            OutDesiredRotation;                                      // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.PassengerWeaponChanged
	 */
	struct ACanoe_BP_C_PassengerWeaponChanged_Params
	{
	public:
		class AShooterWeapon*                                      newWeapon;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.OnSpawnedForItem
	 */
	struct ACanoe_BP_C_OnSpawnedForItem_Params
	{
	public:
		class UPrimalItem*                                         ForItem;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.BP_ForceAllowMountedWeapon
	 */
	struct ACanoe_BP_C_BP_ForceAllowMountedWeapon_Params
	{
	public:
		class UClass*                                              WeaponTemplate;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.GetCurrentPassengerAxisInputs
	 */
	struct ACanoe_BP_C_GetCurrentPassengerAxisInputs_Params
	{
	public:
		bool                                                       bDebug;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bAnyActiveInputs;                                        // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HC19[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FVector2D>                                   PerPassengerInputs;                                      // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
		float                                                      AvgForward;                                              // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      AvgRight;                                                // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    NumActiveForward;                                        // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    NumActiveRight;                                          // 0x0024(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.BPNotifyClearPassenger
	 */
	struct ACanoe_BP_C_BPNotifyClearPassenger_Params
	{
	public:
		class APrimalCharacter*                                    PassengerChar;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    SeatIndex;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XYAS[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.BPNotifyAddPassenger
	 */
	struct ACanoe_BP_C_BPNotifyAddPassenger_Params
	{
	public:
		class APrimalCharacter*                                    PassengerChar;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    SeatIndex;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OLGO[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.PickupCanoe
	 */
	struct ACanoe_BP_C_PickupCanoe_Params
	{
	public:
		class AShooterCharacter*                                   forChar;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.BPTryMultiUse
	 */
	struct ACanoe_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.BPGetMultiUseEntries
	 */
	struct ACanoe_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.BPCanBeBaseForCharacter
	 */
	struct ACanoe_BP_C_BPCanBeBaseForCharacter_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H0TP[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.BPCanCryo
	 */
	struct ACanoe_BP_C_BPCanCryo_Params
	{
	public:
		class AShooterPlayerController*                            ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.ReceiveAnyDamage
	 */
	struct ACanoe_BP_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5F9P[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.UserConstructionScript
	 */
	struct ACanoe_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.DoPlayKnockAnimation
	 */
	struct ACanoe_BP_C_DoPlayKnockAnimation_Params
	{
	public:
		int32_t                                                    KnockDirectionIndex;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.Multicast_RefreshColors
	 */
	struct ACanoe_BP_C_Multicast_RefreshColors_Params
	{	};

	/**
	 * Function Canoe_BP.Canoe_BP_C.ExecuteUbergraph_Canoe_BP
	 */
	struct ACanoe_BP_C_ExecuteUbergraph_Canoe_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
