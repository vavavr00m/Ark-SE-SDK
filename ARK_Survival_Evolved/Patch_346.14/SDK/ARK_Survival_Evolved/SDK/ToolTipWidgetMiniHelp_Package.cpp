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
	 * 		Name   -> Function ToolTipWidgetMiniHelp.ToolTipWidgetMiniHelp_C.ExecuteUbergraph_ToolTipWidgetMiniHelp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UToolTipWidgetMiniHelp_C::ExecuteUbergraph_ToolTipWidgetMiniHelp(int32_t EntryPoint)
	{
		static UFunction* fn = UObject::FindObject<UFunction>("Function ToolTipWidgetMiniHelp.ToolTipWidgetMiniHelp_C.ExecuteUbergraph_ToolTipWidgetMiniHelp");
		
		UToolTipWidgetMiniHelp_C_ExecuteUbergraph_ToolTipWidgetMiniHelp_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefindFunction UToolTipWidgetMiniHelp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UToolTipWidgetMiniHelp_C::StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ToolTipWidgetMiniHelp.ToolTipWidgetMiniHelp_C");
		return ptr;
	}

}


