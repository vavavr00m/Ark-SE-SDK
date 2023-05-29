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
	 * WidgetBlueprintGeneratedClass WorldBuffEntryUI.WorldBuffEntryUI_C
	 * Size -> 0x0078 (FullSize[0x0378] - InheritedSize[0x0300])
	 */
	class UWorldBuffEntryUI_C : public UWorldBuffEntryWidget
	{
	public:
		class UWidgetAnimation*                                    FadeIn;                                                  // 0x0300(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UWidgetAnimation*                                    FadeOut;                                                 // 0x0308(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTextBlock*                                          AlphaTextBlock;                                          // 0x0310(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTextBlock*                                          BetaTextBlock;                                           // 0x0318(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTextBlock*                                          DescriptionTextBlock;                                    // 0x0320(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UHorizontalBox*                                      DifficultyPanel;                                         // 0x0328(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USizeBox*                                            GammaIndicatorPanel;                                     // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTextBlock*                                          GammaTextBlock;                                          // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              IconBackgroundImage;                                     // 0x0340(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              IconImage;                                               // 0x0348(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_142;                                               // 0x0350(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_255;                                               // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_302;                                               // 0x0360(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UBorder*                                             MainPanel;                                               // 0x0368(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTextBlock*                                          TitleTextBlock;                                          // 0x0370(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ExecuteUbergraph_WorldBuffEntryUI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
