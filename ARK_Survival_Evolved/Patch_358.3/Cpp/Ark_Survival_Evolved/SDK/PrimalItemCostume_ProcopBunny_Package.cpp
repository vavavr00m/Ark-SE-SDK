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
	 * 		Name   -> Function PrimalItemCostume_ProcopBunny.PrimalItemCostume_ProcopBunny_C.ExecuteUbergraph_PrimalItemCostume_ProcopBunny
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemCostume_ProcopBunny_C::ExecuteUbergraph_PrimalItemCostume_ProcopBunny(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemCostume_ProcopBunny.PrimalItemCostume_ProcopBunny_C.ExecuteUbergraph_PrimalItemCostume_ProcopBunny");
		
		UPrimalItemCostume_ProcopBunny_C_ExecuteUbergraph_PrimalItemCostume_ProcopBunny_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemCostume_ProcopBunny_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemCostume_ProcopBunny_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemCostume_ProcopBunny.PrimalItemCostume_ProcopBunny_C");
		return ptr;
	}

}


