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
	 * 		Name   -> Function DinoBlueprintBase.DinoBlueprintBase_C.BlueprintPlayAnimationEvent
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                AnimationMontage                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              PlayRate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              playedAnimLength                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoBlueprintBase_C::BlueprintPlayAnimationEvent(class UAnimMontage* AnimationMontage, float PlayRate, float* playedAnimLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase.DinoBlueprintBase_C.BlueprintPlayAnimationEvent");
		
		UDinoBlueprintBase_C_BlueprintPlayAnimationEvent_Params params {};
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
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_4002
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_4002()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_4002");
		
		UDinoBlueprintBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_4002_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_5123
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_5123()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_5123");
		
		UDinoBlueprintBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_5123_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_ModifyBone_792
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_ModifyBone_792()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_ModifyBone_792");
		
		UDinoBlueprintBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_ModifyBone_792_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_4001
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_4001()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_4001");
		
		UDinoBlueprintBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_4001_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_RotationOffsetBlendSpace_258
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_RotationOffsetBlendSpace_258()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_RotationOffsetBlendSpace_258");
		
		UDinoBlueprintBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_RotationOffsetBlendSpace_258_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_4000
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_4000()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_4000");
		
		UDinoBlueprintBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_4000_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3999
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3999()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3999");
		
		UDinoBlueprintBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3999_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3998
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3998()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3998");
		
		UDinoBlueprintBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3998_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_5122
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_5122()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_5122");
		
		UDinoBlueprintBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_5122_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_5121
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_5121()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_5121");
		
		UDinoBlueprintBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_5121_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3997
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3997()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3997");
		
		UDinoBlueprintBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3997_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3996
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3996()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3996");
		
		UDinoBlueprintBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3996_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_5118
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_5118()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_5118");
		
		UDinoBlueprintBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_5118_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_5117
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_5117()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_5117");
		
		UDinoBlueprintBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_5117_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3995
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3995()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3995");
		
		UDinoBlueprintBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3995_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3994
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3994()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3994");
		
		UDinoBlueprintBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3994_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_5116
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_5116()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_5116");
		
		UDinoBlueprintBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_5116_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_5115
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_5115()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_5115");
		
		UDinoBlueprintBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_SequencePlayer_5115_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3993
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3993()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3993");
		
		UDinoBlueprintBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3993_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3992
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3992()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3992");
		
		UDinoBlueprintBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3992_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3991
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3991()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3991");
		
		UDinoBlueprintBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3991_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_ModifyBone_791
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_ModifyBone_791()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_ModifyBone_791");
		
		UDinoBlueprintBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_ModifyBone_791_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_ApplyAdditive_438
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_ApplyAdditive_438()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_ApplyAdditive_438");
		
		UDinoBlueprintBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_ApplyAdditive_438_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3990
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3990()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3990");
		
		UDinoBlueprintBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3990_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3989
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3989()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase.DinoBlueprintBase_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3989");
		
		UDinoBlueprintBase_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_AnimGraphNode_BlendListByBool_3989_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase.DinoBlueprintBase_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoBlueprintBase_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase.DinoBlueprintBase_C.BlueprintUpdateAnimation");
		
		UDinoBlueprintBase_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase.DinoBlueprintBase_C.ExecuteUbergraph_DinoBlueprintBase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoBlueprintBase_C::ExecuteUbergraph_DinoBlueprintBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase.DinoBlueprintBase_C.ExecuteUbergraph_DinoBlueprintBase");
		
		UDinoBlueprintBase_C_ExecuteUbergraph_DinoBlueprintBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoBlueprintBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoBlueprintBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass DinoBlueprintBase.DinoBlueprintBase_C");
		return ptr;
	}

}


