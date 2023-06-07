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
	 * Function PrimalItemSkin_Costume_InflatableRex.PrimalItemSkin_Costume_InflatableRex_C.ApplyingSkinOntoItem
	 */
	struct UPrimalItemSkin_Costume_InflatableRex_C_ApplyingSkinOntoItem_Params
	{
	public:
		class UPrimalItem*                                         ToOwnerItem;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsFirstTime;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItemSkin_Costume_InflatableRex.PrimalItemSkin_Costume_InflatableRex_C.RemovedSkinFromItem
	 */
	struct UPrimalItemSkin_Costume_InflatableRex_C_RemovedSkinFromItem_Params
	{
	public:
		class UPrimalItem*                                         FromOwnerItem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsFirstTime;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItemSkin_Costume_InflatableRex.PrimalItemSkin_Costume_InflatableRex_C.BlueprintUnequipped
	 */
	struct UPrimalItemSkin_Costume_InflatableRex_C_BlueprintUnequipped_Params
	{	};

	/**
	 * Function PrimalItemSkin_Costume_InflatableRex.PrimalItemSkin_Costume_InflatableRex_C.BlueprintEquipped
	 */
	struct UPrimalItemSkin_Costume_InflatableRex_C_BlueprintEquipped_Params
	{
	public:
		bool                                                       bIsFromSaveGame;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItemSkin_Costume_InflatableRex.PrimalItemSkin_Costume_InflatableRex_C.AddBuff
	 */
	struct UPrimalItemSkin_Costume_InflatableRex_C_AddBuff_Params
	{	};

	/**
	 * Function PrimalItemSkin_Costume_InflatableRex.PrimalItemSkin_Costume_InflatableRex_C.RemoveBuff
	 */
	struct UPrimalItemSkin_Costume_InflatableRex_C_RemoveBuff_Params
	{	};

	/**
	 * Function PrimalItemSkin_Costume_InflatableRex.PrimalItemSkin_Costume_InflatableRex_C.ExecuteUbergraph_PrimalItemSkin_Costume_InflatableRex
	 */
	struct UPrimalItemSkin_Costume_InflatableRex_C_ExecuteUbergraph_PrimalItemSkin_Costume_InflatableRex_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
