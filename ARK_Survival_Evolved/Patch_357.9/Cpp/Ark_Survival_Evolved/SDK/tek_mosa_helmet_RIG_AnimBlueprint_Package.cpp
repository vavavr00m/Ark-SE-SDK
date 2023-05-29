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
	 * 		Name   -> Function tek_mosa_helmet_RIG_AnimBlueprint.tek_mosa_helmet_RIG_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_tek_mosa_helmet_RIG_AnimBlueprint_AnimGraphNode_BlendListByBool_2922
	 * 		Flags  -> (BlueprintEvent)
	 */
	void Utek_mosa_helmet_RIG_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_tek_mosa_helmet_RIG_AnimBlueprint_AnimGraphNode_BlendListByBool_2922()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function tek_mosa_helmet_RIG_AnimBlueprint.tek_mosa_helmet_RIG_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_tek_mosa_helmet_RIG_AnimBlueprint_AnimGraphNode_BlendListByBool_2922");
		
		Utek_mosa_helmet_RIG_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_tek_mosa_helmet_RIG_AnimBlueprint_AnimGraphNode_BlendListByBool_2922_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function tek_mosa_helmet_RIG_AnimBlueprint.tek_mosa_helmet_RIG_AnimBlueprint_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void Utek_mosa_helmet_RIG_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function tek_mosa_helmet_RIG_AnimBlueprint.tek_mosa_helmet_RIG_AnimBlueprint_C.BlueprintUpdateAnimation");
		
		Utek_mosa_helmet_RIG_AnimBlueprint_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function tek_mosa_helmet_RIG_AnimBlueprint.tek_mosa_helmet_RIG_AnimBlueprint_C.ExecuteUbergraph_tek_mosa_helmet_RIG_AnimBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void Utek_mosa_helmet_RIG_AnimBlueprint_C::ExecuteUbergraph_tek_mosa_helmet_RIG_AnimBlueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function tek_mosa_helmet_RIG_AnimBlueprint.tek_mosa_helmet_RIG_AnimBlueprint_C.ExecuteUbergraph_tek_mosa_helmet_RIG_AnimBlueprint");
		
		Utek_mosa_helmet_RIG_AnimBlueprint_C_ExecuteUbergraph_tek_mosa_helmet_RIG_AnimBlueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction Utek_mosa_helmet_RIG_AnimBlueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Utek_mosa_helmet_RIG_AnimBlueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass tek_mosa_helmet_RIG_AnimBlueprint.tek_mosa_helmet_RIG_AnimBlueprint_C");
		return ptr;
	}

}

