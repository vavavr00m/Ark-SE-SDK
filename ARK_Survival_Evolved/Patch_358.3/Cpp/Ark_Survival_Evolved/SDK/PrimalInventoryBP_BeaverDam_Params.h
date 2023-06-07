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
	 * Function PrimalInventoryBP_BeaverDam.PrimalInventoryBP_BeaverDam_C.BPRemoteInventoryAllowRemoveItems
	 */
	struct UPrimalInventoryBP_BeaverDam_C_BPRemoteInventoryAllowRemoveItems_Params
	{
	public:
		class AShooterPlayerController*                            PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimalItem*                                         anItemToTransfer;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CKTC[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalInventoryBP_BeaverDam.PrimalInventoryBP_BeaverDam_C.BPAccessedInventory
	 */
	struct UPrimalInventoryBP_BeaverDam_C_BPAccessedInventory_Params
	{
	public:
		class AShooterPlayerController*                            ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalInventoryBP_BeaverDam.PrimalInventoryBP_BeaverDam_C.ExecuteUbergraph_PrimalInventoryBP_BeaverDam
	 */
	struct UPrimalInventoryBP_BeaverDam_C_ExecuteUbergraph_PrimalInventoryBP_BeaverDam_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
