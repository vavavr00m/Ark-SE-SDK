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
	 * 		Name   -> Function TradeOption_TurkeyTrial_PilgrimHat.TradeOption_TurkeyTrial_PilgrimHat_C.ExecuteUbergraph_TradeOption_TurkeyTrial_PilgrimHat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTradeOption_TurkeyTrial_PilgrimHat_C::ExecuteUbergraph_TradeOption_TurkeyTrial_PilgrimHat(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TradeOption_TurkeyTrial_PilgrimHat.TradeOption_TurkeyTrial_PilgrimHat_C.ExecuteUbergraph_TradeOption_TurkeyTrial_PilgrimHat");
		
		UTradeOption_TurkeyTrial_PilgrimHat_C_ExecuteUbergraph_TradeOption_TurkeyTrial_PilgrimHat_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTradeOption_TurkeyTrial_PilgrimHat_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTradeOption_TurkeyTrial_PilgrimHat_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TradeOption_TurkeyTrial_PilgrimHat.TradeOption_TurkeyTrial_PilgrimHat_C");
		return ptr;
	}

}


