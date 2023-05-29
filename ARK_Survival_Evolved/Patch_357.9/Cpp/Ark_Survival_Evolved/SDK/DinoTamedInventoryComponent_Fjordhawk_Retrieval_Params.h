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
	 * Function DinoTamedInventoryComponent_Fjordhawk_Retrieval.DinoTamedInventoryComponent_Fjordhawk_Retrieval_C.BPAllowAddInventoryItem
	 */
	struct UDinoTamedInventoryComponent_Fjordhawk_Retrieval_C_BPAllowAddInventoryItem_Params
	{
	public:
		class UPrimalItem*                                         Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    RequestedQuantity;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bOnlyAddAll;                                             // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x000D(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KJD8[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DinoTamedInventoryComponent_Fjordhawk_Retrieval.DinoTamedInventoryComponent_Fjordhawk_Retrieval_C.ExecuteUbergraph_DinoTamedInventoryComponent_Fjordhawk_Retrieval
	 */
	struct UDinoTamedInventoryComponent_Fjordhawk_Retrieval_C_ExecuteUbergraph_DinoTamedInventoryComponent_Fjordhawk_Retrieval_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
