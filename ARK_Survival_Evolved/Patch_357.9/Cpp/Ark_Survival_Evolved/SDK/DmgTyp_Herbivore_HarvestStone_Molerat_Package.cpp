﻿/**
 * Name: Ark_Survival_Evolved
 * Version: Patch_357.9
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDmgTyp_Herbivore_HarvestStone_Molerat_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDmgTyp_Herbivore_HarvestStone_Molerat_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DmgTyp_Herbivore_HarvestStone_Molerat.DmgTyp_Herbivore_HarvestStone_Molerat_C");
		return ptr;
	}

}


