﻿/**
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
	 * 		Name   -> Function DinoCharacterStatusComponent_BP_Quetz.DinoCharacterStatusComponent_BP_Quetz_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Quetz
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UDinoCharacterStatusComponent_BP_Quetz_C::ExecuteUbergraph_DinoCharacterStatusComponent_BP_Quetz(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DinoCharacterStatusComponent_BP_Quetz.DinoCharacterStatusComponent_BP_Quetz_C.ExecuteUbergraph_DinoCharacterStatusComponent_BP_Quetz");
		
		UDinoCharacterStatusComponent_BP_Quetz_C_ExecuteUbergraph_DinoCharacterStatusComponent_BP_Quetz_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDinoCharacterStatusComponent_BP_Quetz_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDinoCharacterStatusComponent_BP_Quetz_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DinoCharacterStatusComponent_BP_Quetz.DinoCharacterStatusComponent_BP_Quetz_C");
		return ptr;
	}

}


