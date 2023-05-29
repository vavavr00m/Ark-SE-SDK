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
	 * WidgetBlueprintGeneratedClass ToolTipWidgetPrimalStructure_Module_ItemsToDisplay.ToolTipWidgetPrimalStructure_Module_ItemsToDisplay_C
	 * Size -> 0x0010 (FullSize[0x0268] - InheritedSize[0x0258])
	 */
	class UToolTipWidgetPrimalStructure_Module_ItemsToDisplay_C : public UToolTipWidgetPrimalStructureModuleItemsToDisplay
	{
	public:
		class UTextBlock*                                          HeaderTextBlock;                                         // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UScrollBox*                                          ItemsToDisplayContainer;                                 // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ExecuteUbergraph_ToolTipWidgetPrimalStructure_Module_ItemsToDisplay(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
