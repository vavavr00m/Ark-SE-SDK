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
	 * 		Name   -> Function DinoAttackStateMelee_Spindles_NormalMode_Attack.DinoAttackStateMelee_Spindles_NormalMode_Attack_C.BPCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UDinoAttackStateMelee_Spindles_NormalMode_Attack_C::BPCanAttack(float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackStateMelee_Spindles_NormalMode_Attack.DinoAttackStateMelee_Spindles_NormalMode_Attack_C.BPCanAttack");
		
		UDinoAttackStateMelee_Spindles_NormalMode_Attack_C_BPCanAttack_Params params {};
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
	 * 		Name   -> Function DinoAttackStateMelee_Spindles_NormalMode_Attack.DinoAttackStateMelee_Spindles_NormalMode_Attack_C.ExecuteUbergraph_DinoAttackStateMelee_Spindles_NormalMode_Attack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackStateMelee_Spindles_NormalMode_Attack_C::ExecuteUbergraph_DinoAttackStateMelee_Spindles_NormalMode_Attack(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackStateMelee_Spindles_NormalMode_Attack.DinoAttackStateMelee_Spindles_NormalMode_Attack_C.ExecuteUbergraph_DinoAttackStateMelee_Spindles_NormalMode_Attack");
		
		UDinoAttackStateMelee_Spindles_NormalMode_Attack_C_ExecuteUbergraph_DinoAttackStateMelee_Spindles_NormalMode_Attack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoAttackStateMelee_Spindles_NormalMode_Attack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoAttackStateMelee_Spindles_NormalMode_Attack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateMelee_Spindles_NormalMode_Attack.DinoAttackStateMelee_Spindles_NormalMode_Attack_C");
		return ptr;
	}

}


