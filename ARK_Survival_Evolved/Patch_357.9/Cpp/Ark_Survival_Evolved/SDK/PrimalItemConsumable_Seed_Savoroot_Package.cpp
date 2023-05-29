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
	 * 		Name   -> Function PrimalItemConsumable_Seed_Savoroot.PrimalItemConsumable_Seed_Savoroot_C.ExecuteUbergraph_PrimalItemConsumable_Seed_Savoroot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemConsumable_Seed_Savoroot_C::ExecuteUbergraph_PrimalItemConsumable_Seed_Savoroot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Seed_Savoroot.PrimalItemConsumable_Seed_Savoroot_C.ExecuteUbergraph_PrimalItemConsumable_Seed_Savoroot");
		
		UPrimalItemConsumable_Seed_Savoroot_C_ExecuteUbergraph_PrimalItemConsumable_Seed_Savoroot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemConsumable_Seed_Savoroot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemConsumable_Seed_Savoroot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Seed_Savoroot.PrimalItemConsumable_Seed_Savoroot_C");
		return ptr;
	}

}

