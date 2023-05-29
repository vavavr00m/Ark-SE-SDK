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
	 * Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.BPTryMultiUse
	 */
	struct AKaprosuchus_Character_BP_C_BPTryMultiUse_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    UseIndex;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.BPGetMultiUseEntries
	 */
	struct AKaprosuchus_Character_BP_C_BPGetMultiUseEntries_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMultiUseEntry>                              MultiUseEntries;                                         // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMultiUseEntry>                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.Play Leap FX
	 */
	struct AKaprosuchus_Character_BP_C_PlayLeapFX_Params
	{
	public:
		int32_t                                                    MovementMode;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsLeapStart;                                             // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.EvaluateHeightInWater
	 */
	struct AKaprosuchus_Character_BP_C_EvaluateHeightInWater_Params
	{
	public:
		bool                                                       NearSurface;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4LOD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.BPShouldLimitForwardDirection
	 */
	struct AKaprosuchus_Character_BP_C_BPShouldLimitForwardDirection_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.BPModifyForwardDirectionInput
	 */
	struct AKaprosuchus_Character_BP_C_BPModifyForwardDirectionInput_Params
	{
	public:
		struct FVector                                             directionInput;                                          // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.BPTimerServer
	 */
	struct AKaprosuchus_Character_BP_C_BPTimerServer_Params
	{	};

	/**
	 * Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.BlueprintCanRiderAttack
	 */
	struct AKaprosuchus_Character_BP_C_BlueprintCanRiderAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.CalcLeapImpulse
	 */
	struct AKaprosuchus_Character_BP_C_CalcLeapImpulse_Params
	{
	public:
		struct FVector                                             RetImpulse;                                              // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.BlueprintCanAttack
	 */
	struct AKaprosuchus_Character_BP_C_BlueprintCanAttack_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XDB9[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              OtherTarget;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.ChangeGroundSwimAttackAnims
	 */
	struct AKaprosuchus_Character_BP_C_ChangeGroundSwimAttackAnims_Params
	{
	public:
		int32_t                                                    NewState;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.BPTimerNonDedicated
	 */
	struct AKaprosuchus_Character_BP_C_BPTimerNonDedicated_Params
	{	};

	/**
	 * Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.BPOnMovementModeChangedNotify
	 */
	struct AKaprosuchus_Character_BP_C_BPOnMovementModeChangedNotify_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              PreviousCustomMode;                                      // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_X9QZ[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.SetLeapRotation
	 */
	struct AKaprosuchus_Character_BP_C_SetLeapRotation_Params
	{	};

	/**
	 * Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.UserConstructionScript
	 */
	struct AKaprosuchus_Character_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.AnimNotify_StartLeapAttack
	 */
	struct AKaprosuchus_Character_BP_C_AnimNotify_StartLeapAttack_Params
	{	};

	/**
	 * Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.AnimNotify_StartLeapGrab
	 */
	struct AKaprosuchus_Character_BP_C_AnimNotify_StartLeapGrab_Params
	{	};

	/**
	 * Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.AnimNotify_EndLeap
	 */
	struct AKaprosuchus_Character_BP_C_AnimNotify_EndLeap_Params
	{	};

	/**
	 * Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.ClearLeapAttack
	 */
	struct AKaprosuchus_Character_BP_C_ClearLeapAttack_Params
	{
	public:
		int32_t                                                    LandingInMovementMode;                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.Multi_ClearLeap
	 */
	struct AKaprosuchus_Character_BP_C_Multi_ClearLeap_Params
	{
	public:
		bool                                                       IsWalking;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.ResetStartLeap
	 */
	struct AKaprosuchus_Character_BP_C_ResetStartLeap_Params
	{	};

	/**
	 * Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.StopHoldingCharacter
	 */
	struct AKaprosuchus_Character_BP_C_StopHoldingCharacter_Params
	{	};

	/**
	 * Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.StartGrab
	 */
	struct AKaprosuchus_Character_BP_C_StartGrab_Params
	{	};

	/**
	 * Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.Multi_StopHoldingCharacter
	 */
	struct AKaprosuchus_Character_BP_C_Multi_StopHoldingCharacter_Params
	{	};

	/**
	 * Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.SetIgnoreMoveInput
	 */
	struct AKaprosuchus_Character_BP_C_SetIgnoreMoveInput_Params
	{	};

	/**
	 * Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.ContinueMomentum
	 */
	struct AKaprosuchus_Character_BP_C_ContinueMomentum_Params
	{	};

	/**
	 * Function Kaprosuchus_Character_BP.Kaprosuchus_Character_BP_C.ExecuteUbergraph_Kaprosuchus_Character_BP
	 */
	struct AKaprosuchus_Character_BP_C_ExecuteUbergraph_Kaprosuchus_Character_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
