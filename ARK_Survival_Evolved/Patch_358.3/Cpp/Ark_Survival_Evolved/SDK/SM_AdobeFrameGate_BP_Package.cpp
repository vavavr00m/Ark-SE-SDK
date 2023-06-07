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
	 * 		Name   -> Function SM_AdobeFrameGate_BP.SM_AdobeFrameGate_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASM_AdobeFrameGate_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SM_AdobeFrameGate_BP.SM_AdobeFrameGate_BP_C.UserConstructionScript");
		
		ASM_AdobeFrameGate_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SM_AdobeFrameGate_BP.SM_AdobeFrameGate_BP_C.ExecuteUbergraph_SM_AdobeFrameGate_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASM_AdobeFrameGate_BP_C::ExecuteUbergraph_SM_AdobeFrameGate_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SM_AdobeFrameGate_BP.SM_AdobeFrameGate_BP_C.ExecuteUbergraph_SM_AdobeFrameGate_BP");
		
		ASM_AdobeFrameGate_BP_C_ExecuteUbergraph_SM_AdobeFrameGate_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASM_AdobeFrameGate_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASM_AdobeFrameGate_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SM_AdobeFrameGate_BP.SM_AdobeFrameGate_BP_C");
		return ptr;
	}

}


