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
	 * 		Name   -> Function ToolTipWidgetPrimalDinoExtended.ToolTipWidgetPrimalDinoExtended_C.ExecuteUbergraph_ToolTipWidgetPrimalDinoExtended
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UToolTipWidgetPrimalDinoExtended_C::ExecuteUbergraph_ToolTipWidgetPrimalDinoExtended(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ToolTipWidgetPrimalDinoExtended.ToolTipWidgetPrimalDinoExtended_C.ExecuteUbergraph_ToolTipWidgetPrimalDinoExtended");
		
		UToolTipWidgetPrimalDinoExtended_C_ExecuteUbergraph_ToolTipWidgetPrimalDinoExtended_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UToolTipWidgetPrimalDinoExtended_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UToolTipWidgetPrimalDinoExtended_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ToolTipWidgetPrimalDinoExtended.ToolTipWidgetPrimalDinoExtended_C");
		return ptr;
	}

}


