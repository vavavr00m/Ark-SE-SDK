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
	 * 		Name   -> Function HUDActiveMissionPhaseRequirementWidget.HUDActiveMissionPhaseRequirementWidget_C.ExecuteUbergraph_HUDActiveMissionPhaseRequirementWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUDActiveMissionPhaseRequirementWidget_C::ExecuteUbergraph_HUDActiveMissionPhaseRequirementWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDActiveMissionPhaseRequirementWidget.HUDActiveMissionPhaseRequirementWidget_C.ExecuteUbergraph_HUDActiveMissionPhaseRequirementWidget");
		
		UHUDActiveMissionPhaseRequirementWidget_C_ExecuteUbergraph_HUDActiveMissionPhaseRequirementWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUDActiveMissionPhaseRequirementWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUDActiveMissionPhaseRequirementWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUDActiveMissionPhaseRequirementWidget.HUDActiveMissionPhaseRequirementWidget_C");
		return ptr;
	}

}


