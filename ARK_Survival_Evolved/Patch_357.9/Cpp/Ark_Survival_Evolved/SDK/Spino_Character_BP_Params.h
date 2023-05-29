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
	 * Function Spino_Character_BP.Spino_Character_BP_C.GetSocketForMeleeTraceForHitBlockers
	 */
	struct ASpino_Character_BP_C_GetSocketForMeleeTraceForHitBlockers_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                ReturnValue;                                             // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Spino_Character_BP.Spino_Character_BP_C.BlueprintCanAttack
	 */
	struct ASpino_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3MFC[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Spino_Character_BP.Spino_Character_BP_C.BPDoAttack
	 */
	struct ASpino_Character_BP_C_BPDoAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Spino_Character_BP.Spino_Character_BP_C.CanSwitchStances
	 */
	struct ASpino_Character_BP_C_CanSwitchStances_Params
	{
	public:
		bool                                                       isBiped;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       canSwitch;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Spino_Character_BP.Spino_Character_BP_C.BlueprintCanRiderAttack
	 */
	struct ASpino_Character_BP_C_BlueprintCanRiderAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Spino_Character_BP.Spino_Character_BP_C.GetStanceSwitchAnim
	 */
	struct ASpino_Character_BP_C_GetStanceSwitchAnim_Params
	{
	public:
		class UAnimMontage*                                        AnimMontage;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Spino_Character_BP.Spino_Character_BP_C.SS_SetCurrentStance
	 */
	struct ASpino_Character_BP_C_SS_SetCurrentStance_Params
	{
	public:
		bool                                                       isBiped;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bUseCooldown;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Spino_Character_BP.Spino_Character_BP_C.ToggleStance
	 */
	struct ASpino_Character_BP_C_ToggleStance_Params
	{	};

	/**
	 * Function Spino_Character_BP.Spino_Character_BP_C.BPTimerServer
	 */
	struct ASpino_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function Spino_Character_BP.Spino_Character_BP_C.PreInit_SwitchStance
	 */
	struct ASpino_Character_BP_C_PreInit_SwitchStance_Params
	{	};

	/**
	 * Function Spino_Character_BP.Spino_Character_BP_C.K2_OnMovementModeChanged
	 */
	struct ASpino_Character_BP_C_K2_OnMovementModeChanged_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EMovementMode                                              NewMovementMode;                                         // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              PrevCustomMode;                                          // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              NewCustomMode;                                           // 0x0003(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Spino_Character_BP.Spino_Character_BP_C.GetDefaultDino
	 */
	struct ASpino_Character_BP_C_GetDefaultDino_Params
	{
	public:
		class ASpino_Character_BP_C*                               Dino;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Spino_Character_BP.Spino_Character_BP_C.UpdateMoveSpeed
	 */
	struct ASpino_Character_BP_C_UpdateMoveSpeed_Params
	{	};

	/**
	 * Function Spino_Character_BP.Spino_Character_BP_C.UpdateStance
	 */
	struct ASpino_Character_BP_C_UpdateStance_Params
	{	};

	/**
	 * Function Spino_Character_BP.Spino_Character_BP_C.OnRep_bIsBiped
	 */
	struct ASpino_Character_BP_C_OnRep_bIsBiped_Params
	{	};

	/**
	 * Function Spino_Character_BP.Spino_Character_BP_C.CS_Set Biped State
	 */
	struct ASpino_Character_BP_C_CS_SetBipedState_Params
	{
	public:
		bool                                                       isBiped;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Spino_Character_BP.Spino_Character_BP_C.UserConstructionScript
	 */
	struct ASpino_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Spino_Character_BP.Spino_Character_BP_C.SS_RequestStanceSwitch
	 */
	struct ASpino_Character_BP_C_SS_RequestStanceSwitch_Params
	{	};

	/**
	 * Function Spino_Character_BP.Spino_Character_BP_C.StanceSwitch_Delay
	 */
	struct ASpino_Character_BP_C_StanceSwitch_Delay_Params
	{
	public:
		float                                                      Delay;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Spino_Character_BP.Spino_Character_BP_C.ReceiveActorBeginOverlap
	 */
	struct ASpino_Character_BP_C_ReceiveActorBeginOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Spino_Character_BP.Spino_Character_BP_C.ReceiveActorEndOverlap
	 */
	struct ASpino_Character_BP_C_ReceiveActorEndOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Spino_Character_BP.Spino_Character_BP_C.Multi_UpdateBuffTime
	 */
	struct ASpino_Character_BP_C_Multi_UpdateBuffTime_Params
	{
	public:
		bool                                                       bIsActive;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Spino_Character_BP.Spino_Character_BP_C.AdditiveRoar
	 */
	struct ASpino_Character_BP_C_AdditiveRoar_Params
	{	};

	/**
	 * Function Spino_Character_BP.Spino_Character_BP_C.ExecuteUbergraph_Spino_Character_BP
	 */
	struct ASpino_Character_BP_C_ExecuteUbergraph_Spino_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
