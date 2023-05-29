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
	 * 		Name   -> Function DataListEntryWidgetPrimalItem_Empty.DataListEntryWidgetPrimalItem_Empty_C.ExecuteUbergraph_DataListEntryWidgetPrimalItem_Empty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDataListEntryWidgetPrimalItem_Empty_C::ExecuteUbergraph_DataListEntryWidgetPrimalItem_Empty(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DataListEntryWidgetPrimalItem_Empty.DataListEntryWidgetPrimalItem_Empty_C.ExecuteUbergraph_DataListEntryWidgetPrimalItem_Empty");
		
		UDataListEntryWidgetPrimalItem_Empty_C_ExecuteUbergraph_DataListEntryWidgetPrimalItem_Empty_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDataListEntryWidgetPrimalItem_Empty_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDataListEntryWidgetPrimalItem_Empty_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DataListEntryWidgetPrimalItem_Empty.DataListEntryWidgetPrimalItem_Empty_C");
		return ptr;
	}

}


