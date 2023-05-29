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
	 * 		Name   -> Function Carno_Character_BP_Rockwell.Carno_Character_BP_Rockwell_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACarno_Character_BP_Rockwell_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Carno_Character_BP_Rockwell.Carno_Character_BP_Rockwell_C.UserConstructionScript");
		
		ACarno_Character_BP_Rockwell_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Carno_Character_BP_Rockwell.Carno_Character_BP_Rockwell_C.ExecuteUbergraph_Carno_Character_BP_Rockwell
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACarno_Character_BP_Rockwell_C::ExecuteUbergraph_Carno_Character_BP_Rockwell(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Carno_Character_BP_Rockwell.Carno_Character_BP_Rockwell_C.ExecuteUbergraph_Carno_Character_BP_Rockwell");
		
		ACarno_Character_BP_Rockwell_C_ExecuteUbergraph_Carno_Character_BP_Rockwell_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACarno_Character_BP_Rockwell_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACarno_Character_BP_Rockwell_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Carno_Character_BP_Rockwell.Carno_Character_BP_Rockwell_C");
		return ptr;
	}

}


