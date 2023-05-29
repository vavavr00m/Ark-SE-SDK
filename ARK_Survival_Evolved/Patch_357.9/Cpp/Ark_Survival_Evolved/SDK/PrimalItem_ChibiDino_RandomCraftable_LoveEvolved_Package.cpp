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
	 * 		Name   -> Function PrimalItem_ChibiDino_RandomCraftable_LoveEvolved.PrimalItem_ChibiDino_RandomCraftable_LoveEvolved_C.ExecuteUbergraph_PrimalItem_ChibiDino_RandomCraftable_LoveEvolved
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItem_ChibiDino_RandomCraftable_LoveEvolved_C::ExecuteUbergraph_PrimalItem_ChibiDino_RandomCraftable_LoveEvolved(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItem_ChibiDino_RandomCraftable_LoveEvolved.PrimalItem_ChibiDino_RandomCraftable_LoveEvolved_C.ExecuteUbergraph_PrimalItem_ChibiDino_RandomCraftable_LoveEvolved");
		
		UPrimalItem_ChibiDino_RandomCraftable_LoveEvolved_C_ExecuteUbergraph_PrimalItem_ChibiDino_RandomCraftable_LoveEvolved_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItem_ChibiDino_RandomCraftable_LoveEvolved_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItem_ChibiDino_RandomCraftable_LoveEvolved_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_ChibiDino_RandomCraftable_LoveEvolved.PrimalItem_ChibiDino_RandomCraftable_LoveEvolved_C");
		return ptr;
	}

}


