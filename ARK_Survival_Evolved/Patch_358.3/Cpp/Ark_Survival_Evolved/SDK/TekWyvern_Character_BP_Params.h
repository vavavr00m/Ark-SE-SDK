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
	 * Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPUnsetupDinoTameable
	 */
	struct ATekWyvern_Character_BP_C_BPUnsetupDinoTameable_Params
	{	};

	/**
	 * Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPGetRiderSocket
	 */
	struct ATekWyvern_Character_BP_C_BPGetRiderSocket_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPPreventRiding
	 */
	struct ATekWyvern_Character_BP_C_BPPreventRiding_Params
	{
	public:
		class AShooterCharacter*                                   ByPawn;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bDontCheckDistance;                                      // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2UJF[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.DoneRolling
	 */
	struct ATekWyvern_Character_BP_C_DoneRolling_Params
	{	};

	/**
	 * Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.DoTamingRandomAttack
	 */
	struct ATekWyvern_Character_BP_C_DoTamingRandomAttack_Params
	{	};

	/**
	 * Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BlueprintAdjustOutputDamage
	 */
	struct ATekWyvern_Character_BP_C_BlueprintAdjustOutputDamage_Params
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
	 * Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.IsInSpaceBiome
	 */
	struct ATekWyvern_Character_BP_C_IsInSpaceBiome_Params
	{
	public:
		bool                                                       InSpaceBiome;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.OnRep_DismountTimesDuringTaming
	 */
	struct ATekWyvern_Character_BP_C_OnRep_DismountTimesDuringTaming_Params
	{	};

	/**
	 * Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.ClearLastTamingProcess
	 */
	struct ATekWyvern_Character_BP_C_ClearLastTamingProcess_Params
	{	};

	/**
	 * Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.Get Extra Taming EffectivenessModifier
	 */
	struct ATekWyvern_Character_BP_C_GetExtraTamingEffectivenessModifier_Params
	{
	public:
		float                                                      ExtraTameEffectivenessModifier;                          // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.ToggleAllowTameRiding
	 */
	struct ATekWyvern_Character_BP_C_ToggleAllowTameRiding_Params
	{	};

	/**
	 * Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BadTimingFeed
	 */
	struct ATekWyvern_Character_BP_C_BadTimingFeed_Params
	{	};

	/**
	 * Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPOverrideGetAttackAnimationIndex
	 */
	struct ATekWyvern_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AQBI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UAnimMontage*>                                AnimationArray;                                          // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		int32_t                                                    ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.CheckDoneRoar
	 */
	struct ATekWyvern_Character_BP_C_CheckDoneRoar_Params
	{	};

	/**
	 * Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.TickStaminaCost
	 */
	struct ATekWyvern_Character_BP_C_TickStaminaCost_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CanBreath;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.TickLowHealthStopMoving
	 */
	struct ATekWyvern_Character_BP_C_TickLowHealthStopMoving_Params
	{	};

	/**
	 * Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.OverrideFinalWanderLocation
	 */
	struct ATekWyvern_Character_BP_C_OverrideFinalWanderLocation_Params
	{
	public:
		struct FVector                                             outVec;                                                  // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BOS3[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPGetMultiUseEntries
	 */
	struct ATekWyvern_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.UpdateTamingTextOverlay
	 */
	struct ATekWyvern_Character_BP_C_UpdateTamingTextOverlay_Params
	{	};

	/**
	 * Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPNotifyClearRider
	 */
	struct ATekWyvern_Character_BP_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.TryAddAffinityAfter Rolling
	 */
	struct ATekWyvern_Character_BP_C_TryAddAffinityAfterRolling_Params
	{	};

	/**
	 * Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.TickBeam
	 */
	struct ATekWyvern_Character_BP_C_TickBeam_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.OnRep_bBeamActivated
	 */
	struct ATekWyvern_Character_BP_C_OnRep_bBeamActivated_Params
	{	};

	/**
	 * Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BlueprintCanAttack
	 */
	struct ATekWyvern_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BO09[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPHandleOnStopTargeting
	 */
	struct ATekWyvern_Character_BP_C_BPHandleOnStopTargeting_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPHandleControllerInitiatedAttack
	 */
	struct ATekWyvern_Character_BP_C_BPHandleControllerInitiatedAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T58U[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPSetupTamed
	 */
	struct ATekWyvern_Character_BP_C_BPSetupTamed_Params
	{
	public:
		bool                                                       bWasJustTamed;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_422U[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.Check Random Destination
	 */
	struct ATekWyvern_Character_BP_C_CheckRandomDestination_Params
	{	};

	/**
	 * Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.Increase Taming Affinity
	 */
	struct ATekWyvern_Character_BP_C_IncreaseTamingAffinity_Params
	{	};

	/**
	 * Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.Consume FoodItem
	 */
	struct ATekWyvern_Character_BP_C_ConsumeFoodItem_Params
	{
	public:
		bool                                                       DidConsumeFood;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CKOZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      EffectivenessMultiplier;                                 // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPDoAttack
	 */
	struct ATekWyvern_Character_BP_C_BPDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.CheckDoneLanding
	 */
	struct ATekWyvern_Character_BP_C_CheckDoneLanding_Params
	{	};

	/**
	 * Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.StartTame
	 */
	struct ATekWyvern_Character_BP_C_StartTame_Params
	{
	public:
		class AShooterCharacter*                                   TamerPlayer;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPAdjustDamage
	 */
	struct ATekWyvern_Character_BP_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NB4X[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KFXE[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I1Q2[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPPreventInputType
	 */
	struct ATekWyvern_Character_BP_C_BPPreventInputType_Params
	{
	public:
		EPrimalCharacterInputType                                  inputType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LL4Q[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPUntamedConsumeFoodItem
	 */
	struct ATekWyvern_Character_BP_C_BPUntamedConsumeFoodItem_Params
	{
	public:
		class UPrimalItem*                                         foodItem;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPNotifySetRider
	 */
	struct ATekWyvern_Character_BP_C_BPNotifySetRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderSetting;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 */
	struct ATekWyvern_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.UserConstructionScript
	 */
	struct ATekWyvern_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.Rolling__FinishedFunc
	 */
	struct ATekWyvern_Character_BP_C_Rolling__FinishedFunc_Params
	{	};

	/**
	 * Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.Rolling__UpdateFunc
	 */
	struct ATekWyvern_Character_BP_C_Rolling__UpdateFunc_Params
	{	};

	/**
	 * Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.ReceiveBeginPlay
	 */
	struct ATekWyvern_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.RidingTick
	 */
	struct ATekWyvern_Character_BP_C_RidingTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.SetAllowRiding
	 */
	struct ATekWyvern_Character_BP_C_SetAllowRiding_Params
	{
	public:
		bool                                                       Allow;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.StartRolling
	 */
	struct ATekWyvern_Character_BP_C_StartRolling_Params
	{	};

	/**
	 * Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.Multi_TryStartBreathAttack
	 */
	struct ATekWyvern_Character_BP_C_Multi_TryStartBreathAttack_Params
	{	};

	/**
	 * Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.Server_StopBreathAttack
	 */
	struct ATekWyvern_Character_BP_C_Server_StopBreathAttack_Params
	{	};

	/**
	 * Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.Multi_StopBreathAttack
	 */
	struct ATekWyvern_Character_BP_C_Multi_StopBreathAttack_Params
	{	};

	/**
	 * Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.ReceiveTick
	 */
	struct ATekWyvern_Character_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.ExecuteUbergraph_TekWyvern_Character_BP
	 */
	struct ATekWyvern_Character_BP_C_ExecuteUbergraph_TekWyvern_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
