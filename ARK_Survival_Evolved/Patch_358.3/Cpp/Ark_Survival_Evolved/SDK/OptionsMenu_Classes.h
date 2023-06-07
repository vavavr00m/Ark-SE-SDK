﻿#pragma once

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
	 * WidgetBlueprintGeneratedClass OptionsMenu.OptionsMenu_C
	 * Size -> 0x07D6 (FullSize[0x11B6] - InheritedSize[0x09E0])
	 */
	class UOptionsMenu_C : public UUI_OptionsMenu
	{
	public:
		class UWidgetAnimation*                                    FadeIn;                                                  // 0x09E0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UWidgetAnimation*                                    FadeOut;                                                 // 0x09E8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UWidgetAnimation*                                    Close;                                                   // 0x09F0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UWidgetAnimation*                                    Open;                                                    // 0x09F8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     AccessInventory;                                         // 0x0A00(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 AdvancedSettingsMenuButton;                              // 0x0A08(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           AllowAnimationStaggeringCheckbox;                        // 0x0A10(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           AllowCrosshairCheckbox;                                  // 0x0A18(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           AllowEnhancedDistanceDetailModeCheckbox;                 // 0x0A20(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           AllowHitMarkersCheckbox;                                 // 0x0A28(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     AltFire;                                                 // 0x0A30(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USlider*                                             AmbientSoundVolumeSlider;                                // 0x0A38(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UComboBoxString*                                     AntiAliasingComboBox;                                    // 0x0A40(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 ApplyButton;                                             // 0x0A48(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USlider*                                             AudioVolumeSlider;                                       // 0x0A50(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     BrakeDino;                                               // 0x0A58(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     CallAggressive;                                          // 0x0A60(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     CallAttackTarget;                                        // 0x0A68(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     CallFollow;                                              // 0x0A70(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     CallFollowDistanceCycleOne;                              // 0x0A78(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     CallFollowOne;                                           // 0x0A80(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     CallLandOne;                                             // 0x0A88(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     CallMoveTo;                                              // 0x0A90(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     CallNeutral;                                             // 0x0A98(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     CallPassive;                                             // 0x0AA0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     CallSetAggressive;                                       // 0x0AA8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     CallStay;                                                // 0x0AB0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     CallStayOne;                                             // 0x0AB8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           CameraBobCheckbox;                                       // 0x0AC0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USlider*                                             CameraShakeScaleSlider;                                  // 0x0AC8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 CancelButton;                                            // 0x0AD0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     CancelOrder;                                             // 0x0AD8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     CenterPlayer;                                            // 0x0AE0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     CenterSelection;                                         // 0x0AE8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     CharacterActionWheel;                                    // 0x0AF0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USlider*                                             CharacterSlider;                                         // 0x0AF8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           ChatBubblesCheckbox;                                     // 0x0B00(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           ChatShowSteamNameCheckbox;                               // 0x0B08(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           ChatShowTribeNameCheckbox;                               // 0x0B10(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UComboBoxString*                                     ClientNetSpeedComboBox;                                  // 0x0B18(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UButton*                                             CloseGamepadControlsButton;                              // 0x0B20(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           ColorizedItemNamesCheckbox;                              // 0x0B28(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              CreatureBottomBorder;                                    // 0x0B30(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              CreatureTopBorder;                                       // 0x0B38(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     Crouch;                                                  // 0x0B40(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           DefaultCharacterItemsCheckbox;                           // 0x0B48(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           DisableBloomCheckbox;                                    // 0x0B50(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           DisableLightShaftsCheckbox;                              // 0x0B58(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           DisableMenuMusicCheckbox;                                // 0x0B60(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           DisableMenuTransitionsCheckbox;                          // 0x0B68(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           DisableSubtitlesCheckbox;                                // 0x0B70(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           DisableTorporEffectCheckbox;                             // 0x0B78(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           DisableTPVCameraInterpolationCheckbox;                   // 0x0B80(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           DistanceFieldShadowingCheckbox;                          // 0x0B88(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     Drag;                                                    // 0x0B90(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     DropItem;                                                // 0x0B98(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           DynamicTessCheckbox;                                     // 0x0BA0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     EmoteKey1;                                               // 0x0BA8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     EmoteKey2;                                               // 0x0BB0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           EnableBloodEffectsCheckbox;                              // 0x0BB8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           EnableColorGradingCheckbox;                              // 0x0BC0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 EnableHMDButton;                                         // 0x0BC8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           ExtraLevelStreamingDistanceCheckbox;                     // 0x0BD0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           FilmGrainCheckbox;                                       // 0x0BD8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     Fire;                                                    // 0x0BE0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           FirstPersonRidingCheckbox;                               // 0x0BE8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           FloatingNamesCheckbox;                                   // 0x0BF0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     ForceCraftButton;                                        // 0x0BF8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           ForceTPVCameraOffsetCheckbox;                            // 0x0C00(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USlider*                                             FOVSlider;                                               // 0x0C08(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              FrontOverlayAdditive;                                    // 0x0C10(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UButton*                                             GamepadControlsButton;                                   // 0x0C18(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              GamepadIcon_NextMenu;                                    // 0x0C20(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              GamepadIcon_PrevMenu;                                    // 0x0C28(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              GamepadImage;                                            // 0x0C30(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 GamepadMenuButton;                                       // 0x0C38(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UEditableTextBox*                                    Gamma1Editbox;                                           // 0x0C40(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UEditableTextBox*                                    Gamma2Editbox;                                           // 0x0C48(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     GiveDefaultWeapon;                                       // 0x0C50(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UComboBoxString*                                     GraphicsQualityComboBox;                                 // 0x0C58(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UBorder*                                             GraphicsQualityHelpTooltip;                              // 0x0C60(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USlider*                                             GroundClutterDensitySlider;                              // 0x0C68(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USlider*                                             GroundClutterDistanceSlider;                             // 0x0C70(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     GroupAddOrRemoveTame;                                    // 0x0C78(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UEditableTextBox*                                    HeightTextBox;                                           // 0x0C80(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           HideFloatingPlayerNamesCheckbox;                         // 0x0C88(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           HideGamepadItemSelectionModifierCheckbox;                // 0x0C90(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           HideServerInfoCheckbox;                                  // 0x0C98(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           HighQualityAnisotropicFilteringCheckbox;                 // 0x0CA0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           HighQualityLODsCheckbox;                                 // 0x0CA8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           HighQualityMaterialsCheckbox;                            // 0x0CB0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           HighQualitySurfacesCheckbox;                             // 0x0CB8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           HighQualityVFXCheckbox;                                  // 0x0CC0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_12;                                                // 0x0CC8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_152;                                               // 0x0CD0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_1545;                                              // 0x0CD8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_1546;                                              // 0x0CE0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_1586;                                              // 0x0CE8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_2016;                                              // 0x0CF0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_242;                                               // 0x0CF8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_243;                                               // 0x0D00(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_257;                                               // 0x0D08(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_266;                                               // 0x0D10(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_270;                                               // 0x0D18(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_321;                                               // 0x0D20(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_419;                                               // 0x0D28(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_537;                                               // 0x0D30(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_538;                                               // 0x0D38(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_55;                                                // 0x0D40(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_56;                                                // 0x0D48(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_59;                                                // 0x0D50(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_610;                                               // 0x0D58(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_64;                                                // 0x0D60(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_66;                                                // 0x0D68(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_67;                                                // 0x0D70(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_9;                                                 // 0x0D78(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_93;                                                // 0x0D80(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_922;                                               // 0x0D88(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_923;                                               // 0x0D90(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_963;                                               // 0x0D98(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           InventoryAccessSoundCheckbox;                            // 0x0DA0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           InvertMouse;                                             // 0x0DA8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     IssueOrder;                                              // 0x0DB0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           JoinNotificationsCheckbox;                               // 0x0DB8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     Jump;                                                    // 0x0DC0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 KeyBindingsMenuButton;                                   // 0x0DC8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USlider*                                             LODScalarSlider;                                         // 0x0DD0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     LookDown;                                                // 0x0DD8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USlider*                                             LookLeftRightSensitivitySlider;                          // 0x0DE0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     LookUp;                                                  // 0x0DE8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USlider*                                             LookUpDownSensitivitySlider;                             // 0x0DF0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           LowQualityAnimationsCheckbox;                            // 0x0DF8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           MeleeCameraSwingAnimsCheckbox;                           // 0x0E00(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           MotionBlurCheckbox;                                      // 0x0E08(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     MoveBackward;                                            // 0x0E10(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     MoveForward;                                             // 0x0E18(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USlider*                                             MusicSlider;                                             // 0x0E20(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           NoTooltipDelayCheckbox;                                  // 0x0E28(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     OpenMapMarkers;                                          // 0x0E30(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 OptionsMenuButton;                                       // 0x0E38(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     OrbitCam;                                                // 0x0E40(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     OrbitCamToggle;                                          // 0x0E48(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           PlayActionWheelClickSoundCheckbox;                       // 0x0E50(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     Poop;                                                    // 0x0E58(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UComboBoxString*                                     PostProcessingComboBox;                                  // 0x0E60(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     Prone;                                                   // 0x0E68(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              PS4GamepadImage;                                         // 0x0E70(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     PushToTalk;                                              // 0x0E78(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           QuickToggleItemNamesCheckbox;                            // 0x0E80(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     Reload;                                                  // 0x0E88(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 RepositionHMDViewButton;                                 // 0x0E90(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 ResetButton;                                             // 0x0E98(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 ResetIntroCinematicsButton;                              // 0x0EA0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UButton*                                             ResetTutorials;                                          // 0x0EA8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USlider*                                             ResolutionScaleSlider;                                   // 0x0EB0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UComboBoxString*                                     ResolutionsComboBox;                                     // 0x0EB8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 RTSMenuButton;                                           // 0x0EC0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     Run;                                                     // 0x0EC8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     RunToggle;                                               // 0x0ED0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 SaveButton;                                              // 0x0ED8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USlider*                                             ScaleSlider;                                             // 0x0EE0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     SelectUnit;                                              // 0x0EE8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     SetGamma1;                                               // 0x0EF0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     SetGamma2;                                               // 0x0EF8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USlider*                                             SFXSlider;                                               // 0x0F00(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UComboBoxString*                                     ShadowsComboBox;                                         // 0x0F08(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           ShowChatCheckbox;                                        // 0x0F10(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     ShowExtendedInfo;                                        // 0x0F18(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     ShowLocalChat;                                           // 0x0F20(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     ShowMyCraftables;                                        // 0x0F28(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     ShowMyInventory;                                         // 0x0F30(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     ShowTribeChat;                                           // 0x0F38(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     ShowTribeManager;                                        // 0x0F40(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           SimpleDistanceMovementCheckbox;                          // 0x0F48(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           SSAOCheckbox;                                            // 0x0F50(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              StadiaGamepadImage;                                      // 0x0F58(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           StatusNotificationMessagesCheckbox;                      // 0x0F60(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           StopExplorerNoteAudioOnCloseCheckbox;                    // 0x0F68(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     StrafeLeft;                                              // 0x0F70(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     StrafeRight;                                             // 0x0F78(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UWidgetSwitcher*                                     SubMenuSwitcher;                                         // 0x0F80(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              SwitchGamepadImage;                                      // 0x0F88(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     Targeting;                                               // 0x0F90(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           TemperatureFCheckbox;                                    // 0x0F98(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UComboBoxString*                                     TerrainShadowComboBox;                                   // 0x0FA0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UComboBoxString*                                     TexturesComboBox;                                        // 0x0FA8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     ToggleAutoChat;                                          // 0x0FB0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     ToggleConsole;                                           // 0x0FB8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           ToggleExtendedHUDInfoCheckbox;                           // 0x0FC0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     ToggleHUDHidden;                                         // 0x0FC8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     ToggleMap;                                               // 0x0FD0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     ToggleRTS;                                               // 0x0FD8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           ToggleToTalkCheckBox;                                    // 0x0FE0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USlider*                                             TrueSkyQualitySlider;                                    // 0x0FE8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     TurnLeft;                                                // 0x0FF0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     TurnRight;                                               // 0x0FF8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USlider*                                             UIQuickbarScalingSlider;                                 // 0x1000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     Use;                                                     // 0x1008(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           UseDFAOCheckbox;                                         // 0x1010(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     UseItem1;                                                // 0x1018(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     UseItem10;                                               // 0x1020(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     UseItem2;                                                // 0x1028(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     UseItem3;                                                // 0x1030(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     UseItem4;                                                // 0x1038(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     UseItem5;                                                // 0x1040(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     UseItem6;                                                // 0x1048(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     UseItem7;                                                // 0x1050(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     UseItem8;                                                // 0x1058(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     UseItem9;                                                // 0x1060(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           UseLowQualityFarLevelStreamingCheckbox;                  // 0x1068(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UComboBoxString*                                     ViewDistanceComboBox;                                    // 0x1070(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USlider*                                             VoiceSlider;                                             // 0x1078(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     WeaponAccessory;                                         // 0x1080(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     Whisper;                                                 // 0x1088(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UEditableTextBox*                                    WidthTextBox;                                            // 0x1090(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UComboBoxString*                                     WindowModeComboBox;                                      // 0x1098(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UComboBoxString*                                     WorldTileBufferComboBox;                                 // 0x10A0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              XBoxGamepadImage;                                        // 0x10A8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     Yell;                                                    // 0x10B0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     ZoomIn;                                                  // 0x10B8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UKeyInputWidget*                                     ZoomOut;                                                 // 0x10C0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       GraphicsToolTipIsVisible;                                // 0x10C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D3G3[0x3];                                   // 0x10C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGeometry                                           K2Node_Event_MyGeometry;                                 // 0x10CC(0x0034) Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_Event_InDeltaTime;                                // 0x1100(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_F3BX[0x4];                                   // 0x1104(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              K2Node_ComponentBoundEvent_SelectedItem5;                // 0x1108(0x0010) ZeroConstructor, Transient, DuplicateTransient
		ESelectInfo                                                K2Node_ComponentBoundEvent_SelectionType5;               // 0x1118(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_88CC[0x7];                                   // 0x1119(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              K2Node_ComponentBoundEvent_SelectedItem4;                // 0x1120(0x0010) ZeroConstructor, Transient, DuplicateTransient
		ESelectInfo                                                K2Node_ComponentBoundEvent_SelectionType4;               // 0x1130(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AZRN[0x7];                                   // 0x1131(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              K2Node_ComponentBoundEvent_SelectedItem3;                // 0x1138(0x0010) ZeroConstructor, Transient, DuplicateTransient
		ESelectInfo                                                K2Node_ComponentBoundEvent_SelectionType3;               // 0x1148(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8GLQ[0x7];                                   // 0x1149(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              K2Node_ComponentBoundEvent_SelectedItem2;                // 0x1150(0x0010) ZeroConstructor, Transient, DuplicateTransient
		ESelectInfo                                                K2Node_ComponentBoundEvent_SelectionType2;               // 0x1160(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_241O[0x7];                                   // 0x1161(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              K2Node_ComponentBoundEvent_SelectedItem;                 // 0x1168(0x0010) ZeroConstructor, Transient, DuplicateTransient
		ESelectInfo                                                K2Node_ComponentBoundEvent_SelectionType;                // 0x1178(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_S6FE[0x7];                                   // 0x1179(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              K2Node_ComponentBoundEvent_SelectedItem6;                // 0x1180(0x0010) ZeroConstructor, Transient, DuplicateTransient
		ESelectInfo                                                K2Node_ComponentBoundEvent_SelectionType6;               // 0x1190(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DK6X[0x3];                                   // 0x1191(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_ComponentBoundEvent_Value2;                       // 0x1194(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		float                                                      K2Node_ComponentBoundEvent_Value;                        // 0x1198(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_ComponentBoundEvent_bIsChecked4;                  // 0x119C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_ComponentBoundEvent_bIsChecked3;                  // 0x119D(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_ComponentBoundEvent_bIsChecked2;                  // 0x119E(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       K2Node_ComponentBoundEvent_bIsChecked;                   // 0x119F(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		class FString                                              K2Node_ComponentBoundEvent_SelectedItem7;                // 0x11A0(0x0010) ZeroConstructor, Transient, DuplicateTransient
		ESelectInfo                                                K2Node_ComponentBoundEvent_SelectionType7;               // 0x11B0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue;                        // 0x11B1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_IsHovered_ReturnValue;                          // 0x11B2(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue;                         // 0x11B3(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Not_PreBool_ReturnValue2;                       // 0x11B4(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_BooleanAND_ReturnValue2;                        // 0x11B5(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void BndEvt__GraphicsQualityComboBox_K2Node_ComponentBoundEvent_11_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void BndEvt__ViewDistanceComboBox_K2Node_ComponentBoundEvent_7_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void BndEvt__AntiAliasingComboBox_K2Node_ComponentBoundEvent_13_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void BndEvt__PostProcessingComboBox_K2Node_ComponentBoundEvent_20_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void BndEvt__ShadowsComboBox_K2Node_ComponentBoundEvent_28_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void BndEvt__TerrainShadowComboBox_K2Node_ComponentBoundEvent_37_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void BndEvt__TexturesComboBox_K2Node_ComponentBoundEvent_47_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void BndEvt__TrueSkyQualitySlider_K2Node_ComponentBoundEvent_67_OnFloatValueChangedEvent__DelegateSignature(float Value);
		void BndEvt__GroundClutterDensitySlider_K2Node_ComponentBoundEvent_81_OnFloatValueChangedEvent__DelegateSignature(float Value);
		void BndEvt__MotionBlurCheckbox_K2Node_ComponentBoundEvent_181_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__FilmGrainCheckbox_K2Node_ComponentBoundEvent_193_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__UseDFAOCheckbox_K2Node_ComponentBoundEvent_206_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void BndEvt__SSAOCheckbox_K2Node_ComponentBoundEvent_220_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
		void OptionsGraphTick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void ExecuteUbergraph_OptionsMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
