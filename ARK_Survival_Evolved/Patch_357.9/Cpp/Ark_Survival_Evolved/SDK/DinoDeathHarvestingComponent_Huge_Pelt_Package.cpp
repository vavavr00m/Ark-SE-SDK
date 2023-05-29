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
	 * 		Name   -> Function DinoDeathHarvestingComponent_Huge_Pelt.DinoDeathHarvestingComponent_Huge_Pelt_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Huge_Pelt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoDeathHarvestingComponent_Huge_Pelt_C::ExecuteUbergraph_DinoDeathHarvestingComponent_Huge_Pelt(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoDeathHarvestingComponent_Huge_Pelt.DinoDeathHarvestingComponent_Huge_Pelt_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Huge_Pelt");
		
		UDinoDeathHarvestingComponent_Huge_Pelt_C_ExecuteUbergraph_DinoDeathHarvestingComponent_Huge_Pelt_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoDeathHarvestingComponent_Huge_Pelt_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoDeathHarvestingComponent_Huge_Pelt_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoDeathHarvestingComponent_Huge_Pelt.DinoDeathHarvestingComponent_Huge_Pelt_C");
		return ptr;
	}

}


