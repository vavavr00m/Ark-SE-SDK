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
	 * 		Name   -> Function DinoGroupsUI.DinoGroupsUI_C.ExecuteUbergraph_DinoGroupsUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoGroupsUI_C::ExecuteUbergraph_DinoGroupsUI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoGroupsUI.DinoGroupsUI_C.ExecuteUbergraph_DinoGroupsUI");
		
		UDinoGroupsUI_C_ExecuteUbergraph_DinoGroupsUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoGroupsUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoGroupsUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DinoGroupsUI.DinoGroupsUI_C");
		return ptr;
	}

}


