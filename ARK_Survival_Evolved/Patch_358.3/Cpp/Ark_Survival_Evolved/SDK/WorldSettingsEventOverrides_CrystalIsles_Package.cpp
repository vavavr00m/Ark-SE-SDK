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
	 * 		Name   -> Function WorldSettingsEventOverrides_CrystalIsles.WorldSettingsEventOverrides_CrystalIsles_C.ExecuteUbergraph_WorldSettingsEventOverrides_CrystalIsles
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWorldSettingsEventOverrides_CrystalIsles_C::ExecuteUbergraph_WorldSettingsEventOverrides_CrystalIsles(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WorldSettingsEventOverrides_CrystalIsles.WorldSettingsEventOverrides_CrystalIsles_C.ExecuteUbergraph_WorldSettingsEventOverrides_CrystalIsles");
		
		UWorldSettingsEventOverrides_CrystalIsles_C_ExecuteUbergraph_WorldSettingsEventOverrides_CrystalIsles_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWorldSettingsEventOverrides_CrystalIsles_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWorldSettingsEventOverrides_CrystalIsles_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass WorldSettingsEventOverrides_CrystalIsles.WorldSettingsEventOverrides_CrystalIsles_C");
		return ptr;
	}

}


