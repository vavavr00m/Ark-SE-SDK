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
	 * 		Name   -> Function AmargaSpike_Cold.AmargaSpike_Cold_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAmargaSpike_Cold_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AmargaSpike_Cold.AmargaSpike_Cold_C.UserConstructionScript");
		
		AAmargaSpike_Cold_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function AmargaSpike_Cold.AmargaSpike_Cold_C.ExecuteUbergraph_AmargaSpike_Cold
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAmargaSpike_Cold_C::ExecuteUbergraph_AmargaSpike_Cold(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AmargaSpike_Cold.AmargaSpike_Cold_C.ExecuteUbergraph_AmargaSpike_Cold");
		
		AAmargaSpike_Cold_C_ExecuteUbergraph_AmargaSpike_Cold_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAmargaSpike_Cold_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAmargaSpike_Cold_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AmargaSpike_Cold.AmargaSpike_Cold_C");
		return ptr;
	}

}

