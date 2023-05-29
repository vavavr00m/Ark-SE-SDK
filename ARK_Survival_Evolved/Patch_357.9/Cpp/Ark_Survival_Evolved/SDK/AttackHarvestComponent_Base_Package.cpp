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
	 * 		Name   -> Function AttackHarvestComponent_Base.AttackHarvestComponent_Base_C.ExecuteUbergraph_AttackHarvestComponent_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAttackHarvestComponent_Base_C::ExecuteUbergraph_AttackHarvestComponent_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AttackHarvestComponent_Base.AttackHarvestComponent_Base_C.ExecuteUbergraph_AttackHarvestComponent_Base");
		
		UAttackHarvestComponent_Base_C_ExecuteUbergraph_AttackHarvestComponent_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAttackHarvestComponent_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAttackHarvestComponent_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AttackHarvestComponent_Base.AttackHarvestComponent_Base_C");
		return ptr;
	}

}


