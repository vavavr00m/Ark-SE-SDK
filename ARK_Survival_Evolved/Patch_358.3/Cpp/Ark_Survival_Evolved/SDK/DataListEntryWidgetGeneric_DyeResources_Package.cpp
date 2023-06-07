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
	 * 		Name   -> Function DataListEntryWidgetGeneric_DyeResources.DataListEntryWidgetGeneric_DyeResources_C.ExecuteUbergraph_DataListEntryWidgetGeneric_DyeResources
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDataListEntryWidgetGeneric_DyeResources_C::ExecuteUbergraph_DataListEntryWidgetGeneric_DyeResources(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DataListEntryWidgetGeneric_DyeResources.DataListEntryWidgetGeneric_DyeResources_C.ExecuteUbergraph_DataListEntryWidgetGeneric_DyeResources");
		
		UDataListEntryWidgetGeneric_DyeResources_C_ExecuteUbergraph_DataListEntryWidgetGeneric_DyeResources_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDataListEntryWidgetGeneric_DyeResources_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDataListEntryWidgetGeneric_DyeResources_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DataListEntryWidgetGeneric_DyeResources.DataListEntryWidgetGeneric_DyeResources_C");
		return ptr;
	}

}


