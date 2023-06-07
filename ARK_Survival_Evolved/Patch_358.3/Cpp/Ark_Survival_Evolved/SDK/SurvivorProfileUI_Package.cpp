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
	 * 		Name   -> Function SurvivorProfileUI.SurvivorProfileUI_C.ExecuteUbergraph_SurvivorProfileUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USurvivorProfileUI_C::ExecuteUbergraph_SurvivorProfileUI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SurvivorProfileUI.SurvivorProfileUI_C.ExecuteUbergraph_SurvivorProfileUI");
		
		USurvivorProfileUI_C_ExecuteUbergraph_SurvivorProfileUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USurvivorProfileUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USurvivorProfileUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SurvivorProfileUI.SurvivorProfileUI_C");
		return ptr;
	}

}


