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
	 * 		Name   -> Function Melee_Impacts_Desmodus.Melee_Impacts_Desmodus_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMelee_Impacts_Desmodus_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Melee_Impacts_Desmodus.Melee_Impacts_Desmodus_C.UserConstructionScript");
		
		AMelee_Impacts_Desmodus_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Melee_Impacts_Desmodus.Melee_Impacts_Desmodus_C.ExecuteUbergraph_Melee_Impacts_Desmodus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMelee_Impacts_Desmodus_C::ExecuteUbergraph_Melee_Impacts_Desmodus(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Melee_Impacts_Desmodus.Melee_Impacts_Desmodus_C.ExecuteUbergraph_Melee_Impacts_Desmodus");
		
		AMelee_Impacts_Desmodus_C_ExecuteUbergraph_Melee_Impacts_Desmodus_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMelee_Impacts_Desmodus_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMelee_Impacts_Desmodus_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Melee_Impacts_Desmodus.Melee_Impacts_Desmodus_C");
		return ptr;
	}

}

