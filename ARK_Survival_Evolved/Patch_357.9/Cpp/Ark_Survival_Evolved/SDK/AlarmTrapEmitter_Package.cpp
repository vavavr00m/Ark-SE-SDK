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
	 * 		Name   -> Function AlarmTrapEmitter.AlarmTrapEmitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAlarmTrapEmitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AlarmTrapEmitter.AlarmTrapEmitter_C.UserConstructionScript");
		
		AAlarmTrapEmitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function AlarmTrapEmitter.AlarmTrapEmitter_C.ExecuteUbergraph_AlarmTrapEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAlarmTrapEmitter_C::ExecuteUbergraph_AlarmTrapEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AlarmTrapEmitter.AlarmTrapEmitter_C.ExecuteUbergraph_AlarmTrapEmitter");
		
		AAlarmTrapEmitter_C_ExecuteUbergraph_AlarmTrapEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAlarmTrapEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAlarmTrapEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AlarmTrapEmitter.AlarmTrapEmitter_C");
		return ptr;
	}

}


