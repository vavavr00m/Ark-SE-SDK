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
	 * 		Name   -> Function DataListEntryWidgetPrimalItem_CraftQueue.DataListEntryWidgetPrimalItem_CraftQueue_C.ExecuteUbergraph_DataListEntryWidgetPrimalItem_CraftQueue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDataListEntryWidgetPrimalItem_CraftQueue_C::ExecuteUbergraph_DataListEntryWidgetPrimalItem_CraftQueue(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DataListEntryWidgetPrimalItem_CraftQueue.DataListEntryWidgetPrimalItem_CraftQueue_C.ExecuteUbergraph_DataListEntryWidgetPrimalItem_CraftQueue");
		
		UDataListEntryWidgetPrimalItem_CraftQueue_C_ExecuteUbergraph_DataListEntryWidgetPrimalItem_CraftQueue_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDataListEntryWidgetPrimalItem_CraftQueue_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDataListEntryWidgetPrimalItem_CraftQueue_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DataListEntryWidgetPrimalItem_CraftQueue.DataListEntryWidgetPrimalItem_CraftQueue_C");
		return ptr;
	}

}


