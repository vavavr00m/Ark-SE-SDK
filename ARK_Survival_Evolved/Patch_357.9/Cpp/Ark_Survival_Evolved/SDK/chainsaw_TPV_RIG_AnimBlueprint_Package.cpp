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
	 * 		Name   -> Function chainsaw_TPV_RIG_AnimBlueprint.chainsaw_TPV_RIG_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_chainsaw_TPV_RIG_AnimBlueprint_AnimGraphNode_SequencePlayer_4118
	 * 		Flags  -> (BlueprintEvent)
	 */
	void Uchainsaw_TPV_RIG_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_chainsaw_TPV_RIG_AnimBlueprint_AnimGraphNode_SequencePlayer_4118()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function chainsaw_TPV_RIG_AnimBlueprint.chainsaw_TPV_RIG_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_chainsaw_TPV_RIG_AnimBlueprint_AnimGraphNode_SequencePlayer_4118");
		
		Uchainsaw_TPV_RIG_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_chainsaw_TPV_RIG_AnimBlueprint_AnimGraphNode_SequencePlayer_4118_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function chainsaw_TPV_RIG_AnimBlueprint.chainsaw_TPV_RIG_AnimBlueprint_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void Uchainsaw_TPV_RIG_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function chainsaw_TPV_RIG_AnimBlueprint.chainsaw_TPV_RIG_AnimBlueprint_C.BlueprintUpdateAnimation");
		
		Uchainsaw_TPV_RIG_AnimBlueprint_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function chainsaw_TPV_RIG_AnimBlueprint.chainsaw_TPV_RIG_AnimBlueprint_C.ExecuteUbergraph_chainsaw_TPV_RIG_AnimBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void Uchainsaw_TPV_RIG_AnimBlueprint_C::ExecuteUbergraph_chainsaw_TPV_RIG_AnimBlueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function chainsaw_TPV_RIG_AnimBlueprint.chainsaw_TPV_RIG_AnimBlueprint_C.ExecuteUbergraph_chainsaw_TPV_RIG_AnimBlueprint");
		
		Uchainsaw_TPV_RIG_AnimBlueprint_C_ExecuteUbergraph_chainsaw_TPV_RIG_AnimBlueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction Uchainsaw_TPV_RIG_AnimBlueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Uchainsaw_TPV_RIG_AnimBlueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass chainsaw_TPV_RIG_AnimBlueprint.chainsaw_TPV_RIG_AnimBlueprint_C");
		return ptr;
	}

}


