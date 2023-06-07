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
	 * 		Name   -> Function Sarco_Character_BP_Aberrant.Sarco_Character_BP_Aberrant_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASarco_Character_BP_Aberrant_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sarco_Character_BP_Aberrant.Sarco_Character_BP_Aberrant_C.UserConstructionScript");
		
		ASarco_Character_BP_Aberrant_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Sarco_Character_BP_Aberrant.Sarco_Character_BP_Aberrant_C.ExecuteUbergraph_Sarco_Character_BP_Aberrant
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASarco_Character_BP_Aberrant_C::ExecuteUbergraph_Sarco_Character_BP_Aberrant(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sarco_Character_BP_Aberrant.Sarco_Character_BP_Aberrant_C.ExecuteUbergraph_Sarco_Character_BP_Aberrant");
		
		ASarco_Character_BP_Aberrant_C_ExecuteUbergraph_Sarco_Character_BP_Aberrant_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASarco_Character_BP_Aberrant_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASarco_Character_BP_Aberrant_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Sarco_Character_BP_Aberrant.Sarco_Character_BP_Aberrant_C");
		return ptr;
	}

}


