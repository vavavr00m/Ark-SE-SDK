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
	 * 		Name   -> Function Tek_JumpPad_AnimBluePrint.Tek_JumpPad_AnimBluePrint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Tek_JumpPad_AnimBluePrint_AnimGraphNode_ModifyBone_932
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UTek_JumpPad_AnimBluePrint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Tek_JumpPad_AnimBluePrint_AnimGraphNode_ModifyBone_932()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tek_JumpPad_AnimBluePrint.Tek_JumpPad_AnimBluePrint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Tek_JumpPad_AnimBluePrint_AnimGraphNode_ModifyBone_932");
		
		UTek_JumpPad_AnimBluePrint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Tek_JumpPad_AnimBluePrint_AnimGraphNode_ModifyBone_932_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Tek_JumpPad_AnimBluePrint.Tek_JumpPad_AnimBluePrint_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTek_JumpPad_AnimBluePrint_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tek_JumpPad_AnimBluePrint.Tek_JumpPad_AnimBluePrint_C.BlueprintUpdateAnimation");
		
		UTek_JumpPad_AnimBluePrint_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Tek_JumpPad_AnimBluePrint.Tek_JumpPad_AnimBluePrint_C.ExecuteUbergraph_Tek_JumpPad_AnimBluePrint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTek_JumpPad_AnimBluePrint_C::ExecuteUbergraph_Tek_JumpPad_AnimBluePrint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tek_JumpPad_AnimBluePrint.Tek_JumpPad_AnimBluePrint_C.ExecuteUbergraph_Tek_JumpPad_AnimBluePrint");
		
		UTek_JumpPad_AnimBluePrint_C_ExecuteUbergraph_Tek_JumpPad_AnimBluePrint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTek_JumpPad_AnimBluePrint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTek_JumpPad_AnimBluePrint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Tek_JumpPad_AnimBluePrint.Tek_JumpPad_AnimBluePrint_C");
		return ptr;
	}

}


