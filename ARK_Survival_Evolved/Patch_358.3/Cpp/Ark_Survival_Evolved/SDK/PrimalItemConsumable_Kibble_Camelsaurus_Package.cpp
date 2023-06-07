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
	 * 		Name   -> Function PrimalItemConsumable_Kibble_Camelsaurus.PrimalItemConsumable_Kibble_Camelsaurus_C.ExecuteUbergraph_PrimalItemConsumable_Kibble_Camelsaurus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemConsumable_Kibble_Camelsaurus_C::ExecuteUbergraph_PrimalItemConsumable_Kibble_Camelsaurus(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Kibble_Camelsaurus.PrimalItemConsumable_Kibble_Camelsaurus_C.ExecuteUbergraph_PrimalItemConsumable_Kibble_Camelsaurus");
		
		UPrimalItemConsumable_Kibble_Camelsaurus_C_ExecuteUbergraph_PrimalItemConsumable_Kibble_Camelsaurus_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemConsumable_Kibble_Camelsaurus_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemConsumable_Kibble_Camelsaurus_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Kibble_Camelsaurus.PrimalItemConsumable_Kibble_Camelsaurus_C");
		return ptr;
	}

}


