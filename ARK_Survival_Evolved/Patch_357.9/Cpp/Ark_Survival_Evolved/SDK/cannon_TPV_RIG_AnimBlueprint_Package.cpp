/**
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
	 * 		Name   -> Function cannon_TPV_RIG_AnimBlueprint.cannon_TPV_RIG_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_cannon_TPV_RIG_AnimBlueprint_AnimGraphNode_ModifyBone_632
	 * 		Flags  -> (BlueprintEvent)
	 */
	void Ucannon_TPV_RIG_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_cannon_TPV_RIG_AnimBlueprint_AnimGraphNode_ModifyBone_632()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cannon_TPV_RIG_AnimBlueprint.cannon_TPV_RIG_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_cannon_TPV_RIG_AnimBlueprint_AnimGraphNode_ModifyBone_632");
		
		Ucannon_TPV_RIG_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_cannon_TPV_RIG_AnimBlueprint_AnimGraphNode_ModifyBone_632_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function cannon_TPV_RIG_AnimBlueprint.cannon_TPV_RIG_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_cannon_TPV_RIG_AnimBlueprint_AnimGraphNode_ModifyBone_631
	 * 		Flags  -> (BlueprintEvent)
	 */
	void Ucannon_TPV_RIG_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_cannon_TPV_RIG_AnimBlueprint_AnimGraphNode_ModifyBone_631()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cannon_TPV_RIG_AnimBlueprint.cannon_TPV_RIG_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_cannon_TPV_RIG_AnimBlueprint_AnimGraphNode_ModifyBone_631");
		
		Ucannon_TPV_RIG_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_cannon_TPV_RIG_AnimBlueprint_AnimGraphNode_ModifyBone_631_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function cannon_TPV_RIG_AnimBlueprint.cannon_TPV_RIG_AnimBlueprint_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void Ucannon_TPV_RIG_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cannon_TPV_RIG_AnimBlueprint.cannon_TPV_RIG_AnimBlueprint_C.BlueprintUpdateAnimation");
		
		Ucannon_TPV_RIG_AnimBlueprint_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function cannon_TPV_RIG_AnimBlueprint.cannon_TPV_RIG_AnimBlueprint_C.ExecuteUbergraph_cannon_TPV_RIG_AnimBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void Ucannon_TPV_RIG_AnimBlueprint_C::ExecuteUbergraph_cannon_TPV_RIG_AnimBlueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cannon_TPV_RIG_AnimBlueprint.cannon_TPV_RIG_AnimBlueprint_C.ExecuteUbergraph_cannon_TPV_RIG_AnimBlueprint");
		
		Ucannon_TPV_RIG_AnimBlueprint_C_ExecuteUbergraph_cannon_TPV_RIG_AnimBlueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction Ucannon_TPV_RIG_AnimBlueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Ucannon_TPV_RIG_AnimBlueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass cannon_TPV_RIG_AnimBlueprint.cannon_TPV_RIG_AnimBlueprint_C");
		return ptr;
	}

}


