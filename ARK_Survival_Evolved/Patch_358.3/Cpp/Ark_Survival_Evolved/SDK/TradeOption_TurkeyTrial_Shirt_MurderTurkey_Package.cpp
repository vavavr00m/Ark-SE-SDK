/**
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
	 * 		Name   -> Function TradeOption_TurkeyTrial_Shirt_MurderTurkey.TradeOption_TurkeyTrial_Shirt_MurderTurkey_C.ExecuteUbergraph_TradeOption_TurkeyTrial_Shirt_MurderTurkey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTradeOption_TurkeyTrial_Shirt_MurderTurkey_C::ExecuteUbergraph_TradeOption_TurkeyTrial_Shirt_MurderTurkey(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TradeOption_TurkeyTrial_Shirt_MurderTurkey.TradeOption_TurkeyTrial_Shirt_MurderTurkey_C.ExecuteUbergraph_TradeOption_TurkeyTrial_Shirt_MurderTurkey");
		
		UTradeOption_TurkeyTrial_Shirt_MurderTurkey_C_ExecuteUbergraph_TradeOption_TurkeyTrial_Shirt_MurderTurkey_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTradeOption_TurkeyTrial_Shirt_MurderTurkey_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTradeOption_TurkeyTrial_Shirt_MurderTurkey_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TradeOption_TurkeyTrial_Shirt_MurderTurkey.TradeOption_TurkeyTrial_Shirt_MurderTurkey_C");
		return ptr;
	}

}


