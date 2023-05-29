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
	 * 		Name   -> Function BrainSlugHUD_Interface.BrainSlugHUD_Interface_C.GetHudData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            TargetChar                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsAllowedToControlTarget                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      TargetValidationString                                     (Parm, OutParm, ZeroConstructor)
	 * 		class FString                                      InvalidTargetString_PreventHUD                             (Parm, OutParm, ZeroConstructor)
	 * 		struct FHUDElement                                 HUDElementTemplate                                         (Parm, OutParm)
	 * 		float                                              BrainJumpTargetCheckDistance                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBrainSlugHUD_Interface_C::GetHudData(class APrimalCharacter* TargetChar, bool* IsAllowedToControlTarget, class FString* TargetValidationString, class FString* InvalidTargetString_PreventHUD, struct FHUDElement* HUDElementTemplate, float* BrainJumpTargetCheckDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlugHUD_Interface.BrainSlugHUD_Interface_C.GetHudData");
		
		UBrainSlugHUD_Interface_C_GetHudData_Params params {};
		params.TargetChar = TargetChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsAllowedToControlTarget != nullptr)
			*IsAllowedToControlTarget = params.IsAllowedToControlTarget;
		if (TargetValidationString != nullptr)
			*TargetValidationString = params.TargetValidationString;
		if (InvalidTargetString_PreventHUD != nullptr)
			*InvalidTargetString_PreventHUD = params.InvalidTargetString_PreventHUD;
		if (HUDElementTemplate != nullptr)
			*HUDElementTemplate = params.HUDElementTemplate;
		if (BrainJumpTargetCheckDistance != nullptr)
			*BrainJumpTargetCheckDistance = params.BrainJumpTargetCheckDistance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function BrainSlugHUD_Interface.BrainSlugHUD_Interface_C.Sync Crosshair Color
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                InColor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                outColor                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBrainSlugHUD_Interface_C::SyncCrosshairColor(const struct FLinearColor& InColor, struct FLinearColor* outColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BrainSlugHUD_Interface.BrainSlugHUD_Interface_C.Sync Crosshair Color");
		
		UBrainSlugHUD_Interface_C_SyncCrosshairColor_Params params {};
		params.InColor = InColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outColor != nullptr)
			*outColor = params.outColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBrainSlugHUD_Interface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBrainSlugHUD_Interface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BrainSlugHUD_Interface.BrainSlugHUD_Interface_C");
		return ptr;
	}

}


