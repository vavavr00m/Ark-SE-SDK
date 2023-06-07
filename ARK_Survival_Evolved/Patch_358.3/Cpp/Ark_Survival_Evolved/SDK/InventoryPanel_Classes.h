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
	 * WidgetBlueprintGeneratedClass InventoryPanel.InventoryPanel_C
	 * Size -> 0x0158 (FullSize[0x08A8] - InheritedSize[0x0750])
	 */
	class UInventoryPanel_C : public UInventoryPanelWidget
	{
	public:
		class UArkCreaturesPanel_C*                                ArkCreaturesPanel;                                       // 0x0750(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 ClearCraftingQueueButton;                                // 0x0758(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              ClearCraftingQueueIcon;                                  // 0x0760(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UButton*                                             CraftingButton;                                          // 0x0768(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UDataListEntryWidgetPrimalItem_CraftQueue_C*         CraftingQueueItem1;                                      // 0x0770(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UDataListEntryWidgetPrimalItem_CraftQueue_C*         CraftingQueueItem2;                                      // 0x0778(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UDataListEntryWidgetPrimalItem_CraftQueue_C*         CraftingQueueItem3;                                      // 0x0780(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UDataListEntryWidgetPrimalItem_CraftQueue_C*         CraftingQueueItem4;                                      // 0x0788(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UDataListEntryWidgetPrimalItem_CraftQueue_C*         CraftingQueueItem5;                                      // 0x0790(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UDataListEntryWidgetPrimalItem_CraftQueue_C*         CraftingQueueItem6;                                      // 0x0798(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UButton*                                             CreaturesButton;                                         // 0x07A0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UWidgetSwitcher*                                     DataListSwitcher;                                        // 0x07A8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 DropAllButton;                                           // 0x07B0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              DropAllIcon;                                             // 0x07B8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_1;                                                 // 0x07C0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_152;                                               // 0x07C8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_162;                                               // 0x07D0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_4;                                                 // 0x07D8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_43;                                                // 0x07E0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_985;                                               // 0x07E8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UButton*                                             InventoryButton;                                         // 0x07F0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              MaxInventoryImage;                                       // 0x07F8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 NewFolderButton;                                         // 0x0800(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              NewFolderIcon;                                           // 0x0808(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UEditableTextBox*                                    SearchTextBox;                                           // 0x0810(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              SeparatorLineBottom;                                     // 0x0818(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              SeparatorLineTop;                                        // 0x0820(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 ShowAllButton;                                           // 0x0828(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              ShowAllIcon;                                             // 0x0830(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 ShowEngramsButton;                                       // 0x0838(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 ShowUnlearnedEngramsButton;                              // 0x0840(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UMenuAnchor*                                         SortMenuAnchor;                                          // 0x0848(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 SortMenuButton;                                          // 0x0850(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              SortMenuIcon;                                            // 0x0858(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Tab3_Crafting;                                           // 0x0860(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Tab3_Creatures;                                          // 0x0868(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Tab3_Inventory;                                          // 0x0870(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UWidgetSwitcher*                                     TabBgSwitcher;                                           // 0x0878(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              TabSplitImgCrafting;                                     // 0x0880(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              TabSplitImgInventory;                                    // 0x0888(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 ToggleTooltipButton;                                     // 0x0890(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 TransferAllButton;                                       // 0x0898(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              TransferAllIcon;                                         // 0x08A0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ExecuteUbergraph_InventoryPanel(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
