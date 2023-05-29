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
	 * 		Name   -> Function Rhino_Character_BP.Rhino_Character_BP_C.GetBestExtraRunSpeedModifier
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhino_Character_BP_C::GetBestExtraRunSpeedModifier(float* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhino_Character_BP.Rhino_Character_BP_C.GetBestExtraRunSpeedModifier");
		
		ARhino_Character_BP_C_GetBestExtraRunSpeedModifier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Rhino_Character_BP.Rhino_Character_BP_C.BPGetExtraMeleeDamageModifier
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ARhino_Character_BP_C::BPGetExtraMeleeDamageModifier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhino_Character_BP.Rhino_Character_BP_C.BPGetExtraMeleeDamageModifier");
		
		ARhino_Character_BP_C_BPGetExtraMeleeDamageModifier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Rhino_Character_BP.Rhino_Character_BP_C.BPGetHUDOverrideBuffProgressBarPercent
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ARhino_Character_BP_C::BPGetHUDOverrideBuffProgressBarPercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhino_Character_BP.Rhino_Character_BP_C.BPGetHUDOverrideBuffProgressBarPercent");
		
		ARhino_Character_BP_C_BPGetHUDOverrideBuffProgressBarPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Rhino_Character_BP.Rhino_Character_BP_C.GetExtraRunSpeedModifierPercent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              PercentVal                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhino_Character_BP_C::GetExtraRunSpeedModifierPercent(float* PercentVal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhino_Character_BP.Rhino_Character_BP_C.GetExtraRunSpeedModifierPercent");
		
		ARhino_Character_BP_C_GetExtraRunSpeedModifierPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PercentVal != nullptr)
			*PercentVal = params.PercentVal;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Rhino_Character_BP.Rhino_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARhino_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhino_Character_BP.Rhino_Character_BP_C.UserConstructionScript");
		
		ARhino_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Rhino_Character_BP.Rhino_Character_BP_C.ExecuteUbergraph_Rhino_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhino_Character_BP_C::ExecuteUbergraph_Rhino_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhino_Character_BP.Rhino_Character_BP_C.ExecuteUbergraph_Rhino_Character_BP");
		
		ARhino_Character_BP_C_ExecuteUbergraph_Rhino_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARhino_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARhino_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Rhino_Character_BP.Rhino_Character_BP_C");
		return ptr;
	}

}


