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
	 * WidgetBlueprintGeneratedClass DataListEntryWidgetGeneric_ExplorerNote.DataListEntryWidgetGeneric_ExplorerNote_C
	 * Size -> 0x0008 (FullSize[0x02F8] - InheritedSize[0x02F0])
	 */
	class UDataListEntryWidgetGeneric_ExplorerNote_C : public UDataListEntryWidget
	{
	public:
		class UDataListEntryButton*                                MyDataListButton;                                        // 0x02F0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ExecuteUbergraph_DataListEntryWidgetGeneric_ExplorerNote(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
