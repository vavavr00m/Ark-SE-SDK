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
	 * 		Name   -> Function ForestKaiju_AttackState_AttackRoot.ForestKaiju_AttackState_AttackRoot_C.OnEndEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UForestKaiju_AttackState_AttackRoot_C::OnEndEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_AttackState_AttackRoot.ForestKaiju_AttackState_AttackRoot_C.OnEndEvent");
		
		UForestKaiju_AttackState_AttackRoot_C_OnEndEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ForestKaiju_AttackState_AttackRoot.ForestKaiju_AttackState_AttackRoot_C.OnBeginEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalAIState*                              InParentState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UForestKaiju_AttackState_AttackRoot_C::OnBeginEvent(class UPrimalAIState* InParentState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_AttackState_AttackRoot.ForestKaiju_AttackState_AttackRoot_C.OnBeginEvent");
		
		UForestKaiju_AttackState_AttackRoot_C_OnBeginEvent_Params params {};
		params.InParentState = InParentState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ForestKaiju_AttackState_AttackRoot.ForestKaiju_AttackState_AttackRoot_C.InitVars
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UForestKaiju_AttackState_AttackRoot_C::InitVars()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_AttackState_AttackRoot.ForestKaiju_AttackState_AttackRoot_C.InitVars");
		
		UForestKaiju_AttackState_AttackRoot_C_InitVars_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ForestKaiju_AttackState_AttackRoot.ForestKaiju_AttackState_AttackRoot_C.BPOnClearAttackState
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UForestKaiju_AttackState_AttackRoot_C::BPOnClearAttackState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_AttackState_AttackRoot.ForestKaiju_AttackState_AttackRoot_C.BPOnClearAttackState");
		
		UForestKaiju_AttackState_AttackRoot_C_BPOnClearAttackState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ForestKaiju_AttackState_AttackRoot.ForestKaiju_AttackState_AttackRoot_C.BPShouldEndAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UForestKaiju_AttackState_AttackRoot_C::BPShouldEndAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_AttackState_AttackRoot.ForestKaiju_AttackState_AttackRoot_C.BPShouldEndAttack");
		
		UForestKaiju_AttackState_AttackRoot_C_BPShouldEndAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ForestKaiju_AttackState_AttackRoot.ForestKaiju_AttackState_AttackRoot_C.OnTickEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UForestKaiju_AttackState_AttackRoot_C::OnTickEvent(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_AttackState_AttackRoot.ForestKaiju_AttackState_AttackRoot_C.OnTickEvent");
		
		UForestKaiju_AttackState_AttackRoot_C_OnTickEvent_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ForestKaiju_AttackState_AttackRoot.ForestKaiju_AttackState_AttackRoot_C.BPOnAttackStart
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UForestKaiju_AttackState_AttackRoot_C::BPOnAttackStart(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_AttackState_AttackRoot.ForestKaiju_AttackState_AttackRoot_C.BPOnAttackStart");
		
		UForestKaiju_AttackState_AttackRoot_C_BPOnAttackStart_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ForestKaiju_AttackState_AttackRoot.ForestKaiju_AttackState_AttackRoot_C.ExecuteRoot
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void UForestKaiju_AttackState_AttackRoot_C::ExecuteRoot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_AttackState_AttackRoot.ForestKaiju_AttackState_AttackRoot_C.ExecuteRoot");
		
		UForestKaiju_AttackState_AttackRoot_C_ExecuteRoot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ForestKaiju_AttackState_AttackRoot.ForestKaiju_AttackState_AttackRoot_C.Delayed_ExecuteRoot
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UForestKaiju_AttackState_AttackRoot_C::Delayed_ExecuteRoot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_AttackState_AttackRoot.ForestKaiju_AttackState_AttackRoot_C.Delayed_ExecuteRoot");
		
		UForestKaiju_AttackState_AttackRoot_C_Delayed_ExecuteRoot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ForestKaiju_AttackState_AttackRoot.ForestKaiju_AttackState_AttackRoot_C.EndState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UForestKaiju_AttackState_AttackRoot_C::EndState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_AttackState_AttackRoot.ForestKaiju_AttackState_AttackRoot_C.EndState");
		
		UForestKaiju_AttackState_AttackRoot_C_EndState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ForestKaiju_AttackState_AttackRoot.ForestKaiju_AttackState_AttackRoot_C.ExecuteUbergraph_ForestKaiju_AttackState_AttackRoot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UForestKaiju_AttackState_AttackRoot_C::ExecuteUbergraph_ForestKaiju_AttackState_AttackRoot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_AttackState_AttackRoot.ForestKaiju_AttackState_AttackRoot_C.ExecuteUbergraph_ForestKaiju_AttackState_AttackRoot");
		
		UForestKaiju_AttackState_AttackRoot_C_ExecuteUbergraph_ForestKaiju_AttackState_AttackRoot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UForestKaiju_AttackState_AttackRoot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UForestKaiju_AttackState_AttackRoot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ForestKaiju_AttackState_AttackRoot.ForestKaiju_AttackState_AttackRoot_C");
		return ptr;
	}

}


