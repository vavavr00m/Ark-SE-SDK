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
	 * 		Name   -> Function DinoDeathHarvestingComponent_Ammonite.DinoDeathHarvestingComponent_Ammonite_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Ammonite
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoDeathHarvestingComponent_Ammonite_C::ExecuteUbergraph_DinoDeathHarvestingComponent_Ammonite(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoDeathHarvestingComponent_Ammonite.DinoDeathHarvestingComponent_Ammonite_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Ammonite");
		
		UDinoDeathHarvestingComponent_Ammonite_C_ExecuteUbergraph_DinoDeathHarvestingComponent_Ammonite_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoDeathHarvestingComponent_Ammonite_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoDeathHarvestingComponent_Ammonite_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoDeathHarvestingComponent_Ammonite.DinoDeathHarvestingComponent_Ammonite_C");
		return ptr;
	}

}


