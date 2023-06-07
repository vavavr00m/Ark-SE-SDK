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
	 * 		Name   -> Function OceanPlatformMetal_PlacementEmitter.OceanPlatformMetal_PlacementEmitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOceanPlatformMetal_PlacementEmitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OceanPlatformMetal_PlacementEmitter.OceanPlatformMetal_PlacementEmitter_C.UserConstructionScript");
		
		AOceanPlatformMetal_PlacementEmitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function OceanPlatformMetal_PlacementEmitter.OceanPlatformMetal_PlacementEmitter_C.ExecuteUbergraph_OceanPlatformMetal_PlacementEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOceanPlatformMetal_PlacementEmitter_C::ExecuteUbergraph_OceanPlatformMetal_PlacementEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OceanPlatformMetal_PlacementEmitter.OceanPlatformMetal_PlacementEmitter_C.ExecuteUbergraph_OceanPlatformMetal_PlacementEmitter");
		
		AOceanPlatformMetal_PlacementEmitter_C_ExecuteUbergraph_OceanPlatformMetal_PlacementEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AOceanPlatformMetal_PlacementEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOceanPlatformMetal_PlacementEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OceanPlatformMetal_PlacementEmitter.OceanPlatformMetal_PlacementEmitter_C");
		return ptr;
	}

}


