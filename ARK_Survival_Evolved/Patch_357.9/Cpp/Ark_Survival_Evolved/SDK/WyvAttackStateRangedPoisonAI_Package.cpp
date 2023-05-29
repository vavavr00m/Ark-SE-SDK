﻿/**
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
	 * 		Name   -> Function WyvAttackStateRangedPoisonAI.WyvAttackStateRangedPoisonAI_C.ExecuteUbergraph_WyvAttackStateRangedPoisonAI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWyvAttackStateRangedPoisonAI_C::ExecuteUbergraph_WyvAttackStateRangedPoisonAI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WyvAttackStateRangedPoisonAI.WyvAttackStateRangedPoisonAI_C.ExecuteUbergraph_WyvAttackStateRangedPoisonAI");
		
		UWyvAttackStateRangedPoisonAI_C_ExecuteUbergraph_WyvAttackStateRangedPoisonAI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWyvAttackStateRangedPoisonAI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWyvAttackStateRangedPoisonAI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WyvAttackStateRangedPoisonAI.WyvAttackStateRangedPoisonAI_C");
		return ptr;
	}

}


