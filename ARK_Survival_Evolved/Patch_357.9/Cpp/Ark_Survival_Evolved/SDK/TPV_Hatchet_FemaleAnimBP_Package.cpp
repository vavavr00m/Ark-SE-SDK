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
	 * 		Name   -> Function TPV_Hatchet_FemaleAnimBP.TPV_Hatchet_FemaleAnimBP_C.ExecuteUbergraph_TPV_Hatchet_FemaleAnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTPV_Hatchet_FemaleAnimBP_C::ExecuteUbergraph_TPV_Hatchet_FemaleAnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TPV_Hatchet_FemaleAnimBP.TPV_Hatchet_FemaleAnimBP_C.ExecuteUbergraph_TPV_Hatchet_FemaleAnimBP");
		
		UTPV_Hatchet_FemaleAnimBP_C_ExecuteUbergraph_TPV_Hatchet_FemaleAnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTPV_Hatchet_FemaleAnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTPV_Hatchet_FemaleAnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass TPV_Hatchet_FemaleAnimBP.TPV_Hatchet_FemaleAnimBP_C");
		return ptr;
	}

}


