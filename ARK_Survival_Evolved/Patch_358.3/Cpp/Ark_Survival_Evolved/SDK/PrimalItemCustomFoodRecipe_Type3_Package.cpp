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
	 * 		Name   -> Function PrimalItemCustomFoodRecipe_Type3.PrimalItemCustomFoodRecipe_Type3_C.ExecuteUbergraph_PrimalItemCustomFoodRecipe_Type3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemCustomFoodRecipe_Type3_C::ExecuteUbergraph_PrimalItemCustomFoodRecipe_Type3(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemCustomFoodRecipe_Type3.PrimalItemCustomFoodRecipe_Type3_C.ExecuteUbergraph_PrimalItemCustomFoodRecipe_Type3");
		
		UPrimalItemCustomFoodRecipe_Type3_C_ExecuteUbergraph_PrimalItemCustomFoodRecipe_Type3_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemCustomFoodRecipe_Type3_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemCustomFoodRecipe_Type3_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemCustomFoodRecipe_Type3.PrimalItemCustomFoodRecipe_Type3_C");
		return ptr;
	}

}


