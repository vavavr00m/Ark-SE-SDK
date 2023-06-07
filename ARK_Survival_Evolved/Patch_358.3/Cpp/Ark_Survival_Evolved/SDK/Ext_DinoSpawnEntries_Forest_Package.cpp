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
	 * 		Name   -> Function Ext_DinoSpawnEntries_Forest.Ext_DinoSpawnEntries_Forest_C.ExecuteUbergraph_Ext_DinoSpawnEntries_Forest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UExt_DinoSpawnEntries_Forest_C::ExecuteUbergraph_Ext_DinoSpawnEntries_Forest(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ext_DinoSpawnEntries_Forest.Ext_DinoSpawnEntries_Forest_C.ExecuteUbergraph_Ext_DinoSpawnEntries_Forest");
		
		UExt_DinoSpawnEntries_Forest_C_ExecuteUbergraph_Ext_DinoSpawnEntries_Forest_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UExt_DinoSpawnEntries_Forest_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExt_DinoSpawnEntries_Forest_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ext_DinoSpawnEntries_Forest.Ext_DinoSpawnEntries_Forest_C");
		return ptr;
	}

}


