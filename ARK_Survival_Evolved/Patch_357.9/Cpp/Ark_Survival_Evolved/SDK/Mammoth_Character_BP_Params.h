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
	 * Function Mammoth_Character_BP.Mammoth_Character_BP_C.IsInWater
	 */
	struct AMammoth_Character_BP_C_IsInWater_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H625[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Mammoth_Character_BP.Mammoth_Character_BP_C.WaterSprayCharacter
	 */
	struct AMammoth_Character_BP_C_WaterSprayCharacter_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mammoth_Character_BP.Mammoth_Character_BP_C.RefillWaterStat
	 */
	struct AMammoth_Character_BP_C_RefillWaterStat_Params
	{
	public:
		class UPrimalCharacterStatusComponent*                     StatusComp;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPCanTakePassenger
	 */
	struct AMammoth_Character_BP_C_BPCanTakePassenger_Params
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    PassengerSeatIndex;                                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bForcePassenger;                                         // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bAllowFlyersAndWaterDinos;                               // 0x000D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000E(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mammoth_Character_BP.Mammoth_Character_BP_C.ThrottledTick
	 */
	struct AMammoth_Character_BP_C_ThrottledTick_Params
	{	};

	/**
	 * Function Mammoth_Character_BP.Mammoth_Character_BP_C.BlueprintAdjustOutputDamage
	 */
	struct AMammoth_Character_BP_C_BlueprintAdjustOutputDamage_Params
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
	 * Function Mammoth_Character_BP.Mammoth_Character_BP_C.ShortestAngleDifference
	 */
	struct AMammoth_Character_BP_C_ShortestAngleDifference_Params
	{
	public:
		float                                                      AngleCurrent;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      AngleTarget;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Difference;                                              // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mammoth_Character_BP.Mammoth_Character_BP_C.GetClampedLookDir
	 */
	struct AMammoth_Character_BP_C_GetClampedLookDir_Params
	{
	public:
		bool                                                       LimitLowerPitch;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HOX3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Dir;                                                     // 0x0004(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mammoth_Character_BP.Mammoth_Character_BP_C.ThrowTrace
	 */
	struct AMammoth_Character_BP_C_ThrowTrace_Params
	{	};

	/**
	 * Function Mammoth_Character_BP.Mammoth_Character_BP_C.GetThrowVelocity
	 */
	struct AMammoth_Character_BP_C_GetThrowVelocity_Params
	{
	public:
		class APrimalCharacter*                                    ThrownCharacter;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPTimerServer
	 */
	struct AMammoth_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function Mammoth_Character_BP.Mammoth_Character_BP_C.canThrow
	 */
	struct AMammoth_Character_BP_C_canThrow_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_N1LF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPTimerNonDedicated
	 */
	struct AMammoth_Character_BP_C_BPTimerNonDedicated_Params
	{	};

	/**
	 * Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPDidSetCarriedCharacter
	 */
	struct AMammoth_Character_BP_C_BPDidSetCarriedCharacter_Params
	{
	public:
		class APrimalCharacter*                                    PreviousCarriedCharacter;                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPNotifyToggleHUD
	 */
	struct AMammoth_Character_BP_C_BPNotifyToggleHUD_Params
	{
	public:
		bool                                                       bHudHidden;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UG3P[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPTryMultiUse
	 */
	struct AMammoth_Character_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPGetMultiUseEntries
	 */
	struct AMammoth_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Mammoth_Character_BP.Mammoth_Character_BP_C.ClearThrow
	 */
	struct AMammoth_Character_BP_C_ClearThrow_Params
	{	};

	/**
	 * Function Mammoth_Character_BP.Mammoth_Character_BP_C.LaunchGrabbedCharacter
	 */
	struct AMammoth_Character_BP_C_LaunchGrabbedCharacter_Params
	{	};

	/**
	 * Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPDidClearCarriedCharacter
	 */
	struct AMammoth_Character_BP_C_BPDidClearCarriedCharacter_Params
	{
	public:
		class APrimalCharacter*                                    PreviousCarriedCharacter;                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mammoth_Character_BP.Mammoth_Character_BP_C.GrabFoundCharacter
	 */
	struct AMammoth_Character_BP_C_GrabFoundCharacter_Params
	{	};

	/**
	 * Function Mammoth_Character_BP.Mammoth_Character_BP_C.FindProperGrabTarget
	 */
	struct AMammoth_Character_BP_C_FindProperGrabTarget_Params
	{
	public:
		class APrimalCharacter*                                    TestChar;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APrimalCharacter*                                    TargetChar;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mammoth_Character_BP.Mammoth_Character_BP_C.CheckProperCanCarry
	 */
	struct AMammoth_Character_BP_C_CheckProperCanCarry_Params
	{
	public:
		class APrimalCharacter*                                    TestActor;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CanCarry;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mammoth_Character_BP.Mammoth_Character_BP_C.IsBetterGrabTarget
	 */
	struct AMammoth_Character_BP_C_IsBetterGrabTarget_Params
	{
	public:
		class AActor*                                              NewTarget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_96CC[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Mammoth_Character_BP.Mammoth_Character_BP_C.GetGrabLocation
	 */
	struct AMammoth_Character_BP_C_GetGrabLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mammoth_Character_BP.Mammoth_Character_BP_C.RetrieveAnyGrabbableCharacter
	 */
	struct AMammoth_Character_BP_C_RetrieveAnyGrabbableCharacter_Params
	{
	public:
		bool                                                       FoundCharacter;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_X1CA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPOverrideGetAttackAnimationIndex
	 */
	struct AMammoth_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QTKG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UAnimMontage*>                                AnimationArray;                                          // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		int32_t                                                    ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPOnStartJump
	 */
	struct AMammoth_Character_BP_C_BPOnStartJump_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XSQG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Mammoth_Character_BP.Mammoth_Character_BP_C.OnPassengerWeaponChanged
	 */
	struct AMammoth_Character_BP_C_OnPassengerWeaponChanged_Params
	{
	public:
		class AShooterWeapon*                                      newWeapon;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPNotifyAddPassenger
	 */
	struct AMammoth_Character_BP_C_BPNotifyAddPassenger_Params
	{
	public:
		class APrimalCharacter*                                    PassengerChar;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    SeatIndex;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OO76[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPNotifyClearPassenger
	 */
	struct AMammoth_Character_BP_C_BPNotifyClearPassenger_Params
	{
	public:
		class APrimalCharacter*                                    PassengerChar;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    SeatIndex;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_G70N[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Mammoth_Character_BP.Mammoth_Character_BP_C.AllowTrumpetDebuff
	 */
	struct AMammoth_Character_BP_C_AllowTrumpetDebuff_Params
	{
	public:
		class APrimalCharacter*                                    Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mammoth_Character_BP.Mammoth_Character_BP_C.DoTrumpetAttack
	 */
	struct AMammoth_Character_BP_C_DoTrumpetAttack_Params
	{	};

	/**
	 * Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPDoAttack
	 */
	struct AMammoth_Character_BP_C_BPDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mammoth_Character_BP.Mammoth_Character_BP_C.BlueprintCanAttack
	 */
	struct AMammoth_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IKV0[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mammoth_Character_BP.Mammoth_Character_BP_C.BlueprintCanRiderAttack
	 */
	struct AMammoth_Character_BP_C_BlueprintCanRiderAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mammoth_Character_BP.Mammoth_Character_BP_C.UserConstructionScript
	 */
	struct AMammoth_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Mammoth_Character_BP.Mammoth_Character_BP_C.AnimNotify_EndGrab
	 */
	struct AMammoth_Character_BP_C_AnimNotify_EndGrab_Params
	{	};

	/**
	 * Function Mammoth_Character_BP.Mammoth_Character_BP_C.TraceGrab
	 */
	struct AMammoth_Character_BP_C_TraceGrab_Params
	{	};

	/**
	 * Function Mammoth_Character_BP.Mammoth_Character_BP_C.AnimNotify_StartGrab
	 */
	struct AMammoth_Character_BP_C_AnimNotify_StartGrab_Params
	{	};

	/**
	 * Function Mammoth_Character_BP.Mammoth_Character_BP_C.AnimNotify_MidGrab
	 */
	struct AMammoth_Character_BP_C_AnimNotify_MidGrab_Params
	{	};

	/**
	 * Function Mammoth_Character_BP.Mammoth_Character_BP_C.AnimNotify_EndGrabAttack
	 */
	struct AMammoth_Character_BP_C_AnimNotify_EndGrabAttack_Params
	{	};

	/**
	 * Function Mammoth_Character_BP.Mammoth_Character_BP_C.AnimNotify_ReleaseGrab
	 */
	struct AMammoth_Character_BP_C_AnimNotify_ReleaseGrab_Params
	{	};

	/**
	 * Function Mammoth_Character_BP.Mammoth_Character_BP_C.ClientGrabNotify
	 */
	struct AMammoth_Character_BP_C_ClientGrabNotify_Params
	{	};

	/**
	 * Function Mammoth_Character_BP.Mammoth_Character_BP_C.ClientThrowNotify
	 */
	struct AMammoth_Character_BP_C_ClientThrowNotify_Params
	{	};

	/**
	 * Function Mammoth_Character_BP.Mammoth_Character_BP_C.ServerTraceHit
	 */
	struct AMammoth_Character_BP_C_ServerTraceHit_Params
	{
	public:
		struct FVector                                             TraceLoc;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       TraceHit;                                                // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Mammoth_Character_BP.Mammoth_Character_BP_C.AnimNotify_TrumpetVFX
	 */
	struct AMammoth_Character_BP_C_AnimNotify_TrumpetVFX_Params
	{	};

	/**
	 * Function Mammoth_Character_BP.Mammoth_Character_BP_C.AnimNotify_StopTrumpetVFX
	 */
	struct AMammoth_Character_BP_C_AnimNotify_StopTrumpetVFX_Params
	{	};

	/**
	 * Function Mammoth_Character_BP.Mammoth_Character_BP_C.AnimNotify_TrunkSplash
	 */
	struct AMammoth_Character_BP_C_AnimNotify_TrunkSplash_Params
	{	};

	/**
	 * Function Mammoth_Character_BP.Mammoth_Character_BP_C.ExecuteUbergraph_Mammoth_Character_BP
	 */
	struct AMammoth_Character_BP_C_ExecuteUbergraph_Mammoth_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
