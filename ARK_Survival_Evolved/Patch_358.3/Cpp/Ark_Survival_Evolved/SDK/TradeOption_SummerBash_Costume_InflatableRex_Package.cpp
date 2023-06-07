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
	 * 		Name   -> Function TradeOption_SummerBash_Costume_InflatableRex.TradeOption_SummerBash_Costume_InflatableRex_C.ExecuteUbergraph_TradeOption_SummerBash_Costume_InflatableRex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTradeOption_SummerBash_Costume_InflatableRex_C::ExecuteUbergraph_TradeOption_SummerBash_Costume_InflatableRex(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TradeOption_SummerBash_Costume_InflatableRex.TradeOption_SummerBash_Costume_InflatableRex_C.ExecuteUbergraph_TradeOption_SummerBash_Costume_InflatableRex");
		
		UTradeOption_SummerBash_Costume_InflatableRex_C_ExecuteUbergraph_TradeOption_SummerBash_Costume_InflatableRex_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTradeOption_SummerBash_Costume_InflatableRex_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTradeOption_SummerBash_Costume_InflatableRex_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TradeOption_SummerBash_Costume_InflatableRex.TradeOption_SummerBash_Costume_InflatableRex_C");
		return ptr;
	}

}


