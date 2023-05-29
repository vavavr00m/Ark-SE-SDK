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
	 * Function PrimalItemSkin_TekHelmet_V2.PrimalItemSkin_TekHelmet_V2_C.ApplyingSkinOntoItem
	 */
	struct UPrimalItemSkin_TekHelmet_V2_C_ApplyingSkinOntoItem_Params
	{
	public:
		class UPrimalItem*                                         ToOwnerItem;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsFirstTime;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItemSkin_TekHelmet_V2.PrimalItemSkin_TekHelmet_V2_C.RemovedSkinFromItem
	 */
	struct UPrimalItemSkin_TekHelmet_V2_C_RemovedSkinFromItem_Params
	{
	public:
		class UPrimalItem*                                         FromOwnerItem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsFirstTime;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItemSkin_TekHelmet_V2.PrimalItemSkin_TekHelmet_V2_C.InitBuff
	 */
	struct UPrimalItemSkin_TekHelmet_V2_C_InitBuff_Params
	{	};

	/**
	 * Function PrimalItemSkin_TekHelmet_V2.PrimalItemSkin_TekHelmet_V2_C.BlueprintEquipped
	 */
	struct UPrimalItemSkin_TekHelmet_V2_C_BlueprintEquipped_Params
	{
	public:
		bool                                                       bIsFromSaveGame;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItemSkin_TekHelmet_V2.PrimalItemSkin_TekHelmet_V2_C.BlueprintOwnerPosssessed
	 */
	struct UPrimalItemSkin_TekHelmet_V2_C_BlueprintOwnerPosssessed_Params
	{
	public:
		class AController*                                         PossessedByController;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItemSkin_TekHelmet_V2.PrimalItemSkin_TekHelmet_V2_C.BlueprintUnequipped
	 */
	struct UPrimalItemSkin_TekHelmet_V2_C_BlueprintUnequipped_Params
	{	};

	/**
	 * Function PrimalItemSkin_TekHelmet_V2.PrimalItemSkin_TekHelmet_V2_C.ExecuteUbergraph_PrimalItemSkin_TekHelmet_V2
	 */
	struct UPrimalItemSkin_TekHelmet_V2_C_ExecuteUbergraph_PrimalItemSkin_TekHelmet_V2_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
