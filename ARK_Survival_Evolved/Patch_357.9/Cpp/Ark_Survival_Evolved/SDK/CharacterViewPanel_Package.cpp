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
	 * 		Name   -> Function CharacterViewPanel.CharacterViewPanel_C.ExecuteUbergraph_CharacterViewPanel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCharacterViewPanel_C::ExecuteUbergraph_CharacterViewPanel(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharacterViewPanel.CharacterViewPanel_C.ExecuteUbergraph_CharacterViewPanel");
		
		UCharacterViewPanel_C_ExecuteUbergraph_CharacterViewPanel_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCharacterViewPanel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharacterViewPanel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CharacterViewPanel.CharacterViewPanel_C");
		return ptr;
	}

}


