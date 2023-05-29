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
	 * 		Name   -> Function PrimalInventoryBP_CropPlot_Medium.PrimalInventoryBP_CropPlot_Medium_C.ExecuteUbergraph_PrimalInventoryBP_CropPlot_Medium
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPrimalInventoryBP_CropPlot_Medium_C::ExecuteUbergraph_PrimalInventoryBP_CropPlot_Medium(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PrimalInventoryBP_CropPlot_Medium.PrimalInventoryBP_CropPlot_Medium_C.ExecuteUbergraph_PrimalInventoryBP_CropPlot_Medium");
		
		UPrimalInventoryBP_CropPlot_Medium_C_ExecuteUbergraph_PrimalInventoryBP_CropPlot_Medium_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrimalInventoryBP_CropPlot_Medium_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrimalInventoryBP_CropPlot_Medium_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_CropPlot_Medium.PrimalInventoryBP_CropPlot_Medium_C");
		return ptr;
	}

}


