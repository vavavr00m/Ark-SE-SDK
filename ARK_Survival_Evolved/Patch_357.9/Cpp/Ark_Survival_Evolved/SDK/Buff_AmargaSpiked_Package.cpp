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
	 * 		Name   -> Function Buff_AmargaSpiked.Buff_AmargaSpiked_C.ClearApplyArmorDebuff
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_AmargaSpiked_C::ClearApplyArmorDebuff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_AmargaSpiked.Buff_AmargaSpiked_C.ClearApplyArmorDebuff");
		
		ABuff_AmargaSpiked_C_ClearApplyArmorDebuff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_AmargaSpiked.Buff_AmargaSpiked_C.InitBuff
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_AmargaSpiked_C::InitBuff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_AmargaSpiked.Buff_AmargaSpiked_C.InitBuff");
		
		ABuff_AmargaSpiked_C_InitBuff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_AmargaSpiked.Buff_AmargaSpiked_C.ApplyArmorDebuff
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_AmargaSpiked_C::ApplyArmorDebuff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_AmargaSpiked.Buff_AmargaSpiked_C.ApplyArmorDebuff");
		
		ABuff_AmargaSpiked_C_ApplyArmorDebuff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_AmargaSpiked.Buff_AmargaSpiked_C.TempCheck
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_AmargaSpiked_C::TempCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_AmargaSpiked.Buff_AmargaSpiked_C.TempCheck");
		
		ABuff_AmargaSpiked_C_TempCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_AmargaSpiked.Buff_AmargaSpiked_C.UpdateTemperatureCounter
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_AmargaSpiked_C::UpdateTemperatureCounter(int32_t amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_AmargaSpiked.Buff_AmargaSpiked_C.UpdateTemperatureCounter");
		
		ABuff_AmargaSpiked_C_UpdateTemperatureCounter_Params params {};
		params.amount = amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_AmargaSpiked.Buff_AmargaSpiked_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_AmargaSpiked_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_AmargaSpiked.Buff_AmargaSpiked_C.UserConstructionScript");
		
		ABuff_AmargaSpiked_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_AmargaSpiked.Buff_AmargaSpiked_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_AmargaSpiked_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_AmargaSpiked.Buff_AmargaSpiked_C.ReceiveBeginPlay");
		
		ABuff_AmargaSpiked_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Buff_AmargaSpiked.Buff_AmargaSpiked_C.ExecuteUbergraph_Buff_AmargaSpiked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_AmargaSpiked_C::ExecuteUbergraph_Buff_AmargaSpiked(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_AmargaSpiked.Buff_AmargaSpiked_C.ExecuteUbergraph_Buff_AmargaSpiked");
		
		ABuff_AmargaSpiked_C_ExecuteUbergraph_Buff_AmargaSpiked_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_AmargaSpiked_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_AmargaSpiked_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_AmargaSpiked.Buff_AmargaSpiked_C");
		return ptr;
	}

}


