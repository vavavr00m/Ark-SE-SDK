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
	 * 		Name   -> Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_RepairPanel_BrushColor_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	struct FLinearColor UHoverSkiffHudWidget_C::Get_RepairPanel_BrushColor_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_RepairPanel_BrushColor_1");
		
		UHoverSkiffHudWidget_C_Get_RepairPanel_BrushColor_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_SkiffModeSubStatusTextBlock_Text_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	class FText UHoverSkiffHudWidget_C::Get_SkiffModeSubStatusTextBlock_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_SkiffModeSubStatusTextBlock_Text_1");
		
		UHoverSkiffHudWidget_C_Get_SkiffModeSubStatusTextBlock_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_RepairLabelTextBlock_Text_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	class FText UHoverSkiffHudWidget_C::Get_RepairLabelTextBlock_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_RepairLabelTextBlock_Text_1");
		
		UHoverSkiffHudWidget_C_Get_RepairLabelTextBlock_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.WidgetBoolToVisibilty
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     TargetWidget                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsVisible                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UseHiddenInsteadOfCollapsed                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHoverSkiffHudWidget_C::WidgetBoolToVisibilty(class UObject* TargetWidget, bool IsVisible, bool UseHiddenInsteadOfCollapsed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.WidgetBoolToVisibilty");
		
		UHoverSkiffHudWidget_C_WidgetBoolToVisibilty_Params params {};
		params.TargetWidget = TargetWidget;
		params.IsVisible = IsVisible;
		params.UseHiddenInsteadOfCollapsed = UseHiddenInsteadOfCollapsed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.UpdateRepairProgressBarsPercentAndForegroundColor
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UHoverSkiffHudWidget_C::UpdateRepairProgressBarsPercentAndForegroundColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.UpdateRepairProgressBarsPercentAndForegroundColor");
		
		UHoverSkiffHudWidget_C_UpdateRepairProgressBarsPercentAndForegroundColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.UpdateRepairPanelVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UHoverSkiffHudWidget_C::UpdateRepairPanelVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.UpdateRepairPanelVisibility");
		
		UHoverSkiffHudWidget_C_UpdateRepairPanelVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.UpdateAllFuelGaugesPanelVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UHoverSkiffHudWidget_C::UpdateAllFuelGaugesPanelVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.UpdateAllFuelGaugesPanelVisibility");
		
		UHoverSkiffHudWidget_C_UpdateAllFuelGaugesPanelVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_AltFuelLabelTextBlock_Text_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	class FText UHoverSkiffHudWidget_C::Get_AltFuelLabelTextBlock_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_AltFuelLabelTextBlock_Text_1");
		
		UHoverSkiffHudWidget_C_Get_AltFuelLabelTextBlock_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Update Status Visibilities
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UHoverSkiffHudWidget_C::UpdateStatusVisibilities()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Update Status Visibilities");
		
		UHoverSkiffHudWidget_C_UpdateStatusVisibilities_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.UpdateNeedleRotation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UHoverSkiffHudWidget_C::UpdateNeedleRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.UpdateNeedleRotation");
		
		UHoverSkiffHudWidget_C_UpdateNeedleRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Update Tractor Beam Crosshair Visuals
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UHoverSkiffHudWidget_C::UpdateTractorBeamCrosshairVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Update Tractor Beam Crosshair Visuals");
		
		UHoverSkiffHudWidget_C_UpdateTractorBeamCrosshairVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_FuelUsageNeedleImage_ColorAndOpacity_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	struct FLinearColor UHoverSkiffHudWidget_C::Get_FuelUsageNeedleImage_ColorAndOpacity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_FuelUsageNeedleImage_ColorAndOpacity_1");
		
		UHoverSkiffHudWidget_C_Get_FuelUsageNeedleImage_ColorAndOpacity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_FuelReserveNeedleImage_ColorAndOpacity_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	struct FLinearColor UHoverSkiffHudWidget_C::Get_FuelReserveNeedleImage_ColorAndOpacity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_FuelReserveNeedleImage_ColorAndOpacity_1");
		
		UHoverSkiffHudWidget_C_Get_FuelReserveNeedleImage_ColorAndOpacity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_FuelTankNeedleImage_ColorAndOpacity_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	struct FLinearColor UHoverSkiffHudWidget_C::Get_FuelTankNeedleImage_ColorAndOpacity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_FuelTankNeedleImage_ColorAndOpacity_1");
		
		UHoverSkiffHudWidget_C_Get_FuelTankNeedleImage_ColorAndOpacity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_FuelTankGaugeImage_ColorAndOpacity_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	struct FLinearColor UHoverSkiffHudWidget_C::Get_FuelTankGaugeImage_ColorAndOpacity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_FuelTankGaugeImage_ColorAndOpacity_1");
		
		UHoverSkiffHudWidget_C_Get_FuelTankGaugeImage_ColorAndOpacity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_FuelReserveGaugeImage_ColorAndOpacity_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	struct FLinearColor UHoverSkiffHudWidget_C::Get_FuelReserveGaugeImage_ColorAndOpacity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_FuelReserveGaugeImage_ColorAndOpacity_1");
		
		UHoverSkiffHudWidget_C_Get_FuelReserveGaugeImage_ColorAndOpacity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.IsExtendedInfoKeyPressed
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bShowExtendedInfoKey                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHoverSkiffHudWidget_C::IsExtendedInfoKeyPressed(bool* bShowExtendedInfoKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.IsExtendedInfoKeyPressed");
		
		UHoverSkiffHudWidget_C_IsExtendedInfoKeyPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bShowExtendedInfoKey != nullptr)
			*bShowExtendedInfoKey = params.bShowExtendedInfoKey;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_FuelUsageGaugeImage_ColorAndOpacity_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	struct FLinearColor UHoverSkiffHudWidget_C::Get_FuelUsageGaugeImage_ColorAndOpacity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_FuelUsageGaugeImage_ColorAndOpacity_1");
		
		UHoverSkiffHudWidget_C_Get_FuelUsageGaugeImage_ColorAndOpacity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.DimGaugesAndNeedlesOnBool
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Bool                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHoverSkiffHudWidget_C::DimGaugesAndNeedlesOnBool(bool Bool)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.DimGaugesAndNeedlesOnBool");
		
		UHoverSkiffHudWidget_C_DimGaugesAndNeedlesOnBool_Params params {};
		params.Bool = Bool;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.OnShowExtendedInfoKeyPressed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UHoverSkiffHudWidget_C::OnShowExtendedInfoKeyPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.OnShowExtendedInfoKeyPressed");
		
		UHoverSkiffHudWidget_C_OnShowExtendedInfoKeyPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_RepairValueTextBlock_Text_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	class FText UHoverSkiffHudWidget_C::Get_RepairValueTextBlock_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_RepairValueTextBlock_Text_1");
		
		UHoverSkiffHudWidget_C_Get_RepairValueTextBlock_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_AltFuelValueTextBlock_Text_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	class FText UHoverSkiffHudWidget_C::Get_AltFuelValueTextBlock_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_AltFuelValueTextBlock_Text_1");
		
		UHoverSkiffHudWidget_C_Get_AltFuelValueTextBlock_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_AltFuelIcon_Brush_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	struct FSlateBrush UHoverSkiffHudWidget_C::Get_AltFuelIcon_Brush_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_AltFuelIcon_Brush_1");
		
		UHoverSkiffHudWidget_C_Get_AltFuelIcon_Brush_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_SkiffModeValueTextBlock_Text_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	class FText UHoverSkiffHudWidget_C::Get_SkiffModeValueTextBlock_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_SkiffModeValueTextBlock_Text_1");
		
		UHoverSkiffHudWidget_C_Get_SkiffModeValueTextBlock_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_AltitudeValueTextBlock_Text_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	class FText UHoverSkiffHudWidget_C::Get_AltitudeValueTextBlock_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_AltitudeValueTextBlock_Text_1");
		
		UHoverSkiffHudWidget_C_Get_AltitudeValueTextBlock_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_AltitudeLabelTextBlock_Text_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	class FText UHoverSkiffHudWidget_C::Get_AltitudeLabelTextBlock_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_AltitudeLabelTextBlock_Text_1");
		
		UHoverSkiffHudWidget_C_Get_AltitudeLabelTextBlock_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get Debug Text 0
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	class FText UHoverSkiffHudWidget_C::GetDebugText0()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get Debug Text 0");
		
		UHoverSkiffHudWidget_C_GetDebugText0_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_FuelReserveTextBlock_Text_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	class FText UHoverSkiffHudWidget_C::Get_FuelReserveTextBlock_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_FuelReserveTextBlock_Text_1");
		
		UHoverSkiffHudWidget_C_Get_FuelReserveTextBlock_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Set Progress Bar Fill And Background Colors
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UProgressBar*                                ProgressBar                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                LinearColor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FProgressBarStyle                           ProgressBarStyle                                           (Parm, OutParm)
	 */
	void UHoverSkiffHudWidget_C::SetProgressBarFillAndBackgroundColors(class UProgressBar* ProgressBar, const struct FLinearColor& LinearColor, struct FProgressBarStyle* ProgressBarStyle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Set Progress Bar Fill And Background Colors");
		
		UHoverSkiffHudWidget_C_SetProgressBarFillAndBackgroundColors_Params params {};
		params.ProgressBar = ProgressBar;
		params.LinearColor = LinearColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ProgressBarStyle != nullptr)
			*ProgressBarStyle = params.ProgressBarStyle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_CurrentElementValueTextBlock_Text_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	class FText UHoverSkiffHudWidget_C::Get_CurrentElementValueTextBlock_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_CurrentElementValueTextBlock_Text_1");
		
		UHoverSkiffHudWidget_C_Get_CurrentElementValueTextBlock_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get Tractor Progress Bar Percent 
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float UHoverSkiffHudWidget_C::GetTractorProgressBarPercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get Tractor Progress Bar Percent ");
		
		UHoverSkiffHudWidget_C_GetTractorProgressBarPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_Crosshair_ColorAndOpacity_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	struct FLinearColor UHoverSkiffHudWidget_C::Get_Crosshair_ColorAndOpacity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_Crosshair_ColorAndOpacity_1");
		
		UHoverSkiffHudWidget_C_Get_Crosshair_ColorAndOpacity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_CameraLockIcon_ColorAndOpacity_1
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	struct FLinearColor UHoverSkiffHudWidget_C::Get_CameraLockIcon_ColorAndOpacity_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_CameraLockIcon_ColorAndOpacity_1");
		
		UHoverSkiffHudWidget_C_Get_CameraLockIcon_ColorAndOpacity_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_FuelConsumptionRateValueTextBlock_Text_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	class FText UHoverSkiffHudWidget_C::Get_FuelConsumptionRateValueTextBlock_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_FuelConsumptionRateValueTextBlock_Text_1");
		
		UHoverSkiffHudWidget_C_Get_FuelConsumptionRateValueTextBlock_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_ElementFuelValueTextBlock_Text_1
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	class FText UHoverSkiffHudWidget_C::Get_ElementFuelValueTextBlock_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_ElementFuelValueTextBlock_Text_1");
		
		UHoverSkiffHudWidget_C_Get_ElementFuelValueTextBlock_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.InitFromSkiff
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ATekHoverSkiff_Character_BP_C*               FromSkiff                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHoverSkiffHudWidget_C::InitFromSkiff(class ATekHoverSkiff_Character_BP_C* FromSkiff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.InitFromSkiff");
		
		UHoverSkiffHudWidget_C_InitFromSkiff_Params params {};
		params.FromSkiff = FromSkiff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.StartClosingWidget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewLifeSpan                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHoverSkiffHudWidget_C::StartClosingWidget(float NewLifeSpan)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.StartClosingWidget");
		
		UHoverSkiffHudWidget_C_StartClosingWidget_Params params {};
		params.NewLifeSpan = NewLifeSpan;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.DestroySkiffHudWidget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UHoverSkiffHudWidget_C::DestroySkiffHudWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.DestroySkiffHudWidget");
		
		UHoverSkiffHudWidget_C_DestroySkiffHudWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.ResetSkiffHudWidget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UHoverSkiffHudWidget_C::ResetSkiffHudWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.ResetSkiffHudWidget");
		
		UHoverSkiffHudWidget_C_ResetSkiffHudWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Tick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHoverSkiffHudWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Tick");
		
		UHoverSkiffHudWidget_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.ExecuteUbergraph_HoverSkiffHudWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHoverSkiffHudWidget_C::ExecuteUbergraph_HoverSkiffHudWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.ExecuteUbergraph_HoverSkiffHudWidget");
		
		UHoverSkiffHudWidget_C_ExecuteUbergraph_HoverSkiffHudWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHoverSkiffHudWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoverSkiffHudWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HoverSkiffHudWidget.HoverSkiffHudWidget_C");
		return ptr;
	}

}


