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
	 * 		Name   -> Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.IsDebugMode
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackState_Spindles_MinigunBase_C::IsDebugMode(bool* ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.IsDebugMode");
		
		UDinoAttackState_Spindles_MinigunBase_C_IsDebugMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.GetDamageForSpine
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APrimalCharacter*                            Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Damage                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackState_Spindles_MinigunBase_C::GetDamageForSpine(class APrimalCharacter* Target, float* Damage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.GetDamageForSpine");
		
		UDinoAttackState_Spindles_MinigunBase_C_GetDamageForSpine_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Damage != nullptr)
			*Damage = params.Damage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.FireSpine
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UDinoAttackState_Spindles_MinigunBase_C::FireSpine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.FireSpine");
		
		UDinoAttackState_Spindles_MinigunBase_C_FireSpine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.Get Spine Start and End Position
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Start                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     End                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     VFXStart                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     VFXEnd                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackState_Spindles_MinigunBase_C::GetSpineStartandEndPosition(struct FVector* Start, struct FVector* End, struct FVector* VFXStart, struct FVector* VFXEnd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.Get Spine Start and End Position");
		
		UDinoAttackState_Spindles_MinigunBase_C_GetSpineStartandEndPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Start != nullptr)
			*Start = params.Start;
		if (End != nullptr)
			*End = params.End;
		if (VFXStart != nullptr)
			*VFXStart = params.VFXStart;
		if (VFXEnd != nullptr)
			*VFXEnd = params.VFXEnd;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.GetAttackIndex
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackState_Spindles_MinigunBase_C::GetAttackIndex(int32_t* AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.GetAttackIndex");
		
		UDinoAttackState_Spindles_MinigunBase_C_GetAttackIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AttackIndex != nullptr)
			*AttackIndex = params.AttackIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.BPShouldEndAttack
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	bool UDinoAttackState_Spindles_MinigunBase_C::BPShouldEndAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.BPShouldEndAttack");
		
		UDinoAttackState_Spindles_MinigunBase_C_BPShouldEndAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.BPCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UDinoAttackState_Spindles_MinigunBase_C::BPCanAttack(float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.BPCanAttack");
		
		UDinoAttackState_Spindles_MinigunBase_C_BPCanAttack_Params params {};
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
	 * 		Name   -> Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.OnEndEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UDinoAttackState_Spindles_MinigunBase_C::OnEndEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.OnEndEvent");
		
		UDinoAttackState_Spindles_MinigunBase_C_OnEndEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.OnBeginEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalAIState*                              InParentState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackState_Spindles_MinigunBase_C::OnBeginEvent(class UPrimalAIState* InParentState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.OnBeginEvent");
		
		UDinoAttackState_Spindles_MinigunBase_C_OnBeginEvent_Params params {};
		params.InParentState = InParentState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.OnTickEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackState_Spindles_MinigunBase_C::OnTickEvent(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.OnTickEvent");
		
		UDinoAttackState_Spindles_MinigunBase_C_OnTickEvent_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.PrintDPS
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UDinoAttackState_Spindles_MinigunBase_C::PrintDPS()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.PrintDPS");
		
		UDinoAttackState_Spindles_MinigunBase_C_PrintDPS_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.ExecuteUbergraph_DinoAttackState_Spindles_MinigunBase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackState_Spindles_MinigunBase_C::ExecuteUbergraph_DinoAttackState_Spindles_MinigunBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C.ExecuteUbergraph_DinoAttackState_Spindles_MinigunBase");
		
		UDinoAttackState_Spindles_MinigunBase_C_ExecuteUbergraph_DinoAttackState_Spindles_MinigunBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoAttackState_Spindles_MinigunBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoAttackState_Spindles_MinigunBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackState_Spindles_MinigunBase.DinoAttackState_Spindles_MinigunBase_C");
		return ptr;
	}

}


