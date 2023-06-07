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
	 * Function Buff_SpinoAqua.Buff_SpinoAqua_C.ActivateAquaBuff
	 */
	struct ABuff_SpinoAqua_C_ActivateAquaBuff_Params
	{	};

	/**
	 * Function Buff_SpinoAqua.Buff_SpinoAqua_C.DeactivateAquaBuff
	 */
	struct ABuff_SpinoAqua_C_DeactivateAquaBuff_Params
	{	};

	/**
	 * Function Buff_SpinoAqua.Buff_SpinoAqua_C.UserConstructionScript
	 */
	struct ABuff_SpinoAqua_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_SpinoAqua.Buff_SpinoAqua_C.BPDeactivated
	 */
	struct ABuff_SpinoAqua_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_SpinoAqua.Buff_SpinoAqua_C.ReceiveBeginPlay
	 */
	struct ABuff_SpinoAqua_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_SpinoAqua.Buff_SpinoAqua_C.ExecuteUbergraph_Buff_SpinoAqua
	 */
	struct ABuff_SpinoAqua_C_ExecuteUbergraph_Buff_SpinoAqua_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
