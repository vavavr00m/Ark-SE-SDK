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
	 * 		Name   -> Function PrimalItemResource_Crystal_IslesPrimal.PrimalItemResource_Crystal_IslesPrimal_C.ExecuteUbergraph_PrimalItemResource_Crystal_IslesPrimal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemResource_Crystal_IslesPrimal_C::ExecuteUbergraph_PrimalItemResource_Crystal_IslesPrimal(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemResource_Crystal_IslesPrimal.PrimalItemResource_Crystal_IslesPrimal_C.ExecuteUbergraph_PrimalItemResource_Crystal_IslesPrimal");
		
		UPrimalItemResource_Crystal_IslesPrimal_C_ExecuteUbergraph_PrimalItemResource_Crystal_IslesPrimal_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemResource_Crystal_IslesPrimal_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemResource_Crystal_IslesPrimal_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemResource_Crystal_IslesPrimal.PrimalItemResource_Crystal_IslesPrimal_C");
		return ptr;
	}

}


