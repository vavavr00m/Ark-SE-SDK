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
	 * Function Buff_BiomeApplied.Buff_BiomeApplied_C.UserConstructionScript
	 */
	struct ABuff_BiomeApplied_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_BiomeApplied.Buff_BiomeApplied_C.ReceiveTick
	 */
	struct ABuff_BiomeApplied_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_BiomeApplied.Buff_BiomeApplied_C.DoDeactivate
	 */
	struct ABuff_BiomeApplied_C_DoDeactivate_Params
	{	};

	/**
	 * Function Buff_BiomeApplied.Buff_BiomeApplied_C.ExecuteUbergraph_Buff_BiomeApplied
	 */
	struct ABuff_BiomeApplied_C_ExecuteUbergraph_Buff_BiomeApplied_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
