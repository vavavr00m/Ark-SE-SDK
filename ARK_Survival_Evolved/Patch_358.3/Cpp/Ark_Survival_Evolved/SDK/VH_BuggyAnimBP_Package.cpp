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
	 * 		Name   -> Function VH_BuggyAnimBP.VH_BuggyAnimBP_C.ExecuteUbergraph_VH_BuggyAnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UVH_BuggyAnimBP_C::ExecuteUbergraph_VH_BuggyAnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VH_BuggyAnimBP.VH_BuggyAnimBP_C.ExecuteUbergraph_VH_BuggyAnimBP");
		
		UVH_BuggyAnimBP_C_ExecuteUbergraph_VH_BuggyAnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVH_BuggyAnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVH_BuggyAnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass VH_BuggyAnimBP.VH_BuggyAnimBP_C");
		return ptr;
	}

}


