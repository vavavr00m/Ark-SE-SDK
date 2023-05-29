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
	 * Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.UpdateSwimOffsetLocal
	 */
	struct AHesperornis_Character_BP_C_UpdateSwimOffsetLocal_Params
	{	};

	/**
	 * Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.TryToLerpToZ
	 */
	struct AHesperornis_Character_BP_C_TryToLerpToZ_Params
	{	};

	/**
	 * Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.Setup Z Lerping
	 */
	struct AHesperornis_Character_BP_C_SetupZLerping_Params
	{
	public:
		float                                                      TargetZ;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K014[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.Init
	 */
	struct AHesperornis_Character_BP_C_Init_Params
	{	};

	/**
	 * Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPOnClearMountedDino
	 */
	struct AHesperornis_Character_BP_C_BPOnClearMountedDino_Params
	{	};

	/**
	 * Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPOnSetMountedDino
	 */
	struct AHesperornis_Character_BP_C_BPOnSetMountedDino_Params
	{	};

	/**
	 * Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.MoveFwd
	 */
	struct AHesperornis_Character_BP_C_MoveFwd_Params
	{	};

	/**
	 * Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.DinoShoulderMountedLaunch
	 */
	struct AHesperornis_Character_BP_C_DinoShoulderMountedLaunch_Params
	{
	public:
		struct FVector                                             launchDir;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A7HV[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterCharacter*                                   throwingCharacter;                                       // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPUnstasis
	 */
	struct AHesperornis_Character_BP_C_BPUnstasis_Params
	{	};

	/**
	 * Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.OverrideFinalWanderLocation
	 */
	struct AHesperornis_Character_BP_C_OverrideFinalWanderLocation_Params
	{
	public:
		struct FVector                                             outVec;                                                  // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.OverrideRandomWanderLocation
	 */
	struct AHesperornis_Character_BP_C_OverrideRandomWanderLocation_Params
	{
	public:
		struct FVector                                             originalDestination;                                     // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             inVec;                                                   // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.IsTargetAFish
	 */
	struct AHesperornis_Character_BP_C_IsTargetAFish_Params
	{
	public:
		class AActor*                                              targetedActor;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsValid;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPCanAutodrag
	 */
	struct AHesperornis_Character_BP_C_BPCanAutodrag_Params
	{
	public:
		class APrimalCharacter*                                    characterToDrag;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_438D[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPCanDragCharacter
	 */
	struct AHesperornis_Character_BP_C_BPCanDragCharacter_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HXLK[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.FishHasVit
	 */
	struct AHesperornis_Character_BP_C_FishHasVit_Params
	{
	public:
		class APrimalCharacter*                                    Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsValid;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.IsCarriedFishValid
	 */
	struct AHesperornis_Character_BP_C_IsCarriedFishValid_Params
	{
	public:
		class APrimalCharacter*                                    Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsValid;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WTRA[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    index;                                                   // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.Eat Players Carried Food
	 */
	struct AHesperornis_Character_BP_C_EatPlayersCarriedFood_Params
	{
	public:
		class APrimalCharacter*                                    Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPClientDoMultiUse
	 */
	struct AHesperornis_Character_BP_C_BPClientDoMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ClientUseIndex;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QIN2[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPGetMultiUseEntries
	 */
	struct AHesperornis_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPTryMultiUse
	 */
	struct AHesperornis_Character_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.TryToLayEgg
	 */
	struct AHesperornis_Character_BP_C_TryToLayEgg_Params
	{	};

	/**
	 * Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.WantsToLayEggs
	 */
	struct AHesperornis_Character_BP_C_WantsToLayEggs_Params
	{
	public:
		bool                                                       WantsTo;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Regular;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Rare;                                                    // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.IsDivingAvailable
	 */
	struct AHesperornis_Character_BP_C_IsDivingAvailable_Params
	{
	public:
		bool                                                       IsAvailable;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.Harvested Valid Fish
	 */
	struct AHesperornis_Character_BP_C_HarvestedValidFish_Params
	{	};

	/**
	 * Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.Check if Fish Is Valid for Egging
	 */
	struct AHesperornis_Character_BP_C_CheckifFishIsValidforEgging_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		bool                                                       IsValidTarget;                                           // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.UseAimOffsets
	 */
	struct AHesperornis_Character_BP_C_UseAimOffsets_Params
	{
	public:
		bool                                                       SetActive;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NG31[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.ReceiveAnyDamage
	 */
	struct AHesperornis_Character_BP_C_ReceiveAnyDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VJOP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UDamageType*                                         DamageType;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AController*                                         InstigatedBy;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPTimerNonDedicated
	 */
	struct AHesperornis_Character_BP_C_BPTimerNonDedicated_Params
	{	};

	/**
	 * Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.DivingUp
	 */
	struct AHesperornis_Character_BP_C_DivingUp_Params
	{	};

	/**
	 * Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.OnRep_IsDivingUp
	 */
	struct AHesperornis_Character_BP_C_OnRep_IsDivingUp_Params
	{	};

	/**
	 * Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPTimerServer
	 */
	struct AHesperornis_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPGetGravityZScale
	 */
	struct AHesperornis_Character_BP_C_BPGetGravityZScale_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPOnMovementModeChangedNotify
	 */
	struct AHesperornis_Character_BP_C_BPOnMovementModeChangedNotify_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              PreviousCustomMode;                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.EndDive
	 */
	struct AHesperornis_Character_BP_C_EndDive_Params
	{	};

	/**
	 * Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BlueprintCanAttack
	 */
	struct AHesperornis_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_N83E[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_S48M[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.UserConstructionScript
	 */
	struct AHesperornis_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.DiveTimeLine__FinishedFunc
	 */
	struct AHesperornis_Character_BP_C_DiveTimeLine__FinishedFunc_Params
	{	};

	/**
	 * Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.DiveTimeLine__UpdateFunc
	 */
	struct AHesperornis_Character_BP_C_DiveTimeLine__UpdateFunc_Params
	{	};

	/**
	 * Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.DiveEvent
	 */
	struct AHesperornis_Character_BP_C_DiveEvent_Params
	{	};

	/**
	 * Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.MultiEndDive
	 */
	struct AHesperornis_Character_BP_C_MultiEndDive_Params
	{	};

	/**
	 * Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.BPDoAttack
	 */
	struct AHesperornis_Character_BP_C_BPDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.ReceiveBeginPlay
	 */
	struct AHesperornis_Character_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.SlowlyRotateZTo
	 */
	struct AHesperornis_Character_BP_C_SlowlyRotateZTo_Params
	{
	public:
		struct FRotator                                            TargetRotation;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Time;                                                    // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            initialRotation;                                         // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.MultiUnsetPitch
	 */
	struct AHesperornis_Character_BP_C_MultiUnsetPitch_Params
	{	};

	/**
	 * Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.ReceiveTick
	 */
	struct AHesperornis_Character_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.DiveAttack
	 */
	struct AHesperornis_Character_BP_C_DiveAttack_Params
	{	};

	/**
	 * Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.UpdateZHeight
	 */
	struct AHesperornis_Character_BP_C_UpdateZHeight_Params
	{
	public:
		float                                                      ZHeight;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.MultiCastBoolToSetZ
	 */
	struct AHesperornis_Character_BP_C_MultiCastBoolToSetZ_Params
	{	};

	/**
	 * Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.AnimNotify_DiveAttackSound
	 */
	struct AHesperornis_Character_BP_C_AnimNotify_DiveAttackSound_Params
	{	};

	/**
	 * Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.MultiStartRotatingUp
	 */
	struct AHesperornis_Character_BP_C_MultiStartRotatingUp_Params
	{	};

	/**
	 * Function Hesperornis_Character_BP.Hesperornis_Character_BP_C.ExecuteUbergraph_Hesperornis_Character_BP
	 */
	struct AHesperornis_Character_BP_C_ExecuteUbergraph_Hesperornis_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
