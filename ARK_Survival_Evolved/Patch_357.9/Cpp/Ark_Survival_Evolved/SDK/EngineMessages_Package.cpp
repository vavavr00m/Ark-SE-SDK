/**
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
	 * 		Name   -> PredefinedFunction UEngineServiceMessages.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEngineServiceMessages::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class EngineMessages.EngineServiceMessages");
		return ptr;
	}

}


