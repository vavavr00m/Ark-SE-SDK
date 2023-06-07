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
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPAllowCarryCharacter
	 */
	struct ARhynio_Character_BP_C_BPAllowCarryCharacter_Params
	{
	public:
		class APrimalCharacter*                                    checkCharacter;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_V8MC[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.GiveDossierToImprinter
	 */
	struct ARhynio_Character_BP_C_GiveDossierToImprinter_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.DisableSelectRagdollBones
	 */
	struct ARhynio_Character_BP_C_DisableSelectRagdollBones_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.ClearImpregAttackAnimVars
	 */
	struct ARhynio_Character_BP_C_ClearImpregAttackAnimVars_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.BackupCancelPendingAttachStructure
	 */
	struct ARhynio_Character_BP_C_BackupCancelPendingAttachStructure_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.RefreshMovementMode
	 */
	struct ARhynio_Character_BP_C_RefreshMovementMode_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.UpdatePassengerCamBuff
	 */
	struct ARhynio_Character_BP_C_UpdatePassengerCamBuff_Params
	{
	public:
		class APrimalCharacter*                                    Passenger;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Clear;                                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_W9E6[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPNotifyClearPassenger
	 */
	struct ARhynio_Character_BP_C_BPNotifyClearPassenger_Params
	{
	public:
		class APrimalCharacter*                                    PassengerChar;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    SeatIndex;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0MEC[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPNotifyAddPassenger
	 */
	struct ARhynio_Character_BP_C_BPNotifyAddPassenger_Params
	{
	public:
		class APrimalCharacter*                                    PassengerChar;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    SeatIndex;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_V8BJ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.UpdateLatchedFPVCam
	 */
	struct ARhynio_Character_BP_C_UpdateLatchedFPVCam_Params
	{
	public:
		class AShooterPlayerController*                            RiderPC;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AShooterPlayerController*                            PassengerPC;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Clear;                                                   // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.ClearWaterWalking
	 */
	struct ARhynio_Character_BP_C_ClearWaterWalking_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.GetRhynioWanderOverride
	 */
	struct ARhynio_Character_BP_C_GetRhynioWanderOverride_Params
	{
	public:
		struct FVector                                             Loc;                                                     // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.BP_GetCustomModifier_MaxSpeed
	 */
	struct ARhynio_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.ReceiveAnyDamage
	 */
	struct ARhynio_Character_BP_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IYED[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.BP_OnTamedOrderReceived
	 */
	struct ARhynio_Character_BP_C_BP_OnTamedOrderReceived_Params
	{
	public:
		class APrimalCharacter*                                    FromCharacter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EDinoTamedOrder                                            OrderType;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bForce;                                                  // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_W8VF[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              enemyTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       orderNotExecuted;                                        // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPOverrideMoveToOrder
	 */
	struct ARhynio_Character_BP_C_BPOverrideMoveToOrder_Params
	{
	public:
		struct FVector                                             MoveToLocation;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P3VG[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterCharacter*                                   OrderingPlayer;                                          // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPGetRiderUnboardLocation
	 */
	struct ARhynio_Character_BP_C_BPGetRiderUnboardLocation_Params
	{
	public:
		class APrimalCharacter*                                    RidingCharacter;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.ShowRidingMU
	 */
	struct ARhynio_Character_BP_C_ShowRidingMU_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.InterceptInputEvent
	 */
	struct ARhynio_Character_BP_C_InterceptInputEvent_Params
	{
	public:
		class FString                                              InputName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.CanLatch
	 */
	struct ARhynio_Character_BP_C_CanLatch_Params
	{
	public:
		struct FVector                                             Offset;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       backwardsLatching;                                       // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CanLatch;                                                // 0x000D(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2VHC[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Normal;                                                  // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Loc;                                                     // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.AttemptRapidFireRangedProjectile
	 */
	struct ARhynio_Character_BP_C_AttemptRapidFireRangedProjectile_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPServerHandleNetExecCommand
	 */
	struct ARhynio_Character_BP_C_BPServerHandleNetExecCommand_Params
	{
	public:
		class APlayerController*                                   FromPC;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                CommandName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0010(0x0040)  (Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IM9Q[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPGetOverrideCameraInterpSpeed
	 */
	struct ARhynio_Character_BP_C_BPGetOverrideCameraInterpSpeed_Params
	{
	public:
		float                                                      DefaultTPVCameraSpeedInterpolationMultiplier;            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DefaultTPVOffsetInterpSpeed;                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      TPVCameraSpeedInterpolationMultiplier;                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      TPVOffsetInterpSpeed;                                    // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.SwimmingTick
	 */
	struct ARhynio_Character_BP_C_SwimmingTick_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.ClearLastDroppedIgnoredChar
	 */
	struct ARhynio_Character_BP_C_ClearLastDroppedIgnoredChar_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPDidClearCarriedCharacter
	 */
	struct ARhynio_Character_BP_C_BPDidClearCarriedCharacter_Params
	{
	public:
		class APrimalCharacter*                                    PreviousCarriedCharacter;                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.AttemptInitialFlight
	 */
	struct ARhynio_Character_BP_C_AttemptInitialFlight_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.AIAttemptExitWater
	 */
	struct ARhynio_Character_BP_C_AIAttemptExitWater_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPUnstasis
	 */
	struct ARhynio_Character_BP_C_BPUnstasis_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPDidSetCarriedCharacter
	 */
	struct ARhynio_Character_BP_C_BPDidSetCarriedCharacter_Params
	{
	public:
		class APrimalCharacter*                                    PreviousCarriedCharacter;                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.DisplayInsufficientStaminaMessage
	 */
	struct ARhynio_Character_BP_C_DisplayInsufficientStaminaMessage_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPCanLand
	 */
	struct ARhynio_Character_BP_C_BPCanLand_Params
	{
	public:
		bool                                                       CanLand;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.ResetLocalInputVars
	 */
	struct ARhynio_Character_BP_C_ResetLocalInputVars_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.ResetLocalHomingAimingVars
	 */
	struct ARhynio_Character_BP_C_ResetLocalHomingAimingVars_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPHandleRightShoulderButton
	 */
	struct ARhynio_Character_BP_C_BPHandleRightShoulderButton_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.UpdateHUDHelper
	 */
	struct ARhynio_Character_BP_C_UpdateHUDHelper_Params
	{
	public:
		class AShooterCharacter*                                   ShooterChar;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       remove;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_D0EP[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.IsValidLockOnChar
	 */
	struct ARhynio_Character_BP_C_IsValidLockOnChar_Params
	{
	public:
		class APrimalCharacter*                                    Char;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CanLockOn;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPCanTargetCorpse
	 */
	struct ARhynio_Character_BP_C_BPCanTargetCorpse_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.UpdateWaterSurfaceSplashVFX
	 */
	struct ARhynio_Character_BP_C_UpdateWaterSurfaceSplashVFX_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.SpawnBigEnterWaterVFX
	 */
	struct ARhynio_Character_BP_C_SpawnBigEnterWaterVFX_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.UnhideMesh
	 */
	struct ARhynio_Character_BP_C_UnhideMesh_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.OverrideFinalWanderLocation
	 */
	struct ARhynio_Character_BP_C_OverrideFinalWanderLocation_Params
	{
	public:
		struct FVector                                             outVec;                                                  // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.StopRapidFiring
	 */
	struct ARhynio_Character_BP_C_StopRapidFiring_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPHandleOnStopTargeting
	 */
	struct ARhynio_Character_BP_C_BPHandleOnStopTargeting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CE3T[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPClientHandleNetExecCommand
	 */
	struct ARhynio_Character_BP_C_BPClientHandleNetExecCommand_Params
	{
	public:
		class FName                                                CommandName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0008(0x0040)  (Parm, OutParm, ReferenceParm)
		class APlayerController*                                   ForPC;                                                   // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.GetIsSurfaceSwimming
	 */
	struct ARhynio_Character_BP_C_GetIsSurfaceSwimming_Params
	{
	public:
		bool                                                       IsSurfaceSwimming;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.SpawnWaterFootstepVFX
	 */
	struct ARhynio_Character_BP_C_SpawnWaterFootstepVFX_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.UpdateWaterMovementVFX
	 */
	struct ARhynio_Character_BP_C_UpdateWaterMovementVFX_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 */
	struct ARhynio_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.UpdateFlyingBraking
	 */
	struct ARhynio_Character_BP_C_UpdateFlyingBraking_Params
	{
	public:
		bool                                                       HasRider;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3FFG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPGetDragSocketDinoName
	 */
	struct ARhynio_Character_BP_C_BPGetDragSocketDinoName_Params
	{
	public:
		class APrimalDinoCharacter*                                aGrabbedDino;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.PlayLockOnSound
	 */
	struct ARhynio_Character_BP_C_PlayLockOnSound_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPGetMultiUseEntries
	 */
	struct ARhynio_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPGetRidingMultiUseEntries
	 */
	struct ARhynio_Character_BP_C_BPGetRidingMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPCharacterSleeped
	 */
	struct ARhynio_Character_BP_C_BPCharacterSleeped_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPOnStaminaDrained
	 */
	struct ARhynio_Character_BP_C_BPOnStaminaDrained_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.AllowPlayMontage
	 */
	struct ARhynio_Character_BP_C_AllowPlayMontage_Params
	{
	public:
		class UAnimMontage*                                        AnimMontage;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.UpdateWaterMovementVars
	 */
	struct ARhynio_Character_BP_C_UpdateWaterMovementVars_Params
	{
	public:
		bool                                                       IsWaterWalk;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       PrevLand;                                                // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsSurfaceSwimming;                                       // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_US6P[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPShouldForceFlee
	 */
	struct ARhynio_Character_BP_C_BPShouldForceFlee_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.UpdateWingVisForPlayers
	 */
	struct ARhynio_Character_BP_C_UpdateWingVisForPlayers_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.GetCanShootResin_Impure
	 */
	struct ARhynio_Character_BP_C_GetCanShootResin_Impure_Params
	{
	public:
		int32_t                                                    Type;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CanShoot;                                                // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsResinQuantityFail;                                     // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.GetHomingTarget
	 */
	struct ARhynio_Character_BP_C_GetHomingTarget_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       TracedToLast;                                            // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.BP_InterceptMoveRight
	 */
	struct ARhynio_Character_BP_C_BP_InterceptMoveRight_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.BP_InterceptMoveForward
	 */
	struct ARhynio_Character_BP_C_BP_InterceptMoveForward_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FVB0[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.CanUseNonProjResinAbility
	 */
	struct ARhynio_Character_BP_C_CanUseNonProjResinAbility_Params
	{
	public:
		bool                                                       CanUse;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z8AT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.GetResinPercent
	 */
	struct ARhynio_Character_BP_C_GetResinPercent_Params
	{
	public:
		float                                                      Percent;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NCAQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.DisplayInsufficientResinMessage
	 */
	struct ARhynio_Character_BP_C_DisplayInsufficientResinMessage_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.IsResinDraining
	 */
	struct ARhynio_Character_BP_C_IsResinDraining_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.DrainResinQuantity
	 */
	struct ARhynio_Character_BP_C_DrainResinQuantity_Params
	{
	public:
		int32_t                                                    amount;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.ResetStructurePlacing
	 */
	struct ARhynio_Character_BP_C_ResetStructurePlacing_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.ClearWaterWalkingMode
	 */
	struct ARhynio_Character_BP_C_ClearWaterWalkingMode_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.OnRep_bInWaterWalkMode
	 */
	struct ARhynio_Character_BP_C_OnRep_bInWaterWalkMode_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.AttemptSetWaterWalking
	 */
	struct ARhynio_Character_BP_C_AttemptSetWaterWalking_Params
	{
	public:
		bool                                                       Set;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Success;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPNotifyClearRider
	 */
	struct ARhynio_Character_BP_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.ReceiveBeginPlay
	 */
	struct ARhynio_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPDrawToRiderHUD
	 */
	struct ARhynio_Character_BP_C_BPDrawToRiderHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPGetCrosshairColor
	 */
	struct ARhynio_Character_BP_C_BPGetCrosshairColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.DoStructurePlacement
	 */
	struct ARhynio_Character_BP_C_DoStructurePlacement_Params
	{
	public:
		struct FVector                                             Loc;                                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            Rot;                                                     // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.DoPlaceStructure
	 */
	struct ARhynio_Character_BP_C_DoPlaceStructure_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.DoAttachStructure
	 */
	struct ARhynio_Character_BP_C_DoAttachStructure_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.RequestPlaceStructure
	 */
	struct ARhynio_Character_BP_C_RequestPlaceStructure_Params
	{
	public:
		struct FVector                                             Loc;                                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            Rot;                                                     // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            ViewRot;                                                 // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IPV8[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.RemoveAttachedStructure
	 */
	struct ARhynio_Character_BP_C_RemoveAttachedStructure_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.ClientInitAttachedStructure
	 */
	struct ARhynio_Character_BP_C_ClientInitAttachedStructure_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.SetupAttachedStructure
	 */
	struct ARhynio_Character_BP_C_SetupAttachedStructure_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.OnRep_AttachedStructureID
	 */
	struct ARhynio_Character_BP_C_OnRep_AttachedStructureID_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.SetHighlightColor
	 */
	struct ARhynio_Character_BP_C_SetHighlightColor_Params
	{
	public:
		class APrimalStructure*                                    Structure;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FLinearColor                                        Color;                                                   // 0x0008(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPTimerNonDedicated
	 */
	struct ARhynio_Character_BP_C_BPTimerNonDedicated_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPOnMovementModeChangedNotify
	 */
	struct ARhynio_Character_BP_C_BPOnMovementModeChangedNotify_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              PreviousCustomMode;                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.BP_ModifyInputAcceleration
	 */
	struct ARhynio_Character_BP_C_BP_ModifyInputAcceleration_Params
	{
	public:
		struct FVector                                             ModifyInputAccel;                                        // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPOverrideFlyingVelocity
	 */
	struct ARhynio_Character_BP_C_BPOverrideFlyingVelocity_Params
	{
	public:
		struct FVector                                             InitialVelocity;                                         // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             Gravity;                                                 // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		float                                                      DeltaTime;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.RequestAttachStructure
	 */
	struct ARhynio_Character_BP_C_RequestAttachStructure_Params
	{
	public:
		class APrimalStructure*                                    Structure;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.ShouldRequestStructuresPlacedOnFloor
	 */
	struct ARhynio_Character_BP_C_ShouldRequestStructuresPlacedOnFloor_Params
	{
	public:
		class APrimalStructure*                                    Structure;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.SetupAimedStructure
	 */
	struct ARhynio_Character_BP_C_SetupAimedStructure_Params
	{
	public:
		class APrimalStructure*                                    Structure;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.GetStructurePlacer
	 */
	struct ARhynio_Character_BP_C_GetStructurePlacer_Params
	{
	public:
		class APrimalStructurePlacer*                              StructurePlacer;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.UpdateAimedStructure
	 */
	struct ARhynio_Character_BP_C_UpdateAimedStructure_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.SetLastAimedStructure
	 */
	struct ARhynio_Character_BP_C_SetLastAimedStructure_Params
	{
	public:
		class APrimalStructure*                                    Structure;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.HasSavedMaterialForComponent
	 */
	struct ARhynio_Character_BP_C_HasSavedMaterialForComponent_Params
	{
	public:
		class USceneComponent*                                     Component;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APrimalStructure*                                    Structure;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    index;                                                   // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.SetStructureHighlighted
	 */
	struct ARhynio_Character_BP_C_SetStructureHighlighted_Params
	{
	public:
		class APrimalStructure*                                    Structure;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       NewHighlighted;                                          // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZUML[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLinearColor                                        Color;                                                   // 0x000C(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6NL9[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.ResetLastAimedStructure
	 */
	struct ARhynio_Character_BP_C_ResetLastAimedStructure_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.SpawnPreviewStructure
	 */
	struct ARhynio_Character_BP_C_SpawnPreviewStructure_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.GetAimedStructure
	 */
	struct ARhynio_Character_BP_C_GetAimedStructure_Params
	{
	public:
		class APrimalStructure*                                    Structure;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.GetCanImpregnate
	 */
	struct ARhynio_Character_BP_C_GetCanImpregnate_Params
	{
	public:
		class APrimalDinoCharacter*                                Dino;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.AttemptImpregnate
	 */
	struct ARhynio_Character_BP_C_AttemptImpregnate_Params
	{
	public:
		class APrimalDinoCharacter*                                Dino;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.BlueprintAdjustOutputDamage
	 */
	struct ARhynio_Character_BP_C_BlueprintAdjustOutputDamage_Params
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
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.ClearIgnoreWater
	 */
	struct ARhynio_Character_BP_C_ClearIgnoreWater_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.GetIsCloseToWaterSurface
	 */
	struct ARhynio_Character_BP_C_GetIsCloseToWaterSurface_Params
	{
	public:
		bool                                                       Close;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       SurfaceIsAbove;                                          // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.AttemptExitWaterJump
	 */
	struct ARhynio_Character_BP_C_AttemptExitWaterJump_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPOverrideGetAttackAnimationIndex
	 */
	struct ARhynio_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H155[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UAnimMontage*>                                AnimationArray;                                          // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		int32_t                                                    ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPNotifySetRider
	 */
	struct ARhynio_Character_BP_C_BPNotifySetRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderSetting;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPDinoPostBeginPlay
	 */
	struct ARhynio_Character_BP_C_BPDinoPostBeginPlay_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.RidingTick
	 */
	struct ARhynio_Character_BP_C_RidingTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.GetResinProjTargetLoc
	 */
	struct ARhynio_Character_BP_C_GetResinProjTargetLoc_Params
	{
	public:
		struct FVector                                             TargetLoc;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.GetResinProjectile
	 */
	struct ARhynio_Character_BP_C_GetResinProjectile_Params
	{
	public:
		class UClass*                                              ProjClass;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPTimerServer
	 */
	struct ARhynio_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.BP_OnSetDeath
	 */
	struct ARhynio_Character_BP_C_BP_OnSetDeath_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPAdjustDamage
	 */
	struct ARhynio_Character_BP_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GRCJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K56R[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPTryMultiUse
	 */
	struct ARhynio_Character_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.UpdateResinQuantity
	 */
	struct ARhynio_Character_BP_C_UpdateResinQuantity_Params
	{
	public:
		int32_t                                                    amount;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPHandleControllerInitiatedAttack
	 */
	struct ARhynio_Character_BP_C_BPHandleControllerInitiatedAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPDoAttack
	 */
	struct ARhynio_Character_BP_C_BPDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.BlueprintCanRiderAttack
	 */
	struct ARhynio_Character_BP_C_BlueprintCanRiderAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.BlueprintCanAttack
	 */
	struct ARhynio_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GG1W[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EMH5[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.GetResinQuantity
	 */
	struct ARhynio_Character_BP_C_GetResinQuantity_Params
	{
	public:
		int32_t                                                    Quantity;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.GetCanShootResin
	 */
	struct ARhynio_Character_BP_C_GetCanShootResin_Params
	{
	public:
		int32_t                                                    Type;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CanShoot;                                                // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsResinQuantityFail;                                     // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsStaminaFail;                                           // 0x0006(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPOnDinoFiredProjectile
	 */
	struct ARhynio_Character_BP_C_BPOnDinoFiredProjectile_Params
	{
	public:
		class AShooterProjectile*                                  Projectile;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPGetHUDElements
	 */
	struct ARhynio_Character_BP_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.DoWingTaunt
	 */
	struct ARhynio_Character_BP_C_DoWingTaunt_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.StopMovementFn
	 */
	struct ARhynio_Character_BP_C_StopMovementFn_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.ShouldTryLatch
	 */
	struct ARhynio_Character_BP_C_ShouldTryLatch_Params
	{
	public:
		bool                                                       ret;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       LandOnFailureToLatch;                                    // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPModifyDesiredRotation
	 */
	struct ARhynio_Character_BP_C_BPModifyDesiredRotation_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            InDesiredRotation;                                       // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FRotator                                            OutDesiredRotation;                                      // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPSetupTamed
	 */
	struct ARhynio_Character_BP_C_BPSetupTamed_Params
	{
	public:
		bool                                                       bWasJustTamed;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPOnStartJump
	 */
	struct ARhynio_Character_BP_C_BPOnStartJump_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPHandleUseButtonPress
	 */
	struct ARhynio_Character_BP_C_BPHandleUseButtonPress_Params
	{
	public:
		class AShooterPlayerController*                            RiderController;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.DisableCameraInterpolation
	 */
	struct ARhynio_Character_BP_C_DisableCameraInterpolation_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.OnRep_LatchingSurfaceNormal
	 */
	struct ARhynio_Character_BP_C_OnRep_LatchingSurfaceNormal_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.Controller Follow ActorRotation
	 */
	struct ARhynio_Character_BP_C_ControllerFollowActorRotation_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8WGP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.ReferenceLatchingObjects
	 */
	struct ARhynio_Character_BP_C_ReferenceLatchingObjects_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.LineTrace
	 */
	struct ARhynio_Character_BP_C_LineTrace_Params
	{
	public:
		class UMeshComponent*                                      Mesh;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                SocketName;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              Actor;                                                   // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Offset;                                                  // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       BackwardLatching;                                        // 0x0024(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HitSomething;                                            // 0x0025(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XYPU[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Location;                                                // 0x0028(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Normal;                                                  // 0x0034(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              HitActor;                                                // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.InterruptLatching
	 */
	struct ARhynio_Character_BP_C_InterruptLatching_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.ProcessLatching
	 */
	struct ARhynio_Character_BP_C_ProcessLatching_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.TryLatch
	 */
	struct ARhynio_Character_BP_C_TryLatch_Params
	{
	public:
		struct FVector                                             Offset;                                                  // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       backwardsLatching;                                       // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.UserConstructionScript
	 */
	struct ARhynio_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.InpActEvt_BrakeDino_K2Node_InputActionEvent_446
	 */
	struct ARhynio_Character_BP_C_InpActEvt_BrakeDino_K2Node_InputActionEvent_446_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.InpActEvt_BrakeDino_K2Node_InputActionEvent_445
	 */
	struct ARhynio_Character_BP_C_InpActEvt_BrakeDino_K2Node_InputActionEvent_445_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.InpActEvt_AltFire_K2Node_InputActionEvent_444
	 */
	struct ARhynio_Character_BP_C_InpActEvt_AltFire_K2Node_InputActionEvent_444_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.InpActEvt_AltFire_K2Node_InputActionEvent_443
	 */
	struct ARhynio_Character_BP_C_InpActEvt_AltFire_K2Node_InputActionEvent_443_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_442
	 */
	struct ARhynio_Character_BP_C_InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_442_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_441
	 */
	struct ARhynio_Character_BP_C_InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_441_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.InpActEvt_ToggleRtsMode_K2Node_InputActionEvent_440
	 */
	struct ARhynio_Character_BP_C_InpActEvt_ToggleRtsMode_K2Node_InputActionEvent_440_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.InpActEvt_Poop_K2Node_InputActionEvent_439
	 */
	struct ARhynio_Character_BP_C_InpActEvt_Poop_K2Node_InputActionEvent_439_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.Latch
	 */
	struct ARhynio_Character_BP_C_Latch_Params
	{
	public:
		bool                                                       backwardsLatching;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       TryLatch;                                                // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       LandOnFailureToLatch;                                    // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.ReceiveTick
	 */
	struct ARhynio_Character_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.LatchStartAnimation
	 */
	struct ARhynio_Character_BP_C_LatchStartAnimation_Params
	{
	public:
		bool                                                       Downward;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.UnLatch
	 */
	struct ARhynio_Character_BP_C_UnLatch_Params
	{
	public:
		bool                                                       LatchingInterrupted;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.UnLatchStartAnimation
	 */
	struct ARhynio_Character_BP_C_UnLatchStartAnimation_Params
	{
	public:
		bool                                                       Downward;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.MoveToUsingDirection
	 */
	struct ARhynio_Character_BP_C_MoveToUsingDirection_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.UnLatchMoveAndRotate
	 */
	struct ARhynio_Character_BP_C_UnLatchMoveAndRotate_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.LatchingStartEvent
	 */
	struct ARhynio_Character_BP_C_LatchingStartEvent_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.LatchingEndEvent
	 */
	struct ARhynio_Character_BP_C_LatchingEndEvent_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.StopMovement
	 */
	struct ARhynio_Character_BP_C_StopMovement_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.DisableFaceLatchingObjectRotation
	 */
	struct ARhynio_Character_BP_C_DisableFaceLatchingObjectRotation_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181
	 */
	struct ARhynio_Character_BP_C_InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.SetPassengersSurfaceCamera
	 */
	struct ARhynio_Character_BP_C_SetPassengersSurfaceCamera_Params
	{
	public:
		float                                                      Yaw;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Pitch;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Roll;                                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.LocalFaceLatchingObject
	 */
	struct ARhynio_Character_BP_C_LocalFaceLatchingObject_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.StartedJump
	 */
	struct ARhynio_Character_BP_C_StartedJump_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.MoveDuringUnlatching
	 */
	struct ARhynio_Character_BP_C_MoveDuringUnlatching_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.Server_AttemptResinFire
	 */
	struct ARhynio_Character_BP_C_Server_AttemptResinFire_Params
	{
	public:
		struct FVector                                             TargetLoc;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PZCV[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              TargetActor;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       RapidFire;                                               // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5CSQ[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                HomingTowardsBone;                                       // 0x001C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.Server_SetLastResinProjTargetLoc
	 */
	struct ARhynio_Character_BP_C_Server_SetLastResinProjTargetLoc_Params
	{
	public:
		struct FVector                                             TargetLoc;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.Server_AttemptExitWaterJump
	 */
	struct ARhynio_Character_BP_C_Server_AttemptExitWaterJump_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.Server_RequestAttachStructure
	 */
	struct ARhynio_Character_BP_C_Server_RequestAttachStructure_Params
	{
	public:
		class APrimalStructure*                                    Structure;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.Server_RequestPlaceStructure
	 */
	struct ARhynio_Character_BP_C_Server_RequestPlaceStructure_Params
	{
	public:
		struct FVector                                             Loc;                                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            Rot;                                                     // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            ViewRot;                                                 // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.Multi_ResetPendingAttachedStructure
	 */
	struct ARhynio_Character_BP_C_Multi_ResetPendingAttachedStructure_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.Multi_DoStructurePlacement
	 */
	struct ARhynio_Character_BP_C_Multi_DoStructurePlacement_Params
	{
	public:
		struct FVector                                             Loc;                                                     // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            Rot;                                                     // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.BindReceivedStructuresDelegate
	 */
	struct ARhynio_Character_BP_C_BindReceivedStructuresDelegate_Params
	{
	public:
		class AShooterPlayerController*                            ShooterPC;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.OnClientReceiveStructuresPlacedOnFloor_Event
	 */
	struct ARhynio_Character_BP_C_OnClientReceiveStructuresPlacedOnFloor_Event_Params
	{
	public:
		class APrimalStructure*                                    Structure;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<class APrimalStructure*>                            StructuresPlacedOnFloor;                                 // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.Server_AttemptSetWaterWalking
	 */
	struct ARhynio_Character_BP_C_Server_AttemptSetWaterWalking_Params
	{
	public:
		bool                                                       Set;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.Multi_UpdateWaterMovementVars
	 */
	struct ARhynio_Character_BP_C_Multi_UpdateWaterMovementVars_Params
	{
	public:
		bool                                                       IsWaterWalk;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       PrevLand;                                                // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsSurfaceSwimming;                                       // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.Server_TryRhynioMultiuse
	 */
	struct ARhynio_Character_BP_C_Server_TryRhynioMultiuse_Params
	{
	public:
		class AShooterPlayerController*                            PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.Server_SetShouldStopRapidFiring
	 */
	struct ARhynio_Character_BP_C_Server_SetShouldStopRapidFiring_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.Multi_StopRapidFiring
	 */
	struct ARhynio_Character_BP_C_Multi_StopRapidFiring_Params
	{	};

	/**
	 * Function Rhynio_Character_BP.Rhynio_Character_BP_C.ExecuteUbergraph_Rhynio_Character_BP
	 */
	struct ARhynio_Character_BP_C_ExecuteUbergraph_Rhynio_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
