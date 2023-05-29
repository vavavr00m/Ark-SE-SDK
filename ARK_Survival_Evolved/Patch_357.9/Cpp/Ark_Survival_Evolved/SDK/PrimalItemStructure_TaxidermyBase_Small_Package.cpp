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
	 * 		Name   -> Function PrimalItemStructure_TaxidermyBase_Small.PrimalItemStructure_TaxidermyBase_Small_C.ExecuteUbergraph_PrimalItemStructure_TaxidermyBase_Small
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemStructure_TaxidermyBase_Small_C::ExecuteUbergraph_PrimalItemStructure_TaxidermyBase_Small(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_TaxidermyBase_Small.PrimalItemStructure_TaxidermyBase_Small_C.ExecuteUbergraph_PrimalItemStructure_TaxidermyBase_Small");
		
		UPrimalItemStructure_TaxidermyBase_Small_C_ExecuteUbergraph_PrimalItemStructure_TaxidermyBase_Small_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemStructure_TaxidermyBase_Small_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemStructure_TaxidermyBase_Small_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_TaxidermyBase_Small.PrimalItemStructure_TaxidermyBase_Small_C");
		return ptr;
	}

}


