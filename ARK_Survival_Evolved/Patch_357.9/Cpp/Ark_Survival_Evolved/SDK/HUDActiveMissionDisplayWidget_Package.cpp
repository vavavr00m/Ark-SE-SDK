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
	 * 		Name   -> Function HUDActiveMissionDisplayWidget.HUDActiveMissionDisplayWidget_C.ExecuteUbergraph_HUDActiveMissionDisplayWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUDActiveMissionDisplayWidget_C::ExecuteUbergraph_HUDActiveMissionDisplayWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDActiveMissionDisplayWidget.HUDActiveMissionDisplayWidget_C.ExecuteUbergraph_HUDActiveMissionDisplayWidget");
		
		UHUDActiveMissionDisplayWidget_C_ExecuteUbergraph_HUDActiveMissionDisplayWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUDActiveMissionDisplayWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUDActiveMissionDisplayWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUDActiveMissionDisplayWidget.HUDActiveMissionDisplayWidget_C");
		return ptr;
	}

}


