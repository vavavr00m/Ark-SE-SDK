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
	 * WidgetBlueprintGeneratedClass DataListEntryWidgetPrimalItem_SlotBar.DataListEntryWidgetPrimalItem_SlotBar_C
	 * Size -> 0x0008 (FullSize[0x0308] - InheritedSize[0x0300])
	 */
	class UDataListEntryWidgetPrimalItem_SlotBar_C : public UDataListEntryWidgetPrimalItem_C
	{
	public:
		class UDataListEntryButton_PrimalItem*                     TheDataListButton;                                       // 0x0300(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ExecuteUbergraph_DataListEntryWidgetPrimalItem_SlotBar(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
