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
	 * 		Name   -> Function tek_hyper_chamber_RIG_AnimBlueprint.tek_hyper_chamber_RIG_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_tek_hyper_chamber_RIG_AnimBlueprint_AnimGraphNode_BlendListByBool_2928
	 * 		Flags  -> (BlueprintEvent)
	 */
	void Utek_hyper_chamber_RIG_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_tek_hyper_chamber_RIG_AnimBlueprint_AnimGraphNode_BlendListByBool_2928()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function tek_hyper_chamber_RIG_AnimBlueprint.tek_hyper_chamber_RIG_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_tek_hyper_chamber_RIG_AnimBlueprint_AnimGraphNode_BlendListByBool_2928");
		
		Utek_hyper_chamber_RIG_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_tek_hyper_chamber_RIG_AnimBlueprint_AnimGraphNode_BlendListByBool_2928_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function tek_hyper_chamber_RIG_AnimBlueprint.tek_hyper_chamber_RIG_AnimBlueprint_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void Utek_hyper_chamber_RIG_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function tek_hyper_chamber_RIG_AnimBlueprint.tek_hyper_chamber_RIG_AnimBlueprint_C.BlueprintUpdateAnimation");
		
		Utek_hyper_chamber_RIG_AnimBlueprint_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function tek_hyper_chamber_RIG_AnimBlueprint.tek_hyper_chamber_RIG_AnimBlueprint_C.ExecuteUbergraph_tek_hyper_chamber_RIG_AnimBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void Utek_hyper_chamber_RIG_AnimBlueprint_C::ExecuteUbergraph_tek_hyper_chamber_RIG_AnimBlueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function tek_hyper_chamber_RIG_AnimBlueprint.tek_hyper_chamber_RIG_AnimBlueprint_C.ExecuteUbergraph_tek_hyper_chamber_RIG_AnimBlueprint");
		
		Utek_hyper_chamber_RIG_AnimBlueprint_C_ExecuteUbergraph_tek_hyper_chamber_RIG_AnimBlueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction Utek_hyper_chamber_RIG_AnimBlueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Utek_hyper_chamber_RIG_AnimBlueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass tek_hyper_chamber_RIG_AnimBlueprint.tek_hyper_chamber_RIG_AnimBlueprint_C");
		return ptr;
	}

}


