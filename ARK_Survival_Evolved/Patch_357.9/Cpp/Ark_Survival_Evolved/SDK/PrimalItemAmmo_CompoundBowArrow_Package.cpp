﻿/**
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function PrimalItemAmmo_CompoundBowArrow.PrimalItemAmmo_CompoundBowArrow_C.ExecuteUbergraph_PrimalItemAmmo_CompoundBowArrow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemAmmo_CompoundBowArrow_C::ExecuteUbergraph_PrimalItemAmmo_CompoundBowArrow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemAmmo_CompoundBowArrow.PrimalItemAmmo_CompoundBowArrow_C.ExecuteUbergraph_PrimalItemAmmo_CompoundBowArrow");
		
		UPrimalItemAmmo_CompoundBowArrow_C_ExecuteUbergraph_PrimalItemAmmo_CompoundBowArrow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemAmmo_CompoundBowArrow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemAmmo_CompoundBowArrow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemAmmo_CompoundBowArrow.PrimalItemAmmo_CompoundBowArrow_C");
		return ptr;
	}

}


