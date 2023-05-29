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
	 * 		Name   -> Function PrimalItemResource_ApexDrop_CrystalWyvern.PrimalItemResource_ApexDrop_CrystalWyvern_C.ExecuteUbergraph_PrimalItemResource_ApexDrop_CrystalWyvern
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemResource_ApexDrop_CrystalWyvern_C::ExecuteUbergraph_PrimalItemResource_ApexDrop_CrystalWyvern(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemResource_ApexDrop_CrystalWyvern.PrimalItemResource_ApexDrop_CrystalWyvern_C.ExecuteUbergraph_PrimalItemResource_ApexDrop_CrystalWyvern");
		
		UPrimalItemResource_ApexDrop_CrystalWyvern_C_ExecuteUbergraph_PrimalItemResource_ApexDrop_CrystalWyvern_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemResource_ApexDrop_CrystalWyvern_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemResource_ApexDrop_CrystalWyvern_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemResource_ApexDrop_CrystalWyvern.PrimalItemResource_ApexDrop_CrystalWyvern_C");
		return ptr;
	}

}


