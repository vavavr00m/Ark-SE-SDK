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
	 * 		Name   -> Function DinoAttackStateMelee_Spindles_NormalMode_Spin180.DinoAttackStateMelee_Spindles_NormalMode_Spin180_C.OnBeginEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalAIState*                              InParentState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackStateMelee_Spindles_NormalMode_Spin180_C::OnBeginEvent(class UPrimalAIState* InParentState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackStateMelee_Spindles_NormalMode_Spin180.DinoAttackStateMelee_Spindles_NormalMode_Spin180_C.OnBeginEvent");
		
		UDinoAttackStateMelee_Spindles_NormalMode_Spin180_C_OnBeginEvent_Params params {};
		params.InParentState = InParentState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoAttackStateMelee_Spindles_NormalMode_Spin180.DinoAttackStateMelee_Spindles_NormalMode_Spin180_C.BPCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UDinoAttackStateMelee_Spindles_NormalMode_Spin180_C::BPCanAttack(float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackStateMelee_Spindles_NormalMode_Spin180.DinoAttackStateMelee_Spindles_NormalMode_Spin180_C.BPCanAttack");
		
		UDinoAttackStateMelee_Spindles_NormalMode_Spin180_C_BPCanAttack_Params params {};
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
	 * 		Name   -> Function DinoAttackStateMelee_Spindles_NormalMode_Spin180.DinoAttackStateMelee_Spindles_NormalMode_Spin180_C.ExecuteUbergraph_DinoAttackStateMelee_Spindles_NormalMode_Spin180
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackStateMelee_Spindles_NormalMode_Spin180_C::ExecuteUbergraph_DinoAttackStateMelee_Spindles_NormalMode_Spin180(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackStateMelee_Spindles_NormalMode_Spin180.DinoAttackStateMelee_Spindles_NormalMode_Spin180_C.ExecuteUbergraph_DinoAttackStateMelee_Spindles_NormalMode_Spin180");
		
		UDinoAttackStateMelee_Spindles_NormalMode_Spin180_C_ExecuteUbergraph_DinoAttackStateMelee_Spindles_NormalMode_Spin180_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoAttackStateMelee_Spindles_NormalMode_Spin180_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoAttackStateMelee_Spindles_NormalMode_Spin180_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateMelee_Spindles_NormalMode_Spin180.DinoAttackStateMelee_Spindles_NormalMode_Spin180_C");
		return ptr;
	}

}


