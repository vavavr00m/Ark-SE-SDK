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
	 * Function DinoAttackState_GasBagsExhaleAttack.DinoAttackState_GasBagsExhaleAttack_C.BPOnAttackStart
	 */
	struct UDinoAttackState_GasBagsExhaleAttack_C_BPOnAttackStart_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackState_GasBagsExhaleAttack.DinoAttackState_GasBagsExhaleAttack_C.BPCanAttack
	 */
	struct UDinoAttackState_GasBagsExhaleAttack_C_BPCanAttack_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              OtherTarget;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EKIX[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DinoAttackState_GasBagsExhaleAttack.DinoAttackState_GasBagsExhaleAttack_C.OnCanUseStateEvent
	 */
	struct UDinoAttackState_GasBagsExhaleAttack_C_OnCanUseStateEvent_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6213[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DinoAttackState_GasBagsExhaleAttack.DinoAttackState_GasBagsExhaleAttack_C.GetInflationAndStaminaCost
	 */
	struct UDinoAttackState_GasBagsExhaleAttack_C_GetInflationAndStaminaCost_Params
	{
	public:
		float                                                      CurrentInflationPercent;                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CurrentStamina;                                          // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CurrentStaminaCost;                                      // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U3SD[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DinoAttackState_GasBagsExhaleAttack.DinoAttackState_GasBagsExhaleAttack_C.ExecuteUbergraph_DinoAttackState_GasBagsExhaleAttack
	 */
	struct UDinoAttackState_GasBagsExhaleAttack_C_ExecuteUbergraph_DinoAttackState_GasBagsExhaleAttack_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
