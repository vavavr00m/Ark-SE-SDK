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
	 * 		Name   -> Function ChangeTransponderWeaponFreaquancyEntryUI.ChangeTransponderWeaponFreaquancyEntryUI_C.ExecuteUbergraph_ChangeTransponderWeaponFreaquancyEntryUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChangeTransponderWeaponFreaquancyEntryUI_C::ExecuteUbergraph_ChangeTransponderWeaponFreaquancyEntryUI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChangeTransponderWeaponFreaquancyEntryUI.ChangeTransponderWeaponFreaquancyEntryUI_C.ExecuteUbergraph_ChangeTransponderWeaponFreaquancyEntryUI");
		
		UChangeTransponderWeaponFreaquancyEntryUI_C_ExecuteUbergraph_ChangeTransponderWeaponFreaquancyEntryUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChangeTransponderWeaponFreaquancyEntryUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChangeTransponderWeaponFreaquancyEntryUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ChangeTransponderWeaponFreaquancyEntryUI.ChangeTransponderWeaponFreaquancyEntryUI_C");
		return ptr;
	}

}


