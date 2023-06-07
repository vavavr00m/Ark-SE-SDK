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
	 * Function Microraptor_Character_BP.Microraptor_Character_BP_C.CheckForTargetOrDino
	 */
	struct AMicroraptor_Character_BP_C_CheckForTargetOrDino_Params
	{	};

	/**
	 * Function Microraptor_Character_BP.Microraptor_Character_BP_C.BPShouldForceFlee
	 */
	struct AMicroraptor_Character_BP_C_BPShouldForceFlee_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Microraptor_Character_BP.Microraptor_Character_BP_C.ReturnToPlayer
	 */
	struct AMicroraptor_Character_BP_C_ReturnToPlayer_Params
	{	};

	/**
	 * Function Microraptor_Character_BP.Microraptor_Character_BP_C.BlueprintCanRiderAttack
	 */
	struct AMicroraptor_Character_BP_C_BlueprintCanRiderAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Microraptor_Character_BP.Microraptor_Character_BP_C.Add Z Velocity Toward Target
	 */
	struct AMicroraptor_Character_BP_C_AddZVelocityTowardTarget_Params
	{	};

	/**
	 * Function Microraptor_Character_BP.Microraptor_Character_BP_C.SwapToCorrectAttackAnim
	 */
	struct AMicroraptor_Character_BP_C_SwapToCorrectAttackAnim_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Microraptor_Character_BP.Microraptor_Character_BP_C.BPCanTargetCorpse
	 */
	struct AMicroraptor_Character_BP_C_BPCanTargetCorpse_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Microraptor_Character_BP.Microraptor_Character_BP_C.BPDoAttack
	 */
	struct AMicroraptor_Character_BP_C_BPDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Microraptor_Character_BP.Microraptor_Character_BP_C.BPUnstasis
	 */
	struct AMicroraptor_Character_BP_C_BPUnstasis_Params
	{	};

	/**
	 * Function Microraptor_Character_BP.Microraptor_Character_BP_C.BPOnSetMountedDino
	 */
	struct AMicroraptor_Character_BP_C_BPOnSetMountedDino_Params
	{	};

	/**
	 * Function Microraptor_Character_BP.Microraptor_Character_BP_C.DinoShoulderMountedLaunch
	 */
	struct AMicroraptor_Character_BP_C_DinoShoulderMountedLaunch_Params
	{
	public:
		struct FVector                                             launchDir;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_46NK[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterCharacter*                                   throwingCharacter;                                       // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Microraptor_Character_BP.Microraptor_Character_BP_C.Get Height Difference To Target
	 */
	struct AMicroraptor_Character_BP_C_GetHeightDifferenceToTarget_Params
	{
	public:
		float                                                      HeightDifference;                                        // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsTargetValid;                                           // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1L4E[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Microraptor_Character_BP.Microraptor_Character_BP_C.BlueprintCanAttack
	 */
	struct AMicroraptor_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ASK7[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Microraptor_Character_BP.Microraptor_Character_BP_C.OnLaunched
	 */
	struct AMicroraptor_Character_BP_C_OnLaunched_Params
	{
	public:
		struct FVector                                             LaunchVelocity;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bXYOverride;                                             // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bZOverride;                                              // 0x000D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Microraptor_Character_BP.Microraptor_Character_BP_C.BlueprintAdjustOutputDamage
	 */
	struct AMicroraptor_Character_BP_C_BlueprintAdjustOutputDamage_Params
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
	 * Function Microraptor_Character_BP.Microraptor_Character_BP_C.UserConstructionScript
	 */
	struct AMicroraptor_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Microraptor_Character_BP.Microraptor_Character_BP_C.EndGlide
	 */
	struct AMicroraptor_Character_BP_C_EndGlide_Params
	{
	public:
		bool                                                       DontSetPhysicsState;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Microraptor_Character_BP.Microraptor_Character_BP_C.StartGlide
	 */
	struct AMicroraptor_Character_BP_C_StartGlide_Params
	{	};

	/**
	 * Function Microraptor_Character_BP.Microraptor_Character_BP_C.BPTimerServer
	 */
	struct AMicroraptor_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function Microraptor_Character_BP.Microraptor_Character_BP_C.StartGlideAfterDelay
	 */
	struct AMicroraptor_Character_BP_C_StartGlideAfterDelay_Params
	{
	public:
		float                                                      DelayTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Microraptor_Character_BP.Microraptor_Character_BP_C.ResetAndAllowJump
	 */
	struct AMicroraptor_Character_BP_C_ResetAndAllowJump_Params
	{	};

	/**
	 * Function Microraptor_Character_BP.Microraptor_Character_BP_C.StartRaptorJump
	 */
	struct AMicroraptor_Character_BP_C_StartRaptorJump_Params
	{	};

	/**
	 * Function Microraptor_Character_BP.Microraptor_Character_BP_C.DelayedImpulse
	 */
	struct AMicroraptor_Character_BP_C_DelayedImpulse_Params
	{
	public:
		class APrimalCharacter*                                    ImpulseTarget;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Microraptor_Character_BP.Microraptor_Character_BP_C.AnimNotify_NonGlideJump
	 */
	struct AMicroraptor_Character_BP_C_AnimNotify_NonGlideJump_Params
	{	};

	/**
	 * Function Microraptor_Character_BP.Microraptor_Character_BP_C.ExecuteUbergraph_Microraptor_Character_BP
	 */
	struct AMicroraptor_Character_BP_C_ExecuteUbergraph_Microraptor_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
