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
	 * Function PrimalItemConsumable_SweetVeggieCake.PrimalItemConsumable_SweetVeggieCake_C.BPCanUse
	 */
	struct UPrimalItemConsumable_SweetVeggieCake_C_BPCanUse_Params
	{
	public:
		bool                                                       bIgnoreCooldown;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BX1R[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalItemConsumable_SweetVeggieCake.PrimalItemConsumable_SweetVeggieCake_C.BPPreUseItem
	 */
	struct UPrimalItemConsumable_SweetVeggieCake_C_BPPreUseItem_Params
	{	};

	/**
	 * Function PrimalItemConsumable_SweetVeggieCake.PrimalItemConsumable_SweetVeggieCake_C.ExecuteUbergraph_PrimalItemConsumable_SweetVeggieCake
	 */
	struct UPrimalItemConsumable_SweetVeggieCake_C_ExecuteUbergraph_PrimalItemConsumable_SweetVeggieCake_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
