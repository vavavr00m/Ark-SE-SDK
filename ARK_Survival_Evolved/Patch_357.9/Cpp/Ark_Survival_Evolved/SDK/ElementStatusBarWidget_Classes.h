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
	 * WidgetBlueprintGeneratedClass ElementStatusBarWidget.ElementStatusBarWidget_C
	 * Size -> 0x0038 (FullSize[0x0350] - InheritedSize[0x0318])
	 */
	class UElementStatusBarWidget_C : public UHUDElementBarWidget
	{
	public:
		class UImage*                                              BoostIcon;                                               // 0x0318(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UProgressBarWidget*                                  BootsBar;                                                // 0x0320(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UProgressBarWidget*                                  GlovesBar;                                               // 0x0328(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UProgressBarWidget*                                  HelmetBar;                                               // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UProgressBarWidget*                                  PantsBar;                                                // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UProgressBarWidget*                                  ShirtBar;                                                // 0x0340(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UProgressBarWidget*                                  ShoulderCannonBar;                                       // 0x0348(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void UpdateBoostIconVisibility();
		void ExecuteUbergraph_ElementStatusBarWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
