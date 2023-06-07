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
	 * 		Name   -> Function BaseNoteMeshAnimBP.BaseNoteMeshAnimBP_C.BlueprintTriggerAnimationEvent
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        AnimationEventName                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              playedAnimLength                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBaseNoteMeshAnimBP_C::BlueprintTriggerAnimationEvent(const class FName& AnimationEventName, float* playedAnimLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseNoteMeshAnimBP.BaseNoteMeshAnimBP_C.BlueprintTriggerAnimationEvent");
		
		UBaseNoteMeshAnimBP_C_BlueprintTriggerAnimationEvent_Params params {};
		params.AnimationEventName = AnimationEventName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (playedAnimLength != nullptr)
			*playedAnimLength = params.playedAnimLength;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function BaseNoteMeshAnimBP.BaseNoteMeshAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseNoteMeshAnimBP_AnimGraphNode_TransitionResult_3444
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBaseNoteMeshAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseNoteMeshAnimBP_AnimGraphNode_TransitionResult_3444()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseNoteMeshAnimBP.BaseNoteMeshAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseNoteMeshAnimBP_AnimGraphNode_TransitionResult_3444");
		
		UBaseNoteMeshAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseNoteMeshAnimBP_AnimGraphNode_TransitionResult_3444_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function BaseNoteMeshAnimBP.BaseNoteMeshAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseNoteMeshAnimBP_AnimGraphNode_TransitionResult_3443
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBaseNoteMeshAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseNoteMeshAnimBP_AnimGraphNode_TransitionResult_3443()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseNoteMeshAnimBP.BaseNoteMeshAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseNoteMeshAnimBP_AnimGraphNode_TransitionResult_3443");
		
		UBaseNoteMeshAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseNoteMeshAnimBP_AnimGraphNode_TransitionResult_3443_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function BaseNoteMeshAnimBP.BaseNoteMeshAnimBP_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBaseNoteMeshAnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseNoteMeshAnimBP.BaseNoteMeshAnimBP_C.BlueprintUpdateAnimation");
		
		UBaseNoteMeshAnimBP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function BaseNoteMeshAnimBP.BaseNoteMeshAnimBP_C.ExecuteUbergraph_BaseNoteMeshAnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBaseNoteMeshAnimBP_C::ExecuteUbergraph_BaseNoteMeshAnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseNoteMeshAnimBP.BaseNoteMeshAnimBP_C.ExecuteUbergraph_BaseNoteMeshAnimBP");
		
		UBaseNoteMeshAnimBP_C_ExecuteUbergraph_BaseNoteMeshAnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseNoteMeshAnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseNoteMeshAnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BaseNoteMeshAnimBP.BaseNoteMeshAnimBP_C");
		return ptr;
	}

}


