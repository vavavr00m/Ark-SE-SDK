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
	 * 		Name   -> PredefinedFunction UShooterDamageTypeBP_Blood_NoBuff_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShooterDamageTypeBP_Blood_NoBuff_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ShooterDamageTypeBP_Blood_NoBuff.ShooterDamageTypeBP_Blood_NoBuff_C");
		return ptr;
	}

}


