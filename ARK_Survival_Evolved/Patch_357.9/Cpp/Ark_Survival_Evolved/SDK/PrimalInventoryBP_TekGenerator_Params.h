﻿#pragma once

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
	 * Function PrimalInventoryBP_TekGenerator.PrimalInventoryBP_TekGenerator_C.BPRemoteInventoryAllowViewing
	 */
	struct UPrimalInventoryBP_TekGenerator_C_BPRemoteInventoryAllowViewing_Params
	{
	public:
		class AShooterPlayerController*                            PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalInventoryBP_TekGenerator.PrimalInventoryBP_TekGenerator_C.ExecuteUbergraph_PrimalInventoryBP_TekGenerator
	 */
	struct UPrimalInventoryBP_TekGenerator_C_ExecuteUbergraph_PrimalInventoryBP_TekGenerator_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif