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
	 * 		Name   -> Function DataListEntryWidgetGeneric_SimpleTextDisplay.DataListEntryWidgetGeneric_SimpleTextDisplay_C.ExecuteUbergraph_DataListEntryWidgetGeneric_SimpleTextDisplay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDataListEntryWidgetGeneric_SimpleTextDisplay_C::ExecuteUbergraph_DataListEntryWidgetGeneric_SimpleTextDisplay(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DataListEntryWidgetGeneric_SimpleTextDisplay.DataListEntryWidgetGeneric_SimpleTextDisplay_C.ExecuteUbergraph_DataListEntryWidgetGeneric_SimpleTextDisplay");
		
		UDataListEntryWidgetGeneric_SimpleTextDisplay_C_ExecuteUbergraph_DataListEntryWidgetGeneric_SimpleTextDisplay_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDataListEntryWidgetGeneric_SimpleTextDisplay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDataListEntryWidgetGeneric_SimpleTextDisplay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DataListEntryWidgetGeneric_SimpleTextDisplay.DataListEntryWidgetGeneric_SimpleTextDisplay_C");
		return ptr;
	}

}


