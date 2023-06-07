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
	 * 		Name   -> Function Buff_WyvernFire_OnFire_Ember.Buff_WyvernFire_OnFire_Ember_C.CalcDamageMultiplier
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_WyvernFire_OnFire_Ember_C::CalcDamageMultiplier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_WyvernFire_OnFire_Ember.Buff_WyvernFire_OnFire_Ember_C.CalcDamageMultiplier");
		
		ABuff_WyvernFire_OnFire_Ember_C_CalcDamageMultiplier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_WyvernFire_OnFire_Ember.Buff_WyvernFire_OnFire_Ember_C.BPResetBuffStart
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_WyvernFire_OnFire_Ember_C::BPResetBuffStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_WyvernFire_OnFire_Ember.Buff_WyvernFire_OnFire_Ember_C.BPResetBuffStart");
		
		ABuff_WyvernFire_OnFire_Ember_C_BPResetBuffStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_WyvernFire_OnFire_Ember.Buff_WyvernFire_OnFire_Ember_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_WyvernFire_OnFire_Ember_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_WyvernFire_OnFire_Ember.Buff_WyvernFire_OnFire_Ember_C.ReceiveBeginPlay");
		
		ABuff_WyvernFire_OnFire_Ember_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_WyvernFire_OnFire_Ember.Buff_WyvernFire_OnFire_Ember_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_WyvernFire_OnFire_Ember_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_WyvernFire_OnFire_Ember.Buff_WyvernFire_OnFire_Ember_C.UserConstructionScript");
		
		ABuff_WyvernFire_OnFire_Ember_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_WyvernFire_OnFire_Ember.Buff_WyvernFire_OnFire_Ember_C.ExecuteUbergraph_Buff_WyvernFire_OnFire_Ember
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_WyvernFire_OnFire_Ember_C::ExecuteUbergraph_Buff_WyvernFire_OnFire_Ember(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_WyvernFire_OnFire_Ember.Buff_WyvernFire_OnFire_Ember_C.ExecuteUbergraph_Buff_WyvernFire_OnFire_Ember");
		
		ABuff_WyvernFire_OnFire_Ember_C_ExecuteUbergraph_Buff_WyvernFire_OnFire_Ember_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_WyvernFire_OnFire_Ember_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_WyvernFire_OnFire_Ember_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_WyvernFire_OnFire_Ember.Buff_WyvernFire_OnFire_Ember_C");
		return ptr;
	}

}


