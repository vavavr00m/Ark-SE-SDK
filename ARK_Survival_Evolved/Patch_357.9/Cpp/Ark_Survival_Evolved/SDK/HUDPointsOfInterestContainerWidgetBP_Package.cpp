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
	 * 		Name   -> Function HUDPointsOfInterestContainerWidgetBP.HUDPointsOfInterestContainerWidgetBP_C.ExecuteUbergraph_HUDPointsOfInterestContainerWidgetBP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHUDPointsOfInterestContainerWidgetBP_C::ExecuteUbergraph_HUDPointsOfInterestContainerWidgetBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HUDPointsOfInterestContainerWidgetBP.HUDPointsOfInterestContainerWidgetBP_C.ExecuteUbergraph_HUDPointsOfInterestContainerWidgetBP");
		
		UHUDPointsOfInterestContainerWidgetBP_C_ExecuteUbergraph_HUDPointsOfInterestContainerWidgetBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHUDPointsOfInterestContainerWidgetBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHUDPointsOfInterestContainerWidgetBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HUDPointsOfInterestContainerWidgetBP.HUDPointsOfInterestContainerWidgetBP_C");
		return ptr;
	}

}


