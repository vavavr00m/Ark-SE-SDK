/**
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
	 * 		Name   -> Function PrimalItemCostume_GhostLanternPug.PrimalItemCostume_GhostLanternPug_C.ExecuteUbergraph_PrimalItemCostume_GhostLanternPug
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalItemCostume_GhostLanternPug_C::ExecuteUbergraph_PrimalItemCostume_GhostLanternPug(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalItemCostume_GhostLanternPug.PrimalItemCostume_GhostLanternPug_C.ExecuteUbergraph_PrimalItemCostume_GhostLanternPug");
		
		UPrimalItemCostume_GhostLanternPug_C_ExecuteUbergraph_PrimalItemCostume_GhostLanternPug_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalItemCostume_GhostLanternPug_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalItemCostume_GhostLanternPug_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemCostume_GhostLanternPug.PrimalItemCostume_GhostLanternPug_C");
		return ptr;
	}

}


