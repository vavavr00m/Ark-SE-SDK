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
	 * Function PrimalInventoryBP_TurretTek.PrimalInventoryBP_TurretTek_C.BPCustomRemoteInventoryAllowAddItems
	 */
	struct UPrimalInventoryBP_TurretTek_C_BPCustomRemoteInventoryAllowAddItems_Params
	{
	public:
		class AShooterPlayerController*                            PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimalItem*                                         anItem;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    anItemQuantityOverride;                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bRequestedByPlayer;                                      // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0015(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HGCV[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalInventoryBP_TurretTek.PrimalInventoryBP_TurretTek_C.ExecuteUbergraph_PrimalInventoryBP_TurretTek
	 */
	struct UPrimalInventoryBP_TurretTek_C_ExecuteUbergraph_PrimalInventoryBP_TurretTek_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
