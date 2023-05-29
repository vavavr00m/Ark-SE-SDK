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
	 * 		Name   -> Function TPV_MiningDrill_HM_AnimBP.TPV_MiningDrill_HM_AnimBP_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTPV_MiningDrill_HM_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TPV_MiningDrill_HM_AnimBP.TPV_MiningDrill_HM_AnimBP_C.BlueprintUpdateAnimation");
		
		UTPV_MiningDrill_HM_AnimBP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TPV_MiningDrill_HM_AnimBP.TPV_MiningDrill_HM_AnimBP_C.ExecuteUbergraph_TPV_MiningDrill_HM_AnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTPV_MiningDrill_HM_AnimBP_C::ExecuteUbergraph_TPV_MiningDrill_HM_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TPV_MiningDrill_HM_AnimBP.TPV_MiningDrill_HM_AnimBP_C.ExecuteUbergraph_TPV_MiningDrill_HM_AnimBP");
		
		UTPV_MiningDrill_HM_AnimBP_C_ExecuteUbergraph_TPV_MiningDrill_HM_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTPV_MiningDrill_HM_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTPV_MiningDrill_HM_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass TPV_MiningDrill_HM_AnimBP.TPV_MiningDrill_HM_AnimBP_C");
		return ptr;
	}

}


