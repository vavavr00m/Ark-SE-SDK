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
	 * 		Name   -> Function ContextMenu_InventorySort.ContextMenu_InventorySort_C.ExecuteUbergraph_ContextMenu_InventorySort
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UContextMenu_InventorySort_C::ExecuteUbergraph_ContextMenu_InventorySort(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ContextMenu_InventorySort.ContextMenu_InventorySort_C.ExecuteUbergraph_ContextMenu_InventorySort");
		
		UContextMenu_InventorySort_C_ExecuteUbergraph_ContextMenu_InventorySort_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UContextMenu_InventorySort_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UContextMenu_InventorySort_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ContextMenu_InventorySort.ContextMenu_InventorySort_C");
		return ptr;
	}

}


