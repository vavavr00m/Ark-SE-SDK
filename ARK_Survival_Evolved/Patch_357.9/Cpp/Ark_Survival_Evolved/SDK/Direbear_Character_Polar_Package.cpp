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
	 * 		Name   -> Function Direbear_Character_Polar.Direbear_Character_Polar_C.GetBestExtraRunSpeedModifier
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADirebear_Character_Polar_C::GetBestExtraRunSpeedModifier(float* Out)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Direbear_Character_Polar.Direbear_Character_Polar_C.GetBestExtraRunSpeedModifier");
		
		ADirebear_Character_Polar_C_GetBestExtraRunSpeedModifier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Direbear_Character_Polar.Direbear_Character_Polar_C.GetExtraRunSpeedModifierPercent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              PercentVal                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADirebear_Character_Polar_C::GetExtraRunSpeedModifierPercent(float* PercentVal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Direbear_Character_Polar.Direbear_Character_Polar_C.GetExtraRunSpeedModifierPercent");
		
		ADirebear_Character_Polar_C_GetExtraRunSpeedModifierPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PercentVal != nullptr)
			*PercentVal = params.PercentVal;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Direbear_Character_Polar.Direbear_Character_Polar_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADirebear_Character_Polar_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Direbear_Character_Polar.Direbear_Character_Polar_C.UserConstructionScript");
		
		ADirebear_Character_Polar_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Direbear_Character_Polar.Direbear_Character_Polar_C.ExecuteUbergraph_Direbear_Character_Polar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADirebear_Character_Polar_C::ExecuteUbergraph_Direbear_Character_Polar(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Direbear_Character_Polar.Direbear_Character_Polar_C.ExecuteUbergraph_Direbear_Character_Polar");
		
		ADirebear_Character_Polar_C_ExecuteUbergraph_Direbear_Character_Polar_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADirebear_Character_Polar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADirebear_Character_Polar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Direbear_Character_Polar.Direbear_Character_Polar_C");
		return ptr;
	}

}


