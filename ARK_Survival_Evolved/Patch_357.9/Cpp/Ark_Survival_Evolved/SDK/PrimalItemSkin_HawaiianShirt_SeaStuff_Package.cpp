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
	 * 		Name   -> Function PrimalItemSkin_HawaiianShirt_SeaStuff.PrimalItemSkin_HawaiianShirt_SeaStuff_C.ExecuteUbergraph_PrimalItemSkin_HawaiianShirt_SeaStuff
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemSkin_HawaiianShirt_SeaStuff_C::ExecuteUbergraph_PrimalItemSkin_HawaiianShirt_SeaStuff(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemSkin_HawaiianShirt_SeaStuff.PrimalItemSkin_HawaiianShirt_SeaStuff_C.ExecuteUbergraph_PrimalItemSkin_HawaiianShirt_SeaStuff");
		
		UPrimalItemSkin_HawaiianShirt_SeaStuff_C_ExecuteUbergraph_PrimalItemSkin_HawaiianShirt_SeaStuff_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemSkin_HawaiianShirt_SeaStuff_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemSkin_HawaiianShirt_SeaStuff_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_HawaiianShirt_SeaStuff.PrimalItemSkin_HawaiianShirt_SeaStuff_C");
		return ptr;
	}

}

