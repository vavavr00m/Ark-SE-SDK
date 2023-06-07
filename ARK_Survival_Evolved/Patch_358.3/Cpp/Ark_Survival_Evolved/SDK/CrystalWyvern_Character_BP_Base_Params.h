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
	 * Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BP_OverrideDinoName
	 */
	struct ACrystalWyvern_Character_BP_Base_C_BP_OverrideDinoName_Params
	{
	public:
		class FString                                              CurrentDinoName;                                         // 0x0000(0x0010)  (Parm, ZeroConstructor)
		class APlayerController*                                   ForPC;                                                   // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.OnRep_bIsAggressiveOverride
	 */
	struct ACrystalWyvern_Character_BP_Base_C_OnRep_bIsAggressiveOverride_Params
	{	};

	/**
	 * Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.UpdateAggressiveOverride
	 */
	struct ACrystalWyvern_Character_BP_Base_C_UpdateAggressiveOverride_Params
	{	};

	/**
	 * Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.AllowGrappling
	 */
	struct ACrystalWyvern_Character_BP_Base_C_AllowGrappling_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.TamingBasedCharsCheck
	 */
	struct ACrystalWyvern_Character_BP_Base_C_TamingBasedCharsCheck_Params
	{	};

	/**
	 * Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.DelayClearIsTamingFlyingHigh
	 */
	struct ACrystalWyvern_Character_BP_Base_C_DelayClearIsTamingFlyingHigh_Params
	{	};

	/**
	 * Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.SetIsTamingFlyingHigh
	 */
	struct ACrystalWyvern_Character_BP_Base_C_SetIsTamingFlyingHigh_Params
	{
	public:
		bool                                                       IsTamingFlyingHigh;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NLV2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPRemoveCharacterSnapshot
	 */
	struct ACrystalWyvern_Character_BP_Base_C_BPRemoveCharacterSnapshot_Params
	{
	public:
		class UPrimalItem*                                         Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              From;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPApplyCharacterSnapshot
	 */
	struct ACrystalWyvern_Character_BP_Base_C_BPApplyCharacterSnapshot_Params
	{
	public:
		class UPrimalItem*                                         Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              To;                                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Offset;                                                  // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      MaxExtent;                                               // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    Pose;                                                    // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bCollisionOn;                                            // 0x0024(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPUntamedConsumeFoodItem
	 */
	struct ACrystalWyvern_Character_BP_Base_C_BPUntamedConsumeFoodItem_Params
	{
	public:
		class UPrimalItem*                                         foodItem;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPFedWakingTameEvent
	 */
	struct ACrystalWyvern_Character_BP_Base_C_BPFedWakingTameEvent_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.GetCrystalMeshes
	 */
	struct ACrystalWyvern_Character_BP_Base_C_GetCrystalMeshes_Params
	{
	public:
		TArray<class UStaticMeshComponent*>                        CrystalMeshComps;                                        // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.DelayDissolveCrystalMesh
	 */
	struct ACrystalWyvern_Character_BP_Base_C_DelayDissolveCrystalMesh_Params
	{	};

	/**
	 * Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.ExtraFlameFXSetup
	 */
	struct ACrystalWyvern_Character_BP_Base_C_ExtraFlameFXSetup_Params
	{
	public:
		class UParticleSystemComponent*                            ParticleSystem;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPClientDoMultiUse
	 */
	struct ACrystalWyvern_Character_BP_Base_C_BPClientDoMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ClientUseIndex;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QOWB[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.DelayAggroToMilkingChar
	 */
	struct ACrystalWyvern_Character_BP_Base_C_DelayAggroToMilkingChar_Params
	{	};

	/**
	 * Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPTryMultiUse
	 */
	struct ACrystalWyvern_Character_BP_Base_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPGetMultiUseEntries
	 */
	struct ACrystalWyvern_Character_BP_Base_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BP_OnSetDeath
	 */
	struct ACrystalWyvern_Character_BP_Base_C_BP_OnSetDeath_Params
	{	};

	/**
	 * Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPTimerNonDedicated
	 */
	struct ACrystalWyvern_Character_BP_Base_C_BPTimerNonDedicated_Params
	{	};

	/**
	 * Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPModifyAimOffsetTargetLocation
	 */
	struct ACrystalWyvern_Character_BP_Base_C_BPModifyAimOffsetTargetLocation_Params
	{
	public:
		struct FVector                                             AimTargetLocation;                                       // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPDinoPostBeginPlay
	 */
	struct ACrystalWyvern_Character_BP_Base_C_BPDinoPostBeginPlay_Params
	{	};

	/**
	 * Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.UpdateCrystalsAndParticles
	 */
	struct ACrystalWyvern_Character_BP_Base_C_UpdateCrystalsAndParticles_Params
	{	};

	/**
	 * Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.UpdateAnimBP
	 */
	struct ACrystalWyvern_Character_BP_Base_C_UpdateAnimBP_Params
	{	};

	/**
	 * Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPSetupTamed
	 */
	struct ACrystalWyvern_Character_BP_Base_C_BPSetupTamed_Params
	{
	public:
		bool                                                       bWasJustTamed;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.SpawnNestEgg
	 */
	struct ACrystalWyvern_Character_BP_Base_C_SpawnNestEgg_Params
	{	};

	/**
	 * Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPCharacterUnsleeped
	 */
	struct ACrystalWyvern_Character_BP_Base_C_BPCharacterUnsleeped_Params
	{	};

	/**
	 * Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPBecomeAdult
	 */
	struct ACrystalWyvern_Character_BP_Base_C_BPBecomeAdult_Params
	{	};

	/**
	 * Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPBecomeBaby
	 */
	struct ACrystalWyvern_Character_BP_Base_C_BPBecomeBaby_Params
	{	};

	/**
	 * Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.UserConstructionScript
	 */
	struct ACrystalWyvern_Character_BP_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.Timeline_ManualDissolve__FinishedFunc
	 */
	struct ACrystalWyvern_Character_BP_Base_C_Timeline_ManualDissolve__FinishedFunc_Params
	{	};

	/**
	 * Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.Timeline_ManualDissolve__UpdateFunc
	 */
	struct ACrystalWyvern_Character_BP_Base_C_Timeline_ManualDissolve__UpdateFunc_Params
	{	};

	/**
	 * Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.Timeline_DissolveSkull__FinishedFunc
	 */
	struct ACrystalWyvern_Character_BP_Base_C_Timeline_DissolveSkull__FinishedFunc_Params
	{	};

	/**
	 * Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.Timeline_DissolveSkull__UpdateFunc
	 */
	struct ACrystalWyvern_Character_BP_Base_C_Timeline_DissolveSkull__UpdateFunc_Params
	{	};

	/**
	 * Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPUnstasis
	 */
	struct ACrystalWyvern_Character_BP_Base_C_BPUnstasis_Params
	{	};

	/**
	 * Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.AnimNotify_FlameFXStart
	 */
	struct ACrystalWyvern_Character_BP_Base_C_AnimNotify_FlameFXStart_Params
	{	};

	/**
	 * Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.AnimNotify_FXTakeOff
	 */
	struct ACrystalWyvern_Character_BP_Base_C_AnimNotify_FXTakeOff_Params
	{	};

	/**
	 * Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.ManualDissolve
	 */
	struct ACrystalWyvern_Character_BP_Base_C_ManualDissolve_Params
	{	};

	/**
	 * Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.ReceiveBeginPlay
	 */
	struct ACrystalWyvern_Character_BP_Base_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.DissolveSkull
	 */
	struct ACrystalWyvern_Character_BP_Base_C_DissolveSkull_Params
	{	};

	/**
	 * Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPTimerServer
	 */
	struct ACrystalWyvern_Character_BP_Base_C_BPTimerServer_Params
	{	};

	/**
	 * Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.ExecuteUbergraph_CrystalWyvern_Character_BP_Base
	 */
	struct ACrystalWyvern_Character_BP_Base_C_ExecuteUbergraph_CrystalWyvern_Character_BP_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
