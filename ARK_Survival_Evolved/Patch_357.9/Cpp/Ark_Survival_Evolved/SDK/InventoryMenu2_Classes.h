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
	 * WidgetBlueprintGeneratedClass InventoryMenu2.InventoryMenu2_C
	 * Size -> 0x0050 (FullSize[0x0900] - InheritedSize[0x08B0])
	 */
	class UInventoryMenu2_C : public UUI_Inventory
	{
	public:
		class UWidgetAnimation*                                    HideEngrams;                                             // 0x08B0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UWidgetAnimation*                                    OpenEngrams;                                             // 0x08B8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UWidgetAnimation*                                    Close;                                                   // 0x08C0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UWidgetAnimation*                                    Open;                                                    // 0x08C8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCharacterViewPanel_C*                               CharacterViewPanel;                                      // 0x08D0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UDinoAncestryOverlay_C*                              DinoAncestryOverlay;                                     // 0x08D8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UInventoryPanel_C*                                   PlayerInventoryPanel;                                    // 0x08E0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UInventoryPanel_C*                                   RemoteInventoryPanel;                                    // 0x08E8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UStatsPanel_C*                                       StatsPanel;                                              // 0x08F0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UWidgetSwitcher*                                     WidgetSwitcherRight;                                     // 0x08F8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ExecuteUbergraph_InventoryMenu2(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
