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
	 * 		Name   -> Function Tentacle_HazardBP_Spawned.Tentacle_HazardBP_Spawned_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATentacle_HazardBP_Spawned_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP_Spawned.Tentacle_HazardBP_Spawned_C.UserConstructionScript");
		
		ATentacle_HazardBP_Spawned_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tentacle_HazardBP_Spawned.Tentacle_HazardBP_Spawned_C.ExecuteUbergraph_Tentacle_HazardBP_Spawned
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATentacle_HazardBP_Spawned_C::ExecuteUbergraph_Tentacle_HazardBP_Spawned(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tentacle_HazardBP_Spawned.Tentacle_HazardBP_Spawned_C.ExecuteUbergraph_Tentacle_HazardBP_Spawned");
		
		ATentacle_HazardBP_Spawned_C_ExecuteUbergraph_Tentacle_HazardBP_Spawned_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATentacle_HazardBP_Spawned_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATentacle_HazardBP_Spawned_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Tentacle_HazardBP_Spawned.Tentacle_HazardBP_Spawned_C");
		return ptr;
	}

}


