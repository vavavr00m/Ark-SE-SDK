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
	 * 		Name   -> Function DinoDropInventoryComponent_Kaiju_Forest.DinoDropInventoryComponent_Kaiju_Forest_C.ExecuteUbergraph_DinoDropInventoryComponent_Kaiju_Forest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoDropInventoryComponent_Kaiju_Forest_C::ExecuteUbergraph_DinoDropInventoryComponent_Kaiju_Forest(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoDropInventoryComponent_Kaiju_Forest.DinoDropInventoryComponent_Kaiju_Forest_C.ExecuteUbergraph_DinoDropInventoryComponent_Kaiju_Forest");
		
		UDinoDropInventoryComponent_Kaiju_Forest_C_ExecuteUbergraph_DinoDropInventoryComponent_Kaiju_Forest_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoDropInventoryComponent_Kaiju_Forest_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoDropInventoryComponent_Kaiju_Forest_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoDropInventoryComponent_Kaiju_Forest.DinoDropInventoryComponent_Kaiju_Forest_C");
		return ptr;
	}

}

