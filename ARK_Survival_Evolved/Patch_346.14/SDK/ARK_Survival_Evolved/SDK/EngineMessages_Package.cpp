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
	 * 		Name   -> PredefindFunction UEngineServiceMessages.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEngineServiceMessages::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EngineMessages.EngineServiceMessages");
		return ptr;
	}

}


