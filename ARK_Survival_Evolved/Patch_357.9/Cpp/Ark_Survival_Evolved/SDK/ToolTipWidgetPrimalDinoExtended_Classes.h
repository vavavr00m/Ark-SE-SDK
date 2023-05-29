﻿#pragma once

/**
 * Name: Ark_Survival_Evolved
 * Version: Patch_357.9
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
	 * WidgetBlueprintGeneratedClass ToolTipWidgetPrimalDinoExtended.ToolTipWidgetPrimalDinoExtended_C
	 * Size -> 0x00C8 (FullSize[0x0568] - InheritedSize[0x04A0])
	 */
	class UToolTipWidgetPrimalDinoExtended_C : public UPrimalDinoToolTipWidget
	{
	public:
		class UProgressBar*                                        CraftingBar;                                             // 0x04A0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UProgressBarWidget*                                  DamageBar;                                               // 0x04A8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              DinoFoodTypeImage;                                       // 0x04B0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              DinoIcon;                                                // 0x04B8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              DinoIconBG;                                              // 0x04C0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UProgressBarWidget*                                  FoodBar;                                                 // 0x04C8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UProgressBarWidget*                                  HealthBar;                                               // 0x04D0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_1;                                                 // 0x04D8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_22;                                                // 0x04E0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_294;                                               // 0x04E8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_321;                                               // 0x04F0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_45;                                                // 0x04F8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_53;                                                // 0x0500(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_8;                                                 // 0x0508(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_99;                                                // 0x0510(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              MainBG;                                                  // 0x0518(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              MaxInventoryImage;                                       // 0x0520(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UProgressBarWidget*                                  OxygenBar;                                               // 0x0528(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UProgressBarWidget*                                  SpeedBar;                                                // 0x0530(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UProgressBarWidget*                                  StaminaBar;                                              // 0x0538(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UProgressBar*                                        TamingProgressBar;                                       // 0x0540(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UProgressBarWidget*                                  TorpidityBar;                                            // 0x0548(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UProgressBar*                                        TorpidityProgressBar;                                    // 0x0550(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UProgressBarWidget*                                  WeightBar;                                               // 0x0558(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UProgressBarWidget*                                  XPBar;                                                   // 0x0560(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ExecuteUbergraph_ToolTipWidgetPrimalDinoExtended(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
