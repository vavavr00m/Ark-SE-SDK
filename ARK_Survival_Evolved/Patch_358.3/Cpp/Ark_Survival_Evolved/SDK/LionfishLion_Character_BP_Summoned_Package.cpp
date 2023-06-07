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
	 * 		Name   -> Function LionfishLion_Character_BP_Summoned.LionfishLion_Character_BP_Summoned_C.BPDinoTooltipCustomTamingProgressBar
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               overrideTamingProgressBarIfActive                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              progressPercent                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Label                                                      (Parm, OutParm, ZeroConstructor)
	 */
	bool ALionfishLion_Character_BP_Summoned_C::BPDinoTooltipCustomTamingProgressBar(bool* overrideTamingProgressBarIfActive, float* progressPercent, class FString* Label)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP_Summoned.LionfishLion_Character_BP_Summoned_C.BPDinoTooltipCustomTamingProgressBar");
		
		ALionfishLion_Character_BP_Summoned_C_BPDinoTooltipCustomTamingProgressBar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (overrideTamingProgressBarIfActive != nullptr)
			*overrideTamingProgressBarIfActive = params.overrideTamingProgressBarIfActive;
		if (progressPercent != nullptr)
			*progressPercent = params.progressPercent;
		if (Label != nullptr)
			*Label = params.Label;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP_Summoned.LionfishLion_Character_BP_Summoned_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_Summoned_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP_Summoned.LionfishLion_Character_BP_Summoned_C.UserConstructionScript");
		
		ALionfishLion_Character_BP_Summoned_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP_Summoned.LionfishLion_Character_BP_Summoned_C.ExecuteUbergraph_LionfishLion_Character_BP_Summoned
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_Summoned_C::ExecuteUbergraph_LionfishLion_Character_BP_Summoned(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP_Summoned.LionfishLion_Character_BP_Summoned_C.ExecuteUbergraph_LionfishLion_Character_BP_Summoned");
		
		ALionfishLion_Character_BP_Summoned_C_ExecuteUbergraph_LionfishLion_Character_BP_Summoned_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALionfishLion_Character_BP_Summoned_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALionfishLion_Character_BP_Summoned_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LionfishLion_Character_BP_Summoned.LionfishLion_Character_BP_Summoned_C");
		return ptr;
	}

}


