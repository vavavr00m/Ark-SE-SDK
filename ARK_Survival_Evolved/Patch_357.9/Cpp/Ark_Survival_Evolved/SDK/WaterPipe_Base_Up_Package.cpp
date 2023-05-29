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
	 * 		Name   -> Function WaterPipe_Base_Up.WaterPipe_Base_Up_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AWaterPipe_Base_Up_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WaterPipe_Base_Up.WaterPipe_Base_Up_C.UserConstructionScript");
		
		AWaterPipe_Base_Up_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function WaterPipe_Base_Up.WaterPipe_Base_Up_C.ExecuteUbergraph_WaterPipe_Base_Up
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AWaterPipe_Base_Up_C::ExecuteUbergraph_WaterPipe_Base_Up(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WaterPipe_Base_Up.WaterPipe_Base_Up_C.ExecuteUbergraph_WaterPipe_Base_Up");
		
		AWaterPipe_Base_Up_C_ExecuteUbergraph_WaterPipe_Base_Up_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWaterPipe_Base_Up_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWaterPipe_Base_Up_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WaterPipe_Base_Up.WaterPipe_Base_Up_C");
		return ptr;
	}

}


