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
	 * Function Buff_LFLAqua.Buff_LFLAqua_C.ActivateAquaBuff
	 */
	struct ABuff_LFLAqua_C_ActivateAquaBuff_Params
	{	};

	/**
	 * Function Buff_LFLAqua.Buff_LFLAqua_C.DeactivateAquaBuff
	 */
	struct ABuff_LFLAqua_C_DeactivateAquaBuff_Params
	{	};

	/**
	 * Function Buff_LFLAqua.Buff_LFLAqua_C.UserConstructionScript
	 */
	struct ABuff_LFLAqua_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_LFLAqua.Buff_LFLAqua_C.BPDeactivated
	 */
	struct ABuff_LFLAqua_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_LFLAqua.Buff_LFLAqua_C.ReceiveBeginPlay
	 */
	struct ABuff_LFLAqua_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_LFLAqua.Buff_LFLAqua_C.ExecuteUbergraph_Buff_LFLAqua
	 */
	struct ABuff_LFLAqua_C_ExecuteUbergraph_Buff_LFLAqua_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
