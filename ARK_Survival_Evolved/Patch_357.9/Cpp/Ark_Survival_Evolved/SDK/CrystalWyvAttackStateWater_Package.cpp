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
	 * 		Name   -> Function CrystalWyvAttackStateWater.CrystalWyvAttackStateWater_C.ExecuteUbergraph_CrystalWyvAttackStateWater
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCrystalWyvAttackStateWater_C::ExecuteUbergraph_CrystalWyvAttackStateWater(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvAttackStateWater.CrystalWyvAttackStateWater_C.ExecuteUbergraph_CrystalWyvAttackStateWater");
		
		UCrystalWyvAttackStateWater_C_ExecuteUbergraph_CrystalWyvAttackStateWater_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCrystalWyvAttackStateWater_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCrystalWyvAttackStateWater_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CrystalWyvAttackStateWater.CrystalWyvAttackStateWater_C");
		return ptr;
	}

}


