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
	 * 		Name   -> Function PrimalItemStructure_MetalPipeTap.PrimalItemStructure_MetalPipeTap_C.ExecuteUbergraph_PrimalItemStructure_MetalPipeTap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemStructure_MetalPipeTap_C::ExecuteUbergraph_PrimalItemStructure_MetalPipeTap(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_MetalPipeTap.PrimalItemStructure_MetalPipeTap_C.ExecuteUbergraph_PrimalItemStructure_MetalPipeTap");
		
		UPrimalItemStructure_MetalPipeTap_C_ExecuteUbergraph_PrimalItemStructure_MetalPipeTap_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemStructure_MetalPipeTap_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemStructure_MetalPipeTap_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_MetalPipeTap.PrimalItemStructure_MetalPipeTap_C");
		return ptr;
	}

}


