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
	 * 		Name   -> Function FKaijuWyvAttackStateFire.FKaijuWyvAttackStateFire_C.BPOnHitActor
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  HitResult                                                  (Parm, OutParm, ReferenceParm)
	 */
	void UFKaijuWyvAttackStateFire_C::BPOnHitActor(struct FHitResult* HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FKaijuWyvAttackStateFire.FKaijuWyvAttackStateFire_C.BPOnHitActor");
		
		UFKaijuWyvAttackStateFire_C_BPOnHitActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HitResult != nullptr)
			*HitResult = params.HitResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function FKaijuWyvAttackStateFire.FKaijuWyvAttackStateFire_C.ExecuteUbergraph_FKaijuWyvAttackStateFire
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UFKaijuWyvAttackStateFire_C::ExecuteUbergraph_FKaijuWyvAttackStateFire(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function FKaijuWyvAttackStateFire.FKaijuWyvAttackStateFire_C.ExecuteUbergraph_FKaijuWyvAttackStateFire");
		
		UFKaijuWyvAttackStateFire_C_ExecuteUbergraph_FKaijuWyvAttackStateFire_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFKaijuWyvAttackStateFire_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFKaijuWyvAttackStateFire_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FKaijuWyvAttackStateFire.FKaijuWyvAttackStateFire_C");
		return ptr;
	}

}


