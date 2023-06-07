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
	 * 		Name   -> Function InventoryMenu2.InventoryMenu2_C.ExecuteUbergraph_InventoryMenu2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInventoryMenu2_C::ExecuteUbergraph_InventoryMenu2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InventoryMenu2.InventoryMenu2_C.ExecuteUbergraph_InventoryMenu2");
		
		UInventoryMenu2_C_ExecuteUbergraph_InventoryMenu2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInventoryMenu2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInventoryMenu2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InventoryMenu2.InventoryMenu2_C");
		return ptr;
	}

}


