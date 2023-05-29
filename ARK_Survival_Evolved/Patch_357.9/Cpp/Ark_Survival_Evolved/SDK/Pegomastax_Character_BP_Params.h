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
	 * Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPClientHandleNetExecCommand
	 */
	struct APegomastax_Character_BP_C_BPClientHandleNetExecCommand_Params
	{
	public:
		class FName                                                CommandName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0008(0x0040)  (Parm, OutParm, ReferenceParm)
		class APlayerController*                                   ForPC;                                                   // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T15O[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.UpdateWaitingState
	 */
	struct APegomastax_Character_BP_C_UpdateWaitingState_Params
	{
	public:
		class APrimalCharacter*                                    TargetCharacter;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsInWaitingState;                                        // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.IsInWaitingState
	 */
	struct APegomastax_Character_BP_C_IsInWaitingState_Params
	{
	public:
		class APrimalCharacter*                                    TargetCharacter;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       isWaiting;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.WillRunToOwner
	 */
	struct APegomastax_Character_BP_C_WillRunToOwner_Params
	{
	public:
		class APawn*                                               ownerPawn;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       willRun;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AAVL[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPTimerServer
	 */
	struct APegomastax_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.FindPawnToGoBackTo
	 */
	struct APegomastax_Character_BP_C_FindPawnToGoBackTo_Params
	{
	public:
		class APawn*                                               selectedPawn;                                            // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPOnAnimPlayedNotify
	 */
	struct APegomastax_Character_BP_C_BPOnAnimPlayedNotify_Params
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
	 * Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.RestoreSecondaryAnims
	 */
	struct APegomastax_Character_BP_C_RestoreSecondaryAnims_Params
	{	};

	/**
	 * Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.ClearSecondaryAnims
	 */
	struct APegomastax_Character_BP_C_ClearSecondaryAnims_Params
	{	};

	/**
	 * Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.PostAttackActions
	 */
	struct APegomastax_Character_BP_C_PostAttackActions_Params
	{
	public:
		bool                                                       stoleItem;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.ShouldStopHolding
	 */
	struct APegomastax_Character_BP_C_ShouldStopHolding_Params
	{
	public:
		bool                                                       shouldStop;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.Can Play Holding Anim
	 */
	struct APegomastax_Character_BP_C_CanPlayHoldingAnim_Params
	{
	public:
		bool                                                       CanPlay;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPOnClearMountedDino
	 */
	struct APegomastax_Character_BP_C_BPOnClearMountedDino_Params
	{	};

	/**
	 * Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPOnSetMountedDino
	 */
	struct APegomastax_Character_BP_C_BPOnSetMountedDino_Params
	{	};

	/**
	 * Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.UpdateHoldingStatus
	 */
	struct APegomastax_Character_BP_C_UpdateHoldingStatus_Params
	{	};

	/**
	 * Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPCharacterSleeped
	 */
	struct APegomastax_Character_BP_C_BPCharacterSleeped_Params
	{	};

	/**
	 * Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPOnMovementModeChangedNotify
	 */
	struct APegomastax_Character_BP_C_BPOnMovementModeChangedNotify_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              PreviousCustomMode;                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.CreateTamedInventory
	 */
	struct APegomastax_Character_BP_C_CreateTamedInventory_Params
	{	};

	/**
	 * Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.ProcessUsedItem
	 */
	struct APegomastax_Character_BP_C_ProcessUsedItem_Params
	{
	public:
		class UPrimalItem*                                         Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.CalculateBuffTimeForGroup
	 */
	struct APegomastax_Character_BP_C_CalculateBuffTimeForGroup_Params
	{
	public:
		class APrimalBuff*                                         Buff;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      extraTime;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.NextPickPocketingMode
	 */
	struct APegomastax_Character_BP_C_NextPickPocketingMode_Params
	{	};

	/**
	 * Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.CanReturnToCharacter
	 */
	struct APegomastax_Character_BP_C_CanReturnToCharacter_Params
	{
	public:
		class AShooterPlayerController*                            PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       returnPossible;                                          // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CD1L[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.CanStealItem
	 */
	struct APegomastax_Character_BP_C_CanStealItem_Params
	{
	public:
		class UPrimalItem*                                         Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       canSteal;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZTB8[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.GoBackToOwner
	 */
	struct APegomastax_Character_BP_C_GoBackToOwner_Params
	{
	public:
		class APawn*                                               Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.Get NumPegosInGroup
	 */
	struct APegomastax_Character_BP_C_GetNumPegosInGroup_Params
	{
	public:
		int32_t                                                    maxExtraItems;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.IsValidItemForTaming
	 */
	struct APegomastax_Character_BP_C_IsValidItemForTaming_Params
	{
	public:
		class UPrimalItem*                                         PrimalItem;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsValid;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XICH[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPInventoryItemUsed
	 */
	struct APegomastax_Character_BP_C_BPInventoryItemUsed_Params
	{
	public:
		class UObject*                                             InventoryItemObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.ReceiveAnyDamage
	 */
	struct APegomastax_Character_BP_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R1B2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BlueprintDrawFloatingHUD
	 */
	struct APegomastax_Character_BP_C_BlueprintDrawFloatingHUD_Params
	{
	public:
		class AShooterHUD*                                         HUD;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterX;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CenterY;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DrawScale;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPTryMultiUse
	 */
	struct APegomastax_Character_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPGetMultiUseEntries
	 */
	struct APegomastax_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.AddAffinityFromFood
	 */
	struct APegomastax_Character_BP_C_AddAffinityFromFood_Params
	{
	public:
		class UPrimalItem*                                         Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.StealItemInSlot
	 */
	struct APegomastax_Character_BP_C_StealItemInSlot_Params
	{
	public:
		int32_t                                                    slotNumber;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_X5MA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrimalCharacter*                                    Character;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Success;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RQVP[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.Can StealFromCharacter
	 */
	struct APegomastax_Character_BP_C_CanStealFromCharacter_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       canSteal;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.StealRandom Items
	 */
	struct APegomastax_Character_BP_C_StealRandomItems_Params
	{
	public:
		int32_t                                                    NumItems;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       includeHotBarItems;                                      // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0WM2[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      totalChance;                                             // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      chancePerItem;                                           // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APrimalCharacter*                                    Character;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       succeeded;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7FJK[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.Stop FleeingWithLoot
	 */
	struct APegomastax_Character_BP_C_StopFleeingWithLoot_Params
	{	};

	/**
	 * Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.StartFleeingWithLoot
	 */
	struct APegomastax_Character_BP_C_StartFleeingWithLoot_Params
	{	};

	/**
	 * Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPShouldForceFlee
	 */
	struct APegomastax_Character_BP_C_BPShouldForceFlee_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_N7JA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.Do StealItem
	 */
	struct APegomastax_Character_BP_C_DoStealItem_Params
	{
	public:
		class APrimalCharacter*                                    CharacterToStealFrom;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimalItem*                                         itemToSteal;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ConsumeItem;                                             // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Success;                                                 // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NEQF[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.Steal from Character
	 */
	struct APegomastax_Character_BP_C_StealfromCharacter_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       succeeded;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BlueprintAdjustOutputDamage
	 */
	struct APegomastax_Character_BP_C_BlueprintAdjustOutputDamage_Params
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
	 * Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.CreateWildInventory
	 */
	struct APegomastax_Character_BP_C_CreateWildInventory_Params
	{	};

	/**
	 * Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.OnJumped
	 */
	struct APegomastax_Character_BP_C_OnJumped_Params
	{	};

	/**
	 * Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPModifyHarvestingWeightsArray
	 */
	struct APegomastax_Character_BP_C_BPModifyHarvestingWeightsArray_Params
	{
	public:
		TArray<float>                                              resourceWeightsIn;                                       // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<class UPrimalItem*>                                 resourceItems;                                           // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<float>                                              resourceWeightsOut;                                      // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPModifyHarvestingQuantity
	 */
	struct APegomastax_Character_BP_C_BPModifyHarvestingQuantity_Params
	{
	public:
		float                                                      originalQuantity;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NICK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              resourceSelected;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BlueprintCanAttack
	 */
	struct APegomastax_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MNHD[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9T0K[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.UserConstructionScript
	 */
	struct APegomastax_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPUnstasis
	 */
	struct APegomastax_Character_BP_C_BPUnstasis_Params
	{	};

	/**
	 * Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.PlayHoldingForTime
	 */
	struct APegomastax_Character_BP_C_PlayHoldingForTime_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      preDelay;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Idle;                                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HideBag;                                                 // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.HideBag
	 */
	struct APegomastax_Character_BP_C_HideBag_Params
	{	};

	/**
	 * Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.StopHoldingAfterFleeing
	 */
	struct APegomastax_Character_BP_C_StopHoldingAfterFleeing_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.StopHoldingImmediate
	 */
	struct APegomastax_Character_BP_C_StopHoldingImmediate_Params
	{
	public:
		bool                                                       stopIdleHoldingAnim;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       stopRunHoldingAnim;                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HideBag;                                                 // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YKO1[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      idleBlendOutTime;                                        // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.PlayHoldingImmediate
	 */
	struct APegomastax_Character_BP_C_PlayHoldingImmediate_Params
	{
	public:
		bool                                                       Idle;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.ShowBag
	 */
	struct APegomastax_Character_BP_C_ShowBag_Params
	{	};

	/**
	 * Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.ShowBagAfterDelay
	 */
	struct APegomastax_Character_BP_C_ShowBagAfterDelay_Params
	{	};

	/**
	 * Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.FleeAfterTime
	 */
	struct APegomastax_Character_BP_C_FleeAfterTime_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.PlayCombinedHolding
	 */
	struct APegomastax_Character_BP_C_PlayCombinedHolding_Params
	{
	public:
		float                                                      timeBeforeRun;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      preDelay;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HideBag;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RLT3[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      runHoldDuration;                                         // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APawn*                                               Owner;                                                   // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.ExecuteUbergraph_Pegomastax_Character_BP
	 */
	struct APegomastax_Character_BP_C_ExecuteUbergraph_Pegomastax_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
