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
	 * 		Name   -> Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.IsDebugMode
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackState_Spindles_MinigunAOE_C::IsDebugMode(bool* Ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.IsDebugMode");
		
		UDinoAttackState_Spindles_MinigunAOE_C_IsDebugMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ret != nullptr)
			*Ret = params.Ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.BPShouldEndAttack
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	bool UDinoAttackState_Spindles_MinigunAOE_C::BPShouldEndAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.BPShouldEndAttack");
		
		UDinoAttackState_Spindles_MinigunAOE_C_BPShouldEndAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.GetDamageForSpine
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Damage                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackState_Spindles_MinigunAOE_C::GetDamageForSpine(class APrimalCharacter* Target, float* Damage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.GetDamageForSpine");
		
		UDinoAttackState_Spindles_MinigunAOE_C_GetDamageForSpine_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Damage != nullptr)
			*Damage = params.Damage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.FireGuaranteedHitSpine
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UDinoAttackState_Spindles_MinigunAOE_C::FireGuaranteedHitSpine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.FireGuaranteedHitSpine");
		
		UDinoAttackState_Spindles_MinigunAOE_C_FireGuaranteedHitSpine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.BPCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UDinoAttackState_Spindles_MinigunAOE_C::BPCanAttack(float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.BPCanAttack");
		
		UDinoAttackState_Spindles_MinigunAOE_C_BPCanAttack_Params params {};
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
	 * 		Name   -> Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.OnEndEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UDinoAttackState_Spindles_MinigunAOE_C::OnEndEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.OnEndEvent");
		
		UDinoAttackState_Spindles_MinigunAOE_C_OnEndEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.OnBeginEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalAIState*                              InParentState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackState_Spindles_MinigunAOE_C::OnBeginEvent(class UPrimalAIState* InParentState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.OnBeginEvent");
		
		UDinoAttackState_Spindles_MinigunAOE_C_OnBeginEvent_Params params {};
		params.InParentState = InParentState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.Get Spine Start and End Position
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Start                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     End                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     VFXStart                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     VFXEnd                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackState_Spindles_MinigunAOE_C::GetSpineStartandEndPosition(struct FVector* Start, struct FVector* End, struct FVector* VFXStart, struct FVector* VFXEnd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.Get Spine Start and End Position");
		
		UDinoAttackState_Spindles_MinigunAOE_C_GetSpineStartandEndPosition_Params params {};
		
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.FireRandomSpines
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UDinoAttackState_Spindles_MinigunAOE_C::FireRandomSpines()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.FireRandomSpines");
		
		UDinoAttackState_Spindles_MinigunAOE_C_FireRandomSpines_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.FireGuaranteedSpines
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UDinoAttackState_Spindles_MinigunAOE_C::FireGuaranteedSpines()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.FireGuaranteedSpines");
		
		UDinoAttackState_Spindles_MinigunAOE_C_FireGuaranteedSpines_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.ExecuteUbergraph_DinoAttackState_Spindles_MinigunAOE
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackState_Spindles_MinigunAOE_C::ExecuteUbergraph_DinoAttackState_Spindles_MinigunAOE(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C.ExecuteUbergraph_DinoAttackState_Spindles_MinigunAOE");
		
		UDinoAttackState_Spindles_MinigunAOE_C_ExecuteUbergraph_DinoAttackState_Spindles_MinigunAOE_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoAttackState_Spindles_MinigunAOE_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoAttackState_Spindles_MinigunAOE_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackState_Spindles_MinigunAOE.DinoAttackState_Spindles_MinigunAOE_C");
		return ptr;
	}

}


