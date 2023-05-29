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
	 * 		Name   -> Function DinoAttackState_GasBagsExhaleAttack.DinoAttackState_GasBagsExhaleAttack_C.BPOnAttackStart
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackState_GasBagsExhaleAttack_C::BPOnAttackStart(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_GasBagsExhaleAttack.DinoAttackState_GasBagsExhaleAttack_C.BPOnAttackStart");
		
		UDinoAttackState_GasBagsExhaleAttack_C_BPOnAttackStart_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoAttackState_GasBagsExhaleAttack.DinoAttackState_GasBagsExhaleAttack_C.BPCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UDinoAttackState_GasBagsExhaleAttack_C::BPCanAttack(float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_GasBagsExhaleAttack.DinoAttackState_GasBagsExhaleAttack_C.BPCanAttack");
		
		UDinoAttackState_GasBagsExhaleAttack_C_BPCanAttack_Params params {};
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
	 * 		Name   -> Function DinoAttackState_GasBagsExhaleAttack.DinoAttackState_GasBagsExhaleAttack_C.OnCanUseStateEvent
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UDinoAttackState_GasBagsExhaleAttack_C::OnCanUseStateEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_GasBagsExhaleAttack.DinoAttackState_GasBagsExhaleAttack_C.OnCanUseStateEvent");
		
		UDinoAttackState_GasBagsExhaleAttack_C_OnCanUseStateEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoAttackState_GasBagsExhaleAttack.DinoAttackState_GasBagsExhaleAttack_C.GetInflationAndStaminaCost
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              CurrentInflationPercent                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CurrentStamina                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CurrentStaminaCost                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackState_GasBagsExhaleAttack_C::GetInflationAndStaminaCost(float* CurrentInflationPercent, float* CurrentStamina, float* CurrentStaminaCost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_GasBagsExhaleAttack.DinoAttackState_GasBagsExhaleAttack_C.GetInflationAndStaminaCost");
		
		UDinoAttackState_GasBagsExhaleAttack_C_GetInflationAndStaminaCost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentInflationPercent != nullptr)
			*CurrentInflationPercent = params.CurrentInflationPercent;
		if (CurrentStamina != nullptr)
			*CurrentStamina = params.CurrentStamina;
		if (CurrentStaminaCost != nullptr)
			*CurrentStaminaCost = params.CurrentStaminaCost;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoAttackState_GasBagsExhaleAttack.DinoAttackState_GasBagsExhaleAttack_C.ExecuteUbergraph_DinoAttackState_GasBagsExhaleAttack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackState_GasBagsExhaleAttack_C::ExecuteUbergraph_DinoAttackState_GasBagsExhaleAttack(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_GasBagsExhaleAttack.DinoAttackState_GasBagsExhaleAttack_C.ExecuteUbergraph_DinoAttackState_GasBagsExhaleAttack");
		
		UDinoAttackState_GasBagsExhaleAttack_C_ExecuteUbergraph_DinoAttackState_GasBagsExhaleAttack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoAttackState_GasBagsExhaleAttack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoAttackState_GasBagsExhaleAttack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackState_GasBagsExhaleAttack.DinoAttackState_GasBagsExhaleAttack_C");
		return ptr;
	}

}


