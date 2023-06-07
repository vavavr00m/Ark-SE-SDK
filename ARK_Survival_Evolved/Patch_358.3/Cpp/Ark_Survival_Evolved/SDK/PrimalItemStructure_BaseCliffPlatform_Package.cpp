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
	 * 		Name   -> Function PrimalItemStructure_BaseCliffPlatform.PrimalItemStructure_BaseCliffPlatform_C.ExecuteUbergraph_PrimalItemStructure_BaseCliffPlatform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemStructure_BaseCliffPlatform_C::ExecuteUbergraph_PrimalItemStructure_BaseCliffPlatform(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_BaseCliffPlatform.PrimalItemStructure_BaseCliffPlatform_C.ExecuteUbergraph_PrimalItemStructure_BaseCliffPlatform");
		
		UPrimalItemStructure_BaseCliffPlatform_C_ExecuteUbergraph_PrimalItemStructure_BaseCliffPlatform_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemStructure_BaseCliffPlatform_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemStructure_BaseCliffPlatform_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_BaseCliffPlatform.PrimalItemStructure_BaseCliffPlatform_C");
		return ptr;
	}

}


