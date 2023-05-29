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
	 * 		Name   -> Function SM_AdobeRailing_BP.SM_AdobeRailing_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASM_AdobeRailing_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SM_AdobeRailing_BP.SM_AdobeRailing_BP_C.UserConstructionScript");
		
		ASM_AdobeRailing_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function SM_AdobeRailing_BP.SM_AdobeRailing_BP_C.ExecuteUbergraph_SM_AdobeRailing_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASM_AdobeRailing_BP_C::ExecuteUbergraph_SM_AdobeRailing_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SM_AdobeRailing_BP.SM_AdobeRailing_BP_C.ExecuteUbergraph_SM_AdobeRailing_BP");
		
		ASM_AdobeRailing_BP_C_ExecuteUbergraph_SM_AdobeRailing_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASM_AdobeRailing_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASM_AdobeRailing_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SM_AdobeRailing_BP.SM_AdobeRailing_BP_C");
		return ptr;
	}

}


