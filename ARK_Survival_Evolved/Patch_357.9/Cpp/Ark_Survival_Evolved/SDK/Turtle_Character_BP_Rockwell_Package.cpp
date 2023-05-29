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
	 * 		Name   -> Function Turtle_Character_BP_Rockwell.Turtle_Character_BP_Rockwell_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATurtle_Character_BP_Rockwell_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Turtle_Character_BP_Rockwell.Turtle_Character_BP_Rockwell_C.UserConstructionScript");
		
		ATurtle_Character_BP_Rockwell_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Turtle_Character_BP_Rockwell.Turtle_Character_BP_Rockwell_C.ExecuteUbergraph_Turtle_Character_BP_Rockwell
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATurtle_Character_BP_Rockwell_C::ExecuteUbergraph_Turtle_Character_BP_Rockwell(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Turtle_Character_BP_Rockwell.Turtle_Character_BP_Rockwell_C.ExecuteUbergraph_Turtle_Character_BP_Rockwell");
		
		ATurtle_Character_BP_Rockwell_C_ExecuteUbergraph_Turtle_Character_BP_Rockwell_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATurtle_Character_BP_Rockwell_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATurtle_Character_BP_Rockwell_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Turtle_Character_BP_Rockwell.Turtle_Character_BP_Rockwell_C");
		return ptr;
	}

}


