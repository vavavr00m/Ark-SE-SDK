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
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.HasSelfBuried
	 */
	struct ABasilisk_Character_BP_C_HasSelfBuried_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPPreventAttachments
	 */
	struct ABasilisk_Character_BP_C_BPPreventAttachments_Params
	{
	public:
		class UObject*                                             ForItem;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.RefreshTamedAttachments
	 */
	struct ABasilisk_Character_BP_C_RefreshTamedAttachments_Params
	{	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.AllowPlayMontage
	 */
	struct ABasilisk_Character_BP_C_AllowPlayMontage_Params
	{
	public:
		class UAnimMontage*                                        AnimMontage;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ULXY[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPIsHidden
	 */
	struct ABasilisk_Character_BP_C_BPIsHidden_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPPostLoadedFromSaveGame
	 */
	struct ABasilisk_Character_BP_C_BPPostLoadedFromSaveGame_Params
	{	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.SetTurretMode
	 */
	struct ABasilisk_Character_BP_C_SetTurretMode_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPPreventFirstPerson
	 */
	struct ABasilisk_Character_BP_C_BPPreventFirstPerson_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_N1FY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.SetSaddleHidden
	 */
	struct ABasilisk_Character_BP_C_SetSaddleHidden_Params
	{
	public:
		bool                                                       NewHidden;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T9UD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPNotifyInventoryItemChange
	 */
	struct ABasilisk_Character_BP_C_BPNotifyInventoryItemChange_Params
	{
	public:
		bool                                                       bIsItemAdd;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NIWH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimalItem*                                         theItem;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bEquipItem;                                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ASTI[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.UpdatedTracedMoundTransform
	 */
	struct ABasilisk_Character_BP_C_UpdatedTracedMoundTransform_Params
	{	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.GetBuriedMoundTransform
	 */
	struct ABasilisk_Character_BP_C_GetBuriedMoundTransform_Params
	{
	public:
		float                                                      HeightAlpha;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AHLQ[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct UObject_FTransform                                  ReturnValue;                                             // 0x0010(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.Check Unburied State and Add Hungry Ineffectiveness
	 */
	struct ABasilisk_Character_BP_C_CheckUnburiedStateandAddHungryIneffectiveness_Params
	{
	public:
		class FString                                              State;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.AddTameIneffectiveness
	 */
	struct ABasilisk_Character_BP_C_AddTameIneffectiveness_Params
	{
	public:
		float                                                      IneffectivenessValue;                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.SetTailMoundVisibility
	 */
	struct ABasilisk_Character_BP_C_SetTailMoundVisibility_Params
	{
	public:
		bool                                                       bNewVisibility;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.FindNearbyEggs
	 */
	struct ABasilisk_Character_BP_C_FindNearbyEggs_Params
	{
	public:
		bool                                                       StartSeeking;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q24W[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPSetupTamed
	 */
	struct ABasilisk_Character_BP_C_BPSetupTamed_Params
	{
	public:
		bool                                                       bWasJustTamed;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPHandleControllerInitiatedAttack
	 */
	struct ABasilisk_Character_BP_C_BPHandleControllerInitiatedAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPOnTamedProcessOrder
	 */
	struct ABasilisk_Character_BP_C_BPOnTamedProcessOrder_Params
	{
	public:
		class APrimalCharacter*                                    FromCharacter;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EDinoTamedOrder                                            OrderType;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bForce;                                                  // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7R8O[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              enemyTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       orderNotExecuted;                                        // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.PlayUndergroundEffectPulse
	 */
	struct ABasilisk_Character_BP_C_PlayUndergroundEffectPulse_Params
	{	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.TraceForInvalidGround
	 */
	struct ABasilisk_Character_BP_C_TraceForInvalidGround_Params
	{	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPNotifySetRider
	 */
	struct ABasilisk_Character_BP_C_BPNotifySetRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderSetting;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.MeshVisibility
	 */
	struct ABasilisk_Character_BP_C_MeshVisibility_Params
	{
	public:
		class USceneComponent*                                     InputComponent;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Value;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPNotifyClearPassenger
	 */
	struct ABasilisk_Character_BP_C_BPNotifyClearPassenger_Params
	{
	public:
		class APrimalCharacter*                                    PassengerChar;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    SeatIndex;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPNotifyClearRider
	 */
	struct ABasilisk_Character_BP_C_BPNotifyClearRider_Params
	{
	public:
		class AShooterCharacter*                                   RiderClearing;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.Set Visibility Of Riding and Dino Meshes
	 */
	struct ABasilisk_Character_BP_C_SetVisibilityOfRidingandDinoMeshes_Params
	{
	public:
		bool                                                       NewVisibility;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DJ16[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.OffSetFromBuriedGroundLocation
	 */
	struct ABasilisk_Character_BP_C_OffSetFromBuriedGroundLocation_Params
	{
	public:
		struct FVector                                             InputPin;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.K2_OnMovementModeChanged
	 */
	struct ABasilisk_Character_BP_C_K2_OnMovementModeChanged_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EMovementMode                                              NewMovementMode;                                         // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              PrevCustomMode;                                          // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              NewCustomMode;                                           // 0x0003(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.SharedCanAttack
	 */
	struct ABasilisk_Character_BP_C_SharedCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.BlueprintCanRiderAttack
	 */
	struct ABasilisk_Character_BP_C_BlueprintCanRiderAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.BlueprintCanAttack
	 */
	struct ABasilisk_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_G6KV[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPGetMultiUseEntries
	 */
	struct ABasilisk_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPTryMultiUse
	 */
	struct ABasilisk_Character_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.TimeSinceLastAttackForIndex
	 */
	struct ABasilisk_Character_BP_C_TimeSinceLastAttackForIndex_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.ShouldUnbury
	 */
	struct ABasilisk_Character_BP_C_ShouldUnbury_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.ShouldBury
	 */
	struct ABasilisk_Character_BP_C_ShouldBury_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPTimerServer
	 */
	struct ABasilisk_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.Update Bury Mound
	 */
	struct ABasilisk_Character_BP_C_UpdateBuryMound_Params
	{
	public:
		bool                                                       ShouldShow;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.UpdateUndergroundTrail
	 */
	struct ABasilisk_Character_BP_C_UpdateUndergroundTrail_Params
	{	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPTimerNonDedicated
	 */
	struct ABasilisk_Character_BP_C_BPTimerNonDedicated_Params
	{	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.InitializeDive
	 */
	struct ABasilisk_Character_BP_C_InitializeDive_Params
	{	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.IsAnimationPlaying
	 */
	struct ABasilisk_Character_BP_C_IsAnimationPlaying_Params
	{
	public:
		TArray<class UAnimMontage*>                                Montages;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       Result;                                                  // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MTW9[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.DetachChildren
	 */
	struct ABasilisk_Character_BP_C_DetachChildren_Params
	{	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.DiveEnd
	 */
	struct ABasilisk_Character_BP_C_DiveEnd_Params
	{	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.DiveSetup
	 */
	struct ABasilisk_Character_BP_C_DiveSetup_Params
	{	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.DiveIdle
	 */
	struct ABasilisk_Character_BP_C_DiveIdle_Params
	{	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.CanDive
	 */
	struct ABasilisk_Character_BP_C_CanDive_Params
	{
	public:
		bool                                                       DiveInCheck;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.Get Scaled Affinity Based on Dino
	 */
	struct ABasilisk_Character_BP_C_GetScaledAffinityBasedonDino_Params
	{
	public:
		float                                                      InputAffinity;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPAdjustDamage
	 */
	struct ABasilisk_Character_BP_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QR8V[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CIYL[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.TameIfAllowed
	 */
	struct ABasilisk_Character_BP_C_TameIfAllowed_Params
	{	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.ResetEggSeeking
	 */
	struct ABasilisk_Character_BP_C_ResetEggSeeking_Params
	{	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.IncreaseTamingAffinity
	 */
	struct ABasilisk_Character_BP_C_IncreaseTamingAffinity_Params
	{
	public:
		class AShooterCharacter*                                   TamingPlayer;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ValueForTaming;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.UserConstructionScript
	 */
	struct ABasilisk_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.Timeline_0__FinishedFunc
	 */
	struct ABasilisk_Character_BP_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.Timeline_0__UpdateFunc
	 */
	struct ABasilisk_Character_BP_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.MoundTimeline__FinishedFunc
	 */
	struct ABasilisk_Character_BP_C_MoundTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.MoundTimeline__UpdateFunc
	 */
	struct ABasilisk_Character_BP_C_MoundTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.ReceiveBeginPlay
	 */
	struct ABasilisk_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPUnstasis
	 */
	struct ABasilisk_Character_BP_C_BPUnstasis_Params
	{	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.BPDinoPostBeginPlay
	 */
	struct ABasilisk_Character_BP_C_BPDinoPostBeginPlay_Params
	{	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.AnimNotify_Death
	 */
	struct ABasilisk_Character_BP_C_AnimNotify_Death_Params
	{	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.BP_OnJumpPressed
	 */
	struct ABasilisk_Character_BP_C_BP_OnJumpPressed_Params
	{	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.Proxy_RefreshAttachments
	 */
	struct ABasilisk_Character_BP_C_Proxy_RefreshAttachments_Params
	{	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.MoveToEgg
	 */
	struct ABasilisk_Character_BP_C_MoveToEgg_Params
	{	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.StartUpdateEggSeekTimer
	 */
	struct ABasilisk_Character_BP_C_StartUpdateEggSeekTimer_Params
	{	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.StartEggMoving
	 */
	struct ABasilisk_Character_BP_C_StartEggMoving_Params
	{	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.RestartBrain
	 */
	struct ABasilisk_Character_BP_C_RestartBrain_Params
	{	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.UpdateSeekEgg
	 */
	struct ABasilisk_Character_BP_C_UpdateSeekEgg_Params
	{	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.EatEgg
	 */
	struct ABasilisk_Character_BP_C_EatEgg_Params
	{	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.DissolveEggItem
	 */
	struct ABasilisk_Character_BP_C_DissolveEggItem_Params
	{	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.PlayGroundParticleVFX
	 */
	struct ABasilisk_Character_BP_C_PlayGroundParticleVFX_Params
	{
	public:
		bool                                                       orientToGround;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8JFG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UParticleSystem*                                     ParticleSystem;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             OffsetFromRoot;                                          // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.Multi_SetSaddleHidden
	 */
	struct ABasilisk_Character_BP_C_Multi_SetSaddleHidden_Params
	{
	public:
		bool                                                       NewHidden;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.ForceUpdateBuriedMound
	 */
	struct ABasilisk_Character_BP_C_ForceUpdateBuriedMound_Params
	{	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.ResetInterp
	 */
	struct ABasilisk_Character_BP_C_ResetInterp_Params
	{
	public:
		bool                                                       BuriedState;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.PlayGatedFXPulse
	 */
	struct ABasilisk_Character_BP_C_PlayGatedFXPulse_Params
	{	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.StartMoundVisual
	 */
	struct ABasilisk_Character_BP_C_StartMoundVisual_Params
	{
	public:
		bool                                                       NewVisibility;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.Multi_ForceDiveEnd
	 */
	struct ABasilisk_Character_BP_C_Multi_ForceDiveEnd_Params
	{	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.ForceDiveEnd
	 */
	struct ABasilisk_Character_BP_C_ForceDiveEnd_Params
	{	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.StartBuried
	 */
	struct ABasilisk_Character_BP_C_StartBuried_Params
	{	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.Multi_DiveIn
	 */
	struct ABasilisk_Character_BP_C_Multi_DiveIn_Params
	{	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.Attempt Dive In
	 */
	struct ABasilisk_Character_BP_C_AttemptDiveIn_Params
	{	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.AttemptDiveOut
	 */
	struct ABasilisk_Character_BP_C_AttemptDiveOut_Params
	{	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.Multi_DiveOut
	 */
	struct ABasilisk_Character_BP_C_Multi_DiveOut_Params
	{	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.AnimNotify_EndBury
	 */
	struct ABasilisk_Character_BP_C_AnimNotify_EndBury_Params
	{	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.AnimNotify_StartBury
	 */
	struct ABasilisk_Character_BP_C_AnimNotify_StartBury_Params
	{	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.Server_TryDive
	 */
	struct ABasilisk_Character_BP_C_Server_TryDive_Params
	{
	public:
		bool                                                       NewUnderground;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ImmediateOut;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Basilisk_Character_BP.Basilisk_Character_BP_C.ExecuteUbergraph_Basilisk_Character_BP
	 */
	struct ABasilisk_Character_BP_C_ExecuteUbergraph_Basilisk_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
