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
	 * 		Name   -> Function DinoAttackState_Spindles_MinigunModeDeactivate.DinoAttackState_Spindles_MinigunModeDeactivate_C.OnEndEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UDinoAttackState_Spindles_MinigunModeDeactivate_C::OnEndEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunModeDeactivate.DinoAttackState_Spindles_MinigunModeDeactivate_C.OnEndEvent");
		
		UDinoAttackState_Spindles_MinigunModeDeactivate_C_OnEndEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoAttackState_Spindles_MinigunModeDeactivate.DinoAttackState_Spindles_MinigunModeDeactivate_C.BPCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UDinoAttackState_Spindles_MinigunModeDeactivate_C::BPCanAttack(float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunModeDeactivate.DinoAttackState_Spindles_MinigunModeDeactivate_C.BPCanAttack");
		
		UDinoAttackState_Spindles_MinigunModeDeactivate_C_BPCanAttack_Params params {};
		params.Distance = Distance;
		params.attackRangeOffset = attackRangeOffset;
		params.OtherTarget = OtherTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoAttackState_Spindles_MinigunModeDeactivate.DinoAttackState_Spindles_MinigunModeDeactivate_C.OnBeginEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalAIState*                              InParentState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackState_Spindles_MinigunModeDeactivate_C::OnBeginEvent(class UPrimalAIState* InParentState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunModeDeactivate.DinoAttackState_Spindles_MinigunModeDeactivate_C.OnBeginEvent");
		
		UDinoAttackState_Spindles_MinigunModeDeactivate_C_OnBeginEvent_Params params {};
		params.InParentState = InParentState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoAttackState_Spindles_MinigunModeDeactivate.DinoAttackState_Spindles_MinigunModeDeactivate_C.ExecuteUbergraph_DinoAttackState_Spindles_MinigunModeDeactivate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackState_Spindles_MinigunModeDeactivate_C::ExecuteUbergraph_DinoAttackState_Spindles_MinigunModeDeactivate(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunModeDeactivate.DinoAttackState_Spindles_MinigunModeDeactivate_C.ExecuteUbergraph_DinoAttackState_Spindles_MinigunModeDeactivate");
		
		UDinoAttackState_Spindles_MinigunModeDeactivate_C_ExecuteUbergraph_DinoAttackState_Spindles_MinigunModeDeactivate_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoAttackState_Spindles_MinigunModeDeactivate_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoAttackState_Spindles_MinigunModeDeactivate_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackState_Spindles_MinigunModeDeactivate.DinoAttackState_Spindles_MinigunModeDeactivate_C");
		return ptr;
	}

}


