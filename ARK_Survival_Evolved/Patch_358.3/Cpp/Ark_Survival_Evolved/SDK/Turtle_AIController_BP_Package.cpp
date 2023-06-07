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
	 * 		Name   -> Function Turtle_AIController_BP.Turtle_AIController_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATurtle_AIController_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Turtle_AIController_BP.Turtle_AIController_BP_C.UserConstructionScript");
		
		ATurtle_AIController_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Turtle_AIController_BP.Turtle_AIController_BP_C.ExecuteUbergraph_Turtle_AIController_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATurtle_AIController_BP_C::ExecuteUbergraph_Turtle_AIController_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Turtle_AIController_BP.Turtle_AIController_BP_C.ExecuteUbergraph_Turtle_AIController_BP");
		
		ATurtle_AIController_BP_C_ExecuteUbergraph_Turtle_AIController_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATurtle_AIController_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATurtle_AIController_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Turtle_AIController_BP.Turtle_AIController_BP_C");
		return ptr;
	}

}


