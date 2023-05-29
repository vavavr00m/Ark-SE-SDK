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
	 * 		Name   -> Function Buff_Shapeshifter_AOEGroundPoundTarget.Buff_Shapeshifter_AOEGroundPoundTarget_C.BPPreventflight
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABuff_Shapeshifter_AOEGroundPoundTarget_C::BPPreventflight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Shapeshifter_AOEGroundPoundTarget.Buff_Shapeshifter_AOEGroundPoundTarget_C.BPPreventflight");
		
		ABuff_Shapeshifter_AOEGroundPoundTarget_C_BPPreventflight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Shapeshifter_AOEGroundPoundTarget.Buff_Shapeshifter_AOEGroundPoundTarget_C.PreventJump
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABuff_Shapeshifter_AOEGroundPoundTarget_C::PreventJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Shapeshifter_AOEGroundPoundTarget.Buff_Shapeshifter_AOEGroundPoundTarget_C.PreventJump");
		
		ABuff_Shapeshifter_AOEGroundPoundTarget_C_PreventJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Shapeshifter_AOEGroundPoundTarget.Buff_Shapeshifter_AOEGroundPoundTarget_C.BPPreventRunning
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABuff_Shapeshifter_AOEGroundPoundTarget_C::BPPreventRunning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Shapeshifter_AOEGroundPoundTarget.Buff_Shapeshifter_AOEGroundPoundTarget_C.BPPreventRunning");
		
		ABuff_Shapeshifter_AOEGroundPoundTarget_C_BPPreventRunning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Shapeshifter_AOEGroundPoundTarget.Buff_Shapeshifter_AOEGroundPoundTarget_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Shapeshifter_AOEGroundPoundTarget_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Shapeshifter_AOEGroundPoundTarget.Buff_Shapeshifter_AOEGroundPoundTarget_C.UserConstructionScript");
		
		ABuff_Shapeshifter_AOEGroundPoundTarget_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Shapeshifter_AOEGroundPoundTarget.Buff_Shapeshifter_AOEGroundPoundTarget_C.ExecuteUbergraph_Buff_Shapeshifter_AOEGroundPoundTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Shapeshifter_AOEGroundPoundTarget_C::ExecuteUbergraph_Buff_Shapeshifter_AOEGroundPoundTarget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Shapeshifter_AOEGroundPoundTarget.Buff_Shapeshifter_AOEGroundPoundTarget_C.ExecuteUbergraph_Buff_Shapeshifter_AOEGroundPoundTarget");
		
		ABuff_Shapeshifter_AOEGroundPoundTarget_C_ExecuteUbergraph_Buff_Shapeshifter_AOEGroundPoundTarget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_Shapeshifter_AOEGroundPoundTarget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_Shapeshifter_AOEGroundPoundTarget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Shapeshifter_AOEGroundPoundTarget.Buff_Shapeshifter_AOEGroundPoundTarget_C");
		return ptr;
	}

}


