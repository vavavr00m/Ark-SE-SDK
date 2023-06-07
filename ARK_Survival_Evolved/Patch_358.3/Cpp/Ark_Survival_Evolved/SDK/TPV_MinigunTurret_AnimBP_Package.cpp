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
	 * 		Name   -> Function TPV_MinigunTurret_AnimBP.TPV_MinigunTurret_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TPV_MinigunTurret_AnimBP_AnimGraphNode_RotationOffsetBlendSpace_184
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTPV_MinigunTurret_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TPV_MinigunTurret_AnimBP_AnimGraphNode_RotationOffsetBlendSpace_184()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TPV_MinigunTurret_AnimBP.TPV_MinigunTurret_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TPV_MinigunTurret_AnimBP_AnimGraphNode_RotationOffsetBlendSpace_184");
		
		UTPV_MinigunTurret_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TPV_MinigunTurret_AnimBP_AnimGraphNode_RotationOffsetBlendSpace_184_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TPV_MinigunTurret_AnimBP.TPV_MinigunTurret_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TPV_MinigunTurret_AnimBP_AnimGraphNode_SequencePlayer_4011
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTPV_MinigunTurret_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_TPV_MinigunTurret_AnimBP_AnimGraphNode_SequencePlayer_4011()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TPV_MinigunTurret_AnimBP.TPV_MinigunTurret_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_TPV_MinigunTurret_AnimBP_AnimGraphNode_SequencePlayer_4011");
		
		UTPV_MinigunTurret_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_TPV_MinigunTurret_AnimBP_AnimGraphNode_SequencePlayer_4011_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TPV_MinigunTurret_AnimBP.TPV_MinigunTurret_AnimBP_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTPV_MinigunTurret_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TPV_MinigunTurret_AnimBP.TPV_MinigunTurret_AnimBP_C.BlueprintUpdateAnimation");
		
		UTPV_MinigunTurret_AnimBP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function TPV_MinigunTurret_AnimBP.TPV_MinigunTurret_AnimBP_C.ExecuteUbergraph_TPV_MinigunTurret_AnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTPV_MinigunTurret_AnimBP_C::ExecuteUbergraph_TPV_MinigunTurret_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TPV_MinigunTurret_AnimBP.TPV_MinigunTurret_AnimBP_C.ExecuteUbergraph_TPV_MinigunTurret_AnimBP");
		
		UTPV_MinigunTurret_AnimBP_C_ExecuteUbergraph_TPV_MinigunTurret_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTPV_MinigunTurret_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTPV_MinigunTurret_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass TPV_MinigunTurret_AnimBP.TPV_MinigunTurret_AnimBP_C");
		return ptr;
	}

}


