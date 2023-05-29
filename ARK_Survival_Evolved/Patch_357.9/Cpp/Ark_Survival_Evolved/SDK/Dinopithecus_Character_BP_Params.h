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
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPCanBeBaseForCharacter
	 */
	struct ADinopithecus_Character_BP_C_BPCanBeBaseForCharacter_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.IsUsingZipline
	 */
	struct ADinopithecus_Character_BP_C_IsUsingZipline_Params
	{
	public:
		bool                                                       Ret;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPGetArmorDurabilityDecreaseMultiplier
	 */
	struct ADinopithecus_Character_BP_C_BPGetArmorDurabilityDecreaseMultiplier_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.EndUberpounce
	 */
	struct ADinopithecus_Character_BP_C_EndUberpounce_Params
	{
	public:
		struct FVector                                             Velocity;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P8N6[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimMontage*                                        MontageToPlayOnNonZeroVelocity;                          // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateAnimSpeed
	 */
	struct ADinopithecus_Character_BP_C_UpdateAnimSpeed_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UberpounceDesyncDetected
	 */
	struct ADinopithecus_Character_BP_C_UberpounceDesyncDetected_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPGetRiderUnboardLocation
	 */
	struct ADinopithecus_Character_BP_C_BPGetRiderUnboardLocation_Params
	{
	public:
		class APrimalCharacter*                                    RidingCharacter;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Update Server Corrections
	 */
	struct ADinopithecus_Character_BP_C_UpdateServerCorrections_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.CanUpdateRotation
	 */
	struct ADinopithecus_Character_BP_C_CanUpdateRotation_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetUberpounceTraceStartingLocation
	 */
	struct ADinopithecus_Character_BP_C_GetUberpounceTraceStartingLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.IsValidUberpounceTargetingData
	 */
	struct ADinopithecus_Character_BP_C_IsValidUberpounceTargetingData_Params
	{
	public:
		struct FUberpounceData                                     TargetingData;                                           // 0x0000(0x0030)  (Parm)
		bool                                                       Ret;                                                     // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q4GP[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPTriggerStasisEvent
	 */
	struct ADinopithecus_Character_BP_C_BPTriggerStasisEvent_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.MultiRequestJumpFn
	 */
	struct ADinopithecus_Character_BP_C_MultiRequestJumpFn_Params
	{
	public:
		struct FVector                                             Velocity;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BP_OverrideCameraTargetOriginLocation
	 */
	struct ADinopithecus_Character_BP_C_BP_OverrideCameraTargetOriginLocation_Params
	{
	public:
		struct FVector                                             OutOverrideOrigin;                                       // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		class FName                                                WithCameraStyle;                                         // 0x000C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.CanContinueUberpounce
	 */
	struct ADinopithecus_Character_BP_C_CanContinueUberpounce_Params
	{
	public:
		bool                                                       Ret;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BP_OverrideCarriedCharacterTransform
	 */
	struct ADinopithecus_Character_BP_C_BP_OverrideCarriedCharacterTransform_Params
	{
	public:
		class APrimalCharacter*                                    ForCarriedChar;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GW59[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AllowWakingTame
	 */
	struct ADinopithecus_Character_BP_C_AllowWakingTame_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetDelayBeforeLatchAfterLatchedJump
	 */
	struct ADinopithecus_Character_BP_C_GetDelayBeforeLatchAfterLatchedJump_Params
	{
	public:
		float                                                      LatchedJumpTimeToAutoLatch;                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.HasAnyStamina
	 */
	struct ADinopithecus_Character_BP_C_HasAnyStamina_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H68V[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPOverrideCameraViewTarget
	 */
	struct ADinopithecus_Character_BP_C_BPOverrideCameraViewTarget_Params
	{
	public:
		class FName                                                CurrentCameraMode;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             DesiredCameraLocation;                                   // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            DesiredCameraRotation;                                   // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DesiredFOV;                                              // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOverrideCameraLocation;                                 // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7EN7[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             CameraLocation;                                          // 0x0028(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOverrideCameraRotation;                                 // 0x0034(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4H3C[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            CameraRotation;                                          // 0x0038(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOverrideCameraFOV;                                      // 0x0044(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_84AO[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      CameraFOV;                                               // 0x0048(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.CanAdultCarryBaby
	 */
	struct ADinopithecus_Character_BP_C_CanAdultCarryBaby_Params
	{
	public:
		class ADinopithecus_Character_BP_C*                        Dino;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Allowed;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateTaming
	 */
	struct ADinopithecus_Character_BP_C_UpdateTaming_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.PackMemberDied
	 */
	struct ADinopithecus_Character_BP_C_PackMemberDied_Params
	{
	public:
		class ADino_Character_BP_Pack_C*                           DeadDino;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateTickThrottles
	 */
	struct ADinopithecus_Character_BP_C_UpdateTickThrottles_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateBabyRiding
	 */
	struct ADinopithecus_Character_BP_C_UpdateBabyRiding_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BabyStopRiding
	 */
	struct ADinopithecus_Character_BP_C_BabyStopRiding_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BabyStartRiding
	 */
	struct ADinopithecus_Character_BP_C_BabyStartRiding_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.FindAdultToRide
	 */
	struct ADinopithecus_Character_BP_C_FindAdultToRide_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.CanBabyRide
	 */
	struct ADinopithecus_Character_BP_C_CanBabyRide_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3DXZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPGetDragSocketDinoName
	 */
	struct ADinopithecus_Character_BP_C_BPGetDragSocketDinoName_Params
	{
	public:
		class APrimalDinoCharacter*                                aGrabbedDino;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPDidClearCarriedCharacter
	 */
	struct ADinopithecus_Character_BP_C_BPDidClearCarriedCharacter_Params
	{
	public:
		class APrimalCharacter*                                    PreviousCarriedCharacter;                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BabyTryMount
	 */
	struct ADinopithecus_Character_BP_C_BabyTryMount_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OverrideRandomWanderLocation
	 */
	struct ADinopithecus_Character_BP_C_OverrideRandomWanderLocation_Params
	{
	public:
		struct FVector                                             originalDestination;                                     // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             inVec;                                                   // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Update Camera 
	 */
	struct ADinopithecus_Character_BP_C_UpdateCamera_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateClientInterpSpeeds
	 */
	struct ADinopithecus_Character_BP_C_UpdateClientInterpSpeeds_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPAdjustAttackIndex
	 */
	struct ADinopithecus_Character_BP_C_BPAdjustAttackIndex_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPHandleRightShoulderButton
	 */
	struct ADinopithecus_Character_BP_C_BPHandleRightShoulderButton_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2GNE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.PlaySplashVFXAWaterSurfaceFromLocation
	 */
	struct ADinopithecus_Character_BP_C_PlaySplashVFXAWaterSurfaceFromLocation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetPingMult
	 */
	struct ADinopithecus_Character_BP_C_GetPingMult_Params
	{
	public:
		float                                                      Ret;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ORL7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateAOEGroundPound
	 */
	struct ADinopithecus_Character_BP_C_UpdateAOEGroundPound_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AOEGroundPound
	 */
	struct ADinopithecus_Character_BP_C_AOEGroundPound_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.PickupPoop
	 */
	struct ADinopithecus_Character_BP_C_PickupPoop_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPForceCameraStyle
	 */
	struct ADinopithecus_Character_BP_C_BPForceCameraStyle_Params
	{
	public:
		class APrimalCharacter*                                    ForViewTarget;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ECameraStyle                                               ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z329[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPOverrideMoveToOrder
	 */
	struct ADinopithecus_Character_BP_C_BPOverrideMoveToOrder_Params
	{
	public:
		struct FVector                                             MoveToLocation;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3ZPQ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterCharacter*                                   OrderingPlayer;                                          // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.IsCheckingForFallingLatch
	 */
	struct ADinopithecus_Character_BP_C_IsCheckingForFallingLatch_Params
	{
	public:
		bool                                                       Ret;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TI2E[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetTargetFOV
	 */
	struct ADinopithecus_Character_BP_C_GetTargetFOV_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateHUDWidget
	 */
	struct ADinopithecus_Character_BP_C_UpdateHUDWidget_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ReceiveDestroyed
	 */
	struct ADinopithecus_Character_BP_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPNotifyToggleHUD
	 */
	struct ADinopithecus_Character_BP_C_BPNotifyToggleHUD_Params
	{
	public:
		bool                                                       bHudHidden;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.SetupHUDWidget
	 */
	struct ADinopithecus_Character_BP_C_SetupHUDWidget_Params
	{
	public:
		class AActor*                                              Rider;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.DestroyHudWidget
	 */
	struct ADinopithecus_Character_BP_C_DestroyHudWidget_Params
	{
	public:
		bool                                                       DestroyNow;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPHandlePoop
	 */
	struct ADinopithecus_Character_BP_C_BPHandlePoop_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PMR9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPShouldCancelDoAttack
	 */
	struct ADinopithecus_Character_BP_C_BPShouldCancelDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPLimitPlayerRotation
	 */
	struct ADinopithecus_Character_BP_C_BPLimitPlayerRotation_Params
	{
	public:
		class APrimalCharacter*                                    viewingCharacter;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            InViewRotation;                                          // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            ReturnValue;                                             // 0x0014(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateVFX
	 */
	struct ADinopithecus_Character_BP_C_UpdateVFX_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ApplyJump
	 */
	struct ADinopithecus_Character_BP_C_ApplyJump_Params
	{
	public:
		struct FVector                                             Velocity;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SQQ9[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimMontage*                                        Anim;                                                    // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPGetGravityZScale
	 */
	struct ADinopithecus_Character_BP_C_BPGetGravityZScale_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.TickBattlecryAttack
	 */
	struct ADinopithecus_Character_BP_C_TickBattlecryAttack_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.DoBattlecryAttack
	 */
	struct ADinopithecus_Character_BP_C_DoBattlecryAttack_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPGetCrosshairColor
	 */
	struct ADinopithecus_Character_BP_C_BPGetCrosshairColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPDoAttack
	 */
	struct ADinopithecus_Character_BP_C_BPDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.DoBattlecry
	 */
	struct ADinopithecus_Character_BP_C_DoBattlecry_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.TickSetRotation
	 */
	struct ADinopithecus_Character_BP_C_TickSetRotation_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Has Latchable SurfaceWhileFalling
	 */
	struct ADinopithecus_Character_BP_C_HasLatchableSurfaceWhileFalling_Params
	{
	public:
		bool                                                       RetSucccess;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_X843[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FUberpounceData                                     RetResultUberpounceData;                                 // 0x0008(0x0030)  (Parm, OutParm)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.CheckForFallingLatchFn
	 */
	struct ADinopithecus_Character_BP_C_CheckForFallingLatchFn_Params
	{
	public:
		bool                                                       AutoJumpAfterLatch;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.IsAllowedToThrowPoop
	 */
	struct ADinopithecus_Character_BP_C_IsAllowedToThrowPoop_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnAmmoWheelSlotSelected
	 */
	struct ADinopithecus_Character_BP_C_OnAmmoWheelSlotSelected_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.SetAmmoWheelVisibility
	 */
	struct ADinopithecus_Character_BP_C_SetAmmoWheelVisibility_Params
	{
	public:
		bool                                                       bNewVisible;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bFromGamepad;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TI07[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPOnDinoFiredProjectile
	 */
	struct ADinopithecus_Character_BP_C_BPOnDinoFiredProjectile_Params
	{
	public:
		class AShooterProjectile*                                  Projectile;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPSetInitialAimOffsetTargets
	 */
	struct ADinopithecus_Character_BP_C_BPSetInitialAimOffsetTargets_Params
	{
	public:
		struct FVector                                             TargetRootLoc;                                           // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            TargetAimRot;                                            // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             OutTargetRootLoc;                                        // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            OutTargetAimRot;                                         // 0x0024(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetFallingLatchingAngles
	 */
	struct ADinopithecus_Character_BP_C_GetFallingLatchingAngles_Params
	{
	public:
		TArray<float>                                              FallingLatchingAngles;                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.IsValidUberpounceDataForLatching
	 */
	struct ADinopithecus_Character_BP_C_IsValidUberpounceDataForLatching_Params
	{
	public:
		struct FUberpounceData                                     Data;                                                    // 0x0000(0x0030)  (Parm)
		bool                                                       Ret;                                                     // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OM6A[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.IsValidDirectionForLatchingSurfaceTrace
	 */
	struct ADinopithecus_Character_BP_C_IsValidDirectionForLatchingSurfaceTrace_Params
	{
	public:
		struct FVector                                             Direction;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DTZ8[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.On Move Left Pressed
	 */
	struct ADinopithecus_Character_BP_C_OnMoveLeftPressed_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.On Move Left Released
	 */
	struct ADinopithecus_Character_BP_C_OnMoveLeftReleased_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.On Move Right Pressed
	 */
	struct ADinopithecus_Character_BP_C_OnMoveRightPressed_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.On Move Right Released
	 */
	struct ADinopithecus_Character_BP_C_OnMoveRightReleased_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.On Move Backward Pressed
	 */
	struct ADinopithecus_Character_BP_C_OnMoveBackwardPressed_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.On Move Forward Pressed
	 */
	struct ADinopithecus_Character_BP_C_OnMoveForwardPressed_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.On Move Backward Released
	 */
	struct ADinopithecus_Character_BP_C_OnMoveBackwardReleased_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnMoveForwardReleased
	 */
	struct ADinopithecus_Character_BP_C_OnMoveForwardReleased_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.InterceptInputEvent
	 */
	struct ADinopithecus_Character_BP_C_InterceptInputEvent_Params
	{
	public:
		class FString                                              InputName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Find Next Valid Uberpounce Location
	 */
	struct ADinopithecus_Character_BP_C_FindNextValidUberpounceLocation_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 */
	struct ADinopithecus_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPOnStartJump
	 */
	struct ADinopithecus_Character_BP_C_BPOnStartJump_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPTimerServer
	 */
	struct ADinopithecus_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPTimerNonDedicated
	 */
	struct ADinopithecus_Character_BP_C_BPTimerNonDedicated_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.HasRequiredAmmoItems
	 */
	struct ADinopithecus_Character_BP_C_HasRequiredAmmoItems_Params
	{
	public:
		int32_t                                                    TypeIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bFoundAllItems;                                          // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LJ20[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    OutQuantity;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BlueprintCanRiderAttack
	 */
	struct ADinopithecus_Character_BP_C_BlueprintCanRiderAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetBestPoopItem
	 */
	struct ADinopithecus_Character_BP_C_GetBestPoopItem_Params
	{
	public:
		class UPrimalItem*                                         BestPoop;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetAmmoItemsToConsume
	 */
	struct ADinopithecus_Character_BP_C_GetAmmoItemsToConsume_Params
	{
	public:
		int32_t                                                    TypeIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RRP5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UPrimalItem*>                                 Items;                                                   // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
		bool                                                       bFoundAllItems;                                          // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetMeshForProjectileType
	 */
	struct ADinopithecus_Character_BP_C_GetMeshForProjectileType_Params
	{
	public:
		int32_t                                                    SelectedIndex;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SY7X[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UStaticMesh*                                         Mesh;                                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.WantsToRun
	 */
	struct ADinopithecus_Character_BP_C_WantsToRun_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnNonInstanceJumpOffWallInput
	 */
	struct ADinopithecus_Character_BP_C_OnNonInstanceJumpOffWallInput_Params
	{
	public:
		float                                                      HoldTime;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetLatchJumpSpeedThresholdForRotate
	 */
	struct ADinopithecus_Character_BP_C_GetLatchJumpSpeedThresholdForRotate_Params
	{
	public:
		float                                                      res;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPHandleControllerInitiatedAttack
	 */
	struct ADinopithecus_Character_BP_C_BPHandleControllerInitiatedAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AdjustIKHalfLegLength
	 */
	struct ADinopithecus_Character_BP_C_AdjustIKHalfLegLength_Params
	{
	public:
		bool                                                       Default;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RED8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPCanCryo
	 */
	struct ADinopithecus_Character_BP_C_BPCanCryo_Params
	{
	public:
		class AShooterPlayerController*                            ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.CanSequentialJump
	 */
	struct ADinopithecus_Character_BP_C_CanSequentialJump_Params
	{
	public:
		bool                                                       Ret;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_818D[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Throttled TickFn
	 */
	struct ADinopithecus_Character_BP_C_ThrottledTickFn_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPAcknowledgeServerCorrection
	 */
	struct ADinopithecus_Character_BP_C_BPAcknowledgeServerCorrection_Params
	{
	public:
		float                                                      TimeStamp;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NewLoc;                                                  // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NewVel;                                                  // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MYKA[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimitiveComponent*                                 NewBase;                                                 // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                NewBaseBoneName;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bHasBase;                                                // 0x0030(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bBaseRelativePosition;                                   // 0x0031(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              ServerMovementMode;                                      // 0x0032(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0033(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ReplicateMovementToSimulatedClients
	 */
	struct ADinopithecus_Character_BP_C_ReplicateMovementToSimulatedClients_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateBerzerk
	 */
	struct ADinopithecus_Character_BP_C_UpdateBerzerk_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetCameraInterpSpeed
	 */
	struct ADinopithecus_Character_BP_C_GetCameraInterpSpeed_Params
	{
	public:
		float                                                      InterpSpeed;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnJumpFromGround
	 */
	struct ADinopithecus_Character_BP_C_OnJumpFromGround_Params
	{
	public:
		float                                                      HoldTime;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetProjectileTypeForRockThrow
	 */
	struct ADinopithecus_Character_BP_C_GetProjectileTypeForRockThrow_Params
	{
	public:
		class UClass*                                              TypeName;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Get RockThrowAttack Anim Index from Idle Anim
	 */
	struct ADinopithecus_Character_BP_C_GetRockThrowAttackAnimIndexfromIdleAnim_Params
	{
	public:
		int32_t                                                    Ret;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GrabRock
	 */
	struct ADinopithecus_Character_BP_C_GrabRock_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.CanJumpInternal
	 */
	struct ADinopithecus_Character_BP_C_CanJumpInternal_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8KVD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ThrowRock
	 */
	struct ADinopithecus_Character_BP_C_ThrowRock_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Is Super Uberpounce
	 */
	struct ADinopithecus_Character_BP_C_IsSuperUberpounce_Params
	{
	public:
		bool                                                       Ret;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetUberpounceInterpSpeed
	 */
	struct ADinopithecus_Character_BP_C_GetUberpounceInterpSpeed_Params
	{
	public:
		float                                                      Speed;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetInitialAnimationForUberpounce
	 */
	struct ADinopithecus_Character_BP_C_GetInitialAnimationForUberpounce_Params
	{
	public:
		bool                                                       QuickUberpounce;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K0T8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimMontage*                                        OutAnim;                                                 // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                RetStartSectionName;                                     // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateIdleAnim
	 */
	struct ADinopithecus_Character_BP_C_UpdateIdleAnim_Params
	{
	public:
		EShapeshifterIdleAnimEnum                                  newIdle;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetUberpounceRangeBase
	 */
	struct ADinopithecus_Character_BP_C_GetUberpounceRangeBase_Params
	{
	public:
		float                                                      Ret;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetUberpounceMaxRange
	 */
	struct ADinopithecus_Character_BP_C_GetUberpounceMaxRange_Params
	{
	public:
		float                                                      Ret;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPGetCrosshairAlpha
	 */
	struct ADinopithecus_Character_BP_C_BPGetCrosshairAlpha_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetDamageResistancePercentFromAddiction
	 */
	struct ADinopithecus_Character_BP_C_GetDamageResistancePercentFromAddiction_Params
	{
	public:
		float                                                      Result;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Get AnimSpeedBonus from Addiction
	 */
	struct ADinopithecus_Character_BP_C_GetAnimSpeedBonusfromAddiction_Params
	{
	public:
		float                                                      Result;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetDamageMultiFromAddiction
	 */
	struct ADinopithecus_Character_BP_C_GetDamageMultiFromAddiction_Params
	{
	public:
		float                                                      Result;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnUberpounceStateChanged
	 */
	struct ADinopithecus_Character_BP_C_OnUberpounceStateChanged_Params
	{
	public:
		EUberpounceState                                           NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EUberpounceState                                           PrevState;                                               // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPDinoTooltipCustomTorpidityProgressBar
	 */
	struct ADinopithecus_Character_BP_C_BPDinoTooltipCustomTorpidityProgressBar_Params
	{
	public:
		bool                                                       overrideTorpidityProgressBarIfActive;                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L39B[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      progressPercent;                                         // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              Label;                                                   // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_V0SI[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPGetMultiUseEntries
	 */
	struct ADinopithecus_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AddBerzerkDamage
	 */
	struct ADinopithecus_Character_BP_C_AddBerzerkDamage_Params
	{
	public:
		float                                                      Dmg;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnRep_LatchIdleAnimRep
	 */
	struct ADinopithecus_Character_BP_C_OnRep_LatchIdleAnimRep_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPOverrideTamingDescriptionLabel
	 */
	struct ADinopithecus_Character_BP_C_BPOverrideTamingDescriptionLabel_Params
	{
	public:
		struct FSlateColor                                         TextColor;                                               // 0x0000(0x0028)  (Parm, OutParm, ReferenceParm)
		class FString                                              ReturnValue;                                             // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AllowPlayMontage
	 */
	struct ADinopithecus_Character_BP_C_AllowPlayMontage_Params
	{
	public:
		class UAnimMontage*                                        AnimMontage;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.PrintHealth
	 */
	struct ADinopithecus_Character_BP_C_PrintHealth_Params
	{
	public:
		class UPrimalCharacterStatusComponent*                     Status;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.StartUberPounce
	 */
	struct ADinopithecus_Character_BP_C_StartUberPounce_Params
	{
	public:
		struct FUberpounceData                                     Data;                                                    // 0x0000(0x0030)  (Parm)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.K2_OnMovementModeChanged
	 */
	struct ADinopithecus_Character_BP_C_K2_OnMovementModeChanged_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EMovementMode                                              NewMovementMode;                                         // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              PrevCustomMode;                                          // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              NewCustomMode;                                           // 0x0003(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnRep_LastUberpounceJumpTime
	 */
	struct ADinopithecus_Character_BP_C_OnRep_LastUberpounceJumpTime_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.LatchedJumpAttached
	 */
	struct ADinopithecus_Character_BP_C_LatchedJumpAttached_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.On Uberpounce AttachedToLocation
	 */
	struct ADinopithecus_Character_BP_C_OnUberpounceAttachedToLocation_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPDisplayTamedMessage
	 */
	struct ADinopithecus_Character_BP_C_BPDisplayTamedMessage_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.PrintStats
	 */
	struct ADinopithecus_Character_BP_C_PrintStats_Params
	{
	public:
		class UPrimalCharacterStatusComponent*                     StatusComp;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Get Pounce Latched Anim
	 */
	struct ADinopithecus_Character_BP_C_GetPounceLatchedAnim_Params
	{
	public:
		class UAnimMontage*                                        Anim;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                StartSectionName;                                        // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ResetMeshRelativeLocation
	 */
	struct ADinopithecus_Character_BP_C_ResetMeshRelativeLocation_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.RidingTick
	 */
	struct ADinopithecus_Character_BP_C_RidingTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPOnAnimPlayedNotify
	 */
	struct ADinopithecus_Character_BP_C_BPOnAnimPlayedNotify_Params
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
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPDinoTooltipCustomTamingProgressBar
	 */
	struct ADinopithecus_Character_BP_C_BPDinoTooltipCustomTamingProgressBar_Params
	{
	public:
		bool                                                       overrideTamingProgressBarIfActive;                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PS1F[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      progressPercent;                                         // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              Label;                                                   // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R55Y[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BlueprintCanAttack
	 */
	struct ADinopithecus_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0HTX[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GHH9[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.CalculateDamageTakenRequiredForBerzerk
	 */
	struct ADinopithecus_Character_BP_C_CalculateDamageTakenRequiredForBerzerk_Params
	{
	public:
		float                                                      Ret;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPAdjustDamage
	 */
	struct ADinopithecus_Character_BP_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_685X[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RDHP[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.CalculateTotalTimeTransformed
	 */
	struct ADinopithecus_Character_BP_C_CalculateTotalTimeTransformed_Params
	{
	public:
		float                                                      Result;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.SetSmallsInstance
	 */
	struct ADinopithecus_Character_BP_C_SetSmallsInstance_Params
	{
	public:
		class APrimalDinoCharacter*                                Instance;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.SpawnSmalls
	 */
	struct ADinopithecus_Character_BP_C_SpawnSmalls_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BP_InterceptMoveRight
	 */
	struct ADinopithecus_Character_BP_C_BP_InterceptMoveRight_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnPinnedBuffEnded
	 */
	struct ADinopithecus_Character_BP_C_OnPinnedBuffEnded_Params
	{
	public:
		class APrimalCharacter*                                    BuffTarget;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BP_InterceptMoveForward
	 */
	struct ADinopithecus_Character_BP_C_BP_InterceptMoveForward_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetUberpounceRotationFromSocket
	 */
	struct ADinopithecus_Character_BP_C_GetUberpounceRotationFromSocket_Params
	{
	public:
		class APrimalCharacter*                                    Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                Socket;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            Rotation;                                                // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.QueueSequential Jump
	 */
	struct ADinopithecus_Character_BP_C_QueueSequentialJump_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BP_PreventMovementMode
	 */
	struct ADinopithecus_Character_BP_C_BP_PreventMovementMode_Params
	{
	public:
		EMovementMode                                              NewMovementMode;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              NewCustomMode;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPOverrideGetAttackAnimationIndex
	 */
	struct ADinopithecus_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_89D9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UAnimMontage*>                                AnimationArray;                                          // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		int32_t                                                    ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPGetHUDElements
	 */
	struct ADinopithecus_Character_BP_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.StartBerzerk
	 */
	struct ADinopithecus_Character_BP_C_StartBerzerk_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.IsBerzerk
	 */
	struct ADinopithecus_Character_BP_C_IsBerzerk_Params
	{
	public:
		bool                                                       Ret;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BP_OnJumpReleased
	 */
	struct ADinopithecus_Character_BP_C_BP_OnJumpReleased_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPUnstasis
	 */
	struct ADinopithecus_Character_BP_C_BPUnstasis_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetDebugString
	 */
	struct ADinopithecus_Character_BP_C_GetDebugString_Params
	{
	public:
		class FString                                              Output;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateUberpounceFn
	 */
	struct ADinopithecus_Character_BP_C_UpdateUberpounceFn_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetInitialAnimationForUberpouncePublic
	 */
	struct ADinopithecus_Character_BP_C_GetInitialAnimationForUberpouncePublic_Params
	{
	public:
		class UAnimMontage*                                        AnimMontage;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnPounceStarted
	 */
	struct ADinopithecus_Character_BP_C_OnPounceStarted_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdatePounceFn
	 */
	struct ADinopithecus_Character_BP_C_UpdatePounceFn_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Compute Pounce Transform
	 */
	struct ADinopithecus_Character_BP_C_ComputePounceTransform_Params
	{
	public:
		struct FVector                                             CurrentLoc;                                              // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            CurrentRot;                                              // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             NewLocation;                                             // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            NewRotation;                                             // 0x0024(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UpdatedTransform;                                        // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPPreventOrderAllowed
	 */
	struct ADinopithecus_Character_BP_C_BPPreventOrderAllowed_Params
	{
	public:
		class APrimalCharacter*                                    FromCharacter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EDinoTamedOrder                                            OrderType;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bForce;                                                  // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LO41[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              enemyTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       orderNotExecuted;                                        // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0019(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Get Pounce Target
	 */
	struct ADinopithecus_Character_BP_C_GetPounceTarget_Params
	{
	public:
		struct FVector                                             Loc;                                                     // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            Rot;                                                     // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPServerHandleNetExecCommand
	 */
	struct ADinopithecus_Character_BP_C_BPServerHandleNetExecCommand_Params
	{
	public:
		class APlayerController*                                   FromPC;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                CommandName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0010(0x0040)  (Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.PounceAttachToCharacter
	 */
	struct ADinopithecus_Character_BP_C_PounceAttachToCharacter_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnRep_PounceStateReplicated
	 */
	struct ADinopithecus_Character_BP_C_OnRep_PounceStateReplicated_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.SetPounceState
	 */
	struct ADinopithecus_Character_BP_C_SetPounceState_Params
	{
	public:
		EShapeshifter_Large_PounceState                            NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.EndPounce
	 */
	struct ADinopithecus_Character_BP_C_EndPounce_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.StartPounce
	 */
	struct ADinopithecus_Character_BP_C_StartPounce_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.SetPounceTarget
	 */
	struct ADinopithecus_Character_BP_C_SetPounceTarget_Params
	{
	public:
		class APrimalCharacter*                                    Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPNotifyClearRider
	 */
	struct ADinopithecus_Character_BP_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPNotifySetRider
	 */
	struct ADinopithecus_Character_BP_C_BPNotifySetRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderSetting;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnLanded
	 */
	struct ADinopithecus_Character_BP_C_OnLanded_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.DrawDebugRotator
	 */
	struct ADinopithecus_Character_BP_C_DrawDebugRotator_Params
	{
	public:
		struct FVector                                             Position;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Duration;                                                // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Thickness;                                               // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Scale;                                                   // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ReceiveTick
	 */
	struct ADinopithecus_Character_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ReceivePossessed
	 */
	struct ADinopithecus_Character_BP_C_ReceivePossessed_Params
	{
	public:
		class AController*                                         NewController;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ReceiveBeginPlay
	 */
	struct ADinopithecus_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UserConstructionScript
	 */
	struct ADinopithecus_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_256
	 */
	struct ADinopithecus_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_256_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.MultiOnLanded
	 */
	struct ADinopithecus_Character_BP_C_MultiOnLanded_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerSetPounceTarget
	 */
	struct ADinopithecus_Character_BP_C_ServerSetPounceTarget_Params
	{
	public:
		class APrimalCharacter*                                    Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerEndPounce
	 */
	struct ADinopithecus_Character_BP_C_ServerEndPounce_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.MultiEndPounce
	 */
	struct ADinopithecus_Character_BP_C_MultiEndPounce_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdatePounce
	 */
	struct ADinopithecus_Character_BP_C_UpdatePounce_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerStartJump
	 */
	struct ADinopithecus_Character_BP_C_ServerStartJump_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_DoJump
	 */
	struct ADinopithecus_Character_BP_C_AnimNotify_DoJump_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.QueueSequentialJumpEvent
	 */
	struct ADinopithecus_Character_BP_C_QueueSequentialJumpEvent_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerSetLastTimeReleaseJumpWhileFalling
	 */
	struct ADinopithecus_Character_BP_C_ServerSetLastTimeReleaseJumpWhileFalling_Params
	{
	public:
		double                                                     Time;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Velocity;                                                // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             CameraDirection;                                         // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_SequentialJumpTakeOff
	 */
	struct ADinopithecus_Character_BP_C_AnimNotify_SequentialJumpTakeOff_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerForwardInputDuringSequentialJump
	 */
	struct ADinopithecus_Character_BP_C_ServerForwardInputDuringSequentialJump_Params
	{
	public:
		float                                                      Axis;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.MultiUpdateVelocity
	 */
	struct ADinopithecus_Character_BP_C_MultiUpdateVelocity_Params
	{
	public:
		struct FVector                                             NewVelocity;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_AOEGroundPound
	 */
	struct ADinopithecus_Character_BP_C_AnimNotify_AOEGroundPound_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_SwipeAttack
	 */
	struct ADinopithecus_Character_BP_C_AnimNotify_SwipeAttack_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_ChargingMeleeStart
	 */
	struct ADinopithecus_Character_BP_C_AnimNotify_ChargingMeleeStart_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_ChargingMeleeEnd
	 */
	struct ADinopithecus_Character_BP_C_AnimNotify_ChargingMeleeEnd_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ChargingMeleeTick
	 */
	struct ADinopithecus_Character_BP_C_ChargingMeleeTick_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_CameraShake
	 */
	struct ADinopithecus_Character_BP_C_AnimNotify_CameraShake_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerLeftRightInputDuringSequentialJump
	 */
	struct ADinopithecus_Character_BP_C_ServerLeftRightInputDuringSequentialJump_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_CameraShakeLight
	 */
	struct ADinopithecus_Character_BP_C_AnimNotify_CameraShakeLight_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.DeleteSmallsEvent
	 */
	struct ADinopithecus_Character_BP_C_DeleteSmallsEvent_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.StartBerzerkEvent
	 */
	struct ADinopithecus_Character_BP_C_StartBerzerkEvent_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_ResetAnimSpeed
	 */
	struct ADinopithecus_Character_BP_C_AnimNotify_ResetAnimSpeed_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_ThrowRider
	 */
	struct ADinopithecus_Character_BP_C_AnimNotify_ThrowRider_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_StartRoar
	 */
	struct ADinopithecus_Character_BP_C_AnimNotify_StartRoar_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_StopRoar
	 */
	struct ADinopithecus_Character_BP_C_AnimNotify_StopRoar_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_ClearRider
	 */
	struct ADinopithecus_Character_BP_C_AnimNotify_ClearRider_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_CheckForFallingLatch
	 */
	struct ADinopithecus_Character_BP_C_AnimNotify_CheckForFallingLatch_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerRequestUberpounceJump
	 */
	struct ADinopithecus_Character_BP_C_ServerRequestUberpounceJump_Params
	{
	public:
		struct FVector                                             Velocity;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_DoUberpounceJump
	 */
	struct ADinopithecus_Character_BP_C_AnimNotify_DoUberpounceJump_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BackupDestroy
	 */
	struct ADinopithecus_Character_BP_C_BackupDestroy_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_LatchedJumpAttached
	 */
	struct ADinopithecus_Character_BP_C_AnimNotify_LatchedJumpAttached_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_QueuedRoar
	 */
	struct ADinopithecus_Character_BP_C_AnimNotify_QueuedRoar_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerSetPounceAnticipationIdle
	 */
	struct ADinopithecus_Character_BP_C_ServerSetPounceAnticipationIdle_Params
	{
	public:
		bool                                                       IsAnticipIdle;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerSetIsHoldingProne
	 */
	struct ADinopithecus_Character_BP_C_ServerSetIsHoldingProne_Params
	{
	public:
		bool                                                       HoldingCrouch;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_URZI[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             CameraLocation;                                          // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             CameraDirection;                                         // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bReset;                                                  // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_GrabRock
	 */
	struct ADinopithecus_Character_BP_C_AnimNotify_GrabRock_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_ThrowRock
	 */
	struct ADinopithecus_Character_BP_C_AnimNotify_ThrowRock_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerRequestSequentialJump
	 */
	struct ADinopithecus_Character_BP_C_ServerRequestSequentialJump_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_AOEJumpStart
	 */
	struct ADinopithecus_Character_BP_C_AnimNotify_AOEJumpStart_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_AOEJumpEnd
	 */
	struct ADinopithecus_Character_BP_C_AnimNotify_AOEJumpEnd_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_EnableIK
	 */
	struct ADinopithecus_Character_BP_C_AnimNotify_EnableIK_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_DisableIK
	 */
	struct ADinopithecus_Character_BP_C_AnimNotify_DisableIK_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_ShouldCancelLatch
	 */
	struct ADinopithecus_Character_BP_C_AnimNotify_ShouldCancelLatch_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerRequestJumpOffWallWithAnticipation
	 */
	struct ADinopithecus_Character_BP_C_ServerRequestJumpOffWallWithAnticipation_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_PushOffWall
	 */
	struct ADinopithecus_Character_BP_C_AnimNotify_PushOffWall_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerSetLatchJumpType
	 */
	struct ADinopithecus_Character_BP_C_ServerSetLatchJumpType_Params
	{
	public:
		ELatchedJumpType                                           Type;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.MultiExplodeProjectile
	 */
	struct ADinopithecus_Character_BP_C_MultiExplodeProjectile_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerSetAmmoType
	 */
	struct ADinopithecus_Character_BP_C_ServerSetAmmoType_Params
	{
	public:
		int32_t                                                    NewAmmoType;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerSetIsHoldingCrouch
	 */
	struct ADinopithecus_Character_BP_C_ServerSetIsHoldingCrouch_Params
	{
	public:
		bool                                                       HoldingCrouch;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_40BT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Target;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerSetLastJumpHoldTime
	 */
	struct ADinopithecus_Character_BP_C_ServerSetLastJumpHoldTime_Params
	{
	public:
		float                                                      HoldTime;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Multicast_BattlecryHitFX
	 */
	struct ADinopithecus_Character_BP_C_Multicast_BattlecryHitFX_Params
	{
	public:
		int32_t                                                    NrOfHits;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HN2R[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrimalCharacter*                                    Char;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                Bone;                                                    // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ClearHUDReference
	 */
	struct ADinopithecus_Character_BP_C_ClearHUDReference_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Server_HideWeapon
	 */
	struct ADinopithecus_Character_BP_C_Server_HideWeapon_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Server_ShowWeapon
	 */
	struct ADinopithecus_Character_BP_C_Server_ShowWeapon_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.RunOnServer_UpdateInventory
	 */
	struct ADinopithecus_Character_BP_C_RunOnServer_UpdateInventory_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Multi_ResetProjectileM esh
	 */
	struct ADinopithecus_Character_BP_C_Multi_ResetProjectileMesh_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ClientStartBabyRiding
	 */
	struct ADinopithecus_Character_BP_C_ClientStartBabyRiding_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Multi_GrabRock
	 */
	struct ADinopithecus_Character_BP_C_Multi_GrabRock_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ClearUberpounceOnClearRider
	 */
	struct ADinopithecus_Character_BP_C_ClearUberpounceOnClearRider_Params
	{	};

	/**
	 * Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ExecuteUbergraph_Dinopithecus_Character_BP
	 */
	struct ADinopithecus_Character_BP_C_ExecuteUbergraph_Dinopithecus_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
