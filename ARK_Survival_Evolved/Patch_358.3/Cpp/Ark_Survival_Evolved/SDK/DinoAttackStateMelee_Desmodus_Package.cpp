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
	 * 		Name   -> Function DinoAttackStateMelee_Desmodus.DinoAttackStateMelee_Desmodus_C.BPOnHitActor
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  HitResult                                                  (Parm, OutParm, ReferenceParm)
	 */
	void UDinoAttackStateMelee_Desmodus_C::BPOnHitActor(struct FHitResult* HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackStateMelee_Desmodus.DinoAttackStateMelee_Desmodus_C.BPOnHitActor");
		
		UDinoAttackStateMelee_Desmodus_C_BPOnHitActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HitResult != nullptr)
			*HitResult = params.HitResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function DinoAttackStateMelee_Desmodus.DinoAttackStateMelee_Desmodus_C.ExecuteUbergraph_DinoAttackStateMelee_Desmodus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoAttackStateMelee_Desmodus_C::ExecuteUbergraph_DinoAttackStateMelee_Desmodus(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoAttackStateMelee_Desmodus.DinoAttackStateMelee_Desmodus_C.ExecuteUbergraph_DinoAttackStateMelee_Desmodus");
		
		UDinoAttackStateMelee_Desmodus_C_ExecuteUbergraph_DinoAttackStateMelee_Desmodus_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoAttackStateMelee_Desmodus_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoAttackStateMelee_Desmodus_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateMelee_Desmodus.DinoAttackStateMelee_Desmodus_C");
		return ptr;
	}

}


