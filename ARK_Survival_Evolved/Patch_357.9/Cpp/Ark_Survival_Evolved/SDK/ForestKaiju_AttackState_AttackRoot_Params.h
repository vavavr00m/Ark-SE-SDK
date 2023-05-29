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
	 * Function ForestKaiju_AttackState_AttackRoot.ForestKaiju_AttackState_AttackRoot_C.OnEndEvent
	 */
	struct UForestKaiju_AttackState_AttackRoot_C_OnEndEvent_Params
	{	};

	/**
	 * Function ForestKaiju_AttackState_AttackRoot.ForestKaiju_AttackState_AttackRoot_C.OnBeginEvent
	 */
	struct UForestKaiju_AttackState_AttackRoot_C_OnBeginEvent_Params
	{
	public:
		class UPrimalAIState*                                      InParentState;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_AttackState_AttackRoot.ForestKaiju_AttackState_AttackRoot_C.InitVars
	 */
	struct UForestKaiju_AttackState_AttackRoot_C_InitVars_Params
	{	};

	/**
	 * Function ForestKaiju_AttackState_AttackRoot.ForestKaiju_AttackState_AttackRoot_C.BPOnClearAttackState
	 */
	struct UForestKaiju_AttackState_AttackRoot_C_BPOnClearAttackState_Params
	{	};

	/**
	 * Function ForestKaiju_AttackState_AttackRoot.ForestKaiju_AttackState_AttackRoot_C.BPShouldEndAttack
	 */
	struct UForestKaiju_AttackState_AttackRoot_C_BPShouldEndAttack_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_AttackState_AttackRoot.ForestKaiju_AttackState_AttackRoot_C.OnTickEvent
	 */
	struct UForestKaiju_AttackState_AttackRoot_C_OnTickEvent_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_M381[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ForestKaiju_AttackState_AttackRoot.ForestKaiju_AttackState_AttackRoot_C.BPOnAttackStart
	 */
	struct UForestKaiju_AttackState_AttackRoot_C_BPOnAttackStart_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ForestKaiju_AttackState_AttackRoot.ForestKaiju_AttackState_AttackRoot_C.ExecuteRoot
	 */
	struct UForestKaiju_AttackState_AttackRoot_C_ExecuteRoot_Params
	{	};

	/**
	 * Function ForestKaiju_AttackState_AttackRoot.ForestKaiju_AttackState_AttackRoot_C.Delayed_ExecuteRoot
	 */
	struct UForestKaiju_AttackState_AttackRoot_C_Delayed_ExecuteRoot_Params
	{	};

	/**
	 * Function ForestKaiju_AttackState_AttackRoot.ForestKaiju_AttackState_AttackRoot_C.EndState
	 */
	struct UForestKaiju_AttackState_AttackRoot_C_EndState_Params
	{	};

	/**
	 * Function ForestKaiju_AttackState_AttackRoot.ForestKaiju_AttackState_AttackRoot_C.ExecuteUbergraph_ForestKaiju_AttackState_AttackRoot
	 */
	struct UForestKaiju_AttackState_AttackRoot_C_ExecuteUbergraph_ForestKaiju_AttackState_AttackRoot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
