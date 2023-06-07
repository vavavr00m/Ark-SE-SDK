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
	 * 		Name   -> Function Adobe_Ramp_Placement_Emitter.Adobe_Ramp_Placement_Emitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAdobe_Ramp_Placement_Emitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Adobe_Ramp_Placement_Emitter.Adobe_Ramp_Placement_Emitter_C.UserConstructionScript");
		
		AAdobe_Ramp_Placement_Emitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Adobe_Ramp_Placement_Emitter.Adobe_Ramp_Placement_Emitter_C.ExecuteUbergraph_Adobe_Ramp_Placement_Emitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAdobe_Ramp_Placement_Emitter_C::ExecuteUbergraph_Adobe_Ramp_Placement_Emitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Adobe_Ramp_Placement_Emitter.Adobe_Ramp_Placement_Emitter_C.ExecuteUbergraph_Adobe_Ramp_Placement_Emitter");
		
		AAdobe_Ramp_Placement_Emitter_C_ExecuteUbergraph_Adobe_Ramp_Placement_Emitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAdobe_Ramp_Placement_Emitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAdobe_Ramp_Placement_Emitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Adobe_Ramp_Placement_Emitter.Adobe_Ramp_Placement_Emitter_C");
		return ptr;
	}

}


