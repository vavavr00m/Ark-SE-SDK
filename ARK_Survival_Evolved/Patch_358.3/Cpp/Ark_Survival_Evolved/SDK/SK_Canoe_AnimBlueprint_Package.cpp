/**
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
	 * 		Name   -> Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.GetPredictedServerCanoeLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     PredictedLoc                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USK_Canoe_AnimBlueprint_C::GetPredictedServerCanoeLocation(struct FVector* PredictedLoc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.GetPredictedServerCanoeLocation");
		
		USK_Canoe_AnimBlueprint_C_GetPredictedServerCanoeLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PredictedLoc != nullptr)
			*PredictedLoc = params.PredictedLoc;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.CheckForSimCanoeTransformCorrection
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void USK_Canoe_AnimBlueprint_C::CheckForSimCanoeTransformCorrection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.CheckForSimCanoeTransformCorrection");
		
		USK_Canoe_AnimBlueprint_C_CheckForSimCanoeTransformCorrection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.UpdateSimCanoeRotationTargets
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USK_Canoe_AnimBlueprint_C::UpdateSimCanoeRotationTargets(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.UpdateSimCanoeRotationTargets");
		
		USK_Canoe_AnimBlueprint_C_UpdateSimCanoeRotationTargets_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.UpdateSimCanoeLocationTargets
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USK_Canoe_AnimBlueprint_C::UpdateSimCanoeLocationTargets(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.UpdateSimCanoeLocationTargets");
		
		USK_Canoe_AnimBlueprint_C_UpdateSimCanoeLocationTargets_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.UpdateValidCanoeOwnerRef
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USK_Canoe_AnimBlueprint_C::UpdateValidCanoeOwnerRef(bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.UpdateValidCanoeOwnerRef");
		
		USK_Canoe_AnimBlueprint_C_UpdateValidCanoeOwnerRef_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.UpdateSimulatedCanoeTransform
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USK_Canoe_AnimBlueprint_C::UpdateSimulatedCanoeTransform(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.UpdateSimulatedCanoeTransform");
		
		USK_Canoe_AnimBlueprint_C_UpdateSimulatedCanoeTransform_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Canoe_AnimBlueprint_AnimGraphNode_ModifyBone_936
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USK_Canoe_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Canoe_AnimBlueprint_AnimGraphNode_ModifyBone_936()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Canoe_AnimBlueprint_AnimGraphNode_ModifyBone_936");
		
		USK_Canoe_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Canoe_AnimBlueprint_AnimGraphNode_ModifyBone_936_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USK_Canoe_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.BlueprintUpdateAnimation");
		
		USK_Canoe_AnimBlueprint_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void USK_Canoe_AnimBlueprint_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.BlueprintInitializeAnimation");
		
		USK_Canoe_AnimBlueprint_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.ExecuteUbergraph_SK_Canoe_AnimBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USK_Canoe_AnimBlueprint_C::ExecuteUbergraph_SK_Canoe_AnimBlueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C.ExecuteUbergraph_SK_Canoe_AnimBlueprint");
		
		USK_Canoe_AnimBlueprint_C_ExecuteUbergraph_SK_Canoe_AnimBlueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USK_Canoe_AnimBlueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USK_Canoe_AnimBlueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_Canoe_AnimBlueprint.SK_Canoe_AnimBlueprint_C");
		return ptr;
	}

}


