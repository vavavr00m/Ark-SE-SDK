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
	 * Function PrimalItemConsumable_GachaPod.PrimalItemConsumable_GachaPod_C.BPOnItemConsumed
	 */
	struct UPrimalItemConsumable_GachaPod_C_BPOnItemConsumed_Params
	{
	public:
		class UPrimalInventoryComponent*                           inventory;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    remainingQuantity;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItemConsumable_GachaPod.PrimalItemConsumable_GachaPod_C.RollLoot
	 */
	struct UPrimalItemConsumable_GachaPod_C_RollLoot_Params
	{
	public:
		class UPrimalInventoryComponent*                           Inv;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItemConsumable_GachaPod.PrimalItemConsumable_GachaPod_C.ShowHUDNotification
	 */
	struct UPrimalItemConsumable_GachaPod_C_ShowHUDNotification_Params
	{
	public:
		class UPrimalItem*                                         Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UClass*                                              Resource;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    Quanity;                                                 // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4CVN[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UPrimalInventoryComponent*                           Inv;                                                     // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItemConsumable_GachaPod.PrimalItemConsumable_GachaPod_C.BPPostInitializeItem
	 */
	struct UPrimalItemConsumable_GachaPod_C_BPPostInitializeItem_Params
	{
	public:
		class UWorld*                                              OptionalInitWorld;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItemConsumable_GachaPod.PrimalItemConsumable_GachaPod_C.BlueprintUsed
	 */
	struct UPrimalItemConsumable_GachaPod_C_BlueprintUsed_Params
	{	};

	/**
	 * Function PrimalItemConsumable_GachaPod.PrimalItemConsumable_GachaPod_C.ExecuteUbergraph_PrimalItemConsumable_GachaPod
	 */
	struct UPrimalItemConsumable_GachaPod_C_ExecuteUbergraph_PrimalItemConsumable_GachaPod_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
