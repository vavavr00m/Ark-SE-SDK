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
	 * 		Name   -> Function EngramEntry_StoneTrapdoorGiant.EngramEntry_StoneTrapdoorGiant_C.ExecuteUbergraph_EngramEntry_StoneTrapdoorGiant
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEngramEntry_StoneTrapdoorGiant_C::ExecuteUbergraph_EngramEntry_StoneTrapdoorGiant(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EngramEntry_StoneTrapdoorGiant.EngramEntry_StoneTrapdoorGiant_C.ExecuteUbergraph_EngramEntry_StoneTrapdoorGiant");
		
		UEngramEntry_StoneTrapdoorGiant_C_ExecuteUbergraph_EngramEntry_StoneTrapdoorGiant_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEngramEntry_StoneTrapdoorGiant_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEngramEntry_StoneTrapdoorGiant_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_StoneTrapdoorGiant.EngramEntry_StoneTrapdoorGiant_C");
		return ptr;
	}

}

