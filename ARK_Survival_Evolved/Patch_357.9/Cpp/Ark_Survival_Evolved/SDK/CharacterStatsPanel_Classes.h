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
	 * WidgetBlueprintGeneratedClass CharacterStatsPanel.CharacterStatsPanel_C
	 * Size -> 0x0128 (FullSize[0x0C68] - InheritedSize[0x0B40])
	 */
	class UCharacterStatsPanel_C : public UStatsPanelWidget_Character
	{
	public:
		class UStatWidget_C*                                       CraftingSpeedStat;                                       // 0x0B40(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UDataListEntryWidgetPrimalItem_StatEquipped_C*       DataListEntryWidgetPrimalItem_StatEquipped_C_1;          // 0x0B48(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UDataListEntryWidgetPrimalItem_StatEquipped_C*       DataListEntryWidgetPrimalItem_StatEquipped_C_2;          // 0x0B50(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UDataListEntryWidgetPrimalItem_StatEquipped_C*       DataListEntryWidgetPrimalItem_StatEquipped_C_3;          // 0x0B58(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UDataListEntryWidgetPrimalItem_StatEquipped_C*       DataListEntryWidgetPrimalItem_StatEquipped_C_4;          // 0x0B60(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UDataListEntryWidgetPrimalItem_StatEquipped_C*       DataListEntryWidgetPrimalItem_StatEquipped_C_5;          // 0x0B68(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UDataListEntryWidgetPrimalItem_StatEquipped_C*       DataListEntryWidgetPrimalItem_StatEquipped_C_6;          // 0x0B70(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UDataListEntryWidgetPrimalItem_StatEquipped_C*       DataListEntryWidgetPrimalItem_StatEquipped_C_7;          // 0x0B78(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UDataListEntryWidgetPrimalItem_StatEquipped_C*       DataListEntryWidgetPrimalItem_StatEquipped_C_8;          // 0x0B80(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UDataListEntryWidgetPrimalItem_StatEquipped_C*       DataListEntryWidgetPrimalItem_StatEquipped_C_9;          // 0x0B88(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UProgressBar*                                        ExperienceBar;                                           // 0x0B90(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Female;                                                  // 0x0B98(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStatWidget_C*                                       FoodStat;                                                // 0x0BA0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStatWidget_C*                                       FortitudeStat;                                           // 0x0BA8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UWidgetSwitcher*                                     GenderSwitcher;                                          // 0x0BB0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStatWidget_C*                                       HealthStat;                                              // 0x0BB8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_112;                                               // 0x0BC0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_127;                                               // 0x0BC8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_150;                                               // 0x0BD0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_173;                                               // 0x0BD8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_403;                                               // 0x0BE0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_7;                                                 // 0x0BE8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_8;                                                 // 0x0BF0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStructureStatWidget_C*                              ImprintingStat;                                          // 0x0BF8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              male;                                                    // 0x0C00(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStatWidget_C*                                       MeleeDamageStat;                                         // 0x0C08(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStatWidget_C*                                       MovementSpeedStat;                                       // 0x0C10(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 MultiUseButton1;                                         // 0x0C18(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 MultiUseButton2;                                         // 0x0C20(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 MultiUseButton3;                                         // 0x0C28(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              MutagenIcon;                                             // 0x0C30(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStatWidget_C*                                       OxygenStat;                                              // 0x0C38(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 ShowAncestorsButton;                                     // 0x0C40(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStatWidget_C*                                       StaminaStat;                                             // 0x0C48(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStatWidget_C*                                       TorpidityStat;                                           // 0x0C50(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStatWidget_C*                                       WaterStat;                                               // 0x0C58(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStatWidget_C*                                       WeightStat;                                              // 0x0C60(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ExecuteUbergraph_CharacterStatsPanel(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
