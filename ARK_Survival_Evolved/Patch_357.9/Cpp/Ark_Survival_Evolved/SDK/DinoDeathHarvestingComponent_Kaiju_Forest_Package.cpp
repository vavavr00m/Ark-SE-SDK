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
	 * 		Name   -> Function DinoDeathHarvestingComponent_Kaiju_Forest.DinoDeathHarvestingComponent_Kaiju_Forest_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Kaiju_Forest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoDeathHarvestingComponent_Kaiju_Forest_C::ExecuteUbergraph_DinoDeathHarvestingComponent_Kaiju_Forest(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoDeathHarvestingComponent_Kaiju_Forest.DinoDeathHarvestingComponent_Kaiju_Forest_C.ExecuteUbergraph_DinoDeathHarvestingComponent_Kaiju_Forest");
		
		UDinoDeathHarvestingComponent_Kaiju_Forest_C_ExecuteUbergraph_DinoDeathHarvestingComponent_Kaiju_Forest_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoDeathHarvestingComponent_Kaiju_Forest_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoDeathHarvestingComponent_Kaiju_Forest_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoDeathHarvestingComponent_Kaiju_Forest.DinoDeathHarvestingComponent_Kaiju_Forest_C");
		return ptr;
	}

}


