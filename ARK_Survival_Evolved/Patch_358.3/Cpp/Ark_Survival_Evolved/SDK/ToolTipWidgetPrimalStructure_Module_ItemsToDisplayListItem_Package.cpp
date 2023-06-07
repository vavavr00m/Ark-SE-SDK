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
	 * 		Name   -> Function ToolTipWidgetPrimalStructure_Module_ItemsToDisplayListItem.ToolTipWidgetPrimalStructure_Module_ItemsToDisplayListItem_C.ExecuteUbergraph_ToolTipWidgetPrimalStructure_Module_ItemsToDisplayListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UToolTipWidgetPrimalStructure_Module_ItemsToDisplayListItem_C::ExecuteUbergraph_ToolTipWidgetPrimalStructure_Module_ItemsToDisplayListItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ToolTipWidgetPrimalStructure_Module_ItemsToDisplayListItem.ToolTipWidgetPrimalStructure_Module_ItemsToDisplayListItem_C.ExecuteUbergraph_ToolTipWidgetPrimalStructure_Module_ItemsToDisplayListItem");
		
		UToolTipWidgetPrimalStructure_Module_ItemsToDisplayListItem_C_ExecuteUbergraph_ToolTipWidgetPrimalStructure_Module_ItemsToDisplayListItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UToolTipWidgetPrimalStructure_Module_ItemsToDisplayListItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UToolTipWidgetPrimalStructure_Module_ItemsToDisplayListItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ToolTipWidgetPrimalStructure_Module_ItemsToDisplayListItem.ToolTipWidgetPrimalStructure_Module_ItemsToDisplayListItem_C");
		return ptr;
	}

}


