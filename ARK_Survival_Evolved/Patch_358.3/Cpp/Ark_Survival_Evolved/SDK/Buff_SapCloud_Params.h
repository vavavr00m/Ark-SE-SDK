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
	 * Function Buff_SapCloud.Buff_SapCloud_C.DecreaseSapSize
	 */
	struct ABuff_SapCloud_C_DecreaseSapSize_Params
	{	};

	/**
	 * Function Buff_SapCloud.Buff_SapCloud_C.ReceiveBeginPlay
	 */
	struct ABuff_SapCloud_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_SapCloud.Buff_SapCloud_C.UserConstructionScript
	 */
	struct ABuff_SapCloud_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_SapCloud.Buff_SapCloud_C.Timeline_SapMatIncrease__FinishedFunc
	 */
	struct ABuff_SapCloud_C_Timeline_SapMatIncrease__FinishedFunc_Params
	{	};

	/**
	 * Function Buff_SapCloud.Buff_SapCloud_C.Timeline_SapMatIncrease__UpdateFunc
	 */
	struct ABuff_SapCloud_C_Timeline_SapMatIncrease__UpdateFunc_Params
	{	};

	/**
	 * Function Buff_SapCloud.Buff_SapCloud_C.Timeline_SapMeshDecrease__FinishedFunc
	 */
	struct ABuff_SapCloud_C_Timeline_SapMeshDecrease__FinishedFunc_Params
	{	};

	/**
	 * Function Buff_SapCloud.Buff_SapCloud_C.Timeline_SapMeshDecrease__UpdateFunc
	 */
	struct ABuff_SapCloud_C_Timeline_SapMeshDecrease__UpdateFunc_Params
	{	};

	/**
	 * Function Buff_SapCloud.Buff_SapCloud_C.UpdateSapSize
	 */
	struct ABuff_SapCloud_C_UpdateSapSize_Params
	{
	public:
		bool                                                       Increase;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_SapCloud.Buff_SapCloud_C.ExecuteUbergraph_Buff_SapCloud
	 */
	struct ABuff_SapCloud_C_ExecuteUbergraph_Buff_SapCloud_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
