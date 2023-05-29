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
	 * 		Name   -> Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.BlueprintPlayAnimationEvent
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                AnimationMontage                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              PlayRate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              playedAnimLength                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UShapeshifter_Small_AnimBP_C::BlueprintPlayAnimationEvent(class UAnimMontage* AnimationMontage, float PlayRate, float* playedAnimLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.BlueprintPlayAnimationEvent");
		
		UShapeshifter_Small_AnimBP_C_BlueprintPlayAnimationEvent_Params params {};
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
	 * 		Name   -> Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5934
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UShapeshifter_Small_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5934()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5934");
		
		UShapeshifter_Small_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5934_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_SequencePlayer_7368
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UShapeshifter_Small_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_SequencePlayer_7368()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_SequencePlayer_7368");
		
		UShapeshifter_Small_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_SequencePlayer_7368_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_ModifyBone_954
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UShapeshifter_Small_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_ModifyBone_954()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_ModifyBone_954");
		
		UShapeshifter_Small_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_ModifyBone_954_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5933
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UShapeshifter_Small_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5933()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5933");
		
		UShapeshifter_Small_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5933_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5932
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UShapeshifter_Small_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5932()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5932");
		
		UShapeshifter_Small_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5932_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5931
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UShapeshifter_Small_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5931()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5931");
		
		UShapeshifter_Small_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5931_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5930
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UShapeshifter_Small_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5930()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5930");
		
		UShapeshifter_Small_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5930_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_SequencePlayer_7367
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UShapeshifter_Small_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_SequencePlayer_7367()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_SequencePlayer_7367");
		
		UShapeshifter_Small_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_SequencePlayer_7367_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_SequencePlayer_7366
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UShapeshifter_Small_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_SequencePlayer_7366()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_SequencePlayer_7366");
		
		UShapeshifter_Small_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_SequencePlayer_7366_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5929
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UShapeshifter_Small_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5929()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5929");
		
		UShapeshifter_Small_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5929_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5928
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UShapeshifter_Small_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5928()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5928");
		
		UShapeshifter_Small_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5928_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_SequencePlayer_7363
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UShapeshifter_Small_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_SequencePlayer_7363()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_SequencePlayer_7363");
		
		UShapeshifter_Small_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_SequencePlayer_7363_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_SequencePlayer_7362
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UShapeshifter_Small_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_SequencePlayer_7362()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_SequencePlayer_7362");
		
		UShapeshifter_Small_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_SequencePlayer_7362_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5927
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UShapeshifter_Small_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5927()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5927");
		
		UShapeshifter_Small_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5927_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5926
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UShapeshifter_Small_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5926()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5926");
		
		UShapeshifter_Small_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5926_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_SequencePlayer_7361
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UShapeshifter_Small_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_SequencePlayer_7361()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_SequencePlayer_7361");
		
		UShapeshifter_Small_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_SequencePlayer_7361_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_SequencePlayer_7360
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UShapeshifter_Small_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_SequencePlayer_7360()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_SequencePlayer_7360");
		
		UShapeshifter_Small_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_SequencePlayer_7360_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5925
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UShapeshifter_Small_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5925()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5925");
		
		UShapeshifter_Small_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5925_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5924
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UShapeshifter_Small_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5924()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5924");
		
		UShapeshifter_Small_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5924_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5923
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UShapeshifter_Small_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5923()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5923");
		
		UShapeshifter_Small_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5923_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_ModifyBone_953
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UShapeshifter_Small_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_ModifyBone_953()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_ModifyBone_953");
		
		UShapeshifter_Small_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_ModifyBone_953_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5922
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UShapeshifter_Small_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5922()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5922");
		
		UShapeshifter_Small_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5922_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5921
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UShapeshifter_Small_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5921()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5921");
		
		UShapeshifter_Small_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5921_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5920
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UShapeshifter_Small_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5920()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5920");
		
		UShapeshifter_Small_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5920_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_GroundBones_342
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UShapeshifter_Small_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_GroundBones_342()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_GroundBones_342");
		
		UShapeshifter_Small_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_GroundBones_342_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_GroundBones_341
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UShapeshifter_Small_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_GroundBones_341()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_GroundBones_341");
		
		UShapeshifter_Small_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_GroundBones_341_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_ApplyAdditive_576
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UShapeshifter_Small_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_ApplyAdditive_576()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_ApplyAdditive_576");
		
		UShapeshifter_Small_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_ApplyAdditive_576_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5919
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UShapeshifter_Small_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5919()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5919");
		
		UShapeshifter_Small_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5919_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5918
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UShapeshifter_Small_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5918()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5918");
		
		UShapeshifter_Small_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5918_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_SequencePlayer_7356
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UShapeshifter_Small_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_SequencePlayer_7356()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_SequencePlayer_7356");
		
		UShapeshifter_Small_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_SequencePlayer_7356_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_RotationOffsetBlendSpace_360
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UShapeshifter_Small_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_RotationOffsetBlendSpace_360()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_RotationOffsetBlendSpace_360");
		
		UShapeshifter_Small_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_RotationOffsetBlendSpace_360_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5917
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UShapeshifter_Small_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5917()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5917");
		
		UShapeshifter_Small_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_BlendListByBool_5917_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_SequenceEvaluator_18
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UShapeshifter_Small_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_SequenceEvaluator_18()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_SequenceEvaluator_18");
		
		UShapeshifter_Small_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Shapeshifter_Small_AnimBP_AnimGraphNode_SequenceEvaluator_18_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UShapeshifter_Small_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.BlueprintUpdateAnimation");
		
		UShapeshifter_Small_AnimBP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.ExecuteUbergraph_Shapeshifter_Small_AnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UShapeshifter_Small_AnimBP_C::ExecuteUbergraph_Shapeshifter_Small_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C.ExecuteUbergraph_Shapeshifter_Small_AnimBP");
		
		UShapeshifter_Small_AnimBP_C_ExecuteUbergraph_Shapeshifter_Small_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShapeshifter_Small_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShapeshifter_Small_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Shapeshifter_Small_AnimBP.Shapeshifter_Small_AnimBP_C");
		return ptr;
	}

}


