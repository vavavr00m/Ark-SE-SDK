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
	 * 		Name   -> PredefinedFunction UDmgType_Comet_Electric_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDmgType_Comet_Electric_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DmgType_Comet_Electric.DmgType_Comet_Electric_C");
		return ptr;
	}

}


