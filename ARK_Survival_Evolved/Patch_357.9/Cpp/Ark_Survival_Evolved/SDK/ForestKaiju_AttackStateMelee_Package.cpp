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
	 * 		Name   -> Function ForestKaiju_AttackStateMelee.ForestKaiju_AttackStateMelee_C.OnEndEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UForestKaiju_AttackStateMelee_C::OnEndEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_AttackStateMelee.ForestKaiju_AttackStateMelee_C.OnEndEvent");
		
		UForestKaiju_AttackStateMelee_C_OnEndEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function ForestKaiju_AttackStateMelee.ForestKaiju_AttackStateMelee_C.ExecuteUbergraph_ForestKaiju_AttackStateMelee
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UForestKaiju_AttackStateMelee_C::ExecuteUbergraph_ForestKaiju_AttackStateMelee(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ForestKaiju_AttackStateMelee.ForestKaiju_AttackStateMelee_C.ExecuteUbergraph_ForestKaiju_AttackStateMelee");
		
		UForestKaiju_AttackStateMelee_C_ExecuteUbergraph_ForestKaiju_AttackStateMelee_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UForestKaiju_AttackStateMelee_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UForestKaiju_AttackStateMelee_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ForestKaiju_AttackStateMelee.ForestKaiju_AttackStateMelee_C");
		return ptr;
	}

}


