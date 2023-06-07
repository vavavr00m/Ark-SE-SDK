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
	 * 		Name   -> Function TEKHoverSail_AIController_BP.TEKHoverSail_AIController_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATEKHoverSail_AIController_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEKHoverSail_AIController_BP.TEKHoverSail_AIController_BP_C.UserConstructionScript");
		
		ATEKHoverSail_AIController_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TEKHoverSail_AIController_BP.TEKHoverSail_AIController_BP_C.ExecuteUbergraph_TEKHoverSail_AIController_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATEKHoverSail_AIController_BP_C::ExecuteUbergraph_TEKHoverSail_AIController_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TEKHoverSail_AIController_BP.TEKHoverSail_AIController_BP_C.ExecuteUbergraph_TEKHoverSail_AIController_BP");
		
		ATEKHoverSail_AIController_BP_C_ExecuteUbergraph_TEKHoverSail_AIController_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATEKHoverSail_AIController_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATEKHoverSail_AIController_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TEKHoverSail_AIController_BP.TEKHoverSail_AIController_BP_C");
		return ptr;
	}

}


