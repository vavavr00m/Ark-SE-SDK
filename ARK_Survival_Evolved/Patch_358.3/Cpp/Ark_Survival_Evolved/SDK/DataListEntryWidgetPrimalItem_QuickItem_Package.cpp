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
	 * 		Name   -> Function DataListEntryWidgetPrimalItem_QuickItem.DataListEntryWidgetPrimalItem_QuickItem_C.ExecuteUbergraph_DataListEntryWidgetPrimalItem_QuickItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDataListEntryWidgetPrimalItem_QuickItem_C::ExecuteUbergraph_DataListEntryWidgetPrimalItem_QuickItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DataListEntryWidgetPrimalItem_QuickItem.DataListEntryWidgetPrimalItem_QuickItem_C.ExecuteUbergraph_DataListEntryWidgetPrimalItem_QuickItem");
		
		UDataListEntryWidgetPrimalItem_QuickItem_C_ExecuteUbergraph_DataListEntryWidgetPrimalItem_QuickItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDataListEntryWidgetPrimalItem_QuickItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDataListEntryWidgetPrimalItem_QuickItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DataListEntryWidgetPrimalItem_QuickItem.DataListEntryWidgetPrimalItem_QuickItem_C");
		return ptr;
	}

}


