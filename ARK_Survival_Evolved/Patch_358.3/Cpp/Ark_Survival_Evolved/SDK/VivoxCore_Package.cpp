/**
 * Name: Ark_Survival_Evolved
 * Version: Patch_358.3
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
	 * 		Name   -> PredefinedFunction UVivoxPluginHackFix.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVivoxPluginHackFix::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VivoxCore.VivoxPluginHackFix");
		return ptr;
	}

}


