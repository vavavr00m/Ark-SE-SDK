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
	 * 		Name   -> PredefinedFunction UDmgType_Ranged_Turret_Small_DefensePlant_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDmgType_Ranged_Turret_Small_DefensePlant_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DmgType_Ranged_Turret_Small_DefensePlant.DmgType_Ranged_Turret_Small_DefensePlant_C");
		return ptr;
	}

}


