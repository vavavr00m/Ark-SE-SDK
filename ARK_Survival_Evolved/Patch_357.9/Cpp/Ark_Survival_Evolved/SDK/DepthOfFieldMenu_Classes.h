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
	 * WidgetBlueprintGeneratedClass DepthOfFieldMenu.DepthOfFieldMenu_C
	 * Size -> 0x00E8 (FullSize[0x0798] - InheritedSize[0x06B0])
	 */
	class UDepthOfFieldMenu_C : public UUI_DepthOfFieldMenu
	{
	public:
		class UCustomButtonWidget*                                 CancelButton;                                            // 0x06B0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 ClearButton;                                             // 0x06B8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 FarButton;                                               // 0x06C0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USlider*                                             FarTransitionRegionSlider;                               // 0x06C8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UEditableTextBox*                                    FarTransitionRegionTextBox;                              // 0x06D0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USlider*                                             FocalDistanceSlider;                                     // 0x06D8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UEditableTextBox*                                    FocalDistanceTextBox;                                    // 0x06E0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USlider*                                             FocalRegionSlider;                                       // 0x06E8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UEditableTextBox*                                    FocalRegionTextBox;                                      // 0x06F0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           GaussianCheckBox;                                        // 0x06F8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_1;                                                 // 0x0700(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_127;                                               // 0x0708(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_135;                                               // 0x0710(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_162;                                               // 0x0718(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_93;                                                // 0x0720(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USlider*                                             MaxBokehSlider;                                          // 0x0728(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UEditableTextBox*                                    MaxBokehTextBox;                                         // 0x0730(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 MediumButton;                                            // 0x0738(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 NearButton;                                              // 0x0740(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USlider*                                             NearTransitionRegionSlider;                              // 0x0748(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UEditableTextBox*                                    NearTransitionRegionTextBox;                             // 0x0750(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USlider*                                             OcclusionSlider;                                         // 0x0758(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UEditableTextBox*                                    OcclusionTextBox;                                        // 0x0760(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 OpenButton;                                              // 0x0768(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 RevertButton;                                            // 0x0770(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 SaveButton;                                              // 0x0778(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USlider*                                             ScaleSlider;                                             // 0x0780(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UEditableTextBox*                                    ScaleTextBox;                                            // 0x0788(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UComboBoxString*                                     StoredComboBox;                                          // 0x0790(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ExecuteUbergraph_DepthOfFieldMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
