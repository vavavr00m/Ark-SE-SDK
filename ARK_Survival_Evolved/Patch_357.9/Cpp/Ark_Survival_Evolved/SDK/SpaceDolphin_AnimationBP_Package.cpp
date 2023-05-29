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
	 * 		Name   -> Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.UpdateMovementAnimRate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Base                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalDinoCharacter*                        Dino                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpaceDolphin_AnimationBP_C::UpdateMovementAnimRate(float Base, class APrimalDinoCharacter* Dino)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.UpdateMovementAnimRate");
		
		USpaceDolphin_AnimationBP_C_UpdateMovementAnimRate_Params params {};
		params.Base = Base;
		params.Dino = Dino;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.GetFlyingBlendspaceCoords
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        ForDino                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector2D                                   BlendspaceCoords                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpaceDolphin_AnimationBP_C::GetFlyingBlendspaceCoords(class APrimalDinoCharacter* ForDino, struct FVector2D* BlendspaceCoords)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.GetFlyingBlendspaceCoords");
		
		USpaceDolphin_AnimationBP_C_GetFlyingBlendspaceCoords_Params params {};
		params.ForDino = ForDino;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BlendspaceCoords != nullptr)
			*BlendspaceCoords = params.BlendspaceCoords;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.BlueprintPlayAnimationEvent
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                AnimationMontage                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              PlayRate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              playedAnimLength                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpaceDolphin_AnimationBP_C::BlueprintPlayAnimationEvent(class UAnimMontage* AnimationMontage, float PlayRate, float* playedAnimLength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.BlueprintPlayAnimationEvent");
		
		USpaceDolphin_AnimationBP_C_BlueprintPlayAnimationEvent_Params params {};
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
	 * 		Name   -> Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4855
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USpaceDolphin_AnimationBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4855()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4855");
		
		USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4855_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4854
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USpaceDolphin_AnimationBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4854()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4854");
		
		USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4854_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4853
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USpaceDolphin_AnimationBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4853()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4853");
		
		USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4853_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_ApplyAdditive_486
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USpaceDolphin_AnimationBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_ApplyAdditive_486()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_ApplyAdditive_486");
		
		USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_ApplyAdditive_486_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4852
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USpaceDolphin_AnimationBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4852()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4852");
		
		USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4852_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4858
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USpaceDolphin_AnimationBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4858()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4858");
		
		USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4858_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4850
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USpaceDolphin_AnimationBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4850()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4850");
		
		USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4850_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4849
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USpaceDolphin_AnimationBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4849()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4849");
		
		USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4849_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4846
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USpaceDolphin_AnimationBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4846()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4846");
		
		USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4846_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4845
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USpaceDolphin_AnimationBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4845()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4845");
		
		USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4845_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4844
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USpaceDolphin_AnimationBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4844()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4844");
		
		USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4844_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4843
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USpaceDolphin_AnimationBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4843()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4843");
		
		USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4843_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4859
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USpaceDolphin_AnimationBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4859()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4859");
		
		USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4859_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_RotationOffsetBlendSpace_318
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USpaceDolphin_AnimationBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_RotationOffsetBlendSpace_318()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_RotationOffsetBlendSpace_318");
		
		USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_RotationOffsetBlendSpace_318_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_SequencePlayer_5902
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USpaceDolphin_AnimationBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_SequencePlayer_5902()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_SequencePlayer_5902");
		
		USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_SequencePlayer_5902_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_SequencePlayer_5898
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USpaceDolphin_AnimationBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_SequencePlayer_5898()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_SequencePlayer_5898");
		
		USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_SequencePlayer_5898_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_ModifyBone_864
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USpaceDolphin_AnimationBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_ModifyBone_864()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_ModifyBone_864");
		
		USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_ModifyBone_864_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4840
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USpaceDolphin_AnimationBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4840()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4840");
		
		USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4840_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4839
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USpaceDolphin_AnimationBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4839()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4839");
		
		USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4839_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_SequencePlayer_5887
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USpaceDolphin_AnimationBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_SequencePlayer_5887()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_SequencePlayer_5887");
		
		USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_SequencePlayer_5887_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_SequencePlayer_5886
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USpaceDolphin_AnimationBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_SequencePlayer_5886()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_SequencePlayer_5886");
		
		USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_SequencePlayer_5886_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendSpacePlayer_330
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USpaceDolphin_AnimationBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendSpacePlayer_330()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendSpacePlayer_330");
		
		USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendSpacePlayer_330_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendSpacePlayer_329
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USpaceDolphin_AnimationBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendSpacePlayer_329()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendSpacePlayer_329");
		
		USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendSpacePlayer_329_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4860
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USpaceDolphin_AnimationBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4860()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4860");
		
		USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4860_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4838
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USpaceDolphin_AnimationBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4838()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4838");
		
		USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4838_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendSpacePlayer_328
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USpaceDolphin_AnimationBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendSpacePlayer_328()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendSpacePlayer_328");
		
		USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendSpacePlayer_328_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4837
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USpaceDolphin_AnimationBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4837()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4837");
		
		USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4837_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendSpacePlayer_327
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USpaceDolphin_AnimationBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendSpacePlayer_327()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendSpacePlayer_327");
		
		USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendSpacePlayer_327_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4836
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USpaceDolphin_AnimationBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4836()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4836");
		
		USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4836_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendSpacePlayer_326
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USpaceDolphin_AnimationBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendSpacePlayer_326()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendSpacePlayer_326");
		
		USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendSpacePlayer_326_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4835
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USpaceDolphin_AnimationBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4835()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4835");
		
		USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4835_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendSpacePlayer_325
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USpaceDolphin_AnimationBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendSpacePlayer_325()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendSpacePlayer_325");
		
		USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendSpacePlayer_325_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4834
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USpaceDolphin_AnimationBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4834()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4834");
		
		USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4834_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendSpacePlayer_324
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USpaceDolphin_AnimationBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendSpacePlayer_324()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendSpacePlayer_324");
		
		USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendSpacePlayer_324_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4833
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USpaceDolphin_AnimationBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4833()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4833");
		
		USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4833_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4832
	 * 		Flags  -> (BlueprintEvent)
	 */
	void USpaceDolphin_AnimationBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4832()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4832");
		
		USpaceDolphin_AnimationBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SpaceDolphin_AnimationBP_AnimGraphNode_BlendListByBool_4832_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpaceDolphin_AnimationBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.BlueprintUpdateAnimation");
		
		USpaceDolphin_AnimationBP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.ExecuteUbergraph_SpaceDolphin_AnimationBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USpaceDolphin_AnimationBP_C::ExecuteUbergraph_SpaceDolphin_AnimationBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C.ExecuteUbergraph_SpaceDolphin_AnimationBP");
		
		USpaceDolphin_AnimationBP_C_ExecuteUbergraph_SpaceDolphin_AnimationBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpaceDolphin_AnimationBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpaceDolphin_AnimationBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass SpaceDolphin_AnimationBP.SpaceDolphin_AnimationBP_C");
		return ptr;
	}

}


