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
	 * Function PrimalItem_Spawner_HoverSkiff.PrimalItem_Spawner_HoverSkiff_C.BPAllowCrafting
	 */
	struct UPrimalItem_Spawner_HoverSkiff_C_BPAllowCrafting_Params
	{
	public:
		class AShooterPlayerController*                            ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function PrimalItem_Spawner_HoverSkiff.PrimalItem_Spawner_HoverSkiff_C.GetValidSpawnTransform
	 */
	struct UPrimalItem_Spawner_HoverSkiff_C_GetValidSpawnTransform_Params
	{
	public:
		struct UObject_FTransform                                  SpawnTransform;                                          // 0x0000(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
		bool                                                       SpawnValid;                                              // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItem_Spawner_HoverSkiff.PrimalItem_Spawner_HoverSkiff_C.BPCrafted
	 */
	struct UPrimalItem_Spawner_HoverSkiff_C_BPCrafted_Params
	{	};

	/**
	 * Function PrimalItem_Spawner_HoverSkiff.PrimalItem_Spawner_HoverSkiff_C.SpawnCraftedSkiff
	 */
	struct UPrimalItem_Spawner_HoverSkiff_C_SpawnCraftedSkiff_Params
	{	};

	/**
	 * Function PrimalItem_Spawner_HoverSkiff.PrimalItem_Spawner_HoverSkiff_C.ExecuteUbergraph_PrimalItem_Spawner_HoverSkiff
	 */
	struct UPrimalItem_Spawner_HoverSkiff_C_ExecuteUbergraph_PrimalItem_Spawner_HoverSkiff_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
