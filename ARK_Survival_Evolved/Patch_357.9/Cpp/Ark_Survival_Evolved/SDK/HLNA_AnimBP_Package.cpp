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
	 * 		Name   -> Function HLNA_AnimBP.HLNA_AnimBP_C.BlueprintPlayAnimationEvent
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                AnimationMontage                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              PlayRate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              playedAnimLength                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHLNA_AnimBP_C::BlueprintPlayAnimationEvent(class UAnimMontage* AnimationMontage, float PlayRate, float* playedAnimLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HLNA_AnimBP.HLNA_AnimBP_C.BlueprintPlayAnimationEvent");
		
		UHLNA_AnimBP_C_BlueprintPlayAnimationEvent_Params params {};
		params.AnimationMontage = AnimationMontage;
		params.PlayRate = PlayRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (playedAnimLength != nullptr)
			*playedAnimLength = params.playedAnimLength;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HLNA_AnimBP.HLNA_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_BlendSpacePlayer_449
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UHLNA_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_BlendSpacePlayer_449()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HLNA_AnimBP.HLNA_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_BlendSpacePlayer_449");
		
		UHLNA_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_BlendSpacePlayer_449_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HLNA_AnimBP.HLNA_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_LayeredBoneBlend_192
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UHLNA_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_LayeredBoneBlend_192()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HLNA_AnimBP.HLNA_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_LayeredBoneBlend_192");
		
		UHLNA_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_LayeredBoneBlend_192_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HLNA_AnimBP.HLNA_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_BlendSpacePlayer_450
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UHLNA_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_BlendSpacePlayer_450()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HLNA_AnimBP.HLNA_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_BlendSpacePlayer_450");
		
		UHLNA_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_BlendSpacePlayer_450_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HLNA_AnimBP.HLNA_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_ModifyBone_938
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UHLNA_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_ModifyBone_938()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HLNA_AnimBP.HLNA_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_ModifyBone_938");
		
		UHLNA_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_ModifyBone_938_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HLNA_AnimBP.HLNA_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_ApplyAdditive_566
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UHLNA_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_ApplyAdditive_566()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HLNA_AnimBP.HLNA_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_ApplyAdditive_566");
		
		UHLNA_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_ApplyAdditive_566_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HLNA_AnimBP.HLNA_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_BlendListByBool_5774
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UHLNA_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_BlendListByBool_5774()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HLNA_AnimBP.HLNA_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_BlendListByBool_5774");
		
		UHLNA_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_HLNA_AnimBP_AnimGraphNode_BlendListByBool_5774_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HLNA_AnimBP.HLNA_AnimBP_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHLNA_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HLNA_AnimBP.HLNA_AnimBP_C.BlueprintUpdateAnimation");
		
		UHLNA_AnimBP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HLNA_AnimBP.HLNA_AnimBP_C.ExecuteUbergraph_HLNA_AnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHLNA_AnimBP_C::ExecuteUbergraph_HLNA_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HLNA_AnimBP.HLNA_AnimBP_C.ExecuteUbergraph_HLNA_AnimBP");
		
		UHLNA_AnimBP_C_ExecuteUbergraph_HLNA_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHLNA_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHLNA_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass HLNA_AnimBP.HLNA_AnimBP_C");
		return ptr;
	}

}


