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
	 * 		Name   -> Function Purlovia_Chibi_AnimBP.Purlovia_Chibi_AnimBP_C.ExecuteUbergraph_Purlovia_Chibi_AnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPurlovia_Chibi_AnimBP_C::ExecuteUbergraph_Purlovia_Chibi_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Purlovia_Chibi_AnimBP.Purlovia_Chibi_AnimBP_C.ExecuteUbergraph_Purlovia_Chibi_AnimBP");
		
		UPurlovia_Chibi_AnimBP_C_ExecuteUbergraph_Purlovia_Chibi_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPurlovia_Chibi_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPurlovia_Chibi_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Purlovia_Chibi_AnimBP.Purlovia_Chibi_AnimBP_C");
		return ptr;
	}

}


