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
	 * 		Name   -> Function SteamInventoryPopupUI.SteamInventoryPopupUI_C.ExecuteUbergraph_SteamInventoryPopupUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USteamInventoryPopupUI_C::ExecuteUbergraph_SteamInventoryPopupUI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SteamInventoryPopupUI.SteamInventoryPopupUI_C.ExecuteUbergraph_SteamInventoryPopupUI");
		
		USteamInventoryPopupUI_C_ExecuteUbergraph_SteamInventoryPopupUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USteamInventoryPopupUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USteamInventoryPopupUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SteamInventoryPopupUI.SteamInventoryPopupUI_C");
		return ptr;
	}

}


