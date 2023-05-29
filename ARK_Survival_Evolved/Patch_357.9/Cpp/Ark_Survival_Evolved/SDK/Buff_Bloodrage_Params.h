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
	 * Function Buff_Bloodrage.Buff_Bloodrage_C.CalculateNextDecay
	 */
	struct ABuff_Bloodrage_C_CalculateNextDecay_Params
	{
	public:
		float                                                      NewParam;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Bloodrage.Buff_Bloodrage_C.OnRep_StackCount
	 */
	struct ABuff_Bloodrage_C_OnRep_StackCount_Params
	{	};

	/**
	 * Function Buff_Bloodrage.Buff_Bloodrage_C.UpdateStackedValues
	 */
	struct ABuff_Bloodrage_C_UpdateStackedValues_Params
	{	};

	/**
	 * Function Buff_Bloodrage.Buff_Bloodrage_C.StackDecay
	 */
	struct ABuff_Bloodrage_C_StackDecay_Params
	{	};

	/**
	 * Function Buff_Bloodrage.Buff_Bloodrage_C.BPActivated
	 */
	struct ABuff_Bloodrage_C_BPActivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Bloodrage.Buff_Bloodrage_C.UserConstructionScript
	 */
	struct ABuff_Bloodrage_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_Bloodrage.Buff_Bloodrage_C.ExecuteUbergraph_Buff_Bloodrage
	 */
	struct ABuff_Bloodrage_C_ExecuteUbergraph_Buff_Bloodrage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
