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
	 * WidgetBlueprintGeneratedClass StatsPanel.StatsPanel_C
	 * Size -> 0x0048 (FullSize[0x0648] - InheritedSize[0x0600])
	 */
	class UStatsPanel_C : public UInventoryStatsPanel
	{
	public:
		class UImage*                                              Image_152;                                               // 0x0600(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_43;                                                // 0x0608(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UButton*                                             PlayerStatsButton;                                       // 0x0610(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCharacterStatsPanel_C*                              PlayerStatsPanel;                                        // 0x0618(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UButton*                                             RemoteStatsButton;                                       // 0x0620(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UWidgetSwitcher*                                     StatsSwitcher;                                           // 0x0628(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UWidgetSwitcher*                                     TabBgSwitcher;                                           // 0x0630(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              TabSplitImgPlayer;                                       // 0x0638(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              TabSplitImgRemote;                                       // 0x0640(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ExecuteUbergraph_StatsPanel(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
