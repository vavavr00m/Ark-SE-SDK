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
	 * Function DinoTamedInventoryComponent_MoleRat.DinoTamedInventoryComponent_MoleRat_C.BPOverrideItemMinimumUseInterval
	 */
	struct UDinoTamedInventoryComponent_MoleRat_C_BPOverrideItemMinimumUseInterval_Params
	{
	public:
		class UPrimalItem*                                         theItem;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HATO[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DinoTamedInventoryComponent_MoleRat.DinoTamedInventoryComponent_MoleRat_C.ExecuteUbergraph_DinoTamedInventoryComponent_MoleRat
	 */
	struct UDinoTamedInventoryComponent_MoleRat_C_ExecuteUbergraph_DinoTamedInventoryComponent_MoleRat_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
