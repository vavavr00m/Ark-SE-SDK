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
	 * 		Name   -> Function BP_TriRoof_Wood.BP_TriRoof_Wood_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_TriRoof_Wood_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TriRoof_Wood.BP_TriRoof_Wood_C.UserConstructionScript");
		
		ABP_TriRoof_Wood_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function BP_TriRoof_Wood.BP_TriRoof_Wood_C.ExecuteUbergraph_BP_TriRoof_Wood
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_TriRoof_Wood_C::ExecuteUbergraph_BP_TriRoof_Wood(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TriRoof_Wood.BP_TriRoof_Wood_C.ExecuteUbergraph_BP_TriRoof_Wood");
		
		ABP_TriRoof_Wood_C_ExecuteUbergraph_BP_TriRoof_Wood_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_TriRoof_Wood_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_TriRoof_Wood_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_TriRoof_Wood.BP_TriRoof_Wood_C");
		return ptr;
	}

}


