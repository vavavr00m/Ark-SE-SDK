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
	 * 		Name   -> Function DinoTamedInventoryComponent_BogSpider.DinoTamedInventoryComponent_BogSpider_C.BPOverrideItemMinimumUseInterval
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 theItem                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float UDinoTamedInventoryComponent_BogSpider_C::BPOverrideItemMinimumUseInterval(class UPrimalItem* theItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_BogSpider.DinoTamedInventoryComponent_BogSpider_C.BPOverrideItemMinimumUseInterval");
		
		UDinoTamedInventoryComponent_BogSpider_C_BPOverrideItemMinimumUseInterval_Params params {};
		params.theItem = theItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function DinoTamedInventoryComponent_BogSpider.DinoTamedInventoryComponent_BogSpider_C.ExecuteUbergraph_DinoTamedInventoryComponent_BogSpider
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoTamedInventoryComponent_BogSpider_C::ExecuteUbergraph_DinoTamedInventoryComponent_BogSpider(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_BogSpider.DinoTamedInventoryComponent_BogSpider_C.ExecuteUbergraph_DinoTamedInventoryComponent_BogSpider");
		
		UDinoTamedInventoryComponent_BogSpider_C_ExecuteUbergraph_DinoTamedInventoryComponent_BogSpider_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoTamedInventoryComponent_BogSpider_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoTamedInventoryComponent_BogSpider_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_BogSpider.DinoTamedInventoryComponent_BogSpider_C");
		return ptr;
	}

}


