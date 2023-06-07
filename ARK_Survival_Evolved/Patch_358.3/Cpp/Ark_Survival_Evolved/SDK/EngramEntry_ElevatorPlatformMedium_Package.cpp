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
	 * 		Name   -> Function EngramEntry_ElevatorPlatformMedium.EngramEntry_ElevatorPlatformMedium_C.ExecuteUbergraph_EngramEntry_ElevatorPlatformMedium
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEngramEntry_ElevatorPlatformMedium_C::ExecuteUbergraph_EngramEntry_ElevatorPlatformMedium(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EngramEntry_ElevatorPlatformMedium.EngramEntry_ElevatorPlatformMedium_C.ExecuteUbergraph_EngramEntry_ElevatorPlatformMedium");
		
		UEngramEntry_ElevatorPlatformMedium_C_ExecuteUbergraph_EngramEntry_ElevatorPlatformMedium_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEngramEntry_ElevatorPlatformMedium_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEngramEntry_ElevatorPlatformMedium_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_ElevatorPlatformMedium.EngramEntry_ElevatorPlatformMedium_C");
		return ptr;
	}

}


