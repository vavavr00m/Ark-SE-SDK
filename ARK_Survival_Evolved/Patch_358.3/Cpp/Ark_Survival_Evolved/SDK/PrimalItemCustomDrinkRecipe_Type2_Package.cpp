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
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function PrimalItemCustomDrinkRecipe_Type2.PrimalItemCustomDrinkRecipe_Type2_C.ExecuteUbergraph_PrimalItemCustomDrinkRecipe_Type2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemCustomDrinkRecipe_Type2_C::ExecuteUbergraph_PrimalItemCustomDrinkRecipe_Type2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemCustomDrinkRecipe_Type2.PrimalItemCustomDrinkRecipe_Type2_C.ExecuteUbergraph_PrimalItemCustomDrinkRecipe_Type2");
		
		UPrimalItemCustomDrinkRecipe_Type2_C_ExecuteUbergraph_PrimalItemCustomDrinkRecipe_Type2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemCustomDrinkRecipe_Type2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemCustomDrinkRecipe_Type2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemCustomDrinkRecipe_Type2.PrimalItemCustomDrinkRecipe_Type2_C");
		return ptr;
	}

}


