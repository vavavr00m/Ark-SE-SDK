﻿/**
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
	 * 		Name   -> Function PrimalItemConsumable_Egg_Tapejara.PrimalItemConsumable_Egg_Tapejara_C.ExecuteUbergraph_PrimalItemConsumable_Egg_Tapejara
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemConsumable_Egg_Tapejara_C::ExecuteUbergraph_PrimalItemConsumable_Egg_Tapejara(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Egg_Tapejara.PrimalItemConsumable_Egg_Tapejara_C.ExecuteUbergraph_PrimalItemConsumable_Egg_Tapejara");
		
		UPrimalItemConsumable_Egg_Tapejara_C_ExecuteUbergraph_PrimalItemConsumable_Egg_Tapejara_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemConsumable_Egg_Tapejara_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemConsumable_Egg_Tapejara_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Egg_Tapejara.PrimalItemConsumable_Egg_Tapejara_C");
		return ptr;
	}

}


