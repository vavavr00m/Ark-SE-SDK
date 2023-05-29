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
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.RefreshNearbyTamingPCs
	 */
	struct AAmargasaurus_Character_BP_C_RefreshNearbyTamingPCs_Params
	{	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SpawnWaterBubbleVFX
	 */
	struct AAmargasaurus_Character_BP_C_SpawnWaterBubbleVFX_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.UpdateWaterTrailVFX
	 */
	struct AAmargasaurus_Character_BP_C_UpdateWaterTrailVFX_Params
	{	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SpawnWaterEntryVFX
	 */
	struct AAmargasaurus_Character_BP_C_SpawnWaterEntryVFX_Params
	{	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.UpdateRiddenBuff
	 */
	struct AAmargasaurus_Character_BP_C_UpdateRiddenBuff_Params
	{
	public:
		class AShooterCharacter*                                   Rider;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsClear;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L4H2[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPNotifySetRider
	 */
	struct AAmargasaurus_Character_BP_C_BPNotifySetRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderSetting;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.K2_OnMovementModeChanged
	 */
	struct AAmargasaurus_Character_BP_C_K2_OnMovementModeChanged_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EMovementMode                                              NewMovementMode;                                         // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              PrevCustomMode;                                          // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              NewCustomMode;                                           // 0x0003(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.ToggleLockedAim
	 */
	struct AAmargasaurus_Character_BP_C_ToggleLockedAim_Params
	{	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SendTamingHUDMessage
	 */
	struct AAmargasaurus_Character_BP_C_SendTamingHUDMessage_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ColorIndex;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.CharacterNonAggroBuffCheck
	 */
	struct AAmargasaurus_Character_BP_C_CharacterNonAggroBuffCheck_Params
	{
	public:
		class AShooterCharacter*                                   ShooterChar;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HasNonAggroBuff;                                         // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.ApplyTempDebuffToHitActors
	 */
	struct AAmargasaurus_Character_BP_C_ApplyTempDebuffToHitActors_Params
	{	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BlueprintAdjustOutputDamage
	 */
	struct AAmargasaurus_Character_BP_C_BlueprintAdjustOutputDamage_Params
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
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPLocalPossessedBy
	 */
	struct AAmargasaurus_Character_BP_C_BPLocalPossessedBy_Params
	{
	public:
		class APlayerController*                                   ByController;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPLocalUnpossessed
	 */
	struct AAmargasaurus_Character_BP_C_BPLocalUnpossessed_Params
	{	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.RefreshNonRiderPossessedCrosshair
	 */
	struct AAmargasaurus_Character_BP_C_RefreshNonRiderPossessedCrosshair_Params
	{	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SpawnSpikeTypeToggleVFX
	 */
	struct AAmargasaurus_Character_BP_C_SpawnSpikeTypeToggleVFX_Params
	{
	public:
		int32_t                                                    SpikeTypeIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6PT0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.UpdateSpikeColor
	 */
	struct AAmargasaurus_Character_BP_C_UpdateSpikeColor_Params
	{	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.OnRep_CurrentSpikeType
	 */
	struct AAmargasaurus_Character_BP_C_OnRep_CurrentSpikeType_Params
	{	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SpawnSpikeMuzzleVFX
	 */
	struct AAmargasaurus_Character_BP_C_SpawnSpikeMuzzleVFX_Params
	{
	public:
		int32_t                                                    SpikeBoneIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    SpikeTypeIndex;                                          // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPModifyDesiredRotation
	 */
	struct AAmargasaurus_Character_BP_C_BPModifyDesiredRotation_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            InDesiredRotation;                                       // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FRotator                                            OutDesiredRotation;                                      // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZLW0[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.OnRep_ActiveSpikes
	 */
	struct AAmargasaurus_Character_BP_C_OnRep_ActiveSpikes_Params
	{	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPTimerNonDedicated
	 */
	struct AAmargasaurus_Character_BP_C_BPTimerNonDedicated_Params
	{	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.GetNextSpikeToRegen
	 */
	struct AAmargasaurus_Character_BP_C_GetNextSpikeToRegen_Params
	{
	public:
		int32_t                                                    NextIndex;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPDoAttack
	 */
	struct AAmargasaurus_Character_BP_C_BPDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPOverrideCameraViewTarget
	 */
	struct AAmargasaurus_Character_BP_C_BPOverrideCameraViewTarget_Params
	{
	public:
		class FName                                                CurrentCameraMode;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             DesiredCameraLocation;                                   // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            DesiredCameraRotation;                                   // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DesiredFOV;                                              // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOverrideCameraLocation;                                 // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R3W6[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             CameraLocation;                                          // 0x0028(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOverrideCameraRotation;                                 // 0x0034(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5I58[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRotator                                            CameraRotation;                                          // 0x0038(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOverrideCameraFOV;                                      // 0x0044(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B1AF[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      CameraFOV;                                               // 0x0048(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPGetCrosshairColor
	 */
	struct AAmargasaurus_Character_BP_C_BPGetCrosshairColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.OnRep_bIsAimTargeting
	 */
	struct AAmargasaurus_Character_BP_C_OnRep_bIsAimTargeting_Params
	{	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.UpdateTamingParticleEmitting
	 */
	struct AAmargasaurus_Character_BP_C_UpdateTamingParticleEmitting_Params
	{
	public:
		bool                                                       Emit;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPShouldForceFlee
	 */
	struct AAmargasaurus_Character_BP_C_BPShouldForceFlee_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BlueprintDrawFloatingHUD
	 */
	struct AAmargasaurus_Character_BP_C_BlueprintDrawFloatingHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterX;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterY;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DrawScale;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.AllowWakingTame
	 */
	struct AAmargasaurus_Character_BP_C_AllowWakingTame_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPFedWakingTameEvent
	 */
	struct AAmargasaurus_Character_BP_C_BPFedWakingTameEvent_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.OnRep_bTamingWantsFed
	 */
	struct AAmargasaurus_Character_BP_C_OnRep_bTamingWantsFed_Params
	{	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPServerHandleNetExecCommand
	 */
	struct AAmargasaurus_Character_BP_C_BPServerHandleNetExecCommand_Params
	{
	public:
		class APlayerController*                                   FromPC;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                CommandName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0010(0x0040)  (Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SetTamingPC
	 */
	struct AAmargasaurus_Character_BP_C_SetTamingPC_Params
	{
	public:
		class AShooterPlayerController*                            PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Set;                                                     // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TIPO[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.TamingTakeDamage
	 */
	struct AAmargasaurus_Character_BP_C_TamingTakeDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZJBQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              DamageCauser;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPTimerServer
	 */
	struct AAmargasaurus_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SetWildFollowTargetFromTamingPC
	 */
	struct AAmargasaurus_Character_BP_C_SetWildFollowTargetFromTamingPC_Params
	{
	public:
		bool                                                       Set;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6TDL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.ConvertDamageToAffinity
	 */
	struct AAmargasaurus_Character_BP_C_ConvertDamageToAffinity_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E84W[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageActor;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.GetSocketForMeleeTraceForHitBlockers
	 */
	struct AAmargasaurus_Character_BP_C_GetSocketForMeleeTraceForHitBlockers_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                ReturnValue;                                             // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.GetNextSpikeType
	 */
	struct AAmargasaurus_Character_BP_C_GetNextSpikeType_Params
	{
	public:
		int32_t                                                    FromIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    NextSpikeIndex;                                          // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPOverrideFloatingHUDLocation
	 */
	struct AAmargasaurus_Character_BP_C_BPOverrideFloatingHUDLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPOverrideHurtAnim
	 */
	struct AAmargasaurus_Character_BP_C_BPOverrideHurtAnim_Params
	{
	public:
		float                                                      DamageTaken;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I4IR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0008(0x0020)  (Parm, OutParm, ReferenceParm)
		class APawn*                                               PawnInstigator;                                          // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsLocalPath;                                            // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0039(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P7IB[0x2];                                   // 0x003A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             PointDamageLocation;                                     // 0x003C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             PointDamageHitNormal;                                    // 0x0048(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LH5E[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimMontage*                                        ReturnValue;                                             // 0x0058(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BP_OnJumpPressed
	 */
	struct AAmargasaurus_Character_BP_C_BP_OnJumpPressed_Params
	{	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPOverrideGetAttackAnimationIndex
	 */
	struct AAmargasaurus_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ICU3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UAnimMontage*>                                AnimationArray;                                          // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		int32_t                                                    ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SpikeStaminaCheck
	 */
	struct AAmargasaurus_Character_BP_C_SpikeStaminaCheck_Params
	{
	public:
		bool                                                       NotifyRiderOfFail;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Success;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_V46E[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPDinoARKDownloadedBegin
	 */
	struct AAmargasaurus_Character_BP_C_BPDinoARKDownloadedBegin_Params
	{	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BlueprintCanRiderAttack
	 */
	struct AAmargasaurus_Character_BP_C_BlueprintCanRiderAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPSetupTamed
	 */
	struct AAmargasaurus_Character_BP_C_BPSetupTamed_Params
	{
	public:
		bool                                                       bWasJustTamed;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.RemoveSpike
	 */
	struct AAmargasaurus_Character_BP_C_RemoveSpike_Params
	{	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPTryMultiUse
	 */
	struct AAmargasaurus_Character_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPGetMultiUseEntries
	 */
	struct AAmargasaurus_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.RidingTick
	 */
	struct AAmargasaurus_Character_BP_C_RidingTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.GetAimedSpikeTargetLoc
	 */
	struct AAmargasaurus_Character_BP_C_GetAimedSpikeTargetLoc_Params
	{
	public:
		struct FVector                                             Loc;                                                     // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPTriggerStasisEvent
	 */
	struct AAmargasaurus_Character_BP_C_BPTriggerStasisEvent_Params
	{	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.GetNextSpikeIndex
	 */
	struct AAmargasaurus_Character_BP_C_GetNextSpikeIndex_Params
	{
	public:
		int32_t                                                    NextIndex;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BP_OnUncryo
	 */
	struct AAmargasaurus_Character_BP_C_BP_OnUncryo_Params
	{
	public:
		class AShooterPlayerController*                            ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.UnstasisRegenSpikes
	 */
	struct AAmargasaurus_Character_BP_C_UnstasisRegenSpikes_Params
	{	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPUnstasis
	 */
	struct AAmargasaurus_Character_BP_C_BPUnstasis_Params
	{	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.GetNumActiveSpikes
	 */
	struct AAmargasaurus_Character_BP_C_GetNumActiveSpikes_Params
	{
	public:
		int32_t                                                    NumSpikes;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SetupSpikes
	 */
	struct AAmargasaurus_Character_BP_C_SetupSpikes_Params
	{	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.RefreshSpikeVisuals
	 */
	struct AAmargasaurus_Character_BP_C_RefreshSpikeVisuals_Params
	{	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.CanShootSpike
	 */
	struct AAmargasaurus_Character_BP_C_CanShootSpike_Params
	{
	public:
		bool                                                       CanShoot;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MCZD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.RegenSpike
	 */
	struct AAmargasaurus_Character_BP_C_RegenSpike_Params
	{	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPGetHUDElements
	 */
	struct AAmargasaurus_Character_BP_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BlueprintCanAttack
	 */
	struct AAmargasaurus_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P6YZ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_45TE[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPNotifyClearRider
	 */
	struct AAmargasaurus_Character_BP_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPHandleOnStopTargeting
	 */
	struct AAmargasaurus_Character_BP_C_BPHandleOnStopTargeting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPHandleControllerInitiatedAttack
	 */
	struct AAmargasaurus_Character_BP_C_BPHandleControllerInitiatedAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_G726[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.UserConstructionScript
	 */
	struct AAmargasaurus_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.Timeline_SpikeEmissive__FinishedFunc
	 */
	struct AAmargasaurus_Character_BP_C_Timeline_SpikeEmissive__FinishedFunc_Params
	{	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.Timeline_SpikeEmissive__UpdateFunc
	 */
	struct AAmargasaurus_Character_BP_C_Timeline_SpikeEmissive__UpdateFunc_Params
	{	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.Server_ShootSpike
	 */
	struct AAmargasaurus_Character_BP_C_Server_ShootSpike_Params
	{
	public:
		struct FVector                                             TargetLoc;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.Multi_LockRotRate
	 */
	struct AAmargasaurus_Character_BP_C_Multi_LockRotRate_Params
	{
	public:
		bool                                                       Lock;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.Server_LockRotRate
	 */
	struct AAmargasaurus_Character_BP_C_Server_LockRotRate_Params
	{
	public:
		bool                                                       Lock;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.ReceiveBeginPlay
	 */
	struct AAmargasaurus_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPAnimNotifyCustomState_End
	 */
	struct AAmargasaurus_Character_BP_C_BPAnimNotifyCustomState_End_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotifyState*                                    AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.Multi_SpawnSpikeVFX
	 */
	struct AAmargasaurus_Character_BP_C_Multi_SpawnSpikeVFX_Params
	{
	public:
		int32_t                                                    SpikeBoneIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    SpikeTypeIndex;                                          // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SetupTamingPCDamBind
	 */
	struct AAmargasaurus_Character_BP_C_SetupTamingPCDamBind_Params
	{
	public:
		bool                                                       Bind;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.OnInstigatedAnyDamage_Event
	 */
	struct AAmargasaurus_Character_BP_C_OnInstigatedAnyDamage_Event_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B9Z8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamagedActor;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.ReceiveAnyDamage
	 */
	struct AAmargasaurus_Character_BP_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_X0C5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.Multi_SetTamingParticleEmitting
	 */
	struct AAmargasaurus_Character_BP_C_Multi_SetTamingParticleEmitting_Params
	{	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.ReceiveTick
	 */
	struct AAmargasaurus_Character_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.Server_SetIsTargeting
	 */
	struct AAmargasaurus_Character_BP_C_Server_SetIsTargeting_Params
	{
	public:
		bool                                                       IsTargeting;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPAnimNotifyCustomState_Begin
	 */
	struct AAmargasaurus_Character_BP_C_BPAnimNotifyCustomState_Begin_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      TotalDuration;                                           // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4R72[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimNotifyState*                                    AnimNotifyObject;                                        // 0x0020(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 */
	struct AAmargasaurus_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.Multi_UpdateSpikeAimMats
	 */
	struct AAmargasaurus_Character_BP_C_Multi_UpdateSpikeAimMats_Params
	{
	public:
		bool                                                       Enable;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Interp;                                                  // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.UpdateSpikeAimMats
	 */
	struct AAmargasaurus_Character_BP_C_UpdateSpikeAimMats_Params
	{
	public:
		bool                                                       Enable;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Interp;                                                  // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.ExecuteUbergraph_Amargasaurus_Character_BP
	 */
	struct AAmargasaurus_Character_BP_C_ExecuteUbergraph_Amargasaurus_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
