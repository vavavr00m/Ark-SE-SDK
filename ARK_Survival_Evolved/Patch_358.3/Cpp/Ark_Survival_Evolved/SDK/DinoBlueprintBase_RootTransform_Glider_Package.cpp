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
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.PassengerUpdateAnim
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        CarryingDino                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoBlueprintBase_RootTransform_Glider_C::PassengerUpdateAnim(class APrimalDinoCharacter* CarryingDino, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.PassengerUpdateAnim");
		
		UDinoBlueprintBase_RootTransform_Glider_C_PassengerUpdateAnim_Params params {};
		params.CarryingDino = CarryingDino;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.UpdateAnimFromShooterChar
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           ShooterChar                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               HasBuffFromPawnOwner                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoBlueprintBase_RootTransform_Glider_C::UpdateAnimFromShooterChar(class AShooterCharacter* ShooterChar, float DeltaTime, bool* HasBuffFromPawnOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.UpdateAnimFromShooterChar");
		
		UDinoBlueprintBase_RootTransform_Glider_C_UpdateAnimFromShooterChar_Params params {};
		params.ShooterChar = ShooterChar;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasBuffFromPawnOwner != nullptr)
			*HasBuffFromPawnOwner = params.HasBuffFromPawnOwner;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.BlueprintPlayAnimationEvent
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                AnimationMontage                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              PlayRate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              playedAnimLength                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoBlueprintBase_RootTransform_Glider_C::BlueprintPlayAnimationEvent(class UAnimMontage* AnimationMontage, float PlayRate, float* playedAnimLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.BlueprintPlayAnimationEvent");
		
		UDinoBlueprintBase_RootTransform_Glider_C_BlueprintPlayAnimationEvent_Params params {};
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
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7434
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Glider_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7434()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7434");
		
		UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7434_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9113
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Glider_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9113()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9113");
		
		UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9113_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_ModifyBone_1056
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Glider_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_ModifyBone_1056()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_ModifyBone_1056");
		
		UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_ModifyBone_1056_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7433
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Glider_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7433()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7433");
		
		UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7433_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_RotationOffsetBlendSpace_462
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Glider_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_RotationOffsetBlendSpace_462()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_RotationOffsetBlendSpace_462");
		
		UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_RotationOffsetBlendSpace_462_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7432
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Glider_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7432()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7432");
		
		UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7432_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7431
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Glider_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7431()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7431");
		
		UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7431_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9111
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Glider_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9111()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9111");
		
		UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9111_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7430
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Glider_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7430()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7430");
		
		UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7430_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7429
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Glider_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7429()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7429");
		
		UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7429_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9110
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Glider_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9110()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9110");
		
		UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9110_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9109
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Glider_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9109()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9109");
		
		UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9109_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7428
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Glider_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7428()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7428");
		
		UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7428_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9108
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Glider_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9108()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9108");
		
		UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9108_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7427
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Glider_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7427()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7427");
		
		UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7427_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7426
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Glider_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7426()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7426");
		
		UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7426_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_ApplyAdditive_696
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Glider_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_ApplyAdditive_696()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_ApplyAdditive_696");
		
		UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_ApplyAdditive_696_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7425
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Glider_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7425()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7425");
		
		UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7425_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7424
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Glider_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7424()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7424");
		
		UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7424_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7423
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Glider_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7423()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7423");
		
		UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7423_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9103
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Glider_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9103()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9103");
		
		UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9103_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7422
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Glider_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7422()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7422");
		
		UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7422_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7421
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Glider_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7421()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7421");
		
		UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7421_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9102
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Glider_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9102()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9102");
		
		UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9102_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9101
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Glider_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9101()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9101");
		
		UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9101_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_ApplyAdditive_695
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Glider_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_ApplyAdditive_695()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_ApplyAdditive_695");
		
		UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_ApplyAdditive_695_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7420
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Glider_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7420()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7420");
		
		UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7420_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7419
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Glider_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7419()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7419");
		
		UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7419_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7418
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Glider_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7418()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7418");
		
		UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7418_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7417
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Glider_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7417()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7417");
		
		UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7417_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7416
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Glider_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7416()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7416");
		
		UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7416_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7415
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Glider_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7415()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7415");
		
		UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7415_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByInt_48
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Glider_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByInt_48()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByInt_48");
		
		UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByInt_48_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9094
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Glider_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9094()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9094");
		
		UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9094_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9093
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Glider_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9093()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9093");
		
		UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9093_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9092
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Glider_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9092()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9092");
		
		UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9092_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9091
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Glider_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9091()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9091");
		
		UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9091_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7414
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Glider_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7414()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7414");
		
		UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7414_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9090
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Glider_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9090()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9090");
		
		UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9090_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7413
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Glider_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7413()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7413");
		
		UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7413_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7412
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Glider_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7412()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7412");
		
		UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7412_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9089
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Glider_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9089()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9089");
		
		UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9089_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9088
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Glider_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9088()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9088");
		
		UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9088_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7411
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Glider_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7411()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7411");
		
		UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7411_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9087
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Glider_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9087()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9087");
		
		UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9087_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7410
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Glider_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7410()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7410");
		
		UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7410_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9086
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Glider_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9086()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9086");
		
		UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9086_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9085
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Glider_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9085()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9085");
		
		UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequencePlayer_9085_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7409
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Glider_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7409()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7409");
		
		UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7409_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequenceEvaluator_30
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Glider_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequenceEvaluator_30()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequenceEvaluator_30");
		
		UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequenceEvaluator_30_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequenceEvaluator_29
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Glider_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequenceEvaluator_29()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequenceEvaluator_29");
		
		UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_SequenceEvaluator_29_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7408
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Glider_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7408()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7408");
		
		UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7408_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7407
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UDinoBlueprintBase_RootTransform_Glider_C::EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7407()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7407");
		
		UDinoBlueprintBase_RootTransform_Glider_C_EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_AnimGraphNode_BlendListByBool_7407_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoBlueprintBase_RootTransform_Glider_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.BlueprintUpdateAnimation");
		
		UDinoBlueprintBase_RootTransform_Glider_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoBlueprintBase_RootTransform_Glider_C::ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C.ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider");
		
		UDinoBlueprintBase_RootTransform_Glider_C_ExecuteUbergraph_DinoBlueprintBase_RootTransform_Glider_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoBlueprintBase_RootTransform_Glider_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoBlueprintBase_RootTransform_Glider_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass DinoBlueprintBase_RootTransform_Glider.DinoBlueprintBase_RootTransform_Glider_C");
		return ptr;
	}

}


