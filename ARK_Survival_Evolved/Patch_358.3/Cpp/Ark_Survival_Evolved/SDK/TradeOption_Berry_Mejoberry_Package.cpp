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
	 * 		Name   -> Function TradeOption_Berry_Mejoberry.TradeOption_Berry_Mejoberry_C.ExecuteUbergraph_TradeOption_Berry_Mejoberry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTradeOption_Berry_Mejoberry_C::ExecuteUbergraph_TradeOption_Berry_Mejoberry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TradeOption_Berry_Mejoberry.TradeOption_Berry_Mejoberry_C.ExecuteUbergraph_TradeOption_Berry_Mejoberry");
		
		UTradeOption_Berry_Mejoberry_C_ExecuteUbergraph_TradeOption_Berry_Mejoberry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTradeOption_Berry_Mejoberry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTradeOption_Berry_Mejoberry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TradeOption_Berry_Mejoberry.TradeOption_Berry_Mejoberry_C");
		return ptr;
	}

}


