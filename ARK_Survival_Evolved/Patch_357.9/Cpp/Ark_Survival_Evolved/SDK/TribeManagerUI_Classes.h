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
	 * WidgetBlueprintGeneratedClass TribeManagerUI.TribeManagerUI_C
	 * Size -> 0x0360 (FullSize[0x0D38] - InheritedSize[0x09D8])
	 */
	class UTribeManagerUI_C : public UUI_TribeManager
	{
	public:
		class UWidgetAnimation*                                    Close;                                                   // 0x09D8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UWidgetAnimation*                                    Open;                                                    // 0x09E0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 AcceptWarButton;                                         // 0x09E8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 AddNewGroupRankButton;                                   // 0x09F0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 ApplyGroupRankSettingsButton;                            // 0x09F8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UButton*                                             CloseButton;                                             // 0x0A00(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 CloseGroupRanksButton;                                   // 0x0A08(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UComboBoxString*                                     Combo_TribeGovern_DinoOwnership;                         // 0x0A10(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UComboBoxString*                                     Combo_TribeGovern_DinoTaming;                            // 0x0A18(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UComboBoxString*                                     Combo_TribeGovern_DinoUnclaiming;                        // 0x0A20(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UComboBoxString*                                     Combo_TribeGovern_PINCode;                               // 0x0A28(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UComboBoxString*                                     Combo_TribeGovern_StructureOwnership;                    // 0x0A30(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 CreateNewAllianceButton;                                 // 0x0A38(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 CreateTribeButton;                                       // 0x0A40(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              CreatureOwnershipBottomBorder;                           // 0x0A48(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              CreatureOwnershipTopBorder;                              // 0x0A50(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 DeleteGroupRankButton;                                   // 0x0A58(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 ExitAlliancesButton;                                     // 0x0A60(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              FrontOverlayAdditive;                                    // 0x0A68(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UButton*                                             GoToGovernance;                                          // 0x0A70(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UButton*                                             GoToTribeLog;                                            // 0x0A78(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UComboBoxString*                                     GroupRankComboBox;                                       // 0x0A80(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UEditableTextBox*                                    GroupRankSettingMaxBanishmentGroupRankEditBox;           // 0x0A88(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UEditableTextBox*                                    GroupRankSettingsActivationRankEditBox;                  // 0x0A90(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           GroupRankSettingsAllowBanishmentsCheckbox;               // 0x0A98(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           GroupRankSettingsAllowDemotionsCheckbox;                 // 0x0AA0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           GroupRankSettingsAllowInvitesCheckbox;                   // 0x0AA8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           GroupRankSettingsAllowPromotionsCheckbox;                // 0x0AB0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UEditableTextBox*                                    GroupRankSettingsDefaultActivationRankEditBox;           // 0x0AB8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UEditableTextBox*                                    GroupRankSettingsDefaultInventoryRankEditBox;            // 0x0AC0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           GroupRankSettingsDefaultRankCheckbox;                    // 0x0AC8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UEditableTextBox*                                    GroupRankSettingsGroupRankEditBox;                       // 0x0AD0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UEditableTextBox*                                    GroupRankSettingsInventoryRankEditBox;                   // 0x0AD8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UEditableTextBox*                                    GroupRankSettingsInviteToGroupRankEditBox;               // 0x0AE0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           GroupRankSettingsLimitInvitesCheckbox;                   // 0x0AE8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UEditableTextBox*                                    GroupRankSettingsMaxDemotionGroupRankEditBox;            // 0x0AF0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UEditableTextBox*                                    GroupRankSettingsMaxPromotionGroupRankEditBox;           // 0x0AF8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UEditableTextBox*                                    GroupRankSettingsNameEditBox;                            // 0x0B00(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UEditableTextBox*                                    GroupRankSettingsNumInvitesRemainingEditBox;             // 0x0B08(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UEditableTextBox*                                    GroupRankSettingsPetOrderRankEditBox;                    // 0x0B10(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UEditableTextBox*                                    GroupRankSettingsPetRidingRankEditBox;                   // 0x0B18(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           GroupRankSettingsPetUnclaimCheckbox;                     // 0x0B20(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           GroupRankSettingsStructureAttachmentCheckbox;            // 0x0B28(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           GroupRankSettingsStructureBuildInRangeCheckbox;          // 0x0B30(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           GroupRankSettingsStructureDemolishCheckbox;              // 0x0B38(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UEditableTextBox*                                    GroupRankSettingsTeleportDinosRankEditBox;               // 0x0B40(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UEditableTextBox*                                    GroupRankSettingsTeleportMembersRankEditBox;             // 0x0B48(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              IconImage;                                               // 0x0B50(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_1175;                                              // 0x0B58(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_1278;                                              // 0x0B60(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_1296;                                              // 0x0B68(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_1297;                                              // 0x0B70(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_1298;                                              // 0x0B78(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_1299;                                              // 0x0B80(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_146;                                               // 0x0B88(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_152;                                               // 0x0B90(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_155;                                               // 0x0B98(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_1551;                                              // 0x0BA0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_1552;                                              // 0x0BA8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_1553;                                              // 0x0BB0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_1554;                                              // 0x0BB8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_1556;                                              // 0x0BC0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_165;                                               // 0x0BC8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_1677;                                              // 0x0BD0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_1678;                                              // 0x0BD8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_176;                                               // 0x0BE0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_2493;                                              // 0x0BE8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_2494;                                              // 0x0BF0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_2495;                                              // 0x0BF8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_2496;                                              // 0x0C00(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_2516;                                              // 0x0C08(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_2517;                                              // 0x0C10(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_3176;                                              // 0x0C18(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_3177;                                              // 0x0C20(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_3178;                                              // 0x0C28(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_3179;                                              // 0x0C30(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_352;                                               // 0x0C38(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_353;                                               // 0x0C40(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_43;                                                // 0x0C48(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_553;                                               // 0x0C50(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_554;                                               // 0x0C58(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_724;                                               // 0x0C60(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_725;                                               // 0x0C68(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_952;                                               // 0x0C70(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_953;                                               // 0x0C78(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 LeaveAllianceButton;                                     // 0x0C80(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 LeaveTribeButton;                                        // 0x0C88(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UProgressBar*                                        OnlineMembersBar;                                        // 0x0C90(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 PromoteAllianceMemberButton;                             // 0x0C98(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 RejectWarButton;                                         // 0x0CA0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 RemoveAllianceMemberButton;                              // 0x0CA8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 RemovePlayerFromTribeButton;                             // 0x0CB0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 RenameAllianceButton;                                    // 0x0CB8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 RenameGroupRankButton;                                   // 0x0CC0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 RenameTribeButton;                                       // 0x0CC8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 ReverseLogOrderButton;                                   // 0x0CD0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 SetTribeGovernmentButton;                                // 0x0CD8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 ShowAlliancesButton;                                     // 0x0CE0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 ShowGroupRanksButton;                                    // 0x0CE8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UWidgetSwitcher*                                     TabBgSwitcher;                                           // 0x0CF0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              TabSplitImgPlayer;                                       // 0x0CF8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              TabSplitImgRemote;                                       // 0x0D00(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTextBlock*                                          TextBlock_799;                                           // 0x0D08(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 ToggleOnlineButton;                                      // 0x0D10(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 TribeDemoteButton;                                       // 0x0D18(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UEditableTextBox*                                    TribeNameEditBox;                                        // 0x0D20(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 TribePromoteButton;                                      // 0x0D28(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 TribeTransferOwnershipButton;                            // 0x0D30(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ExecuteUbergraph_TribeManagerUI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
