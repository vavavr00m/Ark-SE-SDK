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
	 * 		Name   -> Function PrimalItemCostume_GhostBasilisk.PrimalItemCostume_GhostBasilisk_C.ExecuteUbergraph_PrimalItemCostume_GhostBasilisk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemCostume_GhostBasilisk_C::ExecuteUbergraph_PrimalItemCostume_GhostBasilisk(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemCostume_GhostBasilisk.PrimalItemCostume_GhostBasilisk_C.ExecuteUbergraph_PrimalItemCostume_GhostBasilisk");
		
		UPrimalItemCostume_GhostBasilisk_C_ExecuteUbergraph_PrimalItemCostume_GhostBasilisk_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemCostume_GhostBasilisk_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemCostume_GhostBasilisk_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemCostume_GhostBasilisk.PrimalItemCostume_GhostBasilisk_C");
		return ptr;
	}

}

