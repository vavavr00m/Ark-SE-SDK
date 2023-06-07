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
	 * 		Name   -> Function Metal_CliffPlatform_Placement_Emitter.Metal_CliffPlatform_Placement_Emitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMetal_CliffPlatform_Placement_Emitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Metal_CliffPlatform_Placement_Emitter.Metal_CliffPlatform_Placement_Emitter_C.UserConstructionScript");
		
		AMetal_CliffPlatform_Placement_Emitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Metal_CliffPlatform_Placement_Emitter.Metal_CliffPlatform_Placement_Emitter_C.ExecuteUbergraph_Metal_CliffPlatform_Placement_Emitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMetal_CliffPlatform_Placement_Emitter_C::ExecuteUbergraph_Metal_CliffPlatform_Placement_Emitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Metal_CliffPlatform_Placement_Emitter.Metal_CliffPlatform_Placement_Emitter_C.ExecuteUbergraph_Metal_CliffPlatform_Placement_Emitter");
		
		AMetal_CliffPlatform_Placement_Emitter_C_ExecuteUbergraph_Metal_CliffPlatform_Placement_Emitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMetal_CliffPlatform_Placement_Emitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMetal_CliffPlatform_Placement_Emitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Metal_CliffPlatform_Placement_Emitter.Metal_CliffPlatform_Placement_Emitter_C");
		return ptr;
	}

}


