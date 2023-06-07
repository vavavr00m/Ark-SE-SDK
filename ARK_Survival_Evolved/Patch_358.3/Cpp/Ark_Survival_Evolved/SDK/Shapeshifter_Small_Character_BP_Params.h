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
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPOverrideMutationLabels
	 */
	struct AShapeshifter_Small_Character_BP_C_BPOverrideMutationLabels_Params
	{
	public:
		bool                                                       male;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MAMC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPNotifyLevelUp
	 */
	struct AShapeshifter_Small_Character_BP_C_BPNotifyLevelUp_Params
	{
	public:
		int32_t                                                    ExtraCharacterLevel;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YKAZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.GetBiglyStats
	 */
	struct AShapeshifter_Small_Character_BP_C_GetBiglyStats_Params
	{	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPGetStatusNameString
	 */
	struct AShapeshifter_Small_Character_BP_C_BPGetStatusNameString_Params
	{
	public:
		EPrimalCharacterStatusValue                                ValueType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_76GQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.UpdateBiglyStatsCache
	 */
	struct AShapeshifter_Small_Character_BP_C_UpdateBiglyStatsCache_Params
	{
	public:
		class APrimalCharacter*                                    Bigly;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPBecameNewBaby
	 */
	struct AShapeshifter_Small_Character_BP_C_BPBecameNewBaby_Params
	{
	public:
		class APrimalDinoCharacter*                                Parent;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.DoMate
	 */
	struct AShapeshifter_Small_Character_BP_C_DoMate_Params
	{
	public:
		class APrimalDinoCharacter*                                WithMate;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPOnDinoCheat
	 */
	struct AShapeshifter_Small_Character_BP_C_BPOnDinoCheat_Params
	{
	public:
		class FName                                                CheatName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSetValue;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L6DT[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.OnRep_bAllowMating
	 */
	struct AShapeshifter_Small_Character_BP_C_OnRep_bAllowMating_Params
	{	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPCanCryo
	 */
	struct AShapeshifter_Small_Character_BP_C_BPCanCryo_Params
	{
	public:
		class AShooterPlayerController*                            ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.UpdateAllowMating
	 */
	struct AShapeshifter_Small_Character_BP_C_UpdateAllowMating_Params
	{	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BlueprintDrawFloatingHUD
	 */
	struct AShapeshifter_Small_Character_BP_C_BlueprintDrawFloatingHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterX;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterY;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DrawScale;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BP_OnSetDeath
	 */
	struct AShapeshifter_Small_Character_BP_C_BP_OnSetDeath_Params
	{	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.Spawn Bigly Fn
	 */
	struct AShapeshifter_Small_Character_BP_C_SpawnBiglyFn_Params
	{	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPTimerNonDedicated
	 */
	struct AShapeshifter_Small_Character_BP_C_BPTimerNonDedicated_Params
	{	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.Throttled TickFn
	 */
	struct AShapeshifter_Small_Character_BP_C_ThrottledTickFn_Params
	{	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.Check Wild Should Random TransformFn
	 */
	struct AShapeshifter_Small_Character_BP_C_CheckWildShouldRandomTransformFn_Params
	{	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.StartTransform
	 */
	struct AShapeshifter_Small_Character_BP_C_StartTransform_Params
	{
	public:
		bool                                                       SpawnBigly;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       QueueRoar;                                               // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.isTransforming
	 */
	struct AShapeshifter_Small_Character_BP_C_isTransforming_Params
	{
	public:
		bool                                                       ret;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPCanMountOnCharacter
	 */
	struct AShapeshifter_Small_Character_BP_C_BPCanMountOnCharacter_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPGetMultiUseEntries
	 */
	struct AShapeshifter_Small_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AllowPlayMontage
	 */
	struct AShapeshifter_Small_Character_BP_C_AllowPlayMontage_Params
	{
	public:
		class UAnimMontage*                                        AnimMontage;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P0BW[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPOverrideTamingDescriptionLabel
	 */
	struct AShapeshifter_Small_Character_BP_C_BPOverrideTamingDescriptionLabel_Params
	{
	public:
		struct FSlateColor                                         TextColor;                                               // 0x0000(0x0028)  (Parm, OutParm, ReferenceParm)
		class FString                                              ReturnValue;                                             // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPDisplayTamedMessage
	 */
	struct AShapeshifter_Small_Character_BP_C_BPDisplayTamedMessage_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BlueprintTamedTick
	 */
	struct AShapeshifter_Small_Character_BP_C_BlueprintTamedTick_Params
	{	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.OnRep_InitialReplicationComplete
	 */
	struct AShapeshifter_Small_Character_BP_C_OnRep_InitialReplicationComplete_Params
	{	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.OnLanded
	 */
	struct AShapeshifter_Small_Character_BP_C_OnLanded_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x0088)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.DinoShoulderMountedLaunch
	 */
	struct AShapeshifter_Small_Character_BP_C_DinoShoulderMountedLaunch_Params
	{
	public:
		struct FVector                                             launchDir;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YNHE[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterCharacter*                                   throwingCharacter;                                       // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPModifyAimOffsetNoTarget
	 */
	struct AShapeshifter_Small_Character_BP_C_BPModifyAimOffsetNoTarget_Params
	{
	public:
		struct FRotator                                            Aim;                                                     // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FRotator                                            ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPHandlePoop
	 */
	struct AShapeshifter_Small_Character_BP_C_BPHandlePoop_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LAOF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BlueprintCanAttack
	 */
	struct AShapeshifter_Small_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9BGU[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MWN6[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.CalculateTransformationCountRequiredForTame
	 */
	struct AShapeshifter_Small_Character_BP_C_CalculateTransformationCountRequiredForTame_Params
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    Count;                                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.UnTransform
	 */
	struct AShapeshifter_Small_Character_BP_C_UnTransform_Params
	{
	public:
		int32_t                                                    TransformationCount;                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7MTO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrimalDinoCharacter*                                Bigly;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AShooterPlayerController*                            TamingController;                                        // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.Calculate Current Element Count Required for Transform
	 */
	struct AShapeshifter_Small_Character_BP_C_CalculateCurrentElementCountRequiredforTransform_Params
	{
	public:
		int32_t                                                    cost;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPDinoTooltipCustomTorpidityProgressBar
	 */
	struct AShapeshifter_Small_Character_BP_C_BPDinoTooltipCustomTorpidityProgressBar_Params
	{
	public:
		bool                                                       overrideTorpidityProgressBarIfActive;                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HJD5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      progressPercent;                                         // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              Label;                                                   // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPDinoTooltipCustomTamingProgressBar
	 */
	struct AShapeshifter_Small_Character_BP_C_BPDinoTooltipCustomTamingProgressBar_Params
	{
	public:
		bool                                                       overrideTamingProgressBarIfActive;                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6PQ0[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      progressPercent;                                         // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              Label;                                                   // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.K2_OnMovementModeChanged
	 */
	struct AShapeshifter_Small_Character_BP_C_K2_OnMovementModeChanged_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EMovementMode                                              NewMovementMode;                                         // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              PrevCustomMode;                                          // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              NewCustomMode;                                           // 0x0003(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.TryThrowPoop
	 */
	struct AShapeshifter_Small_Character_BP_C_TryThrowPoop_Params
	{	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPAdjustDamage
	 */
	struct AShapeshifter_Small_Character_BP_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_61B7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7WGZ[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_W2TY[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPOnTamedProcessOrder
	 */
	struct AShapeshifter_Small_Character_BP_C_BPOnTamedProcessOrder_Params
	{
	public:
		class APrimalCharacter*                                    FromCharacter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EDinoTamedOrder                                            OrderType;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bForce;                                                  // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3TSR[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              enemyTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       orderNotExecuted;                                        // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.Try Digging
	 */
	struct AShapeshifter_Small_Character_BP_C_TryDigging_Params
	{	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.FindTargetWithElementEquipped
	 */
	struct AShapeshifter_Small_Character_BP_C_FindTargetWithElementEquipped_Params
	{
	public:
		class APrimalCharacter*                                    ret;                                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPShouldForceFlee
	 */
	struct AShapeshifter_Small_Character_BP_C_BPShouldForceFlee_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPPreventOrderAllowed
	 */
	struct AShapeshifter_Small_Character_BP_C_BPPreventOrderAllowed_Params
	{
	public:
		class APrimalCharacter*                                    FromCharacter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EDinoTamedOrder                                            OrderType;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bForce;                                                  // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MMDE[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              enemyTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       orderNotExecuted;                                        // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0019(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.SetAddictionAmount
	 */
	struct AShapeshifter_Small_Character_BP_C_SetAddictionAmount_Params
	{
	public:
		float                                                      amount;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Result;                                                  // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.GetAddictedAmount
	 */
	struct AShapeshifter_Small_Character_BP_C_GetAddictedAmount_Params
	{
	public:
		float                                                      Addiction;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.GetTarget
	 */
	struct AShapeshifter_Small_Character_BP_C_GetTarget_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.TargetHasElement
	 */
	struct AShapeshifter_Small_Character_BP_C_TargetHasElement_Params
	{
	public:
		class AShooterCharacter*                                   Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Res;                                                     // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.DisableBegging
	 */
	struct AShapeshifter_Small_Character_BP_C_DisableBegging_Params
	{	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.SetTarget
	 */
	struct AShapeshifter_Small_Character_BP_C_SetTarget_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.No Controller RequestMountTransform to Bigly
	 */
	struct AShapeshifter_Small_Character_BP_C_NoControllerRequestMountTransformtoBigly_Params
	{	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPIsBasedOnActor
	 */
	struct AShapeshifter_Small_Character_BP_C_BPIsBasedOnActor_Params
	{
	public:
		class AActor*                                              Other;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPTimerServer
	 */
	struct AShapeshifter_Small_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.Check for ElementFn
	 */
	struct AShapeshifter_Small_Character_BP_C_CheckforElementFn_Params
	{	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.OnUpdateUberpounce
	 */
	struct AShapeshifter_Small_Character_BP_C_OnUpdateUberpounce_Params
	{	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.TryPounce
	 */
	struct AShapeshifter_Small_Character_BP_C_TryPounce_Params
	{	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPOnClearMountedDino
	 */
	struct AShapeshifter_Small_Character_BP_C_BPOnClearMountedDino_Params
	{	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPOnSetMountedDino
	 */
	struct AShapeshifter_Small_Character_BP_C_BPOnSetMountedDino_Params
	{	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.Transform
	 */
	struct AShapeshifter_Small_Character_BP_C_Transform_Params
	{
	public:
		class UAnimMontage*                                        TransformAnim;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.TryBegFn
	 */
	struct AShapeshifter_Small_Character_BP_C_TryBegFn_Params
	{	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.ReceiveTick
	 */
	struct AShapeshifter_Small_Character_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.ReceiveBeginPlay
	 */
	struct AShapeshifter_Small_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.BPServerHandleNetExecCommand
	 */
	struct AShapeshifter_Small_Character_BP_C_BPServerHandleNetExecCommand_Params
	{
	public:
		class APlayerController*                                   FromPC;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                CommandName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0010(0x0040)  (Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.IsPlayerNearby
	 */
	struct AShapeshifter_Small_Character_BP_C_IsPlayerNearby_Params
	{
	public:
		bool                                                       bNearby;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4EC9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.UserConstructionScript
	 */
	struct AShapeshifter_Small_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_AteElement
	 */
	struct AShapeshifter_Small_Character_BP_C_AnimNotify_AteElement_Params
	{	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_Transform
	 */
	struct AShapeshifter_Small_Character_BP_C_AnimNotify_Transform_Params
	{	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.SpawnBigly
	 */
	struct AShapeshifter_Small_Character_BP_C_SpawnBigly_Params
	{	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.TryBeg
	 */
	struct AShapeshifter_Small_Character_BP_C_TryBeg_Params
	{	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.OnBegEnd
	 */
	struct AShapeshifter_Small_Character_BP_C_OnBegEnd_Params
	{	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_ThrowTransform
	 */
	struct AShapeshifter_Small_Character_BP_C_AnimNotify_ThrowTransform_Params
	{	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_EatingElement
	 */
	struct AShapeshifter_Small_Character_BP_C_AnimNotify_EatingElement_Params
	{	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.ServerRequestMountTransformToBigly
	 */
	struct AShapeshifter_Small_Character_BP_C_ServerRequestMountTransformToBigly_Params
	{	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_OnFinishedSniffing
	 */
	struct AShapeshifter_Small_Character_BP_C_AnimNotify_OnFinishedSniffing_Params
	{	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.ResetAllowFlee
	 */
	struct AShapeshifter_Small_Character_BP_C_ResetAllowFlee_Params
	{	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_DiggingComplete
	 */
	struct AShapeshifter_Small_Character_BP_C_AnimNotify_DiggingComplete_Params
	{	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_ThrowPoop
	 */
	struct AShapeshifter_Small_Character_BP_C_AnimNotify_ThrowPoop_Params
	{	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_StartTransformScaling
	 */
	struct AShapeshifter_Small_Character_BP_C_AnimNotify_StartTransformScaling_Params
	{	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.TransformScaling
	 */
	struct AShapeshifter_Small_Character_BP_C_TransformScaling_Params
	{	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_InitBigly
	 */
	struct AShapeshifter_Small_Character_BP_C_AnimNotify_InitBigly_Params
	{	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_UnTransform
	 */
	struct AShapeshifter_Small_Character_BP_C_AnimNotify_UnTransform_Params
	{	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.CheckWildShouldRandomTransform
	 */
	struct AShapeshifter_Small_Character_BP_C_CheckWildShouldRandomTransform_Params
	{	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.AnimNotify_StartSniff
	 */
	struct AShapeshifter_Small_Character_BP_C_AnimNotify_StartSniff_Params
	{	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.LevelUpRefresh
	 */
	struct AShapeshifter_Small_Character_BP_C_LevelUpRefresh_Params
	{	};

	/**
	 * Function Shapeshifter_Small_Character_BP.Shapeshifter_Small_Character_BP_C.ExecuteUbergraph_Shapeshifter_Small_Character_BP
	 */
	struct AShapeshifter_Small_Character_BP_C_ExecuteUbergraph_Shapeshifter_Small_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
