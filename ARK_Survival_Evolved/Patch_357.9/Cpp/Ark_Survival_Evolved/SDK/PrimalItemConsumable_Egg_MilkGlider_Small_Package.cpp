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
	 * 		Name   -> Function PrimalItemConsumable_Egg_MilkGlider_Small.PrimalItemConsumable_Egg_MilkGlider_Small_C.ExecuteUbergraph_PrimalItemConsumable_Egg_MilkGlider_Small
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemConsumable_Egg_MilkGlider_Small_C::ExecuteUbergraph_PrimalItemConsumable_Egg_MilkGlider_Small(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Egg_MilkGlider_Small.PrimalItemConsumable_Egg_MilkGlider_Small_C.ExecuteUbergraph_PrimalItemConsumable_Egg_MilkGlider_Small");
		
		UPrimalItemConsumable_Egg_MilkGlider_Small_C_ExecuteUbergraph_PrimalItemConsumable_Egg_MilkGlider_Small_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemConsumable_Egg_MilkGlider_Small_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemConsumable_Egg_MilkGlider_Small_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Egg_MilkGlider_Small.PrimalItemConsumable_Egg_MilkGlider_Small_C");
		return ptr;
	}

}

