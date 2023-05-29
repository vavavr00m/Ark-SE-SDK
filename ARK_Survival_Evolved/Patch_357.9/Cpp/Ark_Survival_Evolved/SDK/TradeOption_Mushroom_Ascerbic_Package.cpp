/**
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
	 * 		Name   -> Function TradeOption_Mushroom_Ascerbic.TradeOption_Mushroom_Ascerbic_C.ExecuteUbergraph_TradeOption_Mushroom_Ascerbic
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTradeOption_Mushroom_Ascerbic_C::ExecuteUbergraph_TradeOption_Mushroom_Ascerbic(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TradeOption_Mushroom_Ascerbic.TradeOption_Mushroom_Ascerbic_C.ExecuteUbergraph_TradeOption_Mushroom_Ascerbic");
		
		UTradeOption_Mushroom_Ascerbic_C_ExecuteUbergraph_TradeOption_Mushroom_Ascerbic_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTradeOption_Mushroom_Ascerbic_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTradeOption_Mushroom_Ascerbic_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TradeOption_Mushroom_Ascerbic.TradeOption_Mushroom_Ascerbic_C");
		return ptr;
	}

}


