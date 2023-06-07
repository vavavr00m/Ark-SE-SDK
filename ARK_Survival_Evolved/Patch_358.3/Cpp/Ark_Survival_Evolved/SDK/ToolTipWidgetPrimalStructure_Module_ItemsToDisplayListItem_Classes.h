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
	 * WidgetBlueprintGeneratedClass ToolTipWidgetPrimalStructure_Module_ItemsToDisplayListItem.ToolTipWidgetPrimalStructure_Module_ItemsToDisplayListItem_C
	 * Size -> 0x0010 (FullSize[0x0260] - InheritedSize[0x0250])
	 */
	class UToolTipWidgetPrimalStructure_Module_ItemsToDisplayListItem_C : public UToolTipWidgetPrimalStructureModuleItemsToDisplayListItem
	{
	public:
		class UImage*                                              ItemIconImage;                                           // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTextBlock*                                          ItemQuantityTextBlock;                                   // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ExecuteUbergraph_ToolTipWidgetPrimalStructure_Module_ItemsToDisplayListItem(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
