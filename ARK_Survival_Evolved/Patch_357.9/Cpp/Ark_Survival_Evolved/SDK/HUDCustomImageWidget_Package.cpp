﻿/**
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
	 * 		Name   -> Function HUDCustomImageWidget.HUDCustomImageWidget_C.ExecuteUbergraph_HUDCustomImageWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUDCustomImageWidget_C::ExecuteUbergraph_HUDCustomImageWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDCustomImageWidget.HUDCustomImageWidget_C.ExecuteUbergraph_HUDCustomImageWidget");
		
		UHUDCustomImageWidget_C_ExecuteUbergraph_HUDCustomImageWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUDCustomImageWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUDCustomImageWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUDCustomImageWidget.HUDCustomImageWidget_C");
		return ptr;
	}

}

