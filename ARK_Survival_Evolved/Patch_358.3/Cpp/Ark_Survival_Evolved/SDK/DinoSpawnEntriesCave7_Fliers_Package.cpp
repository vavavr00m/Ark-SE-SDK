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
	 * 		Name   -> Function DinoSpawnEntriesCave7-Fliers.DinoSpawnEntriesCave7-Fliers_C.ExecuteUbergraph_DinoSpawnEntriesCave7-Fliers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoSpawnEntriesCave7Fliers_C::ExecuteUbergraph_DinoSpawnEntriesCave7Fliers(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoSpawnEntriesCave7-Fliers.DinoSpawnEntriesCave7-Fliers_C.ExecuteUbergraph_DinoSpawnEntriesCave7-Fliers");
		
		UDinoSpawnEntriesCave7Fliers_C_ExecuteUbergraph_DinoSpawnEntriesCave7Fliers_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoSpawnEntriesCave7Fliers_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoSpawnEntriesCave7Fliers_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoSpawnEntriesCave7_Fliers.DinoSpawnEntriesCave7-Fliers_C");
		return ptr;
	}

}


