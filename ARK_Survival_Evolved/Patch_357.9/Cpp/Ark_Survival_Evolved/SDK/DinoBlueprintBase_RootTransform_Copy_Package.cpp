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
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.BlueprintPlayAnimationEvent
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                AnimationMontage                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              PlayRate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              playedAnimLength                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoBlueprintBase_RootTransform_Copy_C::BlueprintPlayAnimationEvent(class UAnimMontage* AnimationMontage, float PlayRate, float* playedAnimLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.BlueprintPlayAnimationEvent");
		
		UDinoBlueprintBase_RootTransform_Copy_C_BlueprintPlayAnimationEvent_Params params {};
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
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6516
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Copy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6516()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6516");
		
		UDinoBlueprintBase_RootTransform_Copy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6516_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_SequencePlayer_8171
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Copy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_SequencePlayer_8171()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_SequencePlayer_8171");
		
		UDinoBlueprintBase_RootTransform_Copy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_SequencePlayer_8171_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_ModifyBone_996
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Copy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_ModifyBone_996()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_ModifyBone_996");
		
		UDinoBlueprintBase_RootTransform_Copy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_ModifyBone_996_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6515
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Copy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6515()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6515");
		
		UDinoBlueprintBase_RootTransform_Copy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6515_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_RotationOffsetBlendSpace_408
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Copy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_RotationOffsetBlendSpace_408()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_RotationOffsetBlendSpace_408");
		
		UDinoBlueprintBase_RootTransform_Copy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_RotationOffsetBlendSpace_408_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6514
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Copy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6514()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6514");
		
		UDinoBlueprintBase_RootTransform_Copy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6514_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6513
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Copy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6513()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6513");
		
		UDinoBlueprintBase_RootTransform_Copy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6513_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_SequencePlayer_8169
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Copy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_SequencePlayer_8169()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_SequencePlayer_8169");
		
		UDinoBlueprintBase_RootTransform_Copy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_SequencePlayer_8169_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6512
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Copy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6512()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6512");
		
		UDinoBlueprintBase_RootTransform_Copy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6512_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6511
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Copy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6511()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6511");
		
		UDinoBlueprintBase_RootTransform_Copy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6511_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_SequencePlayer_8168
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Copy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_SequencePlayer_8168()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_SequencePlayer_8168");
		
		UDinoBlueprintBase_RootTransform_Copy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_SequencePlayer_8168_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_SequencePlayer_8167
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Copy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_SequencePlayer_8167()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_SequencePlayer_8167");
		
		UDinoBlueprintBase_RootTransform_Copy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_SequencePlayer_8167_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6510
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Copy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6510()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6510");
		
		UDinoBlueprintBase_RootTransform_Copy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6510_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_SequencePlayer_8166
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Copy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_SequencePlayer_8166()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_SequencePlayer_8166");
		
		UDinoBlueprintBase_RootTransform_Copy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_SequencePlayer_8166_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6509
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Copy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6509()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6509");
		
		UDinoBlueprintBase_RootTransform_Copy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6509_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6508
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Copy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6508()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6508");
		
		UDinoBlueprintBase_RootTransform_Copy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6508_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_ApplyAdditive_606
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Copy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_ApplyAdditive_606()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_ApplyAdditive_606");
		
		UDinoBlueprintBase_RootTransform_Copy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_ApplyAdditive_606_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6507
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Copy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6507()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6507");
		
		UDinoBlueprintBase_RootTransform_Copy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6507_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6506
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Copy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6506()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6506");
		
		UDinoBlueprintBase_RootTransform_Copy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6506_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6505
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Copy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6505()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6505");
		
		UDinoBlueprintBase_RootTransform_Copy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6505_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_SequencePlayer_8161
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Copy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_SequencePlayer_8161()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_SequencePlayer_8161");
		
		UDinoBlueprintBase_RootTransform_Copy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_SequencePlayer_8161_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6504
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Copy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6504()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6504");
		
		UDinoBlueprintBase_RootTransform_Copy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6504_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6503
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Copy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6503()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6503");
		
		UDinoBlueprintBase_RootTransform_Copy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6503_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_SequencePlayer_8160
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Copy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_SequencePlayer_8160()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_SequencePlayer_8160");
		
		UDinoBlueprintBase_RootTransform_Copy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_SequencePlayer_8160_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_SequencePlayer_8159
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Copy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_SequencePlayer_8159()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_SequencePlayer_8159");
		
		UDinoBlueprintBase_RootTransform_Copy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_SequencePlayer_8159_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_ApplyAdditive_605
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Copy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_ApplyAdditive_605()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_ApplyAdditive_605");
		
		UDinoBlueprintBase_RootTransform_Copy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_ApplyAdditive_605_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6502
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Copy_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6502()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6502");
		
		UDinoBlueprintBase_RootTransform_Copy_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_AnimGraphNode_BlendListByBool_6502_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoBlueprintBase_RootTransform_Copy_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.BlueprintUpdateAnimation");
		
		UDinoBlueprintBase_RootTransform_Copy_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoBlueprintBase_RootTransform_Copy_C::ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C.ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy");
		
		UDinoBlueprintBase_RootTransform_Copy_C_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Copy_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoBlueprintBase_RootTransform_Copy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoBlueprintBase_RootTransform_Copy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass DinoBlueprintBase_RootTransform_Copy.DinoBlueprintBase_RootTransform_Copy_C");
		return ptr;
	}

}


