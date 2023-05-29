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
	 * 		Name   -> PredefinedFunction URAG_DmgType_Projectile_Ice_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URAG_DmgType_Projectile_Ice_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RAG_DmgType_Projectile_Ice.RAG_DmgType_Projectile_Ice_C");
		return ptr;
	}

}


