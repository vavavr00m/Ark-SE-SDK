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
	 * 		Name   -> Function ProjArrow_Tranq_Bolt.ProjArrow_Tranq_Bolt_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjArrow_Tranq_Bolt_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjArrow_Tranq_Bolt.ProjArrow_Tranq_Bolt_C.UserConstructionScript");
		
		AProjArrow_Tranq_Bolt_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ProjArrow_Tranq_Bolt.ProjArrow_Tranq_Bolt_C.ExecuteUbergraph_ProjArrow_Tranq_Bolt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProjArrow_Tranq_Bolt_C::ExecuteUbergraph_ProjArrow_Tranq_Bolt(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjArrow_Tranq_Bolt.ProjArrow_Tranq_Bolt_C.ExecuteUbergraph_ProjArrow_Tranq_Bolt");
		
		AProjArrow_Tranq_Bolt_C_ExecuteUbergraph_ProjArrow_Tranq_Bolt_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjArrow_Tranq_Bolt_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjArrow_Tranq_Bolt_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ProjArrow_Tranq_Bolt.ProjArrow_Tranq_Bolt_C");
		return ptr;
	}

}


