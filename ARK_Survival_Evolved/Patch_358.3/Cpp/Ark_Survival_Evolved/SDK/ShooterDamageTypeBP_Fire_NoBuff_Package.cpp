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
	 * 		Name   -> PredefinedFunction UShooterDamageTypeBP_Fire_NoBuff_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShooterDamageTypeBP_Fire_NoBuff_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ShooterDamageTypeBP_Fire_NoBuff.ShooterDamageTypeBP_Fire_NoBuff_C");
		return ptr;
	}

}


