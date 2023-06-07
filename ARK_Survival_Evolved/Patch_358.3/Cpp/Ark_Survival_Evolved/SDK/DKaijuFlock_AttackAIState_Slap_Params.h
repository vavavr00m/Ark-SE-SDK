﻿#pragma once

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
	 * Function DKaijuFlock_AttackAIState_Slap.DKaijuFlock_AttackAIState_Slap_C.OnBeginEvent
	 */
	struct UDKaijuFlock_AttackAIState_Slap_C_OnBeginEvent_Params
	{
	public:
		class UPrimalAIState*                                      InParentState;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DKaijuFlock_AttackAIState_Slap.DKaijuFlock_AttackAIState_Slap_C.BPOnAttackStart
	 */
	struct UDKaijuFlock_AttackAIState_Slap_C_BPOnAttackStart_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DKaijuFlock_AttackAIState_Slap.DKaijuFlock_AttackAIState_Slap_C.BPShouldEndAttack
	 */
	struct UDKaijuFlock_AttackAIState_Slap_C_BPShouldEndAttack_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_N1NW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DKaijuFlock_AttackAIState_Slap.DKaijuFlock_AttackAIState_Slap_C.OnTickEvent
	 */
	struct UDKaijuFlock_AttackAIState_Slap_C_OnTickEvent_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DKaijuFlock_AttackAIState_Slap.DKaijuFlock_AttackAIState_Slap_C.ExecuteUbergraph_DKaijuFlock_AttackAIState_Slap
	 */
	struct UDKaijuFlock_AttackAIState_Slap_C_ExecuteUbergraph_DKaijuFlock_AttackAIState_Slap_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
