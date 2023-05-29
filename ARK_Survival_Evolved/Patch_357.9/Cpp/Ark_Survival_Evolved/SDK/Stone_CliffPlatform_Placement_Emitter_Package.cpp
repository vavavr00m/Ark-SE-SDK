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
	 * 		Name   -> Function Stone_CliffPlatform_Placement_Emitter.Stone_CliffPlatform_Placement_Emitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStone_CliffPlatform_Placement_Emitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stone_CliffPlatform_Placement_Emitter.Stone_CliffPlatform_Placement_Emitter_C.UserConstructionScript");
		
		AStone_CliffPlatform_Placement_Emitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Stone_CliffPlatform_Placement_Emitter.Stone_CliffPlatform_Placement_Emitter_C.ExecuteUbergraph_Stone_CliffPlatform_Placement_Emitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AStone_CliffPlatform_Placement_Emitter_C::ExecuteUbergraph_Stone_CliffPlatform_Placement_Emitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Stone_CliffPlatform_Placement_Emitter.Stone_CliffPlatform_Placement_Emitter_C.ExecuteUbergraph_Stone_CliffPlatform_Placement_Emitter");
		
		AStone_CliffPlatform_Placement_Emitter_C_ExecuteUbergraph_Stone_CliffPlatform_Placement_Emitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStone_CliffPlatform_Placement_Emitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStone_CliffPlatform_Placement_Emitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Stone_CliffPlatform_Placement_Emitter.Stone_CliffPlatform_Placement_Emitter_C");
		return ptr;
	}

}


