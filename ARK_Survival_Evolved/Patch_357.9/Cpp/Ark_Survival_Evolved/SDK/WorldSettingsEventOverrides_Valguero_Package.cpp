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
	 * 		Name   -> Function WorldSettingsEventOverrides_Valguero.WorldSettingsEventOverrides_Valguero_C.ExecuteUbergraph_WorldSettingsEventOverrides_Valguero
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWorldSettingsEventOverrides_Valguero_C::ExecuteUbergraph_WorldSettingsEventOverrides_Valguero(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WorldSettingsEventOverrides_Valguero.WorldSettingsEventOverrides_Valguero_C.ExecuteUbergraph_WorldSettingsEventOverrides_Valguero");
		
		UWorldSettingsEventOverrides_Valguero_C_ExecuteUbergraph_WorldSettingsEventOverrides_Valguero_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWorldSettingsEventOverrides_Valguero_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWorldSettingsEventOverrides_Valguero_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WorldSettingsEventOverrides_Valguero.WorldSettingsEventOverrides_Valguero_C");
		return ptr;
	}

}


