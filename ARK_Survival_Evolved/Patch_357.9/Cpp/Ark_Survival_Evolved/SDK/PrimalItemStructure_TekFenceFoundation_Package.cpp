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
	 * 		Name   -> Function PrimalItemStructure_TekFenceFoundation.PrimalItemStructure_TekFenceFoundation_C.ExecuteUbergraph_PrimalItemStructure_TekFenceFoundation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemStructure_TekFenceFoundation_C::ExecuteUbergraph_PrimalItemStructure_TekFenceFoundation(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_TekFenceFoundation.PrimalItemStructure_TekFenceFoundation_C.ExecuteUbergraph_PrimalItemStructure_TekFenceFoundation");
		
		UPrimalItemStructure_TekFenceFoundation_C_ExecuteUbergraph_PrimalItemStructure_TekFenceFoundation_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemStructure_TekFenceFoundation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemStructure_TekFenceFoundation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_TekFenceFoundation.PrimalItemStructure_TekFenceFoundation_C");
		return ptr;
	}

}


