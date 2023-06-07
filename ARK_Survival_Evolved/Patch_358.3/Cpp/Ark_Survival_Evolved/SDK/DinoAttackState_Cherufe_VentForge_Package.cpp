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
	 * 		Name   -> Function DinoAttackState_Cherufe_VentForge.DinoAttackState_Cherufe_VentForge_C.BPOnAttackStart
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackState_Cherufe_VentForge_C::BPOnAttackStart(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_Cherufe_VentForge.DinoAttackState_Cherufe_VentForge_C.BPOnAttackStart");
		
		UDinoAttackState_Cherufe_VentForge_C_BPOnAttackStart_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoAttackState_Cherufe_VentForge.DinoAttackState_Cherufe_VentForge_C.BPCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UDinoAttackState_Cherufe_VentForge_C::BPCanAttack(float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_Cherufe_VentForge.DinoAttackState_Cherufe_VentForge_C.BPCanAttack");
		
		UDinoAttackState_Cherufe_VentForge_C_BPCanAttack_Params params {};
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
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoAttackState_Cherufe_VentForge.DinoAttackState_Cherufe_VentForge_C.OnCanUseStateEvent
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UDinoAttackState_Cherufe_VentForge_C::OnCanUseStateEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_Cherufe_VentForge.DinoAttackState_Cherufe_VentForge_C.OnCanUseStateEvent");
		
		UDinoAttackState_Cherufe_VentForge_C_OnCanUseStateEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoAttackState_Cherufe_VentForge.DinoAttackState_Cherufe_VentForge_C.GetInflationAndStaminaCost
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              CurrentForgeChargePercent                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CurrentStamina                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CurrentStaminaCost                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackState_Cherufe_VentForge_C::GetInflationAndStaminaCost(float* CurrentForgeChargePercent, float* CurrentStamina, float* CurrentStaminaCost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_Cherufe_VentForge.DinoAttackState_Cherufe_VentForge_C.GetInflationAndStaminaCost");
		
		UDinoAttackState_Cherufe_VentForge_C_GetInflationAndStaminaCost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentForgeChargePercent != nullptr)
			*CurrentForgeChargePercent = params.CurrentForgeChargePercent;
		if (CurrentStamina != nullptr)
			*CurrentStamina = params.CurrentStamina;
		if (CurrentStaminaCost != nullptr)
			*CurrentStaminaCost = params.CurrentStaminaCost;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoAttackState_Cherufe_VentForge.DinoAttackState_Cherufe_VentForge_C.ExecuteUbergraph_DinoAttackState_Cherufe_VentForge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackState_Cherufe_VentForge_C::ExecuteUbergraph_DinoAttackState_Cherufe_VentForge(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_Cherufe_VentForge.DinoAttackState_Cherufe_VentForge_C.ExecuteUbergraph_DinoAttackState_Cherufe_VentForge");
		
		UDinoAttackState_Cherufe_VentForge_C_ExecuteUbergraph_DinoAttackState_Cherufe_VentForge_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoAttackState_Cherufe_VentForge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoAttackState_Cherufe_VentForge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackState_Cherufe_VentForge.DinoAttackState_Cherufe_VentForge_C");
		return ptr;
	}

}


