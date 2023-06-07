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
	 * Function PrimalItemArmor_ZiplineMotor.PrimalItemArmor_ZiplineMotor_C.GetGasolineValueFromItem
	 */
	struct UPrimalItemArmor_ZiplineMotor_C_GetGasolineValueFromItem_Params
	{
	public:
		class UPrimalItem*                                         TargetItem;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9BR3[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Value;                                                   // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItemArmor_ZiplineMotor.PrimalItemArmor_ZiplineMotor_C.BPGetCustomInventoryWidgetText
	 */
	struct UPrimalItemArmor_ZiplineMotor_C_BPGetCustomInventoryWidgetText_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function PrimalItemArmor_ZiplineMotor.PrimalItemArmor_ZiplineMotor_C.BPGetSkinnedCustomInventoryWidgetText
	 */
	struct UPrimalItemArmor_ZiplineMotor_C_BPGetSkinnedCustomInventoryWidgetText_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function PrimalItemArmor_ZiplineMotor.PrimalItemArmor_ZiplineMotor_C.SetGasolineDescription
	 */
	struct UPrimalItemArmor_ZiplineMotor_C_SetGasolineDescription_Params
	{
	public:
		class UPrimalItem*                                         Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      Value;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JYAU[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalItemArmor_ZiplineMotor.PrimalItemArmor_ZiplineMotor_C.BPInitFromItemNetInfo
	 */
	struct UPrimalItemArmor_ZiplineMotor_C_BPInitFromItemNetInfo_Params
	{	};

	/**
	 * Function PrimalItemArmor_ZiplineMotor.PrimalItemArmor_ZiplineMotor_C.RemovedSkinFromItem
	 */
	struct UPrimalItemArmor_ZiplineMotor_C_RemovedSkinFromItem_Params
	{
	public:
		class UPrimalItem*                                         FromOwnerItem;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsFirstTime;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6LGT[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalItemArmor_ZiplineMotor.PrimalItemArmor_ZiplineMotor_C.SkinEquippedBlueprintTick
	 */
	struct UPrimalItemArmor_ZiplineMotor_C_SkinEquippedBlueprintTick_Params
	{
	public:
		class UPrimalItem*                                         OwnerItem;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      DeltaSeconds;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItemArmor_ZiplineMotor.PrimalItemArmor_ZiplineMotor_C.ApplyingSkinOntoItem
	 */
	struct UPrimalItemArmor_ZiplineMotor_C_ApplyingSkinOntoItem_Params
	{
	public:
		class UPrimalItem*                                         ToOwnerItem;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsFirstTime;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_3MZ5[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalItemArmor_ZiplineMotor.PrimalItemArmor_ZiplineMotor_C.ExecuteUbergraph_PrimalItemArmor_ZiplineMotor
	 */
	struct UPrimalItemArmor_ZiplineMotor_C_ExecuteUbergraph_PrimalItemArmor_ZiplineMotor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
