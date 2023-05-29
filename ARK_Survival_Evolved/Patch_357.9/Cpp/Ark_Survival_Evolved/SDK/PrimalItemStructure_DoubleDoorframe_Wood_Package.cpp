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
	 * 		Name   -> Function PrimalItemStructure_DoubleDoorframe_Wood.PrimalItemStructure_DoubleDoorframe_Wood_C.ExecuteUbergraph_PrimalItemStructure_DoubleDoorframe_Wood
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemStructure_DoubleDoorframe_Wood_C::ExecuteUbergraph_PrimalItemStructure_DoubleDoorframe_Wood(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_DoubleDoorframe_Wood.PrimalItemStructure_DoubleDoorframe_Wood_C.ExecuteUbergraph_PrimalItemStructure_DoubleDoorframe_Wood");
		
		UPrimalItemStructure_DoubleDoorframe_Wood_C_ExecuteUbergraph_PrimalItemStructure_DoubleDoorframe_Wood_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemStructure_DoubleDoorframe_Wood_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemStructure_DoubleDoorframe_Wood_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_DoubleDoorframe_Wood.PrimalItemStructure_DoubleDoorframe_Wood_C");
		return ptr;
	}

}


