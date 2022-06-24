/**
 * Name: ARK_Survival_Evolved
 * Version: Patch_346.14
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UVivoxPluginHackFix.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVivoxPluginHackFix::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class VivoxCore.VivoxPluginHackFix");
		return ptr;
	}

}


