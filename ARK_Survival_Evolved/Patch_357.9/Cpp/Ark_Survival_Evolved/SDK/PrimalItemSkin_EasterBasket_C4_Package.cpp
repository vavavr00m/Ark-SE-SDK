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
	 * 		Name   -> Function PrimalItemSkin_EasterBasket_C4.PrimalItemSkin_EasterBasket_C4_C.ExecuteUbergraph_PrimalItemSkin_EasterBasket_C4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemSkin_EasterBasket_C4_C::ExecuteUbergraph_PrimalItemSkin_EasterBasket_C4(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_EasterBasket_C4.PrimalItemSkin_EasterBasket_C4_C.ExecuteUbergraph_PrimalItemSkin_EasterBasket_C4");
		
		UPrimalItemSkin_EasterBasket_C4_C_ExecuteUbergraph_PrimalItemSkin_EasterBasket_C4_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemSkin_EasterBasket_C4_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemSkin_EasterBasket_C4_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_EasterBasket_C4.PrimalItemSkin_EasterBasket_C4_C");
		return ptr;
	}

}

