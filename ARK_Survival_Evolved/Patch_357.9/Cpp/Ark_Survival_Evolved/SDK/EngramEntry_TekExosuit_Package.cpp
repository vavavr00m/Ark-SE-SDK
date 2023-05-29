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
	 * 		Name   -> Function EngramEntry_TekExosuit.EngramEntry_TekExosuit_C.ExecuteUbergraph_EngramEntry_TekExosuit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEngramEntry_TekExosuit_C::ExecuteUbergraph_EngramEntry_TekExosuit(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EngramEntry_TekExosuit.EngramEntry_TekExosuit_C.ExecuteUbergraph_EngramEntry_TekExosuit");
		
		UEngramEntry_TekExosuit_C_ExecuteUbergraph_EngramEntry_TekExosuit_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEngramEntry_TekExosuit_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEngramEntry_TekExosuit_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_TekExosuit.EngramEntry_TekExosuit_C");
		return ptr;
	}

}


