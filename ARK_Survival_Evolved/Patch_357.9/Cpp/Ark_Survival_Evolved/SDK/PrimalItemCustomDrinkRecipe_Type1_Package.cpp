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
	 * 		Name   -> Function PrimalItemCustomDrinkRecipe_Type1.PrimalItemCustomDrinkRecipe_Type1_C.ExecuteUbergraph_PrimalItemCustomDrinkRecipe_Type1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemCustomDrinkRecipe_Type1_C::ExecuteUbergraph_PrimalItemCustomDrinkRecipe_Type1(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemCustomDrinkRecipe_Type1.PrimalItemCustomDrinkRecipe_Type1_C.ExecuteUbergraph_PrimalItemCustomDrinkRecipe_Type1");
		
		UPrimalItemCustomDrinkRecipe_Type1_C_ExecuteUbergraph_PrimalItemCustomDrinkRecipe_Type1_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemCustomDrinkRecipe_Type1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemCustomDrinkRecipe_Type1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemCustomDrinkRecipe_Type1.PrimalItemCustomDrinkRecipe_Type1_C");
		return ptr;
	}

}


