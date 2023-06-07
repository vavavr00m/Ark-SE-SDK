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
	 * 		Name   -> Function GamepadButtonLegend_Left.GamepadButtonLegend_Left_C.ExecuteUbergraph_GamepadButtonLegend_Left
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGamepadButtonLegend_Left_C::ExecuteUbergraph_GamepadButtonLegend_Left(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GamepadButtonLegend_Left.GamepadButtonLegend_Left_C.ExecuteUbergraph_GamepadButtonLegend_Left");
		
		UGamepadButtonLegend_Left_C_ExecuteUbergraph_GamepadButtonLegend_Left_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGamepadButtonLegend_Left_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGamepadButtonLegend_Left_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GamepadButtonLegend_Left.GamepadButtonLegend_Left_C");
		return ptr;
	}

}


