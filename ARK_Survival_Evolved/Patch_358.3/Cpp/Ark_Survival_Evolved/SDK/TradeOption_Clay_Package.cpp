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
	 * 		Name   -> Function TradeOption_Clay.TradeOption_Clay_C.ExecuteUbergraph_TradeOption_Clay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTradeOption_Clay_C::ExecuteUbergraph_TradeOption_Clay(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TradeOption_Clay.TradeOption_Clay_C.ExecuteUbergraph_TradeOption_Clay");
		
		UTradeOption_Clay_C_ExecuteUbergraph_TradeOption_Clay_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTradeOption_Clay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTradeOption_Clay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TradeOption_Clay.TradeOption_Clay_C");
		return ptr;
	}

}


