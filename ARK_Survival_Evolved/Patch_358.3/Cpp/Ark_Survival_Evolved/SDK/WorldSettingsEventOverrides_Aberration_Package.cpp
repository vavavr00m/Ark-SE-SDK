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
	 * 		Name   -> Function WorldSettingsEventOverrides_Aberration.WorldSettingsEventOverrides_Aberration_C.ExecuteUbergraph_WorldSettingsEventOverrides_Aberration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWorldSettingsEventOverrides_Aberration_C::ExecuteUbergraph_WorldSettingsEventOverrides_Aberration(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WorldSettingsEventOverrides_Aberration.WorldSettingsEventOverrides_Aberration_C.ExecuteUbergraph_WorldSettingsEventOverrides_Aberration");
		
		UWorldSettingsEventOverrides_Aberration_C_ExecuteUbergraph_WorldSettingsEventOverrides_Aberration_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWorldSettingsEventOverrides_Aberration_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWorldSettingsEventOverrides_Aberration_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WorldSettingsEventOverrides_Aberration.WorldSettingsEventOverrides_Aberration_C");
		return ptr;
	}

}


