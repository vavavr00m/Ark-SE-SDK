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
	 * 		Name   -> Function TradeOption_Arkeaology_Costume_Stygimoloch.TradeOption_Arkeaology_Costume_Stygimoloch_C.ExecuteUbergraph_TradeOption_Arkeaology_Costume_Stygimoloch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTradeOption_Arkeaology_Costume_Stygimoloch_C::ExecuteUbergraph_TradeOption_Arkeaology_Costume_Stygimoloch(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TradeOption_Arkeaology_Costume_Stygimoloch.TradeOption_Arkeaology_Costume_Stygimoloch_C.ExecuteUbergraph_TradeOption_Arkeaology_Costume_Stygimoloch");
		
		UTradeOption_Arkeaology_Costume_Stygimoloch_C_ExecuteUbergraph_TradeOption_Arkeaology_Costume_Stygimoloch_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTradeOption_Arkeaology_Costume_Stygimoloch_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTradeOption_Arkeaology_Costume_Stygimoloch_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TradeOption_Arkeaology_Costume_Stygimoloch.TradeOption_Arkeaology_Costume_Stygimoloch_C");
		return ptr;
	}

}


