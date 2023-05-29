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
	 * 		Name   -> Function DinoTamedInventoryComponent_SpaceDolphin.DinoTamedInventoryComponent_SpaceDolphin_C.ExecuteUbergraph_DinoTamedInventoryComponent_SpaceDolphin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoTamedInventoryComponent_SpaceDolphin_C::ExecuteUbergraph_DinoTamedInventoryComponent_SpaceDolphin(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_SpaceDolphin.DinoTamedInventoryComponent_SpaceDolphin_C.ExecuteUbergraph_DinoTamedInventoryComponent_SpaceDolphin");
		
		UDinoTamedInventoryComponent_SpaceDolphin_C_ExecuteUbergraph_DinoTamedInventoryComponent_SpaceDolphin_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoTamedInventoryComponent_SpaceDolphin_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoTamedInventoryComponent_SpaceDolphin_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_SpaceDolphin.DinoTamedInventoryComponent_SpaceDolphin_C");
		return ptr;
	}

}

