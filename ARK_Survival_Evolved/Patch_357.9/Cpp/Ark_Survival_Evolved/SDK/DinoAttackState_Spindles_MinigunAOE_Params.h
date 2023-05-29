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
	 * Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.IsDebugMode
	 */
	struct UDinoAttackState_Spindles_MinigunAOE_C_IsDebugMode_Params
	{
	public:
		bool                                                       Ret;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.BPShouldEndAttack
	 */
	struct UDinoAttackState_Spindles_MinigunAOE_C_BPShouldEndAttack_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.GetDamageForSpine
	 */
	struct UDinoAttackState_Spindles_MinigunAOE_C_GetDamageForSpine_Params
	{
	public:
		class APrimalCharacter*                                    Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Damage;                                                  // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.FireGuaranteedHitSpine
	 */
	struct UDinoAttackState_Spindles_MinigunAOE_C_FireGuaranteedHitSpine_Params
	{	};

	/**
	 * Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.BPCanAttack
	 */
	struct UDinoAttackState_Spindles_MinigunAOE_C_BPCanAttack_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              OtherTarget;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.OnEndEvent
	 */
	struct UDinoAttackState_Spindles_MinigunAOE_C_OnEndEvent_Params
	{	};

	/**
	 * Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.OnBeginEvent
	 */
	struct UDinoAttackState_Spindles_MinigunAOE_C_OnBeginEvent_Params
	{
	public:
		class UPrimalAIState*                                      InParentState;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.Get Spine Start and End Position
	 */
	struct UDinoAttackState_Spindles_MinigunAOE_C_GetSpineStartandEndPosition_Params
	{
	public:
		struct FVector                                             Start;                                                   // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             End;                                                     // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             VFXStart;                                                // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             VFXEnd;                                                  // 0x0024(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.FireRandomSpines
	 */
	struct UDinoAttackState_Spindles_MinigunAOE_C_FireRandomSpines_Params
	{	};

	/**
	 * Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.FireGuaranteedSpines
	 */
	struct UDinoAttackState_Spindles_MinigunAOE_C_FireGuaranteedSpines_Params
	{	};

	/**
	 * Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.ExecuteUbergraph_DinoAttackState_Spindles_MinigunAOE
	 */
	struct UDinoAttackState_Spindles_MinigunAOE_C_ExecuteUbergraph_DinoAttackState_Spindles_MinigunAOE_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
