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
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.OnRep_bAllowMating
	 */
	struct ACherufe_Character_BP_C_OnRep_bAllowMating_Params
	{	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.BlueprintDrawFloatingHUD
	 */
	struct ACherufe_Character_BP_C_BlueprintDrawFloatingHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterX;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterY;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DrawScale;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.GetAllowMating
	 */
	struct ACherufe_Character_BP_C_GetAllowMating_Params
	{
	public:
		bool                                                       Allow;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.UpdateAllowMating
	 */
	struct ACherufe_Character_BP_C_UpdateAllowMating_Params
	{	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.UpdateForgeCharging
	 */
	struct ACherufe_Character_BP_C_UpdateForgeCharging_Params
	{	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.BP_GetCustomModifier_MaxSpeed
	 */
	struct ACherufe_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.UpdateTargetingAndAiming
	 */
	struct ACherufe_Character_BP_C_UpdateTargetingAndAiming_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPTimerNonDedicated
	 */
	struct ACherufe_Character_BP_C_BPTimerNonDedicated_Params
	{	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPTimerServer
	 */
	struct ACherufe_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.BP_InterceptMoveForward
	 */
	struct ACherufe_Character_BP_C_BP_InterceptMoveForward_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9UCX[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.IsConsumingOil
	 */
	struct ACherufe_Character_BP_C_IsConsumingOil_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PDGI[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPGetOverrideCameraInterpSpeed
	 */
	struct ACherufe_Character_BP_C_BPGetOverrideCameraInterpSpeed_Params
	{
	public:
		float                                                      DefaultTPVCameraSpeedInterpolationMultiplier;            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DefaultTPVOffsetInterpSpeed;                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      TPVCameraSpeedInterpolationMultiplier;                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      TPVOffsetInterpSpeed;                                    // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPOverrideCameraViewTarget
	 */
	struct ACherufe_Character_BP_C_BPOverrideCameraViewTarget_Params
	{
	public:
		class FName                                                CurrentCameraMode;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             DesiredCameraLocation;                                   // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            DesiredCameraRotation;                                   // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DesiredFOV;                                              // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOverrideCameraLocation;                                 // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_V98M[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             CameraLocation;                                          // 0x0028(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOverrideCameraRotation;                                 // 0x0034(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_143K[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            CameraRotation;                                          // 0x0038(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOverrideCameraFOV;                                      // 0x0044(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CYRM[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      CameraFOV;                                               // 0x0048(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.Update Targeting Location Particle
	 */
	struct ACherufe_Character_BP_C_UpdateTargetingLocationParticle_Params
	{
	public:
		bool                                                       IsVisialbe;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XLQS[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Location;                                                // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.CheckRaining
	 */
	struct ACherufe_Character_BP_C_CheckRaining_Params
	{
	public:
		bool                                                       ThisCharacterIsOpenToSkyAndItIsRaining;                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LUA6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.SpawnNestEgg
	 */
	struct ACherufe_Character_BP_C_SpawnNestEgg_Params
	{	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPNotifySetRider
	 */
	struct ACherufe_Character_BP_C_BPNotifySetRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderSetting;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPNotifyClearRider
	 */
	struct ACherufe_Character_BP_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.ToggleInOutWaterVFX
	 */
	struct ACherufe_Character_BP_C_ToggleInOutWaterVFX_Params
	{
	public:
		bool                                                       InWater;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPOnMovementModeChangedNotify
	 */
	struct ACherufe_Character_BP_C_BPOnMovementModeChangedNotify_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              PreviousCustomMode;                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.SetForgeEnabled
	 */
	struct ACherufe_Character_BP_C_SetForgeEnabled_Params
	{
	public:
		bool                                                       Enable;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.UpdateVFX
	 */
	struct ACherufe_Character_BP_C_UpdateVFX_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.PushBackPawns
	 */
	struct ACherufe_Character_BP_C_PushBackPawns_Params
	{	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.OnRep_IsProjectileTargeting
	 */
	struct ACherufe_Character_BP_C_OnRep_IsProjectileTargeting_Params
	{	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 */
	struct ACherufe_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.SpawnVentProjectiles
	 */
	struct ACherufe_Character_BP_C_SpawnVentProjectiles_Params
	{	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPAdjustDamage
	 */
	struct ACherufe_Character_BP_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XYAR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JOFF[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.GetVentForgeStaminaCost
	 */
	struct ACherufe_Character_BP_C_GetVentForgeStaminaCost_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPAdjustAttackIndex
	 */
	struct ACherufe_Character_BP_C_BPAdjustAttackIndex_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.BlueprintCanAttack
	 */
	struct ACherufe_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_D89H[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.StopChargingForge
	 */
	struct ACherufe_Character_BP_C_StopChargingForge_Params
	{	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.GetForgeChargedAmount
	 */
	struct ACherufe_Character_BP_C_GetForgeChargedAmount_Params
	{
	public:
		bool                                                       SmoothedValues;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1VES[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Percent;                                                 // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.StartChargingForge
	 */
	struct ACherufe_Character_BP_C_StartChargingForge_Params
	{	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.Allowed to ChargeForge
	 */
	struct ACherufe_Character_BP_C_AllowedtoChargeForge_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.DoVentHeatAttack
	 */
	struct ACherufe_Character_BP_C_DoVentHeatAttack_Params
	{	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPTryMultiUse
	 */
	struct ACherufe_Character_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPGetMultiUseEntries
	 */
	struct ACherufe_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.ProjectileTrySubtractFood
	 */
	struct ACherufe_Character_BP_C_ProjectileTrySubtractFood_Params
	{
	public:
		bool                                                       Success;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9JGZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPGetHUDElements
	 */
	struct ACherufe_Character_BP_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPHandleOnStopTargeting
	 */
	struct ACherufe_Character_BP_C_BPHandleOnStopTargeting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RE7J[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPHandleControllerInitiatedAttack
	 */
	struct ACherufe_Character_BP_C_BPHandleControllerInitiatedAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPDoAttack
	 */
	struct ACherufe_Character_BP_C_BPDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.GetVerticalViewAngle
	 */
	struct ACherufe_Character_BP_C_GetVerticalViewAngle_Params
	{
	public:
		float                                                      Angle;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.BlueprintCanRiderAttack
	 */
	struct ACherufe_Character_BP_C_BlueprintCanRiderAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.SetTurretMode
	 */
	struct ACherufe_Character_BP_C_SetTurretMode_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPSetupTamed
	 */
	struct ACherufe_Character_BP_C_BPSetupTamed_Params
	{
	public:
		bool                                                       bWasJustTamed;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPBecomeAdult
	 */
	struct ACherufe_Character_BP_C_BPBecomeAdult_Params
	{	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPBecomeBaby
	 */
	struct ACherufe_Character_BP_C_BPBecomeBaby_Params
	{	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.UserConstructionScript
	 */
	struct ACherufe_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.ServerRequest_FireProjectile
	 */
	struct ACherufe_Character_BP_C_ServerRequest_FireProjectile_Params
	{
	public:
		struct FProjectileArc                                      Arc;                                                     // 0x0000(0x0030)  (Parm)
	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.ClientShowErrorMessage
	 */
	struct ACherufe_Character_BP_C_ClientShowErrorMessage_Params
	{
	public:
		unsigned char                                              MessageType;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SHRQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      DisplayTime;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsSingleton;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.ServerRequestStartChargingForge
	 */
	struct ACherufe_Character_BP_C_ServerRequestStartChargingForge_Params
	{	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.ServerRequestStopChargingForge
	 */
	struct ACherufe_Character_BP_C_ServerRequestStopChargingForge_Params
	{	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.ServerRequestDoVentForgeAttack
	 */
	struct ACherufe_Character_BP_C_ServerRequestDoVentForgeAttack_Params
	{	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.MultiSetSpeed
	 */
	struct ACherufe_Character_BP_C_MultiSetSpeed_Params
	{
	public:
		bool                                                       ChargingForge;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.ReceiveBeginPlay
	 */
	struct ACherufe_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.BPUnstasis
	 */
	struct ACherufe_Character_BP_C_BPUnstasis_Params
	{	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.Multi_SetCanRun
	 */
	struct ACherufe_Character_BP_C_Multi_SetCanRun_Params
	{
	public:
		bool                                                       CanRun;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.AnimNotify_EatingFromOilGeyser
	 */
	struct ACherufe_Character_BP_C_AnimNotify_EatingFromOilGeyser_Params
	{	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.Multi_UpdateSmeltingFX
	 */
	struct ACherufe_Character_BP_C_Multi_UpdateSmeltingFX_Params
	{
	public:
		bool                                                       NewActiveState;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.TimeGatedTryAoEHeat
	 */
	struct ACherufe_Character_BP_C_TimeGatedTryAoEHeat_Params
	{	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.BP_OnJumpPressed
	 */
	struct ACherufe_Character_BP_C_BP_OnJumpPressed_Params
	{	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.Multi_StartOrStopForgeChargingFX
	 */
	struct ACherufe_Character_BP_C_Multi_StartOrStopForgeChargingFX_Params
	{
	public:
		bool                                                       IsStart;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.AnimNotify_Taunt
	 */
	struct ACherufe_Character_BP_C_AnimNotify_Taunt_Params
	{	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.Server_TryTauntAttack
	 */
	struct ACherufe_Character_BP_C_Server_TryTauntAttack_Params
	{	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.Multi_UpdateLavaFloating
	 */
	struct ACherufe_Character_BP_C_Multi_UpdateLavaFloating_Params
	{	};

	/**
	 * Function Cherufe_Character_BP.Cherufe_Character_BP_C.ExecuteUbergraph_Cherufe_Character_BP
	 */
	struct ACherufe_Character_BP_C_ExecuteUbergraph_Cherufe_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
