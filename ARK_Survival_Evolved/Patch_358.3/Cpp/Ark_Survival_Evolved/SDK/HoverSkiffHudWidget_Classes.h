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
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass HoverSkiffHudWidget.HoverSkiffHudWidget_C
	 * Size -> 0x02E0 (FullSize[0x07F8] - InheritedSize[0x0518])
	 */
	class UHoverSkiffHudWidget_C : public UPrimalUI
	{
	public:
		class UCanvasPanel*                                        AllFuelGaugesPanel;                                      // 0x0518(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              AltFuelIcon;                                             // 0x0520(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UBorder*                                             AltFuelPanel;                                            // 0x0528(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UHorizontalBox*                                      AltFuelValuePanel;                                       // 0x0530(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTextBlock*                                          AltFuelValueTextBlock;                                   // 0x0538(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTextBlock*                                          AltitudeLabelTextBlock;                                  // 0x0540(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UBorder*                                             AltitudePanel;                                           // 0x0548(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTextBlock*                                          AltitudeValueTextBlock;                                  // 0x0550(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              CameraLockIcon;                                          // 0x0558(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Crosshair;                                               // 0x0560(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              FuelReserveGaugeImage;                                   // 0x0568(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UScaleBox*                                           FuelReserveGaugePanel;                                   // 0x0570(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTextBlock*                                          FuelReserveLabelTextBlock;                               // 0x0578(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              FuelReserveNeedleImage;                                  // 0x0580(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTextBlock*                                          FuelReserveValueTextBlock;                               // 0x0588(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              FuelTankGaugeImage;                                      // 0x0590(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UScaleBox*                                           FuelTankGaugePanel;                                      // 0x0598(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTextBlock*                                          FuelTankLabelTextBlock;                                  // 0x05A0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              FuelTankNeedleImage;                                     // 0x05A8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTextBlock*                                          FuelTankValueTextBlock;                                  // 0x05B0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              FuelUsageGaugeImage;                                     // 0x05B8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UScaleBox*                                           FuelUsageGaugePanel;                                     // 0x05C0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTextBlock*                                          FuelUsageLabelTextBlock;                                 // 0x05C8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              FuelUsageNeedleImage;                                    // 0x05D0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTextBlock*                                          FuelUsageValueTextBlock;                                 // 0x05D8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCanvasPanel*                                        GaugeLabelPanel;                                         // 0x05E0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UBorder*                                             RepairPanel;                                             // 0x05E8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UProgressBar*                                        RepairProgressBar_Center;                                // 0x05F0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UProgressBar*                                        RepairProgressBar_LeftDiagonal;                          // 0x05F8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UProgressBar*                                        RepairProgressBar_LeftLarge;                             // 0x0600(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UProgressBar*                                        RepairProgressBar_RightDiagonal;                         // 0x0608(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UProgressBar*                                        RepairProgressBar_RightLarge;                            // 0x0610(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTextBlock*                                          RepairValueTextBlock;                                    // 0x0618(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UBorder*                                             SkiffModePanel;                                          // 0x0620(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTextBlock*                                          SkiffModeSubStatusTextBlock;                             // 0x0628(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTextBlock*                                          SkiffModeValueTextBlock;                                 // 0x0630(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UHorizontalBox*                                      StatusPanel;                                             // 0x0638(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCanvasPanel*                                        TractorPanel;                                            // 0x0640(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UProgressBar*                                        TractorProgressBar0;                                     // 0x0648(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UProgressBar*                                        TractorProgressBar1;                                     // 0x0650(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UProgressBar*                                        TractorProgressBar2;                                     // 0x0658(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class ATekHoverSkiff_Character_BP_C*                       SpawnedBySkiff;                                          // 0x0660(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UClass*                                              GrabbedByBuff;                                           // 0x0668(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      RetractingRenderAngle;                                   // 0x0670(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      GaugeAlphaStandard;                                      // 0x0674(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      GaugeAlphaOnHKeyPressed;                                 // 0x0678(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      NeedleAlphaStandard;                                     // 0x067C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      NeedleAlphaOnHKeyPressed;                                // 0x0680(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        IndicatorColor_Good;                                     // 0x0684(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        IndicatorColor_Warning;                                  // 0x0694(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FLinearColor                                        IndicatorColor_Bad;                                      // 0x06A4(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    FuelReserveAmount_ChangeToWarning;                       // 0x06B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		int32_t                                                    FuelReserveAmount_ChangeToCritical;                      // 0x06B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FuelUsagePercent_ChangeToWarning;                        // 0x06BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FuelUsagePercent_ChangeToCritical;                       // 0x06C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FuelTankPercent_ChangeToWarning;                         // 0x06C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      FuelTankPercent_ChangeToCritical;                        // 0x06C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       ShowAltFuelValue;                                        // 0x06CC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QVFG[0x3];                                   // 0x06CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HideRepairProgressBarAtPercentThreshold;                 // 0x06D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_43IB[0x4];                                   // 0x06D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SkiffModeString_Landed;                                  // 0x06D8(0x0010) Edit, BlueprintVisible, ZeroConstructor
		class FString                                              SkiffModeString_Hover;                                   // 0x06E8(0x0010) Edit, BlueprintVisible, ZeroConstructor
		class FString                                              SkiffModeString_Fly;                                     // 0x06F8(0x0010) Edit, BlueprintVisible, ZeroConstructor
		class FString                                              SkiffModeString_Freefall;                                // 0x0708(0x0010) Edit, BlueprintVisible, ZeroConstructor
		class FString                                              SkiffModeString_Landing;                                 // 0x0718(0x0010) Edit, BlueprintVisible, ZeroConstructor
		class FString                                              SkiffModeString_Launching;                               // 0x0728(0x0010) Edit, BlueprintVisible, ZeroConstructor
		class FString                                              SkiffModeString_OutOfFuel;                               // 0x0738(0x0010) Edit, BlueprintVisible, ZeroConstructor
		class FString                                              SkiffModeString_RepairMode;                              // 0x0748(0x0010) Edit, BlueprintVisible, ZeroConstructor
		float                                                      MinNeedleRotation;                                       // 0x0758(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      MaxNeedleRotation;                                       // 0x075C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		float                                                      CurrentAltitudeOrHoverHeight;                            // 0x0760(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      NeedleRenderAngleInterpSpeed;                            // 0x0764(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        RepairPanelBrushColor_Default;                           // 0x0768(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        RepairPanelBrushColor_Disabled;                          // 0x0778(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        RepairPanelBrushColor_Cooldown;                          // 0x0788(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLinearColor                                        RepairPanelBrushColor_RepairMode;                        // 0x0798(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate;                    // 0x07A8(0x0010) ZeroConstructor, Transient, DuplicateTransient, NoDestructor
		float                                                      K2Node_CustomEvent_NewLifespan;                          // 0x07B8(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsValid_ReturnValue;                            // 0x07BC(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UPDF[0x3];                                   // 0x07BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGeometry                                           K2Node_Event_MyGeometry;                                 // 0x07C0(0x0034) Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_Event_InDeltaTime;                                // 0x07F4(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		struct FLinearColor Get_RepairPanel_BrushColor_1();
		class FText Get_SkiffModeSubStatusTextBlock_Text_1();
		class FText Get_RepairLabelTextBlock_Text_1();
		void WidgetBoolToVisibilty(class UObject* TargetWidget, bool IsVisible, bool UseHiddenInsteadOfCollapsed);
		void UpdateRepairProgressBarsPercentAndForegroundColor();
		void UpdateRepairPanelVisibility();
		void UpdateAllFuelGaugesPanelVisibility();
		class FText Get_AltFuelLabelTextBlock_Text_1();
		void UpdateStatusVisibilities();
		void UpdateNeedleRotation();
		void UpdateTractorBeamCrosshairVisuals();
		struct FLinearColor Get_FuelUsageNeedleImage_ColorAndOpacity_1();
		struct FLinearColor Get_FuelReserveNeedleImage_ColorAndOpacity_1();
		struct FLinearColor Get_FuelTankNeedleImage_ColorAndOpacity_1();
		struct FLinearColor Get_FuelTankGaugeImage_ColorAndOpacity_1();
		struct FLinearColor Get_FuelReserveGaugeImage_ColorAndOpacity_1();
		void IsExtendedInfoKeyPressed(bool* bShowExtendedInfoKey);
		struct FLinearColor Get_FuelUsageGaugeImage_ColorAndOpacity_1();
		void DimGaugesAndNeedlesOnBool(bool Bool);
		void OnShowExtendedInfoKeyPressed();
		class FText Get_RepairValueTextBlock_Text_1();
		class FText Get_AltFuelValueTextBlock_Text_1();
		struct FSlateBrush Get_AltFuelIcon_Brush_1();
		class FText Get_SkiffModeValueTextBlock_Text_1();
		class FText Get_AltitudeValueTextBlock_Text_1();
		class FText Get_AltitudeLabelTextBlock_Text_1();
		class FText GetDebugText0();
		class FText Get_FuelReserveTextBlock_Text_1();
		void SetProgressBarFillAndBackgroundColors(class UProgressBar* ProgressBar, const struct FLinearColor& LinearColor, struct FProgressBarStyle* ProgressBarStyle);
		class FText Get_CurrentElementValueTextBlock_Text_1();
		float GetTractorProgressBarPercent();
		struct FLinearColor Get_Crosshair_ColorAndOpacity_1();
		struct FLinearColor Get_CameraLockIcon_ColorAndOpacity_1();
		class FText Get_FuelConsumptionRateValueTextBlock_Text_1();
		class FText Get_ElementFuelValueTextBlock_Text_1();
		void InitFromSkiff(class ATekHoverSkiff_Character_BP_C* FromSkiff);
		void StartClosingWidget(float NewLifeSpan);
		void DestroySkiffHudWidget();
		void ResetSkiffHudWidget();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void ExecuteUbergraph_HoverSkiffHudWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
