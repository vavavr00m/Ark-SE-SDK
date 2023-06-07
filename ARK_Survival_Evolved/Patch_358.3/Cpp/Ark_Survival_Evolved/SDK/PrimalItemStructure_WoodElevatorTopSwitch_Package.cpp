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
	 * 		Name   -> Function PrimalItemStructure_WoodElevatorTopSwitch.PrimalItemStructure_WoodElevatorTopSwitch_C.ExecuteUbergraph_PrimalItemStructure_WoodElevatorTopSwitch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemStructure_WoodElevatorTopSwitch_C::ExecuteUbergraph_PrimalItemStructure_WoodElevatorTopSwitch(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_WoodElevatorTopSwitch.PrimalItemStructure_WoodElevatorTopSwitch_C.ExecuteUbergraph_PrimalItemStructure_WoodElevatorTopSwitch");
		
		UPrimalItemStructure_WoodElevatorTopSwitch_C_ExecuteUbergraph_PrimalItemStructure_WoodElevatorTopSwitch_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemStructure_WoodElevatorTopSwitch_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemStructure_WoodElevatorTopSwitch_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_WoodElevatorTopSwitch.PrimalItemStructure_WoodElevatorTopSwitch_C");
		return ptr;
	}

}


