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
	 * 		Name   -> Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.BPGetDebugInfoString
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	class FString UDinoAttackState_Spindles_MinigunDirected_C::BPGetDebugInfoString()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.BPGetDebugInfoString");
		
		UDinoAttackState_Spindles_MinigunDirected_C_BPGetDebugInfoString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.GetRandomVectorOnCircle
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              MinRadius                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              MaxRadius                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     RandomVector                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackState_Spindles_MinigunDirected_C::GetRandomVectorOnCircle(float MinRadius, float MaxRadius, struct FVector* RandomVector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.GetRandomVectorOnCircle");
		
		UDinoAttackState_Spindles_MinigunDirected_C_GetRandomVectorOnCircle_Params params {};
		params.MinRadius = MinRadius;
		params.MaxRadius = MaxRadius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RandomVector != nullptr)
			*RandomVector = params.RandomVector;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.BPShouldEndAttack
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	bool UDinoAttackState_Spindles_MinigunDirected_C::BPShouldEndAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.BPShouldEndAttack");
		
		UDinoAttackState_Spindles_MinigunDirected_C_BPShouldEndAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.OnEndEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UDinoAttackState_Spindles_MinigunDirected_C::OnEndEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.OnEndEvent");
		
		UDinoAttackState_Spindles_MinigunDirected_C_OnEndEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.OnBeginEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalAIState*                              InParentState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackState_Spindles_MinigunDirected_C::OnBeginEvent(class UPrimalAIState* InParentState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.OnBeginEvent");
		
		UDinoAttackState_Spindles_MinigunDirected_C_OnBeginEvent_Params params {};
		params.InParentState = InParentState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.OnCanUseStateEvent
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UDinoAttackState_Spindles_MinigunDirected_C::OnCanUseStateEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.OnCanUseStateEvent");
		
		UDinoAttackState_Spindles_MinigunDirected_C_OnCanUseStateEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.BPCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UDinoAttackState_Spindles_MinigunDirected_C::BPCanAttack(float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.BPCanAttack");
		
		UDinoAttackState_Spindles_MinigunDirected_C_BPCanAttack_Params params {};
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
	 * 		Name   -> Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.GetAttackIndex
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackState_Spindles_MinigunDirected_C::GetAttackIndex(int32_t* AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.GetAttackIndex");
		
		UDinoAttackState_Spindles_MinigunDirected_C_GetAttackIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AttackIndex != nullptr)
			*AttackIndex = params.AttackIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.Get Spine Start and End Position
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Start                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     End                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     VFXStart                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     VFXEnd                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackState_Spindles_MinigunDirected_C::GetSpineStartandEndPosition(struct FVector* Start, struct FVector* End, struct FVector* VFXStart, struct FVector* VFXEnd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.Get Spine Start and End Position");
		
		UDinoAttackState_Spindles_MinigunDirected_C_GetSpineStartandEndPosition_Params params {};
		
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
	 * 		Name   -> Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.UpdateAimedActors
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UDinoAttackState_Spindles_MinigunDirected_C::UpdateAimedActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.UpdateAimedActors");
		
		UDinoAttackState_Spindles_MinigunDirected_C_UpdateAimedActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.ExecuteUbergraph_DinoAttackState_Spindles_MinigunDirected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackState_Spindles_MinigunDirected_C::ExecuteUbergraph_DinoAttackState_Spindles_MinigunDirected(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C.ExecuteUbergraph_DinoAttackState_Spindles_MinigunDirected");
		
		UDinoAttackState_Spindles_MinigunDirected_C_ExecuteUbergraph_DinoAttackState_Spindles_MinigunDirected_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoAttackState_Spindles_MinigunDirected_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoAttackState_Spindles_MinigunDirected_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackState_Spindles_MinigunDirected.DinoAttackState_Spindles_MinigunDirected_C");
		return ptr;
	}

}


