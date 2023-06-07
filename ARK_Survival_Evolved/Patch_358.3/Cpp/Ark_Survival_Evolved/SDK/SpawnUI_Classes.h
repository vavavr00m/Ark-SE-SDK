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
	 * WidgetBlueprintGeneratedClass SpawnUI.SpawnUI_C
	 * Size -> 0x0238 (FullSize[0x0D30] - InheritedSize[0x0AF8])
	 */
	class USpawnUI_C : public UUI_Spawn
	{
	public:
		class UWidgetAnimation*                                    Close;                                                   // 0x0AF8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UWidgetAnimation*                                    Open;                                                    // 0x0B00(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              ArkPrimeIcon;                                            // 0x0B08(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USlider*                                             ArmLengthSlider;                                         // 0x0B10(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              ArmsBottomBorder;                                        // 0x0B18(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              ArmsTopBorder;                                           // 0x0B20(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UEditableTextBox*                                    BedFilter;                                               // 0x0B28(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USlider*                                             BodySlider;                                              // 0x0B30(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 CancelLoadButton;                                        // 0x0B38(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UUI_PreviewWidget*                                   CharacterPreview;                                        // 0x0B40(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              CharacterPreviewImage;                                   // 0x0B48(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USlider*                                             ChestSlider;                                             // 0x0B50(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 CloseButton;                                             // 0x0B58(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 CreateNewPlayerButton;                                   // 0x0B60(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              DisabledPanelImage;                                      // 0x0B68(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 DoCreateNewPlayerButton;                                 // 0x0B70(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 DownloadArkCharacterData;                                // 0x0B78(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USlider*                                             EyeSlider;                                               // 0x0B80(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UButton*                                             FemaleButton;                                            // 0x0B88(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USlider*                                             FootSlider;                                              // 0x0B90(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              FrontOverlayAdditive;                                    // 0x0B98(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USlider*                                             HairSlider;                                              // 0x0BA0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USlider*                                             HandSlider;                                              // 0x0BA8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              HeadBottomBorder;                                        // 0x0BB0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USlider*                                             HeadDepth;                                               // 0x0BB8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USlider*                                             HeadHeight;                                              // 0x0BC0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USlider*                                             HeadSlider;                                              // 0x0BC8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              HeadTopBorder;                                           // 0x0BD0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USlider*                                             HeadWidth;                                               // 0x0BD8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USlider*                                             HipSlider;                                               // 0x0BE0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_1;                                                 // 0x0BE8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_152;                                               // 0x0BF0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_254;                                               // 0x0BF8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_256;                                               // 0x0C00(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_4;                                                 // 0x0C08(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_31;                                                // 0x0C10(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_43;                                                // 0x0C18(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_93;                                                // 0x0C20(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USlider*                                             LegLengthSlider;                                         // 0x0C28(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              LegsBottomBorder;                                        // 0x0C30(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              LegsTopBorder;                                           // 0x0C38(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 LoadConfirmationButton;                                  // 0x0C40(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 LoadFromFileButton;                                      // 0x0C48(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USlider*                                             LowerArmSlider;                                          // 0x0C50(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USlider*                                             LowerFaceSlider;                                         // 0x0C58(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USlider*                                             LowerLegSlider;                                          // 0x0C60(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UButton*                                             MaleButton;                                              // 0x0C68(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UEditableTextBox*                                    NameBox;                                                 // 0x0C70(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USlider*                                             NeckLengthSlider;                                        // 0x0C78(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USlider*                                             NeckSlider;                                              // 0x0C80(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 RandomizeButton;                                         // 0x0C88(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              RandomizeButtonIcon;                                     // 0x0C90(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 ResetButton;                                             // 0x0C98(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 RespawnButton;                                           // 0x0CA0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              RespawnLabelBkg;                                         // 0x0CA8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 RespawnPanelButton;                                      // 0x0CB0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 SaveToFileButton;                                        // 0x0CB8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USlider*                                             ShouldersSlider;                                         // 0x0CC0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              SmallMapImage;                                           // 0x0CC8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UWidgetSwitcher*                                     TabBgSwitcher;                                           // 0x0CD0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              TabSplitImgPlayer;                                       // 0x0CD8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              TabSplitImgRemote;                                       // 0x0CE0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              TorsoBottomBorder;                                       // 0x0CE8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USlider*                                             TorsoDepth;                                              // 0x0CF0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USlider*                                             TorsoHeight;                                             // 0x0CF8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USlider*                                             TorsoSlider;                                             // 0x0D00(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              TorsoTopBorder;                                          // 0x0D08(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              UnlearnedEngramsIcon;                                    // 0x0D10(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USlider*                                             UpperArmSlider;                                          // 0x0D18(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USlider*                                             UpperFaceSlider;                                         // 0x0D20(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USlider*                                             UpperLegSlider;                                          // 0x0D28(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ExecuteUbergraph_SpawnUI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
