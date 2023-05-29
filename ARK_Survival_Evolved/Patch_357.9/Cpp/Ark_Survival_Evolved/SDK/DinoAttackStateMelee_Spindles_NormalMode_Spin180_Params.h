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
	 * Function DinoAttackStateMelee_Spindles_NormalMode_Spin180.DinoAttackStateMelee_Spindles_NormalMode_Spin180_C.OnBeginEvent
	 */
	struct UDinoAttackStateMelee_Spindles_NormalMode_Spin180_C_OnBeginEvent_Params
	{
	public:
		class UPrimalAIState*                                      InParentState;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackStateMelee_Spindles_NormalMode_Spin180.DinoAttackStateMelee_Spindles_NormalMode_Spin180_C.BPCanAttack
	 */
	struct UDinoAttackStateMelee_Spindles_NormalMode_Spin180_C_BPCanAttack_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              OtherTarget;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7TWI[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DinoAttackStateMelee_Spindles_NormalMode_Spin180.DinoAttackStateMelee_Spindles_NormalMode_Spin180_C.ExecuteUbergraph_DinoAttackStateMelee_Spindles_NormalMode_Spin180
	 */
	struct UDinoAttackStateMelee_Spindles_NormalMode_Spin180_C_ExecuteUbergraph_DinoAttackStateMelee_Spindles_NormalMode_Spin180_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
