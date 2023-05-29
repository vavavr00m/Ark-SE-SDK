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
	 * 		Name   -> Function DinoAttackStateMelee_Tekwyvern_TamingRoll.DinoAttackStateMelee_Tekwyvern_TamingRoll_C.BPOnHitActor
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  HitResult                                                  (Parm, OutParm, ReferenceParm)
	 */
	void UDinoAttackStateMelee_Tekwyvern_TamingRoll_C::BPOnHitActor(struct FHitResult* HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackStateMelee_Tekwyvern_TamingRoll.DinoAttackStateMelee_Tekwyvern_TamingRoll_C.BPOnHitActor");
		
		UDinoAttackStateMelee_Tekwyvern_TamingRoll_C_BPOnHitActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HitResult != nullptr)
			*HitResult = params.HitResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoAttackStateMelee_Tekwyvern_TamingRoll.DinoAttackStateMelee_Tekwyvern_TamingRoll_C.ExecuteUbergraph_DinoAttackStateMelee_Tekwyvern_TamingRoll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackStateMelee_Tekwyvern_TamingRoll_C::ExecuteUbergraph_DinoAttackStateMelee_Tekwyvern_TamingRoll(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackStateMelee_Tekwyvern_TamingRoll.DinoAttackStateMelee_Tekwyvern_TamingRoll_C.ExecuteUbergraph_DinoAttackStateMelee_Tekwyvern_TamingRoll");
		
		UDinoAttackStateMelee_Tekwyvern_TamingRoll_C_ExecuteUbergraph_DinoAttackStateMelee_Tekwyvern_TamingRoll_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoAttackStateMelee_Tekwyvern_TamingRoll_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoAttackStateMelee_Tekwyvern_TamingRoll_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateMelee_Tekwyvern_TamingRoll.DinoAttackStateMelee_Tekwyvern_TamingRoll_C");
		return ptr;
	}

}


