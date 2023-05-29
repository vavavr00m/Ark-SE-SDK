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
	 * 		Name   -> Function DinoDropInventoryComponent_Carnivore_Medium_LionfishLion.DinoDropInventoryComponent_Carnivore_Medium_LionfishLion_C.ExecuteUbergraph_DinoDropInventoryComponent_Carnivore_Medium_LionfishLion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoDropInventoryComponent_Carnivore_Medium_LionfishLion_C::ExecuteUbergraph_DinoDropInventoryComponent_Carnivore_Medium_LionfishLion(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoDropInventoryComponent_Carnivore_Medium_LionfishLion.DinoDropInventoryComponent_Carnivore_Medium_LionfishLion_C.ExecuteUbergraph_DinoDropInventoryComponent_Carnivore_Medium_LionfishLion");
		
		UDinoDropInventoryComponent_Carnivore_Medium_LionfishLion_C_ExecuteUbergraph_DinoDropInventoryComponent_Carnivore_Medium_LionfishLion_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoDropInventoryComponent_Carnivore_Medium_LionfishLion_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoDropInventoryComponent_Carnivore_Medium_LionfishLion_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoDropInventoryComponent_Carnivore_Medium_LionfishLion.DinoDropInventoryComponent_Carnivore_Medium_LionfishLion_C");
		return ptr;
	}

}


