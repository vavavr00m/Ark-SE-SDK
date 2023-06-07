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
	 * 		Name   -> Function PlayerHUDStatusBarsWidget.PlayerHUDStatusBarsWidget_C.ExecuteUbergraph_PlayerHUDStatusBarsWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerHUDStatusBarsWidget_C::ExecuteUbergraph_PlayerHUDStatusBarsWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUDStatusBarsWidget.PlayerHUDStatusBarsWidget_C.ExecuteUbergraph_PlayerHUDStatusBarsWidget");
		
		UPlayerHUDStatusBarsWidget_C_ExecuteUbergraph_PlayerHUDStatusBarsWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerHUDStatusBarsWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerHUDStatusBarsWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerHUDStatusBarsWidget.PlayerHUDStatusBarsWidget_C");
		return ptr;
	}

}


