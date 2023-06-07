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
	 * 		Name   -> Function Buff_SpaceWhaleBombTargetingHelper.Buff_SpaceWhaleBombTargetingHelper_C.BPSetupForInstigator
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_SpaceWhaleBombTargetingHelper_C::BPSetupForInstigator(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhaleBombTargetingHelper.Buff_SpaceWhaleBombTargetingHelper_C.BPSetupForInstigator");
		
		ABuff_SpaceWhaleBombTargetingHelper_C_BPSetupForInstigator_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_SpaceWhaleBombTargetingHelper.Buff_SpaceWhaleBombTargetingHelper_C.BuffTickClient
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_SpaceWhaleBombTargetingHelper_C::BuffTickClient(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhaleBombTargetingHelper.Buff_SpaceWhaleBombTargetingHelper_C.BuffTickClient");
		
		ABuff_SpaceWhaleBombTargetingHelper_C_BuffTickClient_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_SpaceWhaleBombTargetingHelper.Buff_SpaceWhaleBombTargetingHelper_C.AllowPostProcessEffect
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABuff_SpaceWhaleBombTargetingHelper_C::AllowPostProcessEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhaleBombTargetingHelper.Buff_SpaceWhaleBombTargetingHelper_C.AllowPostProcessEffect");
		
		ABuff_SpaceWhaleBombTargetingHelper_C_AllowPostProcessEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_SpaceWhaleBombTargetingHelper.Buff_SpaceWhaleBombTargetingHelper_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_SpaceWhaleBombTargetingHelper_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhaleBombTargetingHelper.Buff_SpaceWhaleBombTargetingHelper_C.UserConstructionScript");
		
		ABuff_SpaceWhaleBombTargetingHelper_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_SpaceWhaleBombTargetingHelper.Buff_SpaceWhaleBombTargetingHelper_C.ExecuteUbergraph_Buff_SpaceWhaleBombTargetingHelper
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_SpaceWhaleBombTargetingHelper_C::ExecuteUbergraph_Buff_SpaceWhaleBombTargetingHelper(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_SpaceWhaleBombTargetingHelper.Buff_SpaceWhaleBombTargetingHelper_C.ExecuteUbergraph_Buff_SpaceWhaleBombTargetingHelper");
		
		ABuff_SpaceWhaleBombTargetingHelper_C_ExecuteUbergraph_Buff_SpaceWhaleBombTargetingHelper_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_SpaceWhaleBombTargetingHelper_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_SpaceWhaleBombTargetingHelper_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_SpaceWhaleBombTargetingHelper.Buff_SpaceWhaleBombTargetingHelper_C");
		return ptr;
	}

}


