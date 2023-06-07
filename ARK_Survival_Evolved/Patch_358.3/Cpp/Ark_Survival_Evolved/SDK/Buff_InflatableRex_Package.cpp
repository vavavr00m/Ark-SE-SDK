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
	 * 		Name   -> Function Buff_InflatableRex.Buff_InflatableRex_C.BPGetPlayerFootStepSound
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class USoundCue* ABuff_InflatableRex_C::BPGetPlayerFootStepSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_InflatableRex.Buff_InflatableRex_C.BPGetPlayerFootStepSound");
		
		ABuff_InflatableRex_C_BPGetPlayerFootStepSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_InflatableRex.Buff_InflatableRex_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_InflatableRex_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_InflatableRex.Buff_InflatableRex_C.UserConstructionScript");
		
		ABuff_InflatableRex_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_InflatableRex.Buff_InflatableRex_C.ExecuteUbergraph_Buff_InflatableRex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_InflatableRex_C::ExecuteUbergraph_Buff_InflatableRex(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_InflatableRex.Buff_InflatableRex_C.ExecuteUbergraph_Buff_InflatableRex");
		
		ABuff_InflatableRex_C_ExecuteUbergraph_Buff_InflatableRex_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_InflatableRex_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_InflatableRex_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_InflatableRex.Buff_InflatableRex_C");
		return ptr;
	}

}


