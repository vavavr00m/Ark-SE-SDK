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
	 * 		Name   -> Function ThatchRoofPlacementEmitter.ThatchRoofPlacementEmitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AThatchRoofPlacementEmitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ThatchRoofPlacementEmitter.ThatchRoofPlacementEmitter_C.UserConstructionScript");
		
		AThatchRoofPlacementEmitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ThatchRoofPlacementEmitter.ThatchRoofPlacementEmitter_C.ExecuteUbergraph_ThatchRoofPlacementEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AThatchRoofPlacementEmitter_C::ExecuteUbergraph_ThatchRoofPlacementEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ThatchRoofPlacementEmitter.ThatchRoofPlacementEmitter_C.ExecuteUbergraph_ThatchRoofPlacementEmitter");
		
		AThatchRoofPlacementEmitter_C_ExecuteUbergraph_ThatchRoofPlacementEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AThatchRoofPlacementEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AThatchRoofPlacementEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ThatchRoofPlacementEmitter.ThatchRoofPlacementEmitter_C");
		return ptr;
	}

}

