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
	 * WidgetBlueprintGeneratedClass DataListEntryWidgetFolder.DataListEntryWidgetFolder_C
	 * Size -> 0x0010 (FullSize[0x0310] - InheritedSize[0x0300])
	 */
	class UDataListEntryWidgetFolder_C : public UDataListEntryWidgetPrimalItem_C
	{
	public:
		class UMenuAnchor*                                         CtxMenu;                                                 // 0x0300(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UDataListEntryButton_PrimalFolder*                   DataListEntryButton_PrimalFolder_1;                      // 0x0308(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ExecuteUbergraph_DataListEntryWidgetFolder(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
