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
	 * Function DinoAttackState_Cherufe_VentForge.DinoAttackState_Cherufe_VentForge_C.BPOnAttackStart
	 */
	struct UDinoAttackState_Cherufe_VentForge_C_BPOnAttackStart_Params
	{
	public:
		int32_t                                                    AttackIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YKNM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DinoAttackState_Cherufe_VentForge.DinoAttackState_Cherufe_VentForge_C.BPCanAttack
	 */
	struct UDinoAttackState_Cherufe_VentForge_C_BPCanAttack_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              OtherTarget;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AQK2[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DinoAttackState_Cherufe_VentForge.DinoAttackState_Cherufe_VentForge_C.OnCanUseStateEvent
	 */
	struct UDinoAttackState_Cherufe_VentForge_C_OnCanUseStateEvent_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8OCN[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DinoAttackState_Cherufe_VentForge.DinoAttackState_Cherufe_VentForge_C.GetInflationAndStaminaCost
	 */
	struct UDinoAttackState_Cherufe_VentForge_C_GetInflationAndStaminaCost_Params
	{
	public:
		float                                                      CurrentForgeChargePercent;                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CurrentStamina;                                          // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      CurrentStaminaCost;                                      // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NDWD[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DinoAttackState_Cherufe_VentForge.DinoAttackState_Cherufe_VentForge_C.ExecuteUbergraph_DinoAttackState_Cherufe_VentForge
	 */
	struct UDinoAttackState_Cherufe_VentForge_C_ExecuteUbergraph_DinoAttackState_Cherufe_VentForge_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
