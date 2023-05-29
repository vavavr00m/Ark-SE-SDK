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
	 * 		Name   -> Function EngramEntry_TekUnderwaterBase_BottomEntry.EngramEntry_TekUnderwaterBase_BottomEntry_C.ExecuteUbergraph_EngramEntry_TekUnderwaterBase_BottomEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEngramEntry_TekUnderwaterBase_BottomEntry_C::ExecuteUbergraph_EngramEntry_TekUnderwaterBase_BottomEntry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EngramEntry_TekUnderwaterBase_BottomEntry.EngramEntry_TekUnderwaterBase_BottomEntry_C.ExecuteUbergraph_EngramEntry_TekUnderwaterBase_BottomEntry");
		
		UEngramEntry_TekUnderwaterBase_BottomEntry_C_ExecuteUbergraph_EngramEntry_TekUnderwaterBase_BottomEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEngramEntry_TekUnderwaterBase_BottomEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEngramEntry_TekUnderwaterBase_BottomEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_TekUnderwaterBase_BottomEntry.EngramEntry_TekUnderwaterBase_BottomEntry_C");
		return ptr;
	}

}

