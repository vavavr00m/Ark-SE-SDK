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
	 * 		Name   -> Function DinoAttackState_CherufeChargeHeat.DinoAttackState_CherufeChargeHeat_C.BPCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UDinoAttackState_CherufeChargeHeat_C::BPCanAttack(float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_CherufeChargeHeat.DinoAttackState_CherufeChargeHeat_C.BPCanAttack");
		
		UDinoAttackState_CherufeChargeHeat_C_BPCanAttack_Params params {};
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
	 * 		Name   -> Function DinoAttackState_CherufeChargeHeat.DinoAttackState_CherufeChargeHeat_C.ShouldSkipRangeCheckEvent
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UDinoAttackState_CherufeChargeHeat_C::ShouldSkipRangeCheckEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_CherufeChargeHeat.DinoAttackState_CherufeChargeHeat_C.ShouldSkipRangeCheckEvent");
		
		UDinoAttackState_CherufeChargeHeat_C_ShouldSkipRangeCheckEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoAttackState_CherufeChargeHeat.DinoAttackState_CherufeChargeHeat_C.BPOverrideAttackWeight
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              inputWeight                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float UDinoAttackState_CherufeChargeHeat_C::BPOverrideAttackWeight(float inputWeight, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_CherufeChargeHeat.DinoAttackState_CherufeChargeHeat_C.BPOverrideAttackWeight");
		
		UDinoAttackState_CherufeChargeHeat_C_BPOverrideAttackWeight_Params params {};
		params.inputWeight = inputWeight;
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
	 * 		Name   -> Function DinoAttackState_CherufeChargeHeat.DinoAttackState_CherufeChargeHeat_C.BPOnClearAttackState
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UDinoAttackState_CherufeChargeHeat_C::BPOnClearAttackState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_CherufeChargeHeat.DinoAttackState_CherufeChargeHeat_C.BPOnClearAttackState");
		
		UDinoAttackState_CherufeChargeHeat_C_BPOnClearAttackState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoAttackState_CherufeChargeHeat.DinoAttackState_CherufeChargeHeat_C.EndAnimationStateEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ENetRole                                           Role                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackState_CherufeChargeHeat_C::EndAnimationStateEvent(const class FName& CustomEventName, ENetRole Role)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_CherufeChargeHeat.DinoAttackState_CherufeChargeHeat_C.EndAnimationStateEvent");
		
		UDinoAttackState_CherufeChargeHeat_C_EndAnimationStateEvent_Params params {};
		params.CustomEventName = CustomEventName;
		params.Role = Role;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoAttackState_CherufeChargeHeat.DinoAttackState_CherufeChargeHeat_C.BPOnAttackEnd
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackState_CherufeChargeHeat_C::BPOnAttackEnd(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_CherufeChargeHeat.DinoAttackState_CherufeChargeHeat_C.BPOnAttackEnd");
		
		UDinoAttackState_CherufeChargeHeat_C_BPOnAttackEnd_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoAttackState_CherufeChargeHeat.DinoAttackState_CherufeChargeHeat_C.BPOnAttackStart
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackState_CherufeChargeHeat_C::BPOnAttackStart(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_CherufeChargeHeat.DinoAttackState_CherufeChargeHeat_C.BPOnAttackStart");
		
		UDinoAttackState_CherufeChargeHeat_C_BPOnAttackStart_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoAttackState_CherufeChargeHeat.DinoAttackState_CherufeChargeHeat_C.ExecuteUbergraph_DinoAttackState_CherufeChargeHeat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackState_CherufeChargeHeat_C::ExecuteUbergraph_DinoAttackState_CherufeChargeHeat(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_CherufeChargeHeat.DinoAttackState_CherufeChargeHeat_C.ExecuteUbergraph_DinoAttackState_CherufeChargeHeat");
		
		UDinoAttackState_CherufeChargeHeat_C_ExecuteUbergraph_DinoAttackState_CherufeChargeHeat_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoAttackState_CherufeChargeHeat_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoAttackState_CherufeChargeHeat_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackState_CherufeChargeHeat.DinoAttackState_CherufeChargeHeat_C");
		return ptr;
	}

}


