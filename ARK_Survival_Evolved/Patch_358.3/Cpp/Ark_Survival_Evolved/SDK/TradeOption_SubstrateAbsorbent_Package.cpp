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
	 * 		Name   -> Function TradeOption_SubstrateAbsorbent.TradeOption_SubstrateAbsorbent_C.ExecuteUbergraph_TradeOption_SubstrateAbsorbent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTradeOption_SubstrateAbsorbent_C::ExecuteUbergraph_TradeOption_SubstrateAbsorbent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TradeOption_SubstrateAbsorbent.TradeOption_SubstrateAbsorbent_C.ExecuteUbergraph_TradeOption_SubstrateAbsorbent");
		
		UTradeOption_SubstrateAbsorbent_C_ExecuteUbergraph_TradeOption_SubstrateAbsorbent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTradeOption_SubstrateAbsorbent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTradeOption_SubstrateAbsorbent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TradeOption_SubstrateAbsorbent.TradeOption_SubstrateAbsorbent_C");
		return ptr;
	}

}


