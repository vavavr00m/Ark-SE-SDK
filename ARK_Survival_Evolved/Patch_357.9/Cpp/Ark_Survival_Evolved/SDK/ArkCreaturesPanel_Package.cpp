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
	 * 		Name   -> Function ArkCreaturesPanel.ArkCreaturesPanel_C.ExecuteUbergraph_ArkCreaturesPanel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UArkCreaturesPanel_C::ExecuteUbergraph_ArkCreaturesPanel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ArkCreaturesPanel.ArkCreaturesPanel_C.ExecuteUbergraph_ArkCreaturesPanel");
		
		UArkCreaturesPanel_C_ExecuteUbergraph_ArkCreaturesPanel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UArkCreaturesPanel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArkCreaturesPanel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ArkCreaturesPanel.ArkCreaturesPanel_C");
		return ptr;
	}

}


