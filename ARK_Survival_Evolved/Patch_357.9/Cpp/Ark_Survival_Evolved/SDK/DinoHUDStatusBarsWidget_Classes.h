#pragma once

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
	 * WidgetBlueprintGeneratedClass DinoHUDStatusBarsWidget.DinoHUDStatusBarsWidget_C
	 * Size -> 0x0058 (FullSize[0x0450] - InheritedSize[0x03F8])
	 */
	class UDinoHUDStatusBarsWidget_C : public UPlayerHUDStatusBarsWidget_C
	{
	public:
		class UProgressBarWidget*                                  BuffProgressBar;                                         // 0x03F8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UProgressBarWidget*                                  FoodBar;                                                 // 0x0400(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              HarvestIcon;                                             // 0x0408(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UProgressBarWidget*                                  HealthBar;                                               // 0x0410(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              IndoorsIcon;                                             // 0x0418(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UProgressBarWidget*                                  OxygenBar;                                               // 0x0420(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UProgressBarWidget*                                  StaminaBar;                                              // 0x0428(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UProgressBarWidget*                                  TorpBar;                                                 // 0x0430(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UProgressBarWidget*                                  WaterBar;                                                // 0x0438(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UProgressBarWidget*                                  WeightBar;                                               // 0x0440(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UProgressBarWidget*                                  XPBar;                                                   // 0x0448(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ExecuteUbergraph_DinoHUDStatusBarsWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
