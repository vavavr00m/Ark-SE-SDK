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
	 * 		Name   -> Function Dilo_Character_BP_Rockwell.Dilo_Character_BP_Rockwell_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADilo_Character_BP_Rockwell_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dilo_Character_BP_Rockwell.Dilo_Character_BP_Rockwell_C.UserConstructionScript");
		
		ADilo_Character_BP_Rockwell_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dilo_Character_BP_Rockwell.Dilo_Character_BP_Rockwell_C.ExecuteUbergraph_Dilo_Character_BP_Rockwell
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADilo_Character_BP_Rockwell_C::ExecuteUbergraph_Dilo_Character_BP_Rockwell(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dilo_Character_BP_Rockwell.Dilo_Character_BP_Rockwell_C.ExecuteUbergraph_Dilo_Character_BP_Rockwell");
		
		ADilo_Character_BP_Rockwell_C_ExecuteUbergraph_Dilo_Character_BP_Rockwell_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADilo_Character_BP_Rockwell_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADilo_Character_BP_Rockwell_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Dilo_Character_BP_Rockwell.Dilo_Character_BP_Rockwell_C");
		return ptr;
	}

}


