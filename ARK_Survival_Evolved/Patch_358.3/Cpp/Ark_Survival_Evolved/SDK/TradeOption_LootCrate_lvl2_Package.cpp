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
	 * 		Name   -> Function TradeOption_LootCrate_lvl2.TradeOption_LootCrate_lvl2_C.ExecuteUbergraph_TradeOption_LootCrate_lvl2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTradeOption_LootCrate_lvl2_C::ExecuteUbergraph_TradeOption_LootCrate_lvl2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TradeOption_LootCrate_lvl2.TradeOption_LootCrate_lvl2_C.ExecuteUbergraph_TradeOption_LootCrate_lvl2");
		
		UTradeOption_LootCrate_lvl2_C_ExecuteUbergraph_TradeOption_LootCrate_lvl2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTradeOption_LootCrate_lvl2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTradeOption_LootCrate_lvl2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TradeOption_LootCrate_lvl2.TradeOption_LootCrate_lvl2_C");
		return ptr;
	}

}


