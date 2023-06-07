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
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.BlueprintPlayAnimationEvent
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                AnimationMontage                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              PlayRate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              playedAnimLength                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoBlueprintBase_RootBoneName_Swimmer_C::BlueprintPlayAnimationEvent(class UAnimMontage* AnimationMontage, float PlayRate, float* playedAnimLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.BlueprintPlayAnimationEvent");
		
		UDinoBlueprintBase_RootBoneName_Swimmer_C_BlueprintPlayAnimationEvent_Params params {};
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
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2394
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Swimmer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2394()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2394");
		
		UDinoBlueprintBase_RootBoneName_Swimmer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2394_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_SequencePlayer_3321
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Swimmer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_SequencePlayer_3321()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_SequencePlayer_3321");
		
		UDinoBlueprintBase_RootBoneName_Swimmer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_SequencePlayer_3321_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_ModifyBone_528
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Swimmer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_ModifyBone_528()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_ModifyBone_528");
		
		UDinoBlueprintBase_RootBoneName_Swimmer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_ModifyBone_528_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2393
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Swimmer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2393()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2393");
		
		UDinoBlueprintBase_RootBoneName_Swimmer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2393_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2392
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Swimmer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2392()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2392");
		
		UDinoBlueprintBase_RootBoneName_Swimmer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2392_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2391
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Swimmer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2391()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2391");
		
		UDinoBlueprintBase_RootBoneName_Swimmer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2391_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2390
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Swimmer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2390()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2390");
		
		UDinoBlueprintBase_RootBoneName_Swimmer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2390_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_SequencePlayer_3320
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Swimmer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_SequencePlayer_3320()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_SequencePlayer_3320");
		
		UDinoBlueprintBase_RootBoneName_Swimmer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_SequencePlayer_3320_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_SequencePlayer_3319
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Swimmer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_SequencePlayer_3319()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_SequencePlayer_3319");
		
		UDinoBlueprintBase_RootBoneName_Swimmer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_SequencePlayer_3319_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2389
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Swimmer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2389()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2389");
		
		UDinoBlueprintBase_RootBoneName_Swimmer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2389_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2388
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Swimmer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2388()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2388");
		
		UDinoBlueprintBase_RootBoneName_Swimmer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2388_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_SequencePlayer_3317
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Swimmer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_SequencePlayer_3317()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_SequencePlayer_3317");
		
		UDinoBlueprintBase_RootBoneName_Swimmer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_SequencePlayer_3317_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_SequencePlayer_3316
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Swimmer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_SequencePlayer_3316()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_SequencePlayer_3316");
		
		UDinoBlueprintBase_RootBoneName_Swimmer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_SequencePlayer_3316_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_RotationOffsetBlendSpace_154
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Swimmer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_RotationOffsetBlendSpace_154()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_RotationOffsetBlendSpace_154");
		
		UDinoBlueprintBase_RootBoneName_Swimmer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_RotationOffsetBlendSpace_154_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_SequencePlayer_3315
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Swimmer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_SequencePlayer_3315()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_SequencePlayer_3315");
		
		UDinoBlueprintBase_RootBoneName_Swimmer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_SequencePlayer_3315_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2387
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Swimmer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2387()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2387");
		
		UDinoBlueprintBase_RootBoneName_Swimmer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2387_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2386
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Swimmer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2386()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2386");
		
		UDinoBlueprintBase_RootBoneName_Swimmer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2386_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_SequencePlayer_3314
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Swimmer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_SequencePlayer_3314()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_SequencePlayer_3314");
		
		UDinoBlueprintBase_RootBoneName_Swimmer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_SequencePlayer_3314_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_SequencePlayer_3313
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Swimmer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_SequencePlayer_3313()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_SequencePlayer_3313");
		
		UDinoBlueprintBase_RootBoneName_Swimmer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_SequencePlayer_3313_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2385
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Swimmer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2385()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2385");
		
		UDinoBlueprintBase_RootBoneName_Swimmer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2385_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2384
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Swimmer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2384()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2384");
		
		UDinoBlueprintBase_RootBoneName_Swimmer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2384_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2383
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Swimmer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2383()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2383");
		
		UDinoBlueprintBase_RootBoneName_Swimmer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2383_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_ModifyBone_527
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Swimmer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_ModifyBone_527()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_ModifyBone_527");
		
		UDinoBlueprintBase_RootBoneName_Swimmer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_ModifyBone_527_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2382
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Swimmer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2382()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2382");
		
		UDinoBlueprintBase_RootBoneName_Swimmer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2382_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2381
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Swimmer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2381()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2381");
		
		UDinoBlueprintBase_RootBoneName_Swimmer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2381_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2380
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Swimmer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2380()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2380");
		
		UDinoBlueprintBase_RootBoneName_Swimmer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2380_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_GroundBones_126
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Swimmer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_GroundBones_126()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_GroundBones_126");
		
		UDinoBlueprintBase_RootBoneName_Swimmer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_GroundBones_126_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_GroundBones_125
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Swimmer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_GroundBones_125()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_GroundBones_125");
		
		UDinoBlueprintBase_RootBoneName_Swimmer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_GroundBones_125_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_ApplyAdditive_240
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Swimmer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_ApplyAdditive_240()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_ApplyAdditive_240");
		
		UDinoBlueprintBase_RootBoneName_Swimmer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_ApplyAdditive_240_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2379
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootBoneName_Swimmer_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2379()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2379");
		
		UDinoBlueprintBase_RootBoneName_Swimmer_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_AnimGraphNode_BlendListByBool_2379_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoBlueprintBase_RootBoneName_Swimmer_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.BlueprintUpdateAnimation");
		
		UDinoBlueprintBase_RootBoneName_Swimmer_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoBlueprintBase_RootBoneName_Swimmer_C::ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C.ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer");
		
		UDinoBlueprintBase_RootBoneName_Swimmer_C_ExecuteUbergraph_DinoBlueprintBase_RootBoneName_Swimmer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoBlueprintBase_RootBoneName_Swimmer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoBlueprintBase_RootBoneName_Swimmer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass DinoBlueprintBase_RootBoneName_Swimmer.DinoBlueprintBase_RootBoneName_Swimmer_C");
		return ptr;
	}

}


