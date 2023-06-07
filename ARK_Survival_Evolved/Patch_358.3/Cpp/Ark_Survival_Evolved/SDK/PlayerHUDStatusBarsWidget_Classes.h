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
	 * WidgetBlueprintGeneratedClass PlayerHUDStatusBarsWidget.PlayerHUDStatusBarsWidget_C
	 * Size -> 0x0058 (FullSize[0x03F8] - InheritedSize[0x03A0])
	 */
	class UPlayerHUDStatusBarsWidget_C : public UHUDStatusBarsWidget
	{
	public:
		class UProgressBarWidget*                                  BuffProgressBar;                                         // 0x03A0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UProgressBarWidget*                                  FoodBar;                                                 // 0x03A8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              HarvestIcon;                                             // 0x03B0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UProgressBarWidget*                                  HealthBar;                                               // 0x03B8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              IndoorsIcon;                                             // 0x03C0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UProgressBarWidget*                                  OxygenBar;                                               // 0x03C8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UProgressBarWidget*                                  StaminaBar;                                              // 0x03D0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UProgressBarWidget*                                  TorpBar;                                                 // 0x03D8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UProgressBarWidget*                                  WaterBar;                                                // 0x03E0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UProgressBarWidget*                                  WeightBar;                                               // 0x03E8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UProgressBarWidget*                                  XPBar;                                                   // 0x03F0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ExecuteUbergraph_PlayerHUDStatusBarsWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
