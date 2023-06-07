﻿/**
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
	 * 		Name   -> Function DinoColorSet_Oviraptor.DinoColorSet_Oviraptor_C.ExecuteUbergraph_DinoColorSet_Oviraptor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoColorSet_Oviraptor_C::ExecuteUbergraph_DinoColorSet_Oviraptor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoColorSet_Oviraptor.DinoColorSet_Oviraptor_C.ExecuteUbergraph_DinoColorSet_Oviraptor");
		
		UDinoColorSet_Oviraptor_C_ExecuteUbergraph_DinoColorSet_Oviraptor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoColorSet_Oviraptor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoColorSet_Oviraptor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoColorSet_Oviraptor.DinoColorSet_Oviraptor_C");
		return ptr;
	}

}


