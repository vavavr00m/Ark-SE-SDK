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
	 * Function PrimalItem_BossTributeGeneric.PrimalItem_BossTributeGeneric_C.BPAllowCrafting
	 */
	struct UPrimalItem_BossTributeGeneric_C_BPAllowCrafting_Params
	{
	public:
		class AShooterPlayerController*                            ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function PrimalItem_BossTributeGeneric.PrimalItem_BossTributeGeneric_C.ExecuteUbergraph_PrimalItem_BossTributeGeneric
	 */
	struct UPrimalItem_BossTributeGeneric_C_ExecuteUbergraph_PrimalItem_BossTributeGeneric_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
