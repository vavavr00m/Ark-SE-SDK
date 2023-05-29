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
	 * Function RockGolem_Character_BP.RockGolem_Character_BP_C.BPIsHidden
	 */
	struct ARockGolem_Character_BP_C_BPIsHidden_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockGolem_Character_BP.RockGolem_Character_BP_C.BPPreventRiding
	 */
	struct ARockGolem_Character_BP_C_BPPreventRiding_Params
	{
	public:
		class AShooterCharacter*                                   ByPawn;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bDontCheckDistance;                                      // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockGolem_Character_BP.RockGolem_Character_BP_C.BPAddedAttachmentsForItem
	 */
	struct ARockGolem_Character_BP_C_BPAddedAttachmentsForItem_Params
	{
	public:
		class UPrimalItem*                                         anItem;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockGolem_Character_BP.RockGolem_Character_BP_C.BPUnstasis
	 */
	struct ARockGolem_Character_BP_C_BPUnstasis_Params
	{	};

	/**
	 * Function RockGolem_Character_BP.RockGolem_Character_BP_C.BlueprintOverrideWantsToRun
	 */
	struct ARockGolem_Character_BP_C_BlueprintOverrideWantsToRun_Params
	{
	public:
		bool                                                       bInputWantsToRun;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q0Y3[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RockGolem_Character_BP.RockGolem_Character_BP_C.SetupDisguise
	 */
	struct ARockGolem_Character_BP_C_SetupDisguise_Params
	{	};

	/**
	 * Function RockGolem_Character_BP.RockGolem_Character_BP_C.BPAdjustDamage
	 */
	struct ARockGolem_Character_BP_C_BPAdjustDamage_Params
	{
	public:
		float                                                      IncomingDamage;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O4PJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        TheDamageEvent;                                          // 0x0008(0x0020)  (Parm)
		class AController*                                         EventInstigator;                                         // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsPointDamage;                                          // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HUB2[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          PointHitInfo;                                            // 0x0040(0x0088)  (Parm)
		float                                                      ReturnValue;                                             // 0x00C8(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockGolem_Character_BP.RockGolem_Character_BP_C.IsPlayerNearFeet
	 */
	struct ARockGolem_Character_BP_C_IsPlayerNearFeet_Params
	{
	public:
		bool                                                       Yes;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_161W[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RockGolem_Character_BP.RockGolem_Character_BP_C.ReceiveDestroyed
	 */
	struct ARockGolem_Character_BP_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function RockGolem_Character_BP.RockGolem_Character_BP_C.OnRep_bIsDisguised
	 */
	struct ARockGolem_Character_BP_C_OnRep_bIsDisguised_Params
	{	};

	/**
	 * Function RockGolem_Character_BP.RockGolem_Character_BP_C.BPTimerServer
	 */
	struct ARockGolem_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function RockGolem_Character_BP.RockGolem_Character_BP_C.HasDirectOrder
	 */
	struct ARockGolem_Character_BP_C_HasDirectOrder_Params
	{
	public:
		bool                                                       hasOrder;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockGolem_Character_BP.RockGolem_Character_BP_C.BPTryMultiUse
	 */
	struct ARockGolem_Character_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockGolem_Character_BP.RockGolem_Character_BP_C.BPGetMultiUseEntries
	 */
	struct ARockGolem_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function RockGolem_Character_BP.RockGolem_Character_BP_C.ArePlayersNearby
	 */
	struct ARockGolem_Character_BP_C_ArePlayersNearby_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bResult;                                                 // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_D64T[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function RockGolem_Character_BP.RockGolem_Character_BP_C.CanDisguise
	 */
	struct ARockGolem_Character_BP_C_CanDisguise_Params
	{
	public:
		bool                                                       IsAllowed;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockGolem_Character_BP.RockGolem_Character_BP_C.CheckDisguiseCondition
	 */
	struct ARockGolem_Character_BP_C_CheckDisguiseCondition_Params
	{	};

	/**
	 * Function RockGolem_Character_BP.RockGolem_Character_BP_C.BlueprintCanAttack
	 */
	struct ARockGolem_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6QBZ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockGolem_Character_BP.RockGolem_Character_BP_C.UserConstructionScript
	 */
	struct ARockGolem_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function RockGolem_Character_BP.RockGolem_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 */
	struct ARockGolem_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
	{
	public:
		class FName                                                CustomEventName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class USkeletalMeshComponent*                              MeshComp;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UAnimNotify*                                         AnimNotifyObject;                                        // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RockGolem_Character_BP.RockGolem_Character_BP_C.ReceiveBeginPlay
	 */
	struct ARockGolem_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function RockGolem_Character_BP.RockGolem_Character_BP_C.StartDisguise
	 */
	struct ARockGolem_Character_BP_C_StartDisguise_Params
	{	};

	/**
	 * Function RockGolem_Character_BP.RockGolem_Character_BP_C.StopDisguise
	 */
	struct ARockGolem_Character_BP_C_StopDisguise_Params
	{	};

	/**
	 * Function RockGolem_Character_BP.RockGolem_Character_BP_C.AnimNotify_Golem_Bury
	 */
	struct ARockGolem_Character_BP_C_AnimNotify_Golem_Bury_Params
	{	};

	/**
	 * Function RockGolem_Character_BP.RockGolem_Character_BP_C.AnimNotify_Golem_Getup
	 */
	struct ARockGolem_Character_BP_C_AnimNotify_Golem_Getup_Params
	{	};

	/**
	 * Function RockGolem_Character_BP.RockGolem_Character_BP_C.ClearTorporHit
	 */
	struct ARockGolem_Character_BP_C_ClearTorporHit_Params
	{	};

	/**
	 * Function RockGolem_Character_BP.RockGolem_Character_BP_C.TorporHit
	 */
	struct ARockGolem_Character_BP_C_TorporHit_Params
	{	};

	/**
	 * Function RockGolem_Character_BP.RockGolem_Character_BP_C.AnimNotify_PlayGolemBurySound
	 */
	struct ARockGolem_Character_BP_C_AnimNotify_PlayGolemBurySound_Params
	{	};

	/**
	 * Function RockGolem_Character_BP.RockGolem_Character_BP_C.ForceHideMeshes
	 */
	struct ARockGolem_Character_BP_C_ForceHideMeshes_Params
	{	};

	/**
	 * Function RockGolem_Character_BP.RockGolem_Character_BP_C.ExecuteUbergraph_RockGolem_Character_BP
	 */
	struct ARockGolem_Character_BP_C_ExecuteUbergraph_RockGolem_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
