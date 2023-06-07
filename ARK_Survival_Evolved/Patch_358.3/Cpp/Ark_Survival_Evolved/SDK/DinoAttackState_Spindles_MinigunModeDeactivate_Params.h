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
	 * Function DinoAttackState_Spindles_MinigunModeDeactivate.DinoAttackState_Spindles_MinigunModeDeactivate_C.OnEndEvent
	 */
	struct UDinoAttackState_Spindles_MinigunModeDeactivate_C_OnEndEvent_Params
	{	};

	/**
	 * Function DinoAttackState_Spindles_MinigunModeDeactivate.DinoAttackState_Spindles_MinigunModeDeactivate_C.BPCanAttack
	 */
	struct UDinoAttackState_Spindles_MinigunModeDeactivate_C_BPCanAttack_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      attackRangeOffset;                                       // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              OtherTarget;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackState_Spindles_MinigunModeDeactivate.DinoAttackState_Spindles_MinigunModeDeactivate_C.OnBeginEvent
	 */
	struct UDinoAttackState_Spindles_MinigunModeDeactivate_C_OnBeginEvent_Params
	{
	public:
		class UPrimalAIState*                                      InParentState;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DinoAttackState_Spindles_MinigunModeDeactivate.DinoAttackState_Spindles_MinigunModeDeactivate_C.ExecuteUbergraph_DinoAttackState_Spindles_MinigunModeDeactivate
	 */
	struct UDinoAttackState_Spindles_MinigunModeDeactivate_C_ExecuteUbergraph_DinoAttackState_Spindles_MinigunModeDeactivate_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
