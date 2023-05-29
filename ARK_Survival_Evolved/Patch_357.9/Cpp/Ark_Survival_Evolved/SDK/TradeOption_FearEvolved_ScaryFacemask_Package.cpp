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
	 * 		Name   -> Function TradeOption_FearEvolved_ScaryFacemask.TradeOption_FearEvolved_ScaryFacemask_C.ExecuteUbergraph_TradeOption_FearEvolved_ScaryFacemask
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTradeOption_FearEvolved_ScaryFacemask_C::ExecuteUbergraph_TradeOption_FearEvolved_ScaryFacemask(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TradeOption_FearEvolved_ScaryFacemask.TradeOption_FearEvolved_ScaryFacemask_C.ExecuteUbergraph_TradeOption_FearEvolved_ScaryFacemask");
		
		UTradeOption_FearEvolved_ScaryFacemask_C_ExecuteUbergraph_TradeOption_FearEvolved_ScaryFacemask_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTradeOption_FearEvolved_ScaryFacemask_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTradeOption_FearEvolved_ScaryFacemask_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TradeOption_FearEvolved_ScaryFacemask.TradeOption_FearEvolved_ScaryFacemask_C");
		return ptr;
	}

}


