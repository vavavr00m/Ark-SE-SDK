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
	 * 		Name   -> Function AllPlayersListUI.AllPlayersListUI_C.ExecuteUbergraph_AllPlayersListUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAllPlayersListUI_C::ExecuteUbergraph_AllPlayersListUI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AllPlayersListUI.AllPlayersListUI_C.ExecuteUbergraph_AllPlayersListUI");
		
		UAllPlayersListUI_C_ExecuteUbergraph_AllPlayersListUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAllPlayersListUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAllPlayersListUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AllPlayersListUI.AllPlayersListUI_C");
		return ptr;
	}

}


