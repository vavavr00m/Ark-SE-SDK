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
	 * 		Name   -> Function ToolTipWidgetPrimalStructure.ToolTipWidgetPrimalStructure_C.ExecuteUbergraph_ToolTipWidgetPrimalStructure
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UToolTipWidgetPrimalStructure_C::ExecuteUbergraph_ToolTipWidgetPrimalStructure(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ToolTipWidgetPrimalStructure.ToolTipWidgetPrimalStructure_C.ExecuteUbergraph_ToolTipWidgetPrimalStructure");
		
		UToolTipWidgetPrimalStructure_C_ExecuteUbergraph_ToolTipWidgetPrimalStructure_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UToolTipWidgetPrimalStructure_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UToolTipWidgetPrimalStructure_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ToolTipWidgetPrimalStructure.ToolTipWidgetPrimalStructure_C");
		return ptr;
	}

}


