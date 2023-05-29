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
	 * 		Name   -> Function DinoDropInventoryComponent_Herbivore_Medium_GasBags.DinoDropInventoryComponent_Herbivore_Medium_GasBags_C.ExecuteUbergraph_DinoDropInventoryComponent_Herbivore_Medium_GasBags
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoDropInventoryComponent_Herbivore_Medium_GasBags_C::ExecuteUbergraph_DinoDropInventoryComponent_Herbivore_Medium_GasBags(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoDropInventoryComponent_Herbivore_Medium_GasBags.DinoDropInventoryComponent_Herbivore_Medium_GasBags_C.ExecuteUbergraph_DinoDropInventoryComponent_Herbivore_Medium_GasBags");
		
		UDinoDropInventoryComponent_Herbivore_Medium_GasBags_C_ExecuteUbergraph_DinoDropInventoryComponent_Herbivore_Medium_GasBags_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoDropInventoryComponent_Herbivore_Medium_GasBags_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoDropInventoryComponent_Herbivore_Medium_GasBags_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoDropInventoryComponent_Herbivore_Medium_GasBags.DinoDropInventoryComponent_Herbivore_Medium_GasBags_C");
		return ptr;
	}

}

