/**
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
	 * 		Name   -> Function DinoDeathHarvestingComponent_Tiny_LotsHide.DinoDeathHarvestingComponent_Tiny_LotsHide_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Tiny_LotsHide
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoDeathHarvestingComponent_Tiny_LotsHide_C::ExecuteUbergraph_DinoDeathHarvestingComponent_Tiny_LotsHide(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoDeathHarvestingComponent_Tiny_LotsHide.DinoDeathHarvestingComponent_Tiny_LotsHide_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Tiny_LotsHide");
		
		UDinoDeathHarvestingComponent_Tiny_LotsHide_C_ExecuteUbergraph_DinoDeathHarvestingComponent_Tiny_LotsHide_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoDeathHarvestingComponent_Tiny_LotsHide_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoDeathHarvestingComponent_Tiny_LotsHide_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoDeathHarvestingComponent_Tiny_LotsHide.DinoDeathHarvestingComponent_Tiny_LotsHide_C");
		return ptr;
	}

}


