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
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPCanBaseOnCharacter
	 */
	struct AGiantTurtle_Character_BP_C_BPCanBaseOnCharacter_Params
	{
	public:
		class APrimalCharacter*                                    BaseCharacter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B4CV[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPBecomeAdult
	 */
	struct AGiantTurtle_Character_BP_C_BPBecomeAdult_Params
	{	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPBecomeBaby
	 */
	struct AGiantTurtle_Character_BP_C_BPBecomeBaby_Params
	{	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPUnstasis
	 */
	struct AGiantTurtle_Character_BP_C_BPUnstasis_Params
	{	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPOnDinoCheat
	 */
	struct AGiantTurtle_Character_BP_C_BPOnDinoCheat_Params
	{
	public:
		class FName                                                CheatName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSetValue;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_N1AK[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPNotifyToggleHUD
	 */
	struct AGiantTurtle_Character_BP_C_BPNotifyToggleHUD_Params
	{
	public:
		bool                                                       bHudHidden;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.OnRep_bAllowMating
	 */
	struct AGiantTurtle_Character_BP_C_OnRep_bAllowMating_Params
	{	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.ReceiveBeginPlay
	 */
	struct AGiantTurtle_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.GetAllowMating
	 */
	struct AGiantTurtle_Character_BP_C_GetAllowMating_Params
	{
	public:
		bool                                                       Allow;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QHGB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BlueprintDrawFloatingHUD
	 */
	struct AGiantTurtle_Character_BP_C_BlueprintDrawFloatingHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterX;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterY;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DrawScale;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.UpdateAllowMating
	 */
	struct AGiantTurtle_Character_BP_C_UpdateAllowMating_Params
	{	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPTimerServer
	 */
	struct AGiantTurtle_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.ReceiveDestroyed
	 */
	struct AGiantTurtle_Character_BP_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.DestroyHudWidget
	 */
	struct AGiantTurtle_Character_BP_C_DestroyHudWidget_Params
	{
	public:
		bool                                                       DestroyNow;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPNotifyClearRider
	 */
	struct AGiantTurtle_Character_BP_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPNotifySetRider
	 */
	struct AGiantTurtle_Character_BP_C_BPNotifySetRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderSetting;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPNotifyLevelUp
	 */
	struct AGiantTurtle_Character_BP_C_BPNotifyLevelUp_Params
	{
	public:
		int32_t                                                    ExtraCharacterLevel;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_75C2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.AllowPlayMontage
	 */
	struct AGiantTurtle_Character_BP_C_AllowPlayMontage_Params
	{
	public:
		class UAnimMontage*                                        AnimMontage;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SZF3[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BP_InterceptMoveForward
	 */
	struct AGiantTurtle_Character_BP_C_BP_InterceptMoveForward_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.CheckRaftMode
	 */
	struct AGiantTurtle_Character_BP_C_CheckRaftMode_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPPostLoadedFromSaveGame
	 */
	struct AGiantTurtle_Character_BP_C_BPPostLoadedFromSaveGame_Params
	{	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.ClearPreventHurtAnim
	 */
	struct AGiantTurtle_Character_BP_C_ClearPreventHurtAnim_Params
	{	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.AnimBpSetBreathing
	 */
	struct AGiantTurtle_Character_BP_C_AnimBpSetBreathing_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JNLP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.DestroySaddle
	 */
	struct AGiantTurtle_Character_BP_C_DestroySaddle_Params
	{	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPPlayDying
	 */
	struct AGiantTurtle_Character_BP_C_BPPlayDying_Params
	{
	public:
		float                                                      KillingDamage;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DQ0J[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0008(0x0020)  (Parm, OutParm, ReferenceParm)
		class APawn*                                               InstigatingPawn;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.TickWake
	 */
	struct AGiantTurtle_Character_BP_C_TickWake_Params
	{	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.UpdateMaterial
	 */
	struct AGiantTurtle_Character_BP_C_UpdateMaterial_Params
	{	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BubbleAttackToggle
	 */
	struct AGiantTurtle_Character_BP_C_BubbleAttackToggle_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 */
	struct AGiantTurtle_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPOverrideHurtAnim
	 */
	struct AGiantTurtle_Character_BP_C_BPOverrideHurtAnim_Params
	{
	public:
		float                                                      DamageTaken;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IO69[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0008(0x0020)  (Parm, OutParm, ReferenceParm)
		class APawn*                                               PawnInstigator;                                          // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsLocalPath;                                            // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0039(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8ZE2[0x2];                                   // 0x003A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             PointDamageLocation;                                     // 0x003C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             PointDamageHitNormal;                                    // 0x0048(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TMP5[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimMontage*                                        ReturnValue;                                             // 0x0058(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.CheckCave
	 */
	struct AGiantTurtle_Character_BP_C_CheckCave_Params
	{	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.TurnOffFlock
	 */
	struct AGiantTurtle_Character_BP_C_TurnOffFlock_Params
	{	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPAdjustDamage
	 */
	struct AGiantTurtle_Character_BP_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DLAQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AC34[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZT0W[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Setup Flock
	 */
	struct AGiantTurtle_Character_BP_C_SetupFlock_Params
	{	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.CheckTurtleTargetForFollowers
	 */
	struct AGiantTurtle_Character_BP_C_CheckTurtleTargetForFollowers_Params
	{	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.TickTaming
	 */
	struct AGiantTurtle_Character_BP_C_TickTaming_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.CheckFullyInWater
	 */
	struct AGiantTurtle_Character_BP_C_CheckFullyInWater_Params
	{	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.TickBirdsFlock
	 */
	struct AGiantTurtle_Character_BP_C_TickBirdsFlock_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.PushBackPawnNotInWater
	 */
	struct AGiantTurtle_Character_BP_C_PushBackPawnNotInWater_Params
	{
	public:
		class APrimalCharacter*                                    Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.TickBubbleCooldown
	 */
	struct AGiantTurtle_Character_BP_C_TickBubbleCooldown_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPGetHUDElements
	 */
	struct AGiantTurtle_Character_BP_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.UpdateBreath Rotation
	 */
	struct AGiantTurtle_Character_BP_C_UpdateBreathRotation_Params
	{	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Tick Breathing
	 */
	struct AGiantTurtle_Character_BP_C_TickBreathing_Params
	{
	public:
		float                                                      DeltSeconds;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPGetCrosshairAlpha
	 */
	struct AGiantTurtle_Character_BP_C_BPGetCrosshairAlpha_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPHandleControllerInitiatedAttack
	 */
	struct AGiantTurtle_Character_BP_C_BPHandleControllerInitiatedAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UWP8[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPHandleOnStopTargeting
	 */
	struct AGiantTurtle_Character_BP_C_BPHandleOnStopTargeting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.GetPlayersOnSeats
	 */
	struct AGiantTurtle_Character_BP_C_GetPlayersOnSeats_Params
	{	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.K2_OnMovementModeChanged
	 */
	struct AGiantTurtle_Character_BP_C_K2_OnMovementModeChanged_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EMovementMode                                              NewMovementMode;                                         // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              PrevCustomMode;                                          // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              NewCustomMode;                                           // 0x0003(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BlueprintCanRiderAttack
	 */
	struct AGiantTurtle_Character_BP_C_BlueprintCanRiderAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.SpawnBubble
	 */
	struct AGiantTurtle_Character_BP_C_SpawnBubble_Params
	{	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BP_GetCustomModifier_RotationRate
	 */
	struct AGiantTurtle_Character_BP_C_BP_GetCustomModifier_RotationRate_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Setup New Crop DataStruct
	 */
	struct AGiantTurtle_Character_BP_C_SetupNewCropDataStruct_Params
	{
	public:
		int32_t                                                    LocationIndex;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_N8QX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimalItemConsumableSeed_C*                         SeedItem;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Check Inventory for Seed Items
	 */
	struct AGiantTurtle_Character_BP_C_CheckInventoryforSeedItems_Params
	{	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.GetCropGrowLocation
	 */
	struct AGiantTurtle_Character_BP_C_GetCropGrowLocation_Params
	{
	public:
		int32_t                                                    LocationIndex;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.SpawnOxygenVFX
	 */
	struct AGiantTurtle_Character_BP_C_SpawnOxygenVFX_Params
	{	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Update CropsVisuals
	 */
	struct AGiantTurtle_Character_BP_C_UpdateCropsVisuals_Params
	{	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.UpdateFlowerAndMushroom
	 */
	struct AGiantTurtle_Character_BP_C_UpdateFlowerAndMushroom_Params
	{
	public:
		float                                                      DeltaSecond;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.UpdateCropStructs
	 */
	struct AGiantTurtle_Character_BP_C_UpdateCropStructs_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.AddOxygenBuff
	 */
	struct AGiantTurtle_Character_BP_C_AddOxygenBuff_Params
	{	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPNotifyInventoryItemChange
	 */
	struct AGiantTurtle_Character_BP_C_BPNotifyInventoryItemChange_Params
	{
	public:
		bool                                                       bIsItemAdd;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6YME[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimalItem*                                         theItem;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bEquipItem;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.GetMovementMontage
	 */
	struct AGiantTurtle_Character_BP_C_GetMovementMontage_Params
	{
	public:
		ERootMotionMovementMode                                    Mode;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4NPN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimMontage*                                        Montage;                                                 // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPGetRiderUnboardLocation
	 */
	struct AGiantTurtle_Character_BP_C_BPGetRiderUnboardLocation_Params
	{
	public:
		class APrimalCharacter*                                    RidingCharacter;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.UserConstructionScript
	 */
	struct AGiantTurtle_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.ReceiveTick
	 */
	struct AGiantTurtle_Character_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.SpawnBubbles
	 */
	struct AGiantTurtle_Character_BP_C_SpawnBubbles_Params
	{	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Server_SetIsBreathing
	 */
	struct AGiantTurtle_Character_BP_C_Server_SetIsBreathing_Params
	{
	public:
		bool                                                       bIsBreathing;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Server_SetBreathDirection
	 */
	struct AGiantTurtle_Character_BP_C_Server_SetBreathDirection_Params
	{
	public:
		struct FVector                                             BreathViewStartLocation;                                 // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             BreathDirection;                                         // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Server_TryBubbleAttack
	 */
	struct AGiantTurtle_Character_BP_C_Server_TryBubbleAttack_Params
	{
	public:
		class AShooterPlayerController*                            OwnerContoler;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Server_StopBubbleAttack
	 */
	struct AGiantTurtle_Character_BP_C_Server_StopBubbleAttack_Params
	{	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Multi_StopCurrentMontage
	 */
	struct AGiantTurtle_Character_BP_C_Multi_StopCurrentMontage_Params
	{	};

	/**
	 * Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.ExecuteUbergraph_GiantTurtle_Character_BP
	 */
	struct AGiantTurtle_Character_BP_C_ExecuteUbergraph_GiantTurtle_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
