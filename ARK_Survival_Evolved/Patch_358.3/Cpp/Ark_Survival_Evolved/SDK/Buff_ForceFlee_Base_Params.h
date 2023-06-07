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
	 * Function Buff_ForceFlee_Base.Buff_ForceFlee_Base_C.ReEnterFleeState
	 */
	struct ABuff_ForceFlee_Base_C_ReEnterFleeState_Params
	{	};

	/**
	 * Function Buff_ForceFlee_Base.Buff_ForceFlee_Base_C.Restore Flee State
	 */
	struct ABuff_ForceFlee_Base_C_RestoreFleeState_Params
	{	};

	/**
	 * Function Buff_ForceFlee_Base.Buff_ForceFlee_Base_C.Set Flee State
	 */
	struct ABuff_ForceFlee_Base_C_SetFleeState_Params
	{	};

	/**
	 * Function Buff_ForceFlee_Base.Buff_ForceFlee_Base_C.BPDeactivated
	 */
	struct ABuff_ForceFlee_Base_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ForceFlee_Base.Buff_ForceFlee_Base_C.BPActivated
	 */
	struct ABuff_ForceFlee_Base_C_BPActivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_ForceFlee_Base.Buff_ForceFlee_Base_C.UserConstructionScript
	 */
	struct ABuff_ForceFlee_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_ForceFlee_Base.Buff_ForceFlee_Base_C.ExecuteUbergraph_Buff_ForceFlee_Base
	 */
	struct ABuff_ForceFlee_Base_C_ExecuteUbergraph_Buff_ForceFlee_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
