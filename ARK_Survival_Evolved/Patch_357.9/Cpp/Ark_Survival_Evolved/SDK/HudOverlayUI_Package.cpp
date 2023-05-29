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
	 * 		Name   -> Function HudOverlayUI.HudOverlayUI_C.ExecuteUbergraph_HudOverlayUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHudOverlayUI_C::ExecuteUbergraph_HudOverlayUI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HudOverlayUI.HudOverlayUI_C.ExecuteUbergraph_HudOverlayUI");
		
		UHudOverlayUI_C_ExecuteUbergraph_HudOverlayUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHudOverlayUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHudOverlayUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HudOverlayUI.HudOverlayUI_C");
		return ptr;
	}

}


