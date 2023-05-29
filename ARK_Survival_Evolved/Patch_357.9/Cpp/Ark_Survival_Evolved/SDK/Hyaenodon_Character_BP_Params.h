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
	 * Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPOnAnimPlayedNotify
	 */
	struct AHyaenodon_Character_BP_C_BPOnAnimPlayedNotify_Params
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
	 * Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.Has Conflict with AI
	 */
	struct AHyaenodon_Character_BP_C_HasConflictwithAI_Params
	{
	public:
		bool                                                       NewParam1;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.ShouldStandUp
	 */
	struct AHyaenodon_Character_BP_C_ShouldStandUp_Params
	{
	public:
		bool                                                       NewParam;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.CanStandUp
	 */
	struct AHyaenodon_Character_BP_C_CanStandUp_Params
	{
	public:
		bool                                                       NewParam;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.Can SitDown
	 */
	struct AHyaenodon_Character_BP_C_CanSitDown_Params
	{
	public:
		bool                                                       NewParam;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPNotifyBumpedPawn
	 */
	struct AHyaenodon_Character_BP_C_BPNotifyBumpedPawn_Params
	{
	public:
		class APrimalCharacter*                                    BumpedPawn;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPOnMovementModeChangedNotify
	 */
	struct AHyaenodon_Character_BP_C_BPOnMovementModeChangedNotify_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              PreviousCustomMode;                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.OnJumped
	 */
	struct AHyaenodon_Character_BP_C_OnJumped_Params
	{	};

	/**
	 * Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPShouldCancelDoAttack
	 */
	struct AHyaenodon_Character_BP_C_BPShouldCancelDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.OnSaddleUnequipped
	 */
	struct AHyaenodon_Character_BP_C_OnSaddleUnequipped_Params
	{	};

	/**
	 * Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.OnSaddleEquipped
	 */
	struct AHyaenodon_Character_BP_C_OnSaddleEquipped_Params
	{	};

	/**
	 * Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.Reset Taming
	 */
	struct AHyaenodon_Character_BP_C_ResetTaming_Params
	{
	public:
		bool                                                       ForceReset;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.AttemptToFleeFromActor
	 */
	struct AHyaenodon_Character_BP_C_AttemptToFleeFromActor_Params
	{
	public:
		class AActor*                                              ActorToCheck;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsCurrentTargetDangerous;                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       DidFlee;                                                 // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.IsActorLowOnResources
	 */
	struct AHyaenodon_Character_BP_C_IsActorLowOnResources_Params
	{
	public:
		class AActor*                                              ActorToCheck;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsLow;                                                   // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SLQL[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.CanFleeFromTarget
	 */
	struct AHyaenodon_Character_BP_C_CanFleeFromTarget_Params
	{
	public:
		class AActor*                                              TargetToFleeFrom;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DangerousMultiplier;                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CurrentTargetIsDangerous;                                // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CanFlee;                                                 // 0x000D(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPUnstasis
	 */
	struct AHyaenodon_Character_BP_C_BPUnstasis_Params
	{	};

	/**
	 * Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPAdjustDamage
	 */
	struct AHyaenodon_Character_BP_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7U3Q[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QQPQ[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_09KU[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.GatherPack
	 */
	struct AHyaenodon_Character_BP_C_GatherPack_Params
	{	};

	/**
	 * Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPCanTargetCorpse
	 */
	struct AHyaenodon_Character_BP_C_BPCanTargetCorpse_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.Get Threat Multiplier for Target
	 */
	struct AHyaenodon_Character_BP_C_GetThreatMultiplierforTarget_Params
	{
	public:
		class AActor*                                              TargetToDetermine;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Multiplier;                                              // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T4P7[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.TimeSinceLastTookDamageFromPlayer
	 */
	struct AHyaenodon_Character_BP_C_TimeSinceLastTookDamageFromPlayer_Params
	{
	public:
		bool                                                       IsStillAggrod;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9HPQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPSetupTamed
	 */
	struct AHyaenodon_Character_BP_C_BPSetupTamed_Params
	{
	public:
		bool                                                       bWasJustTamed;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2ZBD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.ReceiveAnyDamage
	 */
	struct AHyaenodon_Character_BP_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FENU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BlueprintCanAttack
	 */
	struct AHyaenodon_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NOK2[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.Is Actor Dangerous
	 */
	struct AHyaenodon_Character_BP_C_IsActorDangerous_Params
	{
	public:
		class AActor*                                              ActorToCheck;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       SkipIgnoreActorList;                                     // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsDangerous;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0EDE[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      DangerMultiplier;                                        // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPTimerServer
	 */
	struct AHyaenodon_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.Pack Flee for Duration
	 */
	struct AHyaenodon_Character_BP_C_PackFleeforDuration_Params
	{
	public:
		float                                                      DurationOfFlee;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZL8Y[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              TargetToFleeFrom;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HavePackFlee;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GAL7[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.Flee For Duration
	 */
	struct AHyaenodon_Character_BP_C_FleeForDuration_Params
	{
	public:
		float                                                      DurationOfFlee;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3SC5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              TargetToFleeFrom;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.OnWildPet
	 */
	struct AHyaenodon_Character_BP_C_OnWildPet_Params
	{
	public:
		class APlayerController*                                   petterPC;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPShouldForceFlee
	 */
	struct AHyaenodon_Character_BP_C_BPShouldForceFlee_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.IsInTamingFriendlyState
	 */
	struct AHyaenodon_Character_BP_C_IsInTamingFriendlyState_Params
	{
	public:
		bool                                                       tamingCanOccur;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       leaderIsNearby;                                          // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPGetMultiUseEntries
	 */
	struct AHyaenodon_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPTryMultiUse
	 */
	struct AHyaenodon_Character_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.OnEatFood
	 */
	struct AHyaenodon_Character_BP_C_OnEatFood_Params
	{
	public:
		class UPrimalItem*                                         foodItem;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPTamedConsumeFoodItem
	 */
	struct AHyaenodon_Character_BP_C_BPTamedConsumeFoodItem_Params
	{
	public:
		class UPrimalItem*                                         foodItem;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPUntamedConsumeFoodItem
	 */
	struct AHyaenodon_Character_BP_C_BPUntamedConsumeFoodItem_Params
	{
	public:
		class UPrimalItem*                                         foodItem;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.UserConstructionScript
	 */
	struct AHyaenodon_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.ReceiveBeginPlay
	 */
	struct AHyaenodon_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.OnDied_Event
	 */
	struct AHyaenodon_Character_BP_C_OnDied_Event_Params
	{
	public:
		class APrimalCharacter*                                    DiedCharacter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.IncreaseWeight_Multicast
	 */
	struct AHyaenodon_Character_BP_C_IncreaseWeight_Multicast_Params
	{
	public:
		float                                                      newWeight;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.ResetWeight_Multicast
	 */
	struct AHyaenodon_Character_BP_C_ResetWeight_Multicast_Params
	{
	public:
		float                                                      newWeight;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.RestoreStartledAfterDelay
	 */
	struct AHyaenodon_Character_BP_C_RestoreStartledAfterDelay_Params
	{	};

	/**
	 * Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.DropAfterDelay
	 */
	struct AHyaenodon_Character_BP_C_DropAfterDelay_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.SetIsJumpingAfterDelay
	 */
	struct AHyaenodon_Character_BP_C_SetIsJumpingAfterDelay_Params
	{	};

	/**
	 * Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.SitDown
	 */
	struct AHyaenodon_Character_BP_C_SitDown_Params
	{
	public:
		bool                                                       PlayAnim;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.TryStandUp
	 */
	struct AHyaenodon_Character_BP_C_TryStandUp_Params
	{	};

	/**
	 * Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.TrySitDown
	 */
	struct AHyaenodon_Character_BP_C_TrySitDown_Params
	{	};

	/**
	 * Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.standUp
	 */
	struct AHyaenodon_Character_BP_C_standUp_Params
	{	};

	/**
	 * Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.QuickSitDown
	 */
	struct AHyaenodon_Character_BP_C_QuickSitDown_Params
	{	};

	/**
	 * Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.ExecuteUbergraph_Hyaenodon_Character_BP
	 */
	struct AHyaenodon_Character_BP_C_ExecuteUbergraph_Hyaenodon_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
