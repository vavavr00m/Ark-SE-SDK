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
	 * 		Name   -> Function PrimalItem_RecipeNote_Kibble_Lystro.PrimalItem_RecipeNote_Kibble_Lystro_C.ExecuteUbergraph_PrimalItem_RecipeNote_Kibble_Lystro
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItem_RecipeNote_Kibble_Lystro_C::ExecuteUbergraph_PrimalItem_RecipeNote_Kibble_Lystro(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_RecipeNote_Kibble_Lystro.PrimalItem_RecipeNote_Kibble_Lystro_C.ExecuteUbergraph_PrimalItem_RecipeNote_Kibble_Lystro");
		
		UPrimalItem_RecipeNote_Kibble_Lystro_C_ExecuteUbergraph_PrimalItem_RecipeNote_Kibble_Lystro_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItem_RecipeNote_Kibble_Lystro_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItem_RecipeNote_Kibble_Lystro_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_RecipeNote_Kibble_Lystro.PrimalItem_RecipeNote_Kibble_Lystro_C");
		return ptr;
	}

}


