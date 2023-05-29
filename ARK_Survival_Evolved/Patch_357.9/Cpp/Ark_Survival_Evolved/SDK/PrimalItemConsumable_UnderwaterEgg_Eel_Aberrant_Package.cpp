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
	 * 		Name   -> Function PrimalItemConsumable_UnderwaterEgg_Eel_Aberrant.PrimalItemConsumable_UnderwaterEgg_Eel_Aberrant_C.ExecuteUbergraph_PrimalItemConsumable_UnderwaterEgg_Eel_Aberrant
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemConsumable_UnderwaterEgg_Eel_Aberrant_C::ExecuteUbergraph_PrimalItemConsumable_UnderwaterEgg_Eel_Aberrant(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_UnderwaterEgg_Eel_Aberrant.PrimalItemConsumable_UnderwaterEgg_Eel_Aberrant_C.ExecuteUbergraph_PrimalItemConsumable_UnderwaterEgg_Eel_Aberrant");
		
		UPrimalItemConsumable_UnderwaterEgg_Eel_Aberrant_C_ExecuteUbergraph_PrimalItemConsumable_UnderwaterEgg_Eel_Aberrant_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemConsumable_UnderwaterEgg_Eel_Aberrant_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemConsumable_UnderwaterEgg_Eel_Aberrant_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_UnderwaterEgg_Eel_Aberrant.PrimalItemConsumable_UnderwaterEgg_Eel_Aberrant_C");
		return ptr;
	}

}


