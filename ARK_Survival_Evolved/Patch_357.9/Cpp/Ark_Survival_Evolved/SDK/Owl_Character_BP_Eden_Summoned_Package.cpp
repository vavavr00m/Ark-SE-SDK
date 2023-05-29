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
	 * 		Name   -> Function Owl_Character_BP_Eden_Summoned.Owl_Character_BP_Eden_Summoned_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOwl_Character_BP_Eden_Summoned_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Owl_Character_BP_Eden_Summoned.Owl_Character_BP_Eden_Summoned_C.UserConstructionScript");
		
		AOwl_Character_BP_Eden_Summoned_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Owl_Character_BP_Eden_Summoned.Owl_Character_BP_Eden_Summoned_C.ExecuteUbergraph_Owl_Character_BP_Eden_Summoned
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AOwl_Character_BP_Eden_Summoned_C::ExecuteUbergraph_Owl_Character_BP_Eden_Summoned(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Owl_Character_BP_Eden_Summoned.Owl_Character_BP_Eden_Summoned_C.ExecuteUbergraph_Owl_Character_BP_Eden_Summoned");
		
		AOwl_Character_BP_Eden_Summoned_C_ExecuteUbergraph_Owl_Character_BP_Eden_Summoned_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AOwl_Character_BP_Eden_Summoned_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOwl_Character_BP_Eden_Summoned_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Owl_Character_BP_Eden_Summoned.Owl_Character_BP_Eden_Summoned_C");
		return ptr;
	}

}

