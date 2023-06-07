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
	 * 		Name   -> Function TradeOption_ChibiDino_Legendary.TradeOption_ChibiDino_Legendary_C.ExecuteUbergraph_TradeOption_ChibiDino_Legendary
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTradeOption_ChibiDino_Legendary_C::ExecuteUbergraph_TradeOption_ChibiDino_Legendary(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TradeOption_ChibiDino_Legendary.TradeOption_ChibiDino_Legendary_C.ExecuteUbergraph_TradeOption_ChibiDino_Legendary");
		
		UTradeOption_ChibiDino_Legendary_C_ExecuteUbergraph_TradeOption_ChibiDino_Legendary_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTradeOption_ChibiDino_Legendary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTradeOption_ChibiDino_Legendary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TradeOption_ChibiDino_Legendary.TradeOption_ChibiDino_Legendary_C");
		return ptr;
	}

}


