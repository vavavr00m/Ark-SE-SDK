﻿/**
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
	 * 		Name   -> Function DataListEntryWidgetPrimalItem_CraftingPlayerHUD.DataListEntryWidgetPrimalItem_CraftingPlayerHUD_C.ExecuteUbergraph_DataListEntryWidgetPrimalItem_CraftingPlayerHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDataListEntryWidgetPrimalItem_CraftingPlayerHUD_C::ExecuteUbergraph_DataListEntryWidgetPrimalItem_CraftingPlayerHUD(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DataListEntryWidgetPrimalItem_CraftingPlayerHUD.DataListEntryWidgetPrimalItem_CraftingPlayerHUD_C.ExecuteUbergraph_DataListEntryWidgetPrimalItem_CraftingPlayerHUD");
		
		UDataListEntryWidgetPrimalItem_CraftingPlayerHUD_C_ExecuteUbergraph_DataListEntryWidgetPrimalItem_CraftingPlayerHUD_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDataListEntryWidgetPrimalItem_CraftingPlayerHUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDataListEntryWidgetPrimalItem_CraftingPlayerHUD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DataListEntryWidgetPrimalItem_CraftingPlayerHUD.DataListEntryWidgetPrimalItem_CraftingPlayerHUD_C");
		return ptr;
	}

}


