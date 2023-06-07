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
	 * 		Name   -> Function PrimalItemCustomDrinkRecipe_Base.PrimalItemCustomDrinkRecipe_Base_C.ExecuteUbergraph_PrimalItemCustomDrinkRecipe_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemCustomDrinkRecipe_Base_C::ExecuteUbergraph_PrimalItemCustomDrinkRecipe_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemCustomDrinkRecipe_Base.PrimalItemCustomDrinkRecipe_Base_C.ExecuteUbergraph_PrimalItemCustomDrinkRecipe_Base");
		
		UPrimalItemCustomDrinkRecipe_Base_C_ExecuteUbergraph_PrimalItemCustomDrinkRecipe_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemCustomDrinkRecipe_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemCustomDrinkRecipe_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemCustomDrinkRecipe_Base.PrimalItemCustomDrinkRecipe_Base_C");
		return ptr;
	}

}


