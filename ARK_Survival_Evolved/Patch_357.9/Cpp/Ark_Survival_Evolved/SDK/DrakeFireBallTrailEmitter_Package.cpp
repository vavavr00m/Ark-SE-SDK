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
	 * 		Name   -> Function DrakeFireBallTrailEmitter.DrakeFireBallTrailEmitter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADrakeFireBallTrailEmitter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrakeFireBallTrailEmitter.DrakeFireBallTrailEmitter_C.UserConstructionScript");
		
		ADrakeFireBallTrailEmitter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DrakeFireBallTrailEmitter.DrakeFireBallTrailEmitter_C.ExecuteUbergraph_DrakeFireBallTrailEmitter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADrakeFireBallTrailEmitter_C::ExecuteUbergraph_DrakeFireBallTrailEmitter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DrakeFireBallTrailEmitter.DrakeFireBallTrailEmitter_C.ExecuteUbergraph_DrakeFireBallTrailEmitter");
		
		ADrakeFireBallTrailEmitter_C_ExecuteUbergraph_DrakeFireBallTrailEmitter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADrakeFireBallTrailEmitter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADrakeFireBallTrailEmitter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DrakeFireBallTrailEmitter.DrakeFireBallTrailEmitter_C");
		return ptr;
	}

}

