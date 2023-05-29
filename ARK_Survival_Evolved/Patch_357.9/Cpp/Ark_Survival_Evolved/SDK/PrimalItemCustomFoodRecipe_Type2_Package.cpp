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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function PrimalItemCustomFoodRecipe_Type2.PrimalItemCustomFoodRecipe_Type2_C.ExecuteUbergraph_PrimalItemCustomFoodRecipe_Type2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemCustomFoodRecipe_Type2_C::ExecuteUbergraph_PrimalItemCustomFoodRecipe_Type2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemCustomFoodRecipe_Type2.PrimalItemCustomFoodRecipe_Type2_C.ExecuteUbergraph_PrimalItemCustomFoodRecipe_Type2");
		
		UPrimalItemCustomFoodRecipe_Type2_C_ExecuteUbergraph_PrimalItemCustomFoodRecipe_Type2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemCustomFoodRecipe_Type2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemCustomFoodRecipe_Type2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemCustomFoodRecipe_Type2.PrimalItemCustomFoodRecipe_Type2_C");
		return ptr;
	}

}


