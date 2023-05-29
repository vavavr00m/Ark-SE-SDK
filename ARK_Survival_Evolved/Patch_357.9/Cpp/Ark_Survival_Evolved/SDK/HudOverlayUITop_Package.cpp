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
	 * 		Name   -> Function HudOverlayUITop.HudOverlayUITop_C.ExecuteUbergraph_HudOverlayUITop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHudOverlayUITop_C::ExecuteUbergraph_HudOverlayUITop(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HudOverlayUITop.HudOverlayUITop_C.ExecuteUbergraph_HudOverlayUITop");
		
		UHudOverlayUITop_C_ExecuteUbergraph_HudOverlayUITop_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHudOverlayUITop_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHudOverlayUITop_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HudOverlayUITop.HudOverlayUITop_C");
		return ptr;
	}

}


