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
	 * 		Name   -> Function PrimalItemStructure_Furniture_WoodChair.PrimalItemStructure_Furniture_WoodChair_C.ExecuteUbergraph_PrimalItemStructure_Furniture_WoodChair
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemStructure_Furniture_WoodChair_C::ExecuteUbergraph_PrimalItemStructure_Furniture_WoodChair(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_Furniture_WoodChair.PrimalItemStructure_Furniture_WoodChair_C.ExecuteUbergraph_PrimalItemStructure_Furniture_WoodChair");
		
		UPrimalItemStructure_Furniture_WoodChair_C_ExecuteUbergraph_PrimalItemStructure_Furniture_WoodChair_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemStructure_Furniture_WoodChair_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemStructure_Furniture_WoodChair_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemStructure_Furniture_WoodChair.PrimalItemStructure_Furniture_WoodChair_C");
		return ptr;
	}

}


