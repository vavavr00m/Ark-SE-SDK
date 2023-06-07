﻿/**
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
	 * 		Name   -> Function DataListButton_MainMenu.DataListButton_MainMenu_C.ExecuteUbergraph_DataListButton_MainMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDataListButton_MainMenu_C::ExecuteUbergraph_DataListButton_MainMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DataListButton_MainMenu.DataListButton_MainMenu_C.ExecuteUbergraph_DataListButton_MainMenu");
		
		UDataListButton_MainMenu_C_ExecuteUbergraph_DataListButton_MainMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDataListButton_MainMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDataListButton_MainMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DataListButton_MainMenu.DataListButton_MainMenu_C");
		return ptr;
	}

}


