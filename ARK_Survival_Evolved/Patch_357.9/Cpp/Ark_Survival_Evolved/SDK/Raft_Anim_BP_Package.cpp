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
	 * 		Name   -> Function Raft_Anim_BP.Raft_Anim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Raft_Anim_BP_AnimGraphNode_ModifyBone_638
	 * 		Flags  -> (BlueprintEvent)
	 */
	void URaft_Anim_BP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Raft_Anim_BP_AnimGraphNode_ModifyBone_638()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Raft_Anim_BP.Raft_Anim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Raft_Anim_BP_AnimGraphNode_ModifyBone_638");
		
		URaft_Anim_BP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Raft_Anim_BP_AnimGraphNode_ModifyBone_638_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Raft_Anim_BP.Raft_Anim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Raft_Anim_BP_AnimGraphNode_BlendListByBool_2930
	 * 		Flags  -> (BlueprintEvent)
	 */
	void URaft_Anim_BP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Raft_Anim_BP_AnimGraphNode_BlendListByBool_2930()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Raft_Anim_BP.Raft_Anim_BP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Raft_Anim_BP_AnimGraphNode_BlendListByBool_2930");
		
		URaft_Anim_BP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Raft_Anim_BP_AnimGraphNode_BlendListByBool_2930_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Raft_Anim_BP.Raft_Anim_BP_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URaft_Anim_BP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Raft_Anim_BP.Raft_Anim_BP_C.BlueprintUpdateAnimation");
		
		URaft_Anim_BP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Raft_Anim_BP.Raft_Anim_BP_C.ExecuteUbergraph_Raft_Anim_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URaft_Anim_BP_C::ExecuteUbergraph_Raft_Anim_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Raft_Anim_BP.Raft_Anim_BP_C.ExecuteUbergraph_Raft_Anim_BP");
		
		URaft_Anim_BP_C_ExecuteUbergraph_Raft_Anim_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URaft_Anim_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URaft_Anim_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Raft_Anim_BP.Raft_Anim_BP_C");
		return ptr;
	}

}


