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
	 * Function DinoAttackState_GasBagsInhale.DinoAttackState_GasBagsInhale_C.OnBeginEvent
	 */
	struct UDinoAttackState_GasBagsInhale_C_OnBeginEvent_Params
	{
	public:
		class UPrimalAIState*                                      InParentState;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackState_GasBagsInhale.DinoAttackState_GasBagsInhale_C.OnEndEvent
	 */
	struct UDinoAttackState_GasBagsInhale_C_OnEndEvent_Params
	{	};

	/**
	 * Function DinoAttackState_GasBagsInhale.DinoAttackState_GasBagsInhale_C.BPCanAttack
	 */
	struct UDinoAttackState_GasBagsInhale_C_BPCanAttack_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              OtherTarget;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4GBL[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DinoAttackState_GasBagsInhale.DinoAttackState_GasBagsInhale_C.OnCanUseStateEvent
	 */
	struct UDinoAttackState_GasBagsInhale_C_OnCanUseStateEvent_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8ACY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DinoAttackState_GasBagsInhale.DinoAttackState_GasBagsInhale_C.GetInflation
	 */
	struct UDinoAttackState_GasBagsInhale_C_GetInflation_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Percent;                                                 // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackState_GasBagsInhale.DinoAttackState_GasBagsInhale_C.BPShouldEndAttack
	 */
	struct UDinoAttackState_GasBagsInhale_C_BPShouldEndAttack_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QSIV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DinoAttackState_GasBagsInhale.DinoAttackState_GasBagsInhale_C.ExecuteUbergraph_DinoAttackState_GasBagsInhale
	 */
	struct UDinoAttackState_GasBagsInhale_C_ExecuteUbergraph_DinoAttackState_GasBagsInhale_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
