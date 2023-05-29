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
	 * 		Name   -> Function TradeOption_Easter_DinoMarshmallowHat.TradeOption_Easter_DinoMarshmallowHat_C.ExecuteUbergraph_TradeOption_Easter_DinoMarshmallowHat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTradeOption_Easter_DinoMarshmallowHat_C::ExecuteUbergraph_TradeOption_Easter_DinoMarshmallowHat(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TradeOption_Easter_DinoMarshmallowHat.TradeOption_Easter_DinoMarshmallowHat_C.ExecuteUbergraph_TradeOption_Easter_DinoMarshmallowHat");
		
		UTradeOption_Easter_DinoMarshmallowHat_C_ExecuteUbergraph_TradeOption_Easter_DinoMarshmallowHat_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTradeOption_Easter_DinoMarshmallowHat_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTradeOption_Easter_DinoMarshmallowHat_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TradeOption_Easter_DinoMarshmallowHat.TradeOption_Easter_DinoMarshmallowHat_C");
		return ptr;
	}

}


