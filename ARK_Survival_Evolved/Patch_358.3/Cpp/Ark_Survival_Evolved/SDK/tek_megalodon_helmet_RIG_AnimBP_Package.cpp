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
	 * 		Name   -> Function tek_megalodon_helmet_RIG_AnimBP.tek_megalodon_helmet_RIG_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_tek_megalodon_helmet_RIG_AnimBP_AnimGraphNode_BlendListByBool_2920
	 * 		Flags  -> (BlueprintEvent)
	 */
	void Utek_megalodon_helmet_RIG_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_tek_megalodon_helmet_RIG_AnimBP_AnimGraphNode_BlendListByBool_2920()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function tek_megalodon_helmet_RIG_AnimBP.tek_megalodon_helmet_RIG_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_tek_megalodon_helmet_RIG_AnimBP_AnimGraphNode_BlendListByBool_2920");
		
		Utek_megalodon_helmet_RIG_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_tek_megalodon_helmet_RIG_AnimBP_AnimGraphNode_BlendListByBool_2920_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function tek_megalodon_helmet_RIG_AnimBP.tek_megalodon_helmet_RIG_AnimBP_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void Utek_megalodon_helmet_RIG_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function tek_megalodon_helmet_RIG_AnimBP.tek_megalodon_helmet_RIG_AnimBP_C.BlueprintUpdateAnimation");
		
		Utek_megalodon_helmet_RIG_AnimBP_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function tek_megalodon_helmet_RIG_AnimBP.tek_megalodon_helmet_RIG_AnimBP_C.ExecuteUbergraph_tek_megalodon_helmet_RIG_AnimBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void Utek_megalodon_helmet_RIG_AnimBP_C::ExecuteUbergraph_tek_megalodon_helmet_RIG_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function tek_megalodon_helmet_RIG_AnimBP.tek_megalodon_helmet_RIG_AnimBP_C.ExecuteUbergraph_tek_megalodon_helmet_RIG_AnimBP");
		
		Utek_megalodon_helmet_RIG_AnimBP_C_ExecuteUbergraph_tek_megalodon_helmet_RIG_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction Utek_megalodon_helmet_RIG_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Utek_megalodon_helmet_RIG_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass tek_megalodon_helmet_RIG_AnimBP.tek_megalodon_helmet_RIG_AnimBP_C");
		return ptr;
	}

}


