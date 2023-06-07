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
	 * Function Buff_BuffingTreeAoE.Buff_BuffingTreeAoE_C.GetGrowthScale
	 */
	struct ABuff_BuffingTreeAoE_C_GetGrowthScale_Params
	{
	public:
		struct FVector                                             Scale;                                                   // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BuffingTreeAoE.Buff_BuffingTreeAoE_C.UserConstructionScript
	 */
	struct ABuff_BuffingTreeAoE_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_BuffingTreeAoE.Buff_BuffingTreeAoE_C.ReceiveBeginPlay
	 */
	struct ABuff_BuffingTreeAoE_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_BuffingTreeAoE.Buff_BuffingTreeAoE_C.ReceiveTick
	 */
	struct ABuff_BuffingTreeAoE_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BuffingTreeAoE.Buff_BuffingTreeAoE_C.Multi-SetScale
	 */
	struct ABuff_BuffingTreeAoE_C_MultiSetScale_Params
	{
	public:
		struct FVector                                             Scale;                                                   // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BuffingTreeAoE.Buff_BuffingTreeAoE_C.ExecuteUbergraph_Buff_BuffingTreeAoE
	 */
	struct ABuff_BuffingTreeAoE_C_ExecuteUbergraph_Buff_BuffingTreeAoE_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
