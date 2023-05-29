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
	 * 		Name   -> Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.BlueprintPlayAnimationEvent
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                AnimationMontage                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              PlayRate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              playedAnimLength                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoBlueprintBase_RootBoneNameInterpSpeed_C::BlueprintPlayAnimationEvent(class UAnimMontage* AnimationMontage, float PlayRate, float* playedAnimLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.BlueprintPlayAnimationEvent");
		
		UDinoBlueprintBase_RootBoneNameInterpSpeed_C_BlueprintPlayAnimationEvent_Params params {};
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
	 * 		Name   -> Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2284
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneNameInterpSpeed_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2284()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2284");
		
		UDinoBlueprintBase_RootBoneNameInterpSpeed_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2284_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_SequencePlayer_3165
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneNameInterpSpeed_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_SequencePlayer_3165()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_SequencePlayer_3165");
		
		UDinoBlueprintBase_RootBoneNameInterpSpeed_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_SequencePlayer_3165_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_ModifyBone_508
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneNameInterpSpeed_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_ModifyBone_508()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_ModifyBone_508");
		
		UDinoBlueprintBase_RootBoneNameInterpSpeed_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_ModifyBone_508_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2283
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneNameInterpSpeed_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2283()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2283");
		
		UDinoBlueprintBase_RootBoneNameInterpSpeed_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2283_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2282
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneNameInterpSpeed_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2282()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2282");
		
		UDinoBlueprintBase_RootBoneNameInterpSpeed_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2282_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2281
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneNameInterpSpeed_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2281()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2281");
		
		UDinoBlueprintBase_RootBoneNameInterpSpeed_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2281_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2280
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneNameInterpSpeed_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2280()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2280");
		
		UDinoBlueprintBase_RootBoneNameInterpSpeed_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2280_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_SequencePlayer_3164
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneNameInterpSpeed_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_SequencePlayer_3164()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_SequencePlayer_3164");
		
		UDinoBlueprintBase_RootBoneNameInterpSpeed_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_SequencePlayer_3164_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_SequencePlayer_3163
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneNameInterpSpeed_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_SequencePlayer_3163()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_SequencePlayer_3163");
		
		UDinoBlueprintBase_RootBoneNameInterpSpeed_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_SequencePlayer_3163_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2279
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneNameInterpSpeed_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2279()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2279");
		
		UDinoBlueprintBase_RootBoneNameInterpSpeed_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2279_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2278
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneNameInterpSpeed_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2278()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2278");
		
		UDinoBlueprintBase_RootBoneNameInterpSpeed_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2278_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_SequencePlayer_3160
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneNameInterpSpeed_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_SequencePlayer_3160()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_SequencePlayer_3160");
		
		UDinoBlueprintBase_RootBoneNameInterpSpeed_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_SequencePlayer_3160_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_RotationOffsetBlendSpace_146
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneNameInterpSpeed_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_RotationOffsetBlendSpace_146()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_RotationOffsetBlendSpace_146");
		
		UDinoBlueprintBase_RootBoneNameInterpSpeed_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_RotationOffsetBlendSpace_146_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_SequencePlayer_3159
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneNameInterpSpeed_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_SequencePlayer_3159()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_SequencePlayer_3159");
		
		UDinoBlueprintBase_RootBoneNameInterpSpeed_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_SequencePlayer_3159_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2277
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneNameInterpSpeed_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2277()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2277");
		
		UDinoBlueprintBase_RootBoneNameInterpSpeed_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2277_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2276
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneNameInterpSpeed_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2276()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2276");
		
		UDinoBlueprintBase_RootBoneNameInterpSpeed_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2276_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_SequencePlayer_3158
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneNameInterpSpeed_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_SequencePlayer_3158()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_SequencePlayer_3158");
		
		UDinoBlueprintBase_RootBoneNameInterpSpeed_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_SequencePlayer_3158_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_SequencePlayer_3157
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneNameInterpSpeed_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_SequencePlayer_3157()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_SequencePlayer_3157");
		
		UDinoBlueprintBase_RootBoneNameInterpSpeed_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_SequencePlayer_3157_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2275
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneNameInterpSpeed_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2275()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2275");
		
		UDinoBlueprintBase_RootBoneNameInterpSpeed_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2275_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2274
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneNameInterpSpeed_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2274()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2274");
		
		UDinoBlueprintBase_RootBoneNameInterpSpeed_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2274_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2273
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneNameInterpSpeed_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2273()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2273");
		
		UDinoBlueprintBase_RootBoneNameInterpSpeed_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2273_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_ModifyBone_507
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneNameInterpSpeed_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_ModifyBone_507()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_ModifyBone_507");
		
		UDinoBlueprintBase_RootBoneNameInterpSpeed_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_ModifyBone_507_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2272
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneNameInterpSpeed_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2272()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2272");
		
		UDinoBlueprintBase_RootBoneNameInterpSpeed_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2272_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2271
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneNameInterpSpeed_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2271()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2271");
		
		UDinoBlueprintBase_RootBoneNameInterpSpeed_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2271_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2270
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneNameInterpSpeed_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2270()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2270");
		
		UDinoBlueprintBase_RootBoneNameInterpSpeed_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2270_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_GroundBones_116
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneNameInterpSpeed_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_GroundBones_116()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_GroundBones_116");
		
		UDinoBlueprintBase_RootBoneNameInterpSpeed_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_GroundBones_116_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_GroundBones_115
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneNameInterpSpeed_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_GroundBones_115()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_GroundBones_115");
		
		UDinoBlueprintBase_RootBoneNameInterpSpeed_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_GroundBones_115_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_ApplyAdditive_234
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneNameInterpSpeed_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_ApplyAdditive_234()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_ApplyAdditive_234");
		
		UDinoBlueprintBase_RootBoneNameInterpSpeed_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_ApplyAdditive_234_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2269
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneNameInterpSpeed_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2269()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2269");
		
		UDinoBlueprintBase_RootBoneNameInterpSpeed_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_AnimGraphNode_BlendListByBool_2269_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoBlueprintBase_RootBoneNameInterpSpeed_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.BlueprintUpdateAnimation");
		
		UDinoBlueprintBase_RootBoneNameInterpSpeed_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoBlueprintBase_RootBoneNameInterpSpeed_C::ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C.ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed");
		
		UDinoBlueprintBase_RootBoneNameInterpSpeed_C_ExecuteUbergraph_DinoBlueprintBase_RootBoneNameInterpSpeed_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoBlueprintBase_RootBoneNameInterpSpeed_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoBlueprintBase_RootBoneNameInterpSpeed_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass DinoBlueprintBase_RootBoneNameInterpSpeed.DinoBlueprintBase_RootBoneNameInterpSpeed_C");
		return ptr;
	}

}


