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
	 * Function Buff_Incite.Buff_Incite_C.ResetTimer
	 */
	struct ABuff_Incite_C_ResetTimer_Params
	{	};

	/**
	 * Function Buff_Incite.Buff_Incite_C.BP_OnBuffLifetimeUpdated
	 */
	struct ABuff_Incite_C_BP_OnBuffLifetimeUpdated_Params
	{	};

	/**
	 * Function Buff_Incite.Buff_Incite_C.UserConstructionScript
	 */
	struct ABuff_Incite_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_Incite.Buff_Incite_C.ReceiveBeginPlay
	 */
	struct ABuff_Incite_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_Incite.Buff_Incite_C.ReceiveEndPlay
	 */
	struct ABuff_Incite_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Incite.Buff_Incite_C.ExecuteUbergraph_Buff_Incite
	 */
	struct ABuff_Incite_C_ExecuteUbergraph_Buff_Incite_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
