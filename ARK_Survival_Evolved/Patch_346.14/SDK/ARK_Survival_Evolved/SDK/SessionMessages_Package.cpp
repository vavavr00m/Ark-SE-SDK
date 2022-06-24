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
	 * 		Name   -> PredefindFunction USessionServiceMessages.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USessionServiceMessages::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SessionMessages.SessionServiceMessages");
		return ptr;
	}

}


