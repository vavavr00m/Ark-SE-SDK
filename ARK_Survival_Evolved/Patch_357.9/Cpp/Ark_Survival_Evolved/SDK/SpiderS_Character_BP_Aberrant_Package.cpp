﻿/**
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
	 * 		Name   -> Function SpiderS_Character_BP_Aberrant.SpiderS_Character_BP_Aberrant_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpiderS_Character_BP_Aberrant_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpiderS_Character_BP_Aberrant.SpiderS_Character_BP_Aberrant_C.UserConstructionScript");
		
		ASpiderS_Character_BP_Aberrant_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SpiderS_Character_BP_Aberrant.SpiderS_Character_BP_Aberrant_C.ExecuteUbergraph_SpiderS_Character_BP_Aberrant
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpiderS_Character_BP_Aberrant_C::ExecuteUbergraph_SpiderS_Character_BP_Aberrant(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpiderS_Character_BP_Aberrant.SpiderS_Character_BP_Aberrant_C.ExecuteUbergraph_SpiderS_Character_BP_Aberrant");
		
		ASpiderS_Character_BP_Aberrant_C_ExecuteUbergraph_SpiderS_Character_BP_Aberrant_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASpiderS_Character_BP_Aberrant_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASpiderS_Character_BP_Aberrant_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SpiderS_Character_BP_Aberrant.SpiderS_Character_BP_Aberrant_C");
		return ptr;
	}

}


