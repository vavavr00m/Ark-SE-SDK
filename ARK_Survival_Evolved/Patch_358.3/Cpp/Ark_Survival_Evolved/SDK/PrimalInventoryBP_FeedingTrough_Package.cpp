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
	 * 		Name   -> Function PrimalInventoryBP_FeedingTrough.PrimalInventoryBP_FeedingTrough_C.ExecuteUbergraph_PrimalInventoryBP_FeedingTrough
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalInventoryBP_FeedingTrough_C::ExecuteUbergraph_PrimalInventoryBP_FeedingTrough(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_FeedingTrough.PrimalInventoryBP_FeedingTrough_C.ExecuteUbergraph_PrimalInventoryBP_FeedingTrough");
		
		UPrimalInventoryBP_FeedingTrough_C_ExecuteUbergraph_PrimalInventoryBP_FeedingTrough_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalInventoryBP_FeedingTrough_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalInventoryBP_FeedingTrough_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_FeedingTrough.PrimalInventoryBP_FeedingTrough_C");
		return ptr;
	}

}


