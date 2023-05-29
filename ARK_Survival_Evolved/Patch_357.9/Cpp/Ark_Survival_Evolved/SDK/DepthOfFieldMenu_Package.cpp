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
	 * 		Name   -> Function DepthOfFieldMenu.DepthOfFieldMenu_C.ExecuteUbergraph_DepthOfFieldMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDepthOfFieldMenu_C::ExecuteUbergraph_DepthOfFieldMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DepthOfFieldMenu.DepthOfFieldMenu_C.ExecuteUbergraph_DepthOfFieldMenu");
		
		UDepthOfFieldMenu_C_ExecuteUbergraph_DepthOfFieldMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDepthOfFieldMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDepthOfFieldMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DepthOfFieldMenu.DepthOfFieldMenu_C");
		return ptr;
	}

}


