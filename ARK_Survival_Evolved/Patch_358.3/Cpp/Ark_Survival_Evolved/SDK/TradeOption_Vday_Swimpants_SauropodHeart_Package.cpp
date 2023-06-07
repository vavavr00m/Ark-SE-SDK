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
	 * 		Name   -> Function TradeOption_Vday_Swimpants_SauropodHeart.TradeOption_Vday_Swimpants_SauropodHeart_C.ExecuteUbergraph_TradeOption_Vday_Swimpants_SauropodHeart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTradeOption_Vday_Swimpants_SauropodHeart_C::ExecuteUbergraph_TradeOption_Vday_Swimpants_SauropodHeart(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TradeOption_Vday_Swimpants_SauropodHeart.TradeOption_Vday_Swimpants_SauropodHeart_C.ExecuteUbergraph_TradeOption_Vday_Swimpants_SauropodHeart");
		
		UTradeOption_Vday_Swimpants_SauropodHeart_C_ExecuteUbergraph_TradeOption_Vday_Swimpants_SauropodHeart_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTradeOption_Vday_Swimpants_SauropodHeart_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTradeOption_Vday_Swimpants_SauropodHeart_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TradeOption_Vday_Swimpants_SauropodHeart.TradeOption_Vday_Swimpants_SauropodHeart_C");
		return ptr;
	}

}


