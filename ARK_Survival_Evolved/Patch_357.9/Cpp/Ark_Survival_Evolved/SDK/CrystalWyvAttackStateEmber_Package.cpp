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
	 * 		Name   -> Function CrystalWyvAttackStateEmber.CrystalWyvAttackStateEmber_C.ExecuteUbergraph_CrystalWyvAttackStateEmber
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCrystalWyvAttackStateEmber_C::ExecuteUbergraph_CrystalWyvAttackStateEmber(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvAttackStateEmber.CrystalWyvAttackStateEmber_C.ExecuteUbergraph_CrystalWyvAttackStateEmber");
		
		UCrystalWyvAttackStateEmber_C_ExecuteUbergraph_CrystalWyvAttackStateEmber_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCrystalWyvAttackStateEmber_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCrystalWyvAttackStateEmber_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CrystalWyvAttackStateEmber.CrystalWyvAttackStateEmber_C");
		return ptr;
	}

}


