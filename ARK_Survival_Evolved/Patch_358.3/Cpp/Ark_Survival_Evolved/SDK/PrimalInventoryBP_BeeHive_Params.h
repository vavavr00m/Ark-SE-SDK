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
	 * Function PrimalInventoryBP_BeeHive.PrimalInventoryBP_BeeHive_C.BPInventoryRefresh
	 */
	struct UPrimalInventoryBP_BeeHive_C_BPInventoryRefresh_Params
	{	};

	/**
	 * Function PrimalInventoryBP_BeeHive.PrimalInventoryBP_BeeHive_C.TryToConsumeFlowers
	 */
	struct UPrimalInventoryBP_BeeHive_C_TryToConsumeFlowers_Params
	{
	public:
		int32_t                                                    NumToConsume;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    NumFailedToConsume;                                      // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    NumActuallyConsumed;                                     // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalInventoryBP_BeeHive.PrimalInventoryBP_BeeHive_C.BPAccessedInventory
	 */
	struct UPrimalInventoryBP_BeeHive_C_BPAccessedInventory_Params
	{
	public:
		class AShooterPlayerController*                            ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalInventoryBP_BeeHive.PrimalInventoryBP_BeeHive_C.ExecuteUbergraph_PrimalInventoryBP_BeeHive
	 */
	struct UPrimalInventoryBP_BeeHive_C_ExecuteUbergraph_PrimalInventoryBP_BeeHive_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
