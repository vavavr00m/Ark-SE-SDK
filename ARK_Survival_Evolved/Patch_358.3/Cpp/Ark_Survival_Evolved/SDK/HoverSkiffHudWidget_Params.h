#pragma once

/**
 * Name: Ark_Survival_Evolved
 * Version: Patch_358.3
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_RepairPanel_BrushColor_1
	 */
	struct UHoverSkiffHudWidget_C_Get_RepairPanel_BrushColor_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_SkiffModeSubStatusTextBlock_Text_1
	 */
	struct UHoverSkiffHudWidget_C_Get_SkiffModeSubStatusTextBlock_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_RepairLabelTextBlock_Text_1
	 */
	struct UHoverSkiffHudWidget_C_Get_RepairLabelTextBlock_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.WidgetBoolToVisibilty
	 */
	struct UHoverSkiffHudWidget_C_WidgetBoolToVisibilty_Params
	{
	public:
		class UObject*                                             TargetWidget;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsVisible;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UseHiddenInsteadOfCollapsed;                             // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O9K0[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.UpdateRepairProgressBarsPercentAndForegroundColor
	 */
	struct UHoverSkiffHudWidget_C_UpdateRepairProgressBarsPercentAndForegroundColor_Params
	{	};

	/**
	 * Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.UpdateRepairPanelVisibility
	 */
	struct UHoverSkiffHudWidget_C_UpdateRepairPanelVisibility_Params
	{	};

	/**
	 * Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.UpdateAllFuelGaugesPanelVisibility
	 */
	struct UHoverSkiffHudWidget_C_UpdateAllFuelGaugesPanelVisibility_Params
	{	};

	/**
	 * Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_AltFuelLabelTextBlock_Text_1
	 */
	struct UHoverSkiffHudWidget_C_Get_AltFuelLabelTextBlock_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Update Status Visibilities
	 */
	struct UHoverSkiffHudWidget_C_UpdateStatusVisibilities_Params
	{	};

	/**
	 * Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.UpdateNeedleRotation
	 */
	struct UHoverSkiffHudWidget_C_UpdateNeedleRotation_Params
	{	};

	/**
	 * Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Update Tractor Beam Crosshair Visuals
	 */
	struct UHoverSkiffHudWidget_C_UpdateTractorBeamCrosshairVisuals_Params
	{	};

	/**
	 * Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_FuelUsageNeedleImage_ColorAndOpacity_1
	 */
	struct UHoverSkiffHudWidget_C_Get_FuelUsageNeedleImage_ColorAndOpacity_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_FuelReserveNeedleImage_ColorAndOpacity_1
	 */
	struct UHoverSkiffHudWidget_C_Get_FuelReserveNeedleImage_ColorAndOpacity_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_FuelTankNeedleImage_ColorAndOpacity_1
	 */
	struct UHoverSkiffHudWidget_C_Get_FuelTankNeedleImage_ColorAndOpacity_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_FuelTankGaugeImage_ColorAndOpacity_1
	 */
	struct UHoverSkiffHudWidget_C_Get_FuelTankGaugeImage_ColorAndOpacity_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_FuelReserveGaugeImage_ColorAndOpacity_1
	 */
	struct UHoverSkiffHudWidget_C_Get_FuelReserveGaugeImage_ColorAndOpacity_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.IsExtendedInfoKeyPressed
	 */
	struct UHoverSkiffHudWidget_C_IsExtendedInfoKeyPressed_Params
	{
	public:
		bool                                                       bShowExtendedInfoKey;                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GF9B[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_FuelUsageGaugeImage_ColorAndOpacity_1
	 */
	struct UHoverSkiffHudWidget_C_Get_FuelUsageGaugeImage_ColorAndOpacity_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.DimGaugesAndNeedlesOnBool
	 */
	struct UHoverSkiffHudWidget_C_DimGaugesAndNeedlesOnBool_Params
	{
	public:
		bool                                                       Bool;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2YEH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.OnShowExtendedInfoKeyPressed
	 */
	struct UHoverSkiffHudWidget_C_OnShowExtendedInfoKeyPressed_Params
	{	};

	/**
	 * Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_RepairValueTextBlock_Text_1
	 */
	struct UHoverSkiffHudWidget_C_Get_RepairValueTextBlock_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_AltFuelValueTextBlock_Text_1
	 */
	struct UHoverSkiffHudWidget_C_Get_AltFuelValueTextBlock_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_AltFuelIcon_Brush_1
	 */
	struct UHoverSkiffHudWidget_C_Get_AltFuelIcon_Brush_1_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0078)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_SkiffModeValueTextBlock_Text_1
	 */
	struct UHoverSkiffHudWidget_C_Get_SkiffModeValueTextBlock_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_AltitudeValueTextBlock_Text_1
	 */
	struct UHoverSkiffHudWidget_C_Get_AltitudeValueTextBlock_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_AltitudeLabelTextBlock_Text_1
	 */
	struct UHoverSkiffHudWidget_C_Get_AltitudeLabelTextBlock_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get Debug Text 0
	 */
	struct UHoverSkiffHudWidget_C_GetDebugText0_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_FuelReserveTextBlock_Text_1
	 */
	struct UHoverSkiffHudWidget_C_Get_FuelReserveTextBlock_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Set Progress Bar Fill And Background Colors
	 */
	struct UHoverSkiffHudWidget_C_SetProgressBarFillAndBackgroundColors_Params
	{
	public:
		class UProgressBar*                                        ProgressBar;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FLinearColor                                        LinearColor;                                             // 0x0008(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FProgressBarStyle                                   ProgressBarStyle;                                        // 0x0018(0x0170)  (Parm, OutParm)
	};

	/**
	 * Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_CurrentElementValueTextBlock_Text_1
	 */
	struct UHoverSkiffHudWidget_C_Get_CurrentElementValueTextBlock_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get Tractor Progress Bar Percent 
	 */
	struct UHoverSkiffHudWidget_C_GetTractorProgressBarPercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_Crosshair_ColorAndOpacity_1
	 */
	struct UHoverSkiffHudWidget_C_Get_Crosshair_ColorAndOpacity_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_CameraLockIcon_ColorAndOpacity_1
	 */
	struct UHoverSkiffHudWidget_C_Get_CameraLockIcon_ColorAndOpacity_1_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_FuelConsumptionRateValueTextBlock_Text_1
	 */
	struct UHoverSkiffHudWidget_C_Get_FuelConsumptionRateValueTextBlock_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Get_ElementFuelValueTextBlock_Text_1
	 */
	struct UHoverSkiffHudWidget_C_Get_ElementFuelValueTextBlock_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.InitFromSkiff
	 */
	struct UHoverSkiffHudWidget_C_InitFromSkiff_Params
	{
	public:
		class ATekHoverSkiff_Character_BP_C*                       FromSkiff;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.StartClosingWidget
	 */
	struct UHoverSkiffHudWidget_C_StartClosingWidget_Params
	{
	public:
		float                                                      NewLifeSpan;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.DestroySkiffHudWidget
	 */
	struct UHoverSkiffHudWidget_C_DestroySkiffHudWidget_Params
	{	};

	/**
	 * Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.ResetSkiffHudWidget
	 */
	struct UHoverSkiffHudWidget_C_ResetSkiffHudWidget_Params
	{	};

	/**
	 * Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.Tick
	 */
	struct UHoverSkiffHudWidget_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0034)  (Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0034(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function HoverSkiffHudWidget.HoverSkiffHudWidget_C.ExecuteUbergraph_HoverSkiffHudWidget
	 */
	struct UHoverSkiffHudWidget_C_ExecuteUbergraph_HoverSkiffHudWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
