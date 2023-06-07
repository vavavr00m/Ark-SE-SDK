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
	 * 		Name   -> Function ThatchRoof_SM.ThatchRoof_SM_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AThatchRoof_SM_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ThatchRoof_SM.ThatchRoof_SM_C.UserConstructionScript");
		
		AThatchRoof_SM_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ThatchRoof_SM.ThatchRoof_SM_C.ExecuteUbergraph_ThatchRoof_SM
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AThatchRoof_SM_C::ExecuteUbergraph_ThatchRoof_SM(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ThatchRoof_SM.ThatchRoof_SM_C.ExecuteUbergraph_ThatchRoof_SM");
		
		AThatchRoof_SM_C_ExecuteUbergraph_ThatchRoof_SM_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AThatchRoof_SM_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AThatchRoof_SM_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ThatchRoof_SM.ThatchRoof_SM_C");
		return ptr;
	}

}


