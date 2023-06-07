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
	 * Function PrimalItemConsumable_Seed_PlantSpeciesR.PrimalItemConsumable_Seed_PlantSpeciesR_C.BPDrawItemIcon
	 */
	struct UPrimalItemConsumable_Seed_PlantSpeciesR_C_BPDrawItemIcon_Params
	{
	public:
		class UCanvas*                                             ItemCanvas;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector2D                                           ItemCanvasSize;                                          // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FVector2D                                           ItemCanvasScale;                                         // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		bool                                                       bItemEnabled;                                            // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_V6A9[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLinearColor                                        TheTintColor;                                            // 0x001C(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrimalItemConsumable_Seed_PlantSpeciesR.PrimalItemConsumable_Seed_PlantSpeciesR_C.ExecuteUbergraph_PrimalItemConsumable_Seed_PlantSpeciesR
	 */
	struct UPrimalItemConsumable_Seed_PlantSpeciesR_C_ExecuteUbergraph_PrimalItemConsumable_Seed_PlantSpeciesR_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
