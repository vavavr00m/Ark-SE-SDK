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
	 * 		Name   -> Function PrimalItemSkin_HawaiianShirt_MurderTurkey.PrimalItemSkin_HawaiianShirt_MurderTurkey_C.ExecuteUbergraph_PrimalItemSkin_HawaiianShirt_MurderTurkey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemSkin_HawaiianShirt_MurderTurkey_C::ExecuteUbergraph_PrimalItemSkin_HawaiianShirt_MurderTurkey(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_HawaiianShirt_MurderTurkey.PrimalItemSkin_HawaiianShirt_MurderTurkey_C.ExecuteUbergraph_PrimalItemSkin_HawaiianShirt_MurderTurkey");
		
		UPrimalItemSkin_HawaiianShirt_MurderTurkey_C_ExecuteUbergraph_PrimalItemSkin_HawaiianShirt_MurderTurkey_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemSkin_HawaiianShirt_MurderTurkey_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemSkin_HawaiianShirt_MurderTurkey_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_HawaiianShirt_MurderTurkey.PrimalItemSkin_HawaiianShirt_MurderTurkey_C");
		return ptr;
	}

}


