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
	 * 		Name   -> Function DinoTamedInventoryComponent_BP_NoSaddle.DinoTamedInventoryComponent_BP_NoSaddle_C.ExecuteUbergraph_DinoTamedInventoryComponent_BP_NoSaddle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoTamedInventoryComponent_BP_NoSaddle_C::ExecuteUbergraph_DinoTamedInventoryComponent_BP_NoSaddle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoTamedInventoryComponent_BP_NoSaddle.DinoTamedInventoryComponent_BP_NoSaddle_C.ExecuteUbergraph_DinoTamedInventoryComponent_BP_NoSaddle");
		
		UDinoTamedInventoryComponent_BP_NoSaddle_C_ExecuteUbergraph_DinoTamedInventoryComponent_BP_NoSaddle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoTamedInventoryComponent_BP_NoSaddle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoTamedInventoryComponent_BP_NoSaddle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_BP_NoSaddle.DinoTamedInventoryComponent_BP_NoSaddle_C");
		return ptr;
	}

}


