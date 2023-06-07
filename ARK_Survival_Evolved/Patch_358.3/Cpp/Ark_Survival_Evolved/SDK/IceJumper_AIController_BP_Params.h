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
	 * Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.GetBabyFleeLocation
	 */
	struct AIceJumper_AIController_BP_C_GetBabyFleeLocation_Params
	{
	public:
		struct FVector                                             Result;                                                  // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.IsStuckInAir
	 */
	struct AIceJumper_AIController_BP_C_IsStuckInAir_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6P9A[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.BPUpdateBestTarget
	 */
	struct AIceJumper_AIController_BP_C_BPUpdateBestTarget_Params
	{
	public:
		class AActor*                                              bestTarget;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       dontSetIn;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       dontSetOut;                                              // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XYJD[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.DoLOS
	 */
	struct AIceJumper_AIController_BP_C_DoLOS_Params
	{
	public:
		struct FVector                                             ViewLocationOffset;                                      // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       retVal;                                                  // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CKCK[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Update LOSChecks
	 */
	struct AIceJumper_AIController_BP_C_UpdateLOSChecks_Params
	{	};

	/**
	 * Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Get Percent Stamina
	 */
	struct AIceJumper_AIController_BP_C_GetPercentStamina_Params
	{
	public:
		float                                                      ret;                                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EIEQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.IsFallingToGroundBelowTarget
	 */
	struct AIceJumper_AIController_BP_C_IsFallingToGroundBelowTarget_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8TK2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.BPGetTargetingDesire
	 */
	struct AIceJumper_AIController_BP_C_BPGetTargetingDesire_Params
	{
	public:
		class AActor*                                              forTarget;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ForTargetingDesireValue;                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.GetPrimalTarget
	 */
	struct AIceJumper_AIController_BP_C_GetPrimalTarget_Params
	{
	public:
		class APrimalCharacter*                                    Result;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Target Is PreventingFrozen
	 */
	struct AIceJumper_AIController_BP_C_TargetIsPreventingFrozen_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RBA7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Target Is Freezing
	 */
	struct AIceJumper_AIController_BP_C_TargetIsFreezing_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OIIZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Is LowStamina
	 */
	struct AIceJumper_AIController_BP_C_IsLowStamina_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8E2Q[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.OnTakeDamage
	 */
	struct AIceJumper_AIController_BP_C_OnTakeDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.TookLotsOfDamage
	 */
	struct AIceJumper_AIController_BP_C_TookLotsOfDamage_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Y58Y[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.TargetIsFrozen
	 */
	struct AIceJumper_AIController_BP_C_TargetIsFrozen_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_X7HX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.GetMeleeWeight
	 */
	struct AIceJumper_AIController_BP_C_GetMeleeWeight_Params
	{
	public:
		float                                                      Result;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2Z3X[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.UpdateMelee
	 */
	struct AIceJumper_AIController_BP_C_UpdateMelee_Params
	{	};

	/**
	 * Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Melee
	 */
	struct AIceJumper_AIController_BP_C_Melee_Params
	{	};

	/**
	 * Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.UpdateIceBreath
	 */
	struct AIceJumper_AIController_BP_C_UpdateIceBreath_Params
	{	};

	/**
	 * Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.OnMovementModeChanged
	 */
	struct AIceJumper_AIController_BP_C_OnMovementModeChanged_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EMovementMode                                              NewMovementMode;                                         // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.OnAbilityChanged
	 */
	struct AIceJumper_AIController_BP_C_OnAbilityChanged_Params
	{
	public:
		EIceJumperAbilities_Enum                                   NewAbility;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EIceJumperAbilities_Enum                                   PrevAbility;                                             // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EIceJumperShortDashTypes_Enum                              SecondaryAbility;                                        // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Trigger RandomWeighted Ability
	 */
	struct AIceJumper_AIController_BP_C_TriggerRandomWeightedAbility_Params
	{
	public:
		EIceJumperAbilities_Enum                                   TriggeredAbility;                                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EIceJumperShortDashTypes_Enum                              SecondaryAbility;                                        // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R0KM[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Get ShortForward Dash Weight
	 */
	struct AIceJumper_AIController_BP_C_GetShortForwardDashWeight_Params
	{
	public:
		float                                                      Result;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9QL9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.GetSide DashWeight
	 */
	struct AIceJumper_AIController_BP_C_GetSideDashWeight_Params
	{
	public:
		bool                                                       Left;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4XXA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Result;                                                  // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Get JumpWeight
	 */
	struct AIceJumper_AIController_BP_C_GetJumpWeight_Params
	{
	public:
		float                                                      Result;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EF7L[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.IsTarget Tamed or Survivor
	 */
	struct AIceJumper_AIController_BP_C_IsTargetTamedorSurvivor_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LW1B[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Get Forward DashWeight
	 */
	struct AIceJumper_AIController_BP_C_GetForwardDashWeight_Params
	{
	public:
		float                                                      Result;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WAME[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.IsInAir
	 */
	struct AIceJumper_AIController_BP_C_IsInAir_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BYTN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Get Ice BreathWeight
	 */
	struct AIceJumper_AIController_BP_C_GetIceBreathWeight_Params
	{
	public:
		float                                                      Result;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VBR2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.IceBreath
	 */
	struct AIceJumper_AIController_BP_C_IceBreath_Params
	{	};

	/**
	 * Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.ForwardDash
	 */
	struct AIceJumper_AIController_BP_C_ForwardDash_Params
	{	};

	/**
	 * Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.IceJumper
	 */
	struct AIceJumper_AIController_BP_C_IceJumper_Params
	{
	public:
		class AIceJumper_Character_BP_C*                           Result;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.SideDash
	 */
	struct AIceJumper_AIController_BP_C_SideDash_Params
	{
	public:
		EIceJumperShortDashTypes_Enum                              Type;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IX7K[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.ReceiveBeginPlay
	 */
	struct AIceJumper_AIController_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.Jump
	 */
	struct AIceJumper_AIController_BP_C_Jump_Params
	{	};

	/**
	 * Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.ChangedAITarget
	 */
	struct AIceJumper_AIController_BP_C_ChangedAITarget_Params
	{	};

	/**
	 * Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.ReceiveTick
	 */
	struct AIceJumper_AIController_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.UserConstructionScript
	 */
	struct AIceJumper_AIController_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.TryNextAbility
	 */
	struct AIceJumper_AIController_BP_C_TryNextAbility_Params
	{	};

	/**
	 * Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.TickStaminaRegen
	 */
	struct AIceJumper_AIController_BP_C_TickStaminaRegen_Params
	{	};

	/**
	 * Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.ResetDamageCounter
	 */
	struct AIceJumper_AIController_BP_C_ResetDamageCounter_Params
	{	};

	/**
	 * Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.FindImprintPlayer
	 */
	struct AIceJumper_AIController_BP_C_FindImprintPlayer_Params
	{	};

	/**
	 * Function IceJumper_AIController_BP.IceJumper_AIController_BP_C.ExecuteUbergraph_IceJumper_AIController_BP
	 */
	struct AIceJumper_AIController_BP_C_ExecuteUbergraph_IceJumper_AIController_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
