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
	 * 		Name   -> Function PrimalItemConsumable_Kibble_Base_Medium.PrimalItemConsumable_Kibble_Base_Medium_C.ExecuteUbergraph_PrimalItemConsumable_Kibble_Base_Medium
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemConsumable_Kibble_Base_Medium_C::ExecuteUbergraph_PrimalItemConsumable_Kibble_Base_Medium(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Kibble_Base_Medium.PrimalItemConsumable_Kibble_Base_Medium_C.ExecuteUbergraph_PrimalItemConsumable_Kibble_Base_Medium");
		
		UPrimalItemConsumable_Kibble_Base_Medium_C_ExecuteUbergraph_PrimalItemConsumable_Kibble_Base_Medium_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemConsumable_Kibble_Base_Medium_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemConsumable_Kibble_Base_Medium_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Kibble_Base_Medium.PrimalItemConsumable_Kibble_Base_Medium_C");
		return ptr;
	}

}


