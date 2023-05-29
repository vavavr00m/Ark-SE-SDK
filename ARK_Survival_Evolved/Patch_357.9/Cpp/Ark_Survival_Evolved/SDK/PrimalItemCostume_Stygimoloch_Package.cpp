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
	 * 		Name   -> Function PrimalItemCostume_Stygimoloch.PrimalItemCostume_Stygimoloch_C.ExecuteUbergraph_PrimalItemCostume_Stygimoloch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemCostume_Stygimoloch_C::ExecuteUbergraph_PrimalItemCostume_Stygimoloch(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemCostume_Stygimoloch.PrimalItemCostume_Stygimoloch_C.ExecuteUbergraph_PrimalItemCostume_Stygimoloch");
		
		UPrimalItemCostume_Stygimoloch_C_ExecuteUbergraph_PrimalItemCostume_Stygimoloch_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemCostume_Stygimoloch_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemCostume_Stygimoloch_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemCostume_Stygimoloch.PrimalItemCostume_Stygimoloch_C");
		return ptr;
	}

}


