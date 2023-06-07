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
	 * 		Name   -> Function DinoEntry_Camelsaurus.DinoEntry_Camelsaurus_C.ExecuteUbergraph_DinoEntry_Camelsaurus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoEntry_Camelsaurus_C::ExecuteUbergraph_DinoEntry_Camelsaurus(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoEntry_Camelsaurus.DinoEntry_Camelsaurus_C.ExecuteUbergraph_DinoEntry_Camelsaurus");
		
		UDinoEntry_Camelsaurus_C_ExecuteUbergraph_DinoEntry_Camelsaurus_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoEntry_Camelsaurus_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoEntry_Camelsaurus_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoEntry_Camelsaurus.DinoEntry_Camelsaurus_C");
		return ptr;
	}

}


