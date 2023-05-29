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
	 * 		Name   -> Function SM_AdobeGateDoor_BP.SM_AdobeGateDoor_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ASM_AdobeGateDoor_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SM_AdobeGateDoor_BP.SM_AdobeGateDoor_BP_C.UserConstructionScript");
		
		ASM_AdobeGateDoor_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SM_AdobeGateDoor_BP.SM_AdobeGateDoor_BP_C.ExecuteUbergraph_SM_AdobeGateDoor_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASM_AdobeGateDoor_BP_C::ExecuteUbergraph_SM_AdobeGateDoor_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SM_AdobeGateDoor_BP.SM_AdobeGateDoor_BP_C.ExecuteUbergraph_SM_AdobeGateDoor_BP");
		
		ASM_AdobeGateDoor_BP_C_ExecuteUbergraph_SM_AdobeGateDoor_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASM_AdobeGateDoor_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASM_AdobeGateDoor_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SM_AdobeGateDoor_BP.SM_AdobeGateDoor_BP_C");
		return ptr;
	}

}


