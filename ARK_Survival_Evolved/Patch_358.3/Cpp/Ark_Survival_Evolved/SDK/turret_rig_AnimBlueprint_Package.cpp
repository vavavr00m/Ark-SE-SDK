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
	 * 		Name   -> Function turret_rig_AnimBlueprint.turret_rig_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_turret_rig_AnimBlueprint_AnimGraphNode_ModifyBone_636
	 * 		Flags  -> (BlueprintEvent)
	 */
	void Uturret_rig_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_turret_rig_AnimBlueprint_AnimGraphNode_ModifyBone_636()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function turret_rig_AnimBlueprint.turret_rig_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_turret_rig_AnimBlueprint_AnimGraphNode_ModifyBone_636");
		
		Uturret_rig_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_turret_rig_AnimBlueprint_AnimGraphNode_ModifyBone_636_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function turret_rig_AnimBlueprint.turret_rig_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_turret_rig_AnimBlueprint_AnimGraphNode_ModifyBone_635
	 * 		Flags  -> (BlueprintEvent)
	 */
	void Uturret_rig_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_turret_rig_AnimBlueprint_AnimGraphNode_ModifyBone_635()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function turret_rig_AnimBlueprint.turret_rig_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_turret_rig_AnimBlueprint_AnimGraphNode_ModifyBone_635");
		
		Uturret_rig_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_turret_rig_AnimBlueprint_AnimGraphNode_ModifyBone_635_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function turret_rig_AnimBlueprint.turret_rig_AnimBlueprint_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void Uturret_rig_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function turret_rig_AnimBlueprint.turret_rig_AnimBlueprint_C.BlueprintUpdateAnimation");
		
		Uturret_rig_AnimBlueprint_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function turret_rig_AnimBlueprint.turret_rig_AnimBlueprint_C.ExecuteUbergraph_turret_rig_AnimBlueprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void Uturret_rig_AnimBlueprint_C::ExecuteUbergraph_turret_rig_AnimBlueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function turret_rig_AnimBlueprint.turret_rig_AnimBlueprint_C.ExecuteUbergraph_turret_rig_AnimBlueprint");
		
		Uturret_rig_AnimBlueprint_C_ExecuteUbergraph_turret_rig_AnimBlueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction Uturret_rig_AnimBlueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Uturret_rig_AnimBlueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass turret_rig_AnimBlueprint.turret_rig_AnimBlueprint_C");
		return ptr;
	}

}


