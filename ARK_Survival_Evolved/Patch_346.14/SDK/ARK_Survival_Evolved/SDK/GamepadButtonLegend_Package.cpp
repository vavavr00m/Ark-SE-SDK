/**
 * Name: ARK_Survival_Evolved
 * Version: Patch_346.14
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x021C67E0
	 * 		Name   -> Function GamepadButtonLegend.GamepadButtonLegend_C.ExecuteUbergraph_GamepadButtonLegend
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGamepadButtonLegend_C::ExecuteUbergraph_GamepadButtonLegend(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function GamepadButtonLegend.GamepadButtonLegend_C.ExecuteUbergraph_GamepadButtonLegend");
		
		UGamepadButtonLegend_C_ExecuteUbergraph_GamepadButtonLegend_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UGamepadButtonLegend_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGamepadButtonLegend_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GamepadButtonLegend.GamepadButtonLegend_C");
		return ptr;
	}

}


