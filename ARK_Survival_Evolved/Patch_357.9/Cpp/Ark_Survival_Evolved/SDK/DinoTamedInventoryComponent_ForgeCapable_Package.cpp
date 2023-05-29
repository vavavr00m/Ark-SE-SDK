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
	 * 		Name   -> Function DinoTamedInventoryComponent_ForgeCapable.DinoTamedInventoryComponent_ForgeCapable_C.ExecuteUbergraph_DinoTamedInventoryComponent_ForgeCapable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoTamedInventoryComponent_ForgeCapable_C::ExecuteUbergraph_DinoTamedInventoryComponent_ForgeCapable(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_ForgeCapable.DinoTamedInventoryComponent_ForgeCapable_C.ExecuteUbergraph_DinoTamedInventoryComponent_ForgeCapable");
		
		UDinoTamedInventoryComponent_ForgeCapable_C_ExecuteUbergraph_DinoTamedInventoryComponent_ForgeCapable_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoTamedInventoryComponent_ForgeCapable_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoTamedInventoryComponent_ForgeCapable_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_ForgeCapable.DinoTamedInventoryComponent_ForgeCapable_C");
		return ptr;
	}

}

