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
	 * 		Name   -> Function Buff_Base_AoE_WithDelay.Buff_Base_AoE_WithDelay_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Base_AoE_WithDelay_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Base_AoE_WithDelay.Buff_Base_AoE_WithDelay_C.UserConstructionScript");
		
		ABuff_Base_AoE_WithDelay_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Base_AoE_WithDelay.Buff_Base_AoE_WithDelay_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Base_AoE_WithDelay_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Base_AoE_WithDelay.Buff_Base_AoE_WithDelay_C.ReceiveBeginPlay");
		
		ABuff_Base_AoE_WithDelay_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Base_AoE_WithDelay.Buff_Base_AoE_WithDelay_C.SetFinalAoE
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Base_AoE_WithDelay_C::SetFinalAoE()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Base_AoE_WithDelay.Buff_Base_AoE_WithDelay_C.SetFinalAoE");
		
		ABuff_Base_AoE_WithDelay_C_SetFinalAoE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_Base_AoE_WithDelay.Buff_Base_AoE_WithDelay_C.ExecuteUbergraph_Buff_Base_AoE_WithDelay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Base_AoE_WithDelay_C::ExecuteUbergraph_Buff_Base_AoE_WithDelay(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Base_AoE_WithDelay.Buff_Base_AoE_WithDelay_C.ExecuteUbergraph_Buff_Base_AoE_WithDelay");
		
		ABuff_Base_AoE_WithDelay_C_ExecuteUbergraph_Buff_Base_AoE_WithDelay_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_Base_AoE_WithDelay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_Base_AoE_WithDelay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Base_AoE_WithDelay.Buff_Base_AoE_WithDelay_C");
		return ptr;
	}

}


