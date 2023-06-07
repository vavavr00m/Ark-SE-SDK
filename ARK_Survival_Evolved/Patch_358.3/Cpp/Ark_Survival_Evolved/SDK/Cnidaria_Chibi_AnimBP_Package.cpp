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
	 * 		Name   -> Function Cnidaria_Chibi_AnimBP.Cnidaria_Chibi_AnimBP_C.ExecuteUbergraph_Cnidaria_Chibi_AnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCnidaria_Chibi_AnimBP_C::ExecuteUbergraph_Cnidaria_Chibi_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Cnidaria_Chibi_AnimBP.Cnidaria_Chibi_AnimBP_C.ExecuteUbergraph_Cnidaria_Chibi_AnimBP");
		
		UCnidaria_Chibi_AnimBP_C_ExecuteUbergraph_Cnidaria_Chibi_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCnidaria_Chibi_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCnidaria_Chibi_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Cnidaria_Chibi_AnimBP.Cnidaria_Chibi_AnimBP_C");
		return ptr;
	}

}


