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
	 * Function DinoTamedInventoryComponent_ForgeCapable_Cherufe.DinoTamedInventoryComponent_ForgeCapable_Cherufe_C.BPAllowUseInInventory
	 */
	struct UDinoTamedInventoryComponent_ForgeCapable_Cherufe_C_BPAllowUseInInventory_Params
	{
	public:
		class UPrimalItem*                                         theItem;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsRemoteInventory;                                      // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OIJ4[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterPlayerController*                            ByPC;                                                    // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_S5KB[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DinoTamedInventoryComponent_ForgeCapable_Cherufe.DinoTamedInventoryComponent_ForgeCapable_Cherufe_C.OverrideUseItem
	 */
	struct UDinoTamedInventoryComponent_ForgeCapable_Cherufe_C_OverrideUseItem_Params
	{
	public:
		class UPrimalItem*                                         theItem;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YM4I[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DinoTamedInventoryComponent_ForgeCapable_Cherufe.DinoTamedInventoryComponent_ForgeCapable_Cherufe_C.ExecuteUbergraph_DinoTamedInventoryComponent_ForgeCapable_Cherufe
	 */
	struct UDinoTamedInventoryComponent_ForgeCapable_Cherufe_C_ExecuteUbergraph_DinoTamedInventoryComponent_ForgeCapable_Cherufe_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
