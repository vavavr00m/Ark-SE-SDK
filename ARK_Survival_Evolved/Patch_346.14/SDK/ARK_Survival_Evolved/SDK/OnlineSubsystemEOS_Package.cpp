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
	 * 		Name   -> PredefindFunction UEOSNetDriver.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEOSNetDriver::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemEOS.EOSNetDriver");
		return ptr;
	}

}


