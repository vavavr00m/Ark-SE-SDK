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
	 * WidgetBlueprintGeneratedClass TamingListUI.TamingListUI_C
	 * Size -> 0x0028 (FullSize[0x0660] - InheritedSize[0x0638])
	 */
	class UTamingListUI_C : public UUI_TamingList
	{
	public:
		class UCustomButtonWidget*                                 ClearCompletedButton;                                    // 0x0638(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 HideTrackersButton;                                      // 0x0640(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UEditableTextBox*                                    SearchTextBox;                                           // 0x0648(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 TrackAllButton;                                          // 0x0650(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 UntrackAllButton;                                        // 0x0658(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ExecuteUbergraph_TamingListUI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
