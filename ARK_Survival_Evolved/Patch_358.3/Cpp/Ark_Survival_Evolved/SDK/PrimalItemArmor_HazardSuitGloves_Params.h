﻿#pragma once

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
	 * Function PrimalItemArmor_HazardSuitGloves.PrimalItemArmor_HazardSuitGloves_C.BlueprintUnequipped
	 */
	struct UPrimalItemArmor_HazardSuitGloves_C_BlueprintUnequipped_Params
	{	};

	/**
	 * Function PrimalItemArmor_HazardSuitGloves.PrimalItemArmor_HazardSuitGloves_C.BlueprintEquipped
	 */
	struct UPrimalItemArmor_HazardSuitGloves_C_BlueprintEquipped_Params
	{
	public:
		bool                                                       bIsFromSaveGame;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4AW4[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PrimalItemArmor_HazardSuitGloves.PrimalItemArmor_HazardSuitGloves_C.ExecuteUbergraph_PrimalItemArmor_HazardSuitGloves
	 */
	struct UPrimalItemArmor_HazardSuitGloves_C_ExecuteUbergraph_PrimalItemArmor_HazardSuitGloves_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
