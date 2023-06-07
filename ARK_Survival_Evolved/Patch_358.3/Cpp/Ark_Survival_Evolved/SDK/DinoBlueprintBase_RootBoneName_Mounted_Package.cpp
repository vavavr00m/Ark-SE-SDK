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
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.BlueprintPlayAnimationEvent
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                AnimationMontage                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              PlayRate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              playedAnimLength                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoBlueprintBase_RootBoneName_Mounted_C::BlueprintPlayAnimationEvent(class UAnimMontage* AnimationMontage, float PlayRate, float* playedAnimLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.BlueprintPlayAnimationEvent");
		
		UDinoBlueprintBase_RootBoneName_Mounted_C_BlueprintPlayAnimationEvent_Params params {};
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
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3546
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Mounted_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3546()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3546");
		
		UDinoBlueprintBase_RootBoneName_Mounted_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3546_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_SequencePlayer_4721
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Mounted_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_SequencePlayer_4721()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_SequencePlayer_4721");
		
		UDinoBlueprintBase_RootBoneName_Mounted_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_SequencePlayer_4721_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_ModifyBone_714
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Mounted_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_ModifyBone_714()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_ModifyBone_714");
		
		UDinoBlueprintBase_RootBoneName_Mounted_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_ModifyBone_714_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3545
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Mounted_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3545()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3545");
		
		UDinoBlueprintBase_RootBoneName_Mounted_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3545_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3544
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Mounted_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3544()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3544");
		
		UDinoBlueprintBase_RootBoneName_Mounted_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3544_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3543
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Mounted_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3543()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3543");
		
		UDinoBlueprintBase_RootBoneName_Mounted_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3543_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3542
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Mounted_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3542()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3542");
		
		UDinoBlueprintBase_RootBoneName_Mounted_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3542_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_SequencePlayer_4720
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Mounted_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_SequencePlayer_4720()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_SequencePlayer_4720");
		
		UDinoBlueprintBase_RootBoneName_Mounted_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_SequencePlayer_4720_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_SequencePlayer_4719
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Mounted_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_SequencePlayer_4719()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_SequencePlayer_4719");
		
		UDinoBlueprintBase_RootBoneName_Mounted_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_SequencePlayer_4719_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3541
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Mounted_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3541()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3541");
		
		UDinoBlueprintBase_RootBoneName_Mounted_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3541_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3540
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Mounted_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3540()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3540");
		
		UDinoBlueprintBase_RootBoneName_Mounted_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3540_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_SequencePlayer_4716
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Mounted_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_SequencePlayer_4716()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_SequencePlayer_4716");
		
		UDinoBlueprintBase_RootBoneName_Mounted_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_SequencePlayer_4716_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_RotationOffsetBlendSpace_216
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Mounted_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_RotationOffsetBlendSpace_216()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_RotationOffsetBlendSpace_216");
		
		UDinoBlueprintBase_RootBoneName_Mounted_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_RotationOffsetBlendSpace_216_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_SequencePlayer_4715
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Mounted_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_SequencePlayer_4715()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_SequencePlayer_4715");
		
		UDinoBlueprintBase_RootBoneName_Mounted_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_SequencePlayer_4715_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3539
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Mounted_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3539()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3539");
		
		UDinoBlueprintBase_RootBoneName_Mounted_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3539_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3538
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Mounted_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3538()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3538");
		
		UDinoBlueprintBase_RootBoneName_Mounted_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3538_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_SequencePlayer_4714
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Mounted_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_SequencePlayer_4714()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_SequencePlayer_4714");
		
		UDinoBlueprintBase_RootBoneName_Mounted_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_SequencePlayer_4714_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_SequencePlayer_4713
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Mounted_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_SequencePlayer_4713()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_SequencePlayer_4713");
		
		UDinoBlueprintBase_RootBoneName_Mounted_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_SequencePlayer_4713_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3537
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Mounted_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3537()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3537");
		
		UDinoBlueprintBase_RootBoneName_Mounted_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3537_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3536
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Mounted_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3536()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3536");
		
		UDinoBlueprintBase_RootBoneName_Mounted_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3536_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3535
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Mounted_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3535()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3535");
		
		UDinoBlueprintBase_RootBoneName_Mounted_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3535_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_ModifyBone_713
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Mounted_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_ModifyBone_713()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_ModifyBone_713");
		
		UDinoBlueprintBase_RootBoneName_Mounted_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_ModifyBone_713_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3534
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Mounted_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3534()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3534");
		
		UDinoBlueprintBase_RootBoneName_Mounted_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3534_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3533
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Mounted_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3533()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3533");
		
		UDinoBlueprintBase_RootBoneName_Mounted_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3533_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3532
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Mounted_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3532()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3532");
		
		UDinoBlueprintBase_RootBoneName_Mounted_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3532_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_GroundBones_198
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Mounted_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_GroundBones_198()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_GroundBones_198");
		
		UDinoBlueprintBase_RootBoneName_Mounted_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_GroundBones_198_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_GroundBones_197
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Mounted_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_GroundBones_197()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_GroundBones_197");
		
		UDinoBlueprintBase_RootBoneName_Mounted_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_GroundBones_197_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_ApplyAdditive_384
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Mounted_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_ApplyAdditive_384()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_ApplyAdditive_384");
		
		UDinoBlueprintBase_RootBoneName_Mounted_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_ApplyAdditive_384_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3531
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Mounted_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3531()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3531");
		
		UDinoBlueprintBase_RootBoneName_Mounted_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3531_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3530
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Mounted_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3530()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3530");
		
		UDinoBlueprintBase_RootBoneName_Mounted_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_BlendListByBool_3530_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_SequencePlayer_4708
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Mounted_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_SequencePlayer_4708()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_SequencePlayer_4708");
		
		UDinoBlueprintBase_RootBoneName_Mounted_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_AnimGraphNode_SequencePlayer_4708_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoBlueprintBase_RootBoneName_Mounted_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.BlueprintUpdateAnimation");
		
		UDinoBlueprintBase_RootBoneName_Mounted_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoBlueprintBase_RootBoneName_Mounted_C::ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C.ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted");
		
		UDinoBlueprintBase_RootBoneName_Mounted_C_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Mounted_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoBlueprintBase_RootBoneName_Mounted_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoBlueprintBase_RootBoneName_Mounted_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass DinoBlueprintBase_RootBoneName_Mounted.DinoBlueprintBase_RootBoneName_Mounted_C");
		return ptr;
	}

}


