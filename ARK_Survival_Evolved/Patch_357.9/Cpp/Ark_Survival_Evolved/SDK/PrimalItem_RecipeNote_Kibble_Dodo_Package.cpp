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
	 * 		Name   -> Function PrimalItem_RecipeNote_Kibble_Dodo.PrimalItem_RecipeNote_Kibble_Dodo_C.ExecuteUbergraph_PrimalItem_RecipeNote_Kibble_Dodo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItem_RecipeNote_Kibble_Dodo_C::ExecuteUbergraph_PrimalItem_RecipeNote_Kibble_Dodo(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_RecipeNote_Kibble_Dodo.PrimalItem_RecipeNote_Kibble_Dodo_C.ExecuteUbergraph_PrimalItem_RecipeNote_Kibble_Dodo");
		
		UPrimalItem_RecipeNote_Kibble_Dodo_C_ExecuteUbergraph_PrimalItem_RecipeNote_Kibble_Dodo_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItem_RecipeNote_Kibble_Dodo_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItem_RecipeNote_Kibble_Dodo_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_RecipeNote_Kibble_Dodo.PrimalItem_RecipeNote_Kibble_Dodo_C");
		return ptr;
	}

}


