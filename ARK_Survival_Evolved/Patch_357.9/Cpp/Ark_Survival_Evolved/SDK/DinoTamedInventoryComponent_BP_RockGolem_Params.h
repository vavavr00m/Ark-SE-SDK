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
	 * Function DinoTamedInventoryComponent_BP_RockGolem.DinoTamedInventoryComponent_BP_RockGolem_C.OverrideUseItem
	 */
	struct UDinoTamedInventoryComponent_BP_RockGolem_C_OverrideUseItem_Params
	{
	public:
		class UPrimalItem*                                         theItem;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_B18P[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DinoTamedInventoryComponent_BP_RockGolem.DinoTamedInventoryComponent_BP_RockGolem_C.BPAllowUseInInventory
	 */
	struct UDinoTamedInventoryComponent_BP_RockGolem_C_BPAllowUseInInventory_Params
	{
	public:
		class UPrimalItem*                                         theItem;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsRemoteInventory;                                      // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZTSJ[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterPlayerController*                            ByPC;                                                    // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8HRH[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DinoTamedInventoryComponent_BP_RockGolem.DinoTamedInventoryComponent_BP_RockGolem_C.ExecuteUbergraph_DinoTamedInventoryComponent_BP_RockGolem
	 */
	struct UDinoTamedInventoryComponent_BP_RockGolem_C_ExecuteUbergraph_DinoTamedInventoryComponent_BP_RockGolem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
