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
	 * 		Name   -> Function ExosuitHUD.ExosuitHUD_C.SetupDynamicMaterial
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UExosuitHUD_C::SetupDynamicMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExosuitHUD.ExosuitHUD_C.SetupDynamicMaterial");
		
		UExosuitHUD_C_SetupDynamicMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ExosuitHUD.ExosuitHUD_C.SyncHUDWidget
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      ModeString                                                 (Parm, ZeroConstructor)
	 * 		class FString                                      RepairRequirementsString                                   (Parm, ZeroConstructor)
	 * 		float                                              BeamAvailabilityPercent                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              BeamPressAndHoldPercent                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bUsesChestBeam                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bCanUseChestBeam                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ChestBeamState                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalStructure*                            LastAimedStructure                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            CurrentMode                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              HUDModeTextFadeOutTimeMultiplier                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UExosuitHUD_C::SyncHUDWidget(const class FString& ModeString, const class FString& RepairRequirementsString, float BeamAvailabilityPercent, float BeamPressAndHoldPercent, bool bUsesChestBeam, bool bCanUseChestBeam, int32_t ChestBeamState, class APrimalStructure* LastAimedStructure, int32_t CurrentMode, float HUDModeTextFadeOutTimeMultiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExosuitHUD.ExosuitHUD_C.SyncHUDWidget");
		
		UExosuitHUD_C_SyncHUDWidget_Params params {};
		params.ModeString = ModeString;
		params.RepairRequirementsString = RepairRequirementsString;
		params.BeamAvailabilityPercent = BeamAvailabilityPercent;
		params.BeamPressAndHoldPercent = BeamPressAndHoldPercent;
		params.bUsesChestBeam = bUsesChestBeam;
		params.bCanUseChestBeam = bCanUseChestBeam;
		params.ChestBeamState = ChestBeamState;
		params.LastAimedStructure = LastAimedStructure;
		params.CurrentMode = CurrentMode;
		params.HUDModeTextFadeOutTimeMultiplier = HUDModeTextFadeOutTimeMultiplier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ExosuitHUD.ExosuitHUD_C.Initialize HUD Widget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UExosuitHUD_C::InitializeHUDWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExosuitHUD.ExosuitHUD_C.Initialize HUD Widget");
		
		UExosuitHUD_C_InitializeHUDWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ExosuitHUD.ExosuitHUD_C.Reset HUD Widget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UExosuitHUD_C::ResetHUDWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExosuitHUD.ExosuitHUD_C.Reset HUD Widget");
		
		UExosuitHUD_C_ResetHUDWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ExosuitHUD.ExosuitHUD_C.DestroyWidget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UExosuitHUD_C::DestroyWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExosuitHUD.ExosuitHUD_C.DestroyWidget");
		
		UExosuitHUD_C_DestroyWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ExosuitHUD.ExosuitHUD_C.StartClosingWidget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewLifeSpan                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UExosuitHUD_C::StartClosingWidget(float NewLifeSpan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExosuitHUD.ExosuitHUD_C.StartClosingWidget");
		
		UExosuitHUD_C_StartClosingWidget_Params params {};
		params.NewLifeSpan = NewLifeSpan;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ExosuitHUD.ExosuitHUD_C.ExecuteUbergraph_ExosuitHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UExosuitHUD_C::ExecuteUbergraph_ExosuitHUD(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExosuitHUD.ExosuitHUD_C.ExecuteUbergraph_ExosuitHUD");
		
		UExosuitHUD_C_ExecuteUbergraph_ExosuitHUD_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function ExosuitHUD.ExosuitHUD_C.OnWidgetDestroyed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UExosuitHUD_C::OnWidgetDestroyed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExosuitHUD.ExosuitHUD_C.OnWidgetDestroyed__DelegateSignature");
		
		UExosuitHUD_C_OnWidgetDestroyed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UExosuitHUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExosuitHUD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ExosuitHUD.ExosuitHUD_C");
		return ptr;
	}

}


