﻿/**
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
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function PrimalItemAmmo_CannonShell.PrimalItemAmmo_CannonShell_C.ExecuteUbergraph_PrimalItemAmmo_CannonShell
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemAmmo_CannonShell_C::ExecuteUbergraph_PrimalItemAmmo_CannonShell(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemAmmo_CannonShell.PrimalItemAmmo_CannonShell_C.ExecuteUbergraph_PrimalItemAmmo_CannonShell");
		
		UPrimalItemAmmo_CannonShell_C_ExecuteUbergraph_PrimalItemAmmo_CannonShell_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemAmmo_CannonShell_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemAmmo_CannonShell_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemAmmo_CannonShell.PrimalItemAmmo_CannonShell_C");
		return ptr;
	}

}


