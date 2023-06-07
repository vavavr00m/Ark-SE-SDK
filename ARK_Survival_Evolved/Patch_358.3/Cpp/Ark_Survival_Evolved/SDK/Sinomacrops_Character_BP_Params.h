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
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ReceiveAnyDamage
	 */
	struct ASinomacrops_Character_BP_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5LSM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPNotifyStructurePlacedNearby
	 */
	struct ASinomacrops_Character_BP_C_BPNotifyStructurePlacedNearby_Params
	{
	public:
		class APrimalStructure*                                    NewStructure;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ScreamStaminaCheck
	 */
	struct ASinomacrops_Character_BP_C_ScreamStaminaCheck_Params
	{
	public:
		bool                                                       HasStamToScream;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ClearPreventInventoryAccess
	 */
	struct ASinomacrops_Character_BP_C_ClearPreventInventoryAccess_Params
	{	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.MountedImmobilizationCheck
	 */
	struct ASinomacrops_Character_BP_C_MountedImmobilizationCheck_Params
	{	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BlueprintDrawFloatingHUD
	 */
	struct ASinomacrops_Character_BP_C_BlueprintDrawFloatingHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterX;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterY;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DrawScale;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.TamingTrapCheck
	 */
	struct ASinomacrops_Character_BP_C_TamingTrapCheck_Params
	{
	public:
		bool                                                       CheckPlayer;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsTrapped;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPNotifyLevelUp
	 */
	struct ASinomacrops_Character_BP_C_BPNotifyLevelUp_Params
	{
	public:
		int32_t                                                    ExtraCharacterLevel;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.AllowPlayMontage
	 */
	struct ASinomacrops_Character_BP_C_AllowPlayMontage_Params
	{
	public:
		class UAnimMontage*                                        AnimMontage;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPOverrideGetAttackAnimationIndex
	 */
	struct ASinomacrops_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9LN8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UAnimMontage*>                                AnimationArray;                                          // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		int32_t                                                    ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.LaunchToBuddyChar
	 */
	struct ASinomacrops_Character_BP_C_LaunchToBuddyChar_Params
	{	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPGetGravityZScale
	 */
	struct ASinomacrops_Character_BP_C_BPGetGravityZScale_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPTamedConsumeFoodItem
	 */
	struct ASinomacrops_Character_BP_C_BPTamedConsumeFoodItem_Params
	{
	public:
		class UPrimalItem*                                         foodItem;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.OnRep_MountSocketIndex
	 */
	struct ASinomacrops_Character_BP_C_OnRep_MountSocketIndex_Params
	{	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.SpawnMountedFlapVFX
	 */
	struct ASinomacrops_Character_BP_C_SpawnMountedFlapVFX_Params
	{
	public:
		bool                                                       IsWings;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_64D5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.UpdateEyeWingMat
	 */
	struct ASinomacrops_Character_BP_C_UpdateEyeWingMat_Params
	{
	public:
		float                                                      val;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ClearLastThrowAvoidActors
	 */
	struct ASinomacrops_Character_BP_C_ClearLastThrowAvoidActors_Params
	{	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPClientHandleNetExecCommand
	 */
	struct ASinomacrops_Character_BP_C_BPClientHandleNetExecCommand_Params
	{
	public:
		class FName                                                CommandName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0008(0x0040)  (Parm, OutParm, ReferenceParm)
		class APlayerController*                                   ForPC;                                                   // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.OnScreamStart
	 */
	struct ASinomacrops_Character_BP_C_OnScreamStart_Params
	{	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPTryMultiUse
	 */
	struct ASinomacrops_Character_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPGetMultiUseEntries
	 */
	struct ASinomacrops_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPOnClearMountedDino
	 */
	struct ASinomacrops_Character_BP_C_BPOnClearMountedDino_Params
	{	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.AnimNotifyMountedDino
	 */
	struct ASinomacrops_Character_BP_C_AnimNotifyMountedDino_Params
	{	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.RefreshSinoMountType
	 */
	struct ASinomacrops_Character_BP_C_RefreshSinoMountType_Params
	{	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.GetCanBeMountedGlider
	 */
	struct ASinomacrops_Character_BP_C_GetCanBeMountedGlider_Params
	{
	public:
		bool                                                       CanBeMountedGlider;                                      // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.FlyAfterTamingFeed
	 */
	struct ASinomacrops_Character_BP_C_FlyAfterTamingFeed_Params
	{	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BlueprintOverrideWantsToRun
	 */
	struct ASinomacrops_Character_BP_C_BlueprintOverrideWantsToRun_Params
	{
	public:
		bool                                                       bInputWantsToRun;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ResetChanceToFlyLand
	 */
	struct ASinomacrops_Character_BP_C_ResetChanceToFlyLand_Params
	{	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.AllowWakingTame
	 */
	struct ASinomacrops_Character_BP_C_AllowWakingTame_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SI75[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.UpdateChanceToFlyLand
	 */
	struct ASinomacrops_Character_BP_C_UpdateChanceToFlyLand_Params
	{
	public:
		bool                                                       IsFly;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_055M[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Chance;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsDefault;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IKS2[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.OverrideRandomWanderLocation
	 */
	struct ASinomacrops_Character_BP_C_OverrideRandomWanderLocation_Params
	{
	public:
		struct FVector                                             originalDestination;                                     // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             inVec;                                                   // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPFedWakingTameEvent
	 */
	struct ASinomacrops_Character_BP_C_BPFedWakingTameEvent_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BP_CanFly
	 */
	struct ASinomacrops_Character_BP_C_BP_CanFly_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.RefreshWildFollowPlayer
	 */
	struct ASinomacrops_Character_BP_C_RefreshWildFollowPlayer_Params
	{	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ClearWildFollowPlayer
	 */
	struct ASinomacrops_Character_BP_C_ClearWildFollowPlayer_Params
	{	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.SetWildFollowPlayer
	 */
	struct ASinomacrops_Character_BP_C_SetWildFollowPlayer_Params
	{
	public:
		class AShooterCharacter*                                   ShooterChar;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.GetWildShouldFollowPlayer
	 */
	struct ASinomacrops_Character_BP_C_GetWildShouldFollowPlayer_Params
	{
	public:
		class AShooterCharacter*                                   ShooterChar;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       SetOnSuccess;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ShouldFollow;                                            // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I02E[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ClearBuddyChar
	 */
	struct ASinomacrops_Character_BP_C_ClearBuddyChar_Params
	{	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ArriveAtBuddyCheck
	 */
	struct ASinomacrops_Character_BP_C_ArriveAtBuddyCheck_Params
	{	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.DinoShoulderMountedLaunch
	 */
	struct ASinomacrops_Character_BP_C_DinoShoulderMountedLaunch_Params
	{
	public:
		struct FVector                                             launchDir;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QEI9[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterCharacter*                                   throwingCharacter;                                       // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.GetShouldScream
	 */
	struct ASinomacrops_Character_BP_C_GetShouldScream_Params
	{
	public:
		bool                                                       IsAI;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ShouldScream;                                            // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6976[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Scream
	 */
	struct ASinomacrops_Character_BP_C_Scream_Params
	{	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPTimerServer
	 */
	struct ASinomacrops_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BlueprintAdjustOutputDamage
	 */
	struct ASinomacrops_Character_BP_C_BlueprintAdjustOutputDamage_Params
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
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.GetShouldAttackActor
	 */
	struct ASinomacrops_Character_BP_C_GetShouldAttackActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ShouldAttack;                                            // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPShouldForceFlee
	 */
	struct ASinomacrops_Character_BP_C_BPShouldForceFlee_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPSetupTamed
	 */
	struct ASinomacrops_Character_BP_C_BPSetupTamed_Params
	{
	public:
		bool                                                       bWasJustTamed;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BlueprintCanAttack
	 */
	struct ASinomacrops_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DQP0[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.InitSino
	 */
	struct ASinomacrops_Character_BP_C_InitSino_Params
	{	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.SinoMovementStamDrainTick
	 */
	struct ASinomacrops_Character_BP_C_SinoMovementStamDrainTick_Params
	{	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPServerHandleNetExecCommand
	 */
	struct ASinomacrops_Character_BP_C_BPServerHandleNetExecCommand_Params
	{
	public:
		class APlayerController*                                   FromPC;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                CommandName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0010(0x0040)  (Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPOnSetMountedDino
	 */
	struct ASinomacrops_Character_BP_C_BPOnSetMountedDino_Params
	{	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.UserConstructionScript
	 */
	struct ASinomacrops_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Timeline_LerpMountSocket__FinishedFunc
	 */
	struct ASinomacrops_Character_BP_C_Timeline_LerpMountSocket__FinishedFunc_Params
	{	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Timeline_LerpMountSocket__UpdateFunc
	 */
	struct ASinomacrops_Character_BP_C_Timeline_LerpMountSocket__UpdateFunc_Params
	{	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Timeline_ScreamEyeWing__FinishedFunc
	 */
	struct ASinomacrops_Character_BP_C_Timeline_ScreamEyeWing__FinishedFunc_Params
	{	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Timeline_ScreamEyeWing__UpdateFunc
	 */
	struct ASinomacrops_Character_BP_C_Timeline_ScreamEyeWing__UpdateFunc_Params
	{	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ReceiveBeginPlay
	 */
	struct ASinomacrops_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 */
	struct ASinomacrops_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Multi_SpawnTamingVFX
	 */
	struct ASinomacrops_Character_BP_C_Multi_SpawnTamingVFX_Params
	{
	public:
		class AShooterCharacter*                                   ForPlayer;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Multi_PlayGliderMontage
	 */
	struct ASinomacrops_Character_BP_C_Multi_PlayGliderMontage_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      PlayRate;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Multi_LerpMountSockets
	 */
	struct ASinomacrops_Character_BP_C_Multi_LerpMountSockets_Params
	{
	public:
		int32_t                                                    ToIndex;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.StopLerpMountSockets
	 */
	struct ASinomacrops_Character_BP_C_StopLerpMountSockets_Params
	{	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ScreamUpdateEyeWing
	 */
	struct ASinomacrops_Character_BP_C_ScreamUpdateEyeWing_Params
	{	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Multi_ThrowToBuddy
	 */
	struct ASinomacrops_Character_BP_C_Multi_ThrowToBuddy_Params
	{
	public:
		struct UObject_FTransform                                  Rot;                                                     // 0x0000(0x0030)  (Parm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Multi_PostImmobilizeRemount
	 */
	struct ASinomacrops_Character_BP_C_Multi_PostImmobilizeRemount_Params
	{	};

	/**
	 * Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ExecuteUbergraph_Sinomacrops_Character_BP
	 */
	struct ASinomacrops_Character_BP_C_ExecuteUbergraph_Sinomacrops_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
