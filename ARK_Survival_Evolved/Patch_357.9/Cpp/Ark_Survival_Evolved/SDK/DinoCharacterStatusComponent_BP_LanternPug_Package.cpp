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
	 * 		Name   -> Function DinoCharacterStatusComponent_BP_LanternPug.DinoCharacterStatusComponent_BP_LanternPug_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_LanternPug
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoCharacterStatusComponent_BP_LanternPug_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_LanternPug(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_LanternPug.DinoCharacterStatusComponent_BP_LanternPug_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_LanternPug");
		
		UDinoCharacterStatusComponent_BP_LanternPug_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_LanternPug_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoCharacterStatusComponent_BP_LanternPug_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoCharacterStatusComponent_BP_LanternPug_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoCharacterStatusComponent_BP_LanternPug.DinoCharacterStatusComponent_BP_LanternPug_C");
		return ptr;
	}

}


