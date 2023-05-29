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
	 * 		Name   -> Function DinoEntry_Beetle.DinoEntry_Beetle_C.ExecuteUbergraph_DinoEntry_Beetle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoEntry_Beetle_C::ExecuteUbergraph_DinoEntry_Beetle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoEntry_Beetle.DinoEntry_Beetle_C.ExecuteUbergraph_DinoEntry_Beetle");
		
		UDinoEntry_Beetle_C_ExecuteUbergraph_DinoEntry_Beetle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoEntry_Beetle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoEntry_Beetle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoEntry_Beetle.DinoEntry_Beetle_C");
		return ptr;
	}

}

