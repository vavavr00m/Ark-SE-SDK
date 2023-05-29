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
	 * 		Name   -> Function DataListEntryWidgetGeneric_ExplorerNote.DataListEntryWidgetGeneric_ExplorerNote_C.ExecuteUbergraph_DataListEntryWidgetGeneric_ExplorerNote
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDataListEntryWidgetGeneric_ExplorerNote_C::ExecuteUbergraph_DataListEntryWidgetGeneric_ExplorerNote(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DataListEntryWidgetGeneric_ExplorerNote.DataListEntryWidgetGeneric_ExplorerNote_C.ExecuteUbergraph_DataListEntryWidgetGeneric_ExplorerNote");
		
		UDataListEntryWidgetGeneric_ExplorerNote_C_ExecuteUbergraph_DataListEntryWidgetGeneric_ExplorerNote_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDataListEntryWidgetGeneric_ExplorerNote_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDataListEntryWidgetGeneric_ExplorerNote_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DataListEntryWidgetGeneric_ExplorerNote.DataListEntryWidgetGeneric_ExplorerNote_C");
		return ptr;
	}

}


