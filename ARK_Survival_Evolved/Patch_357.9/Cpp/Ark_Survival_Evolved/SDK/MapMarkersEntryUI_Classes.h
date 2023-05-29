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
	 * WidgetBlueprintGeneratedClass MapMarkersEntryUI.MapMarkersEntryUI_C
	 * Size -> 0x0088 (FullSize[0x0748] - InheritedSize[0x06C0])
	 */
	class UMapMarkersEntryUI_C : public UUI_MapMarkersEntry
	{
	public:
		class UCustomButtonWidget*                                 AcceptButton;                                            // 0x06C0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UButton*                                             AddMarker;                                               // 0x06C8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 CloseButton;                                             // 0x06D0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UEditableTextBox*                                    coord1;                                                  // 0x06D8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UEditableTextBox*                                    coord2;                                                  // 0x06E0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              FrontOverlayAdditive;                                    // 0x06E8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_1;                                                 // 0x06F0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_152;                                               // 0x06F8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_43;                                                // 0x0700(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UEditableTextBox*                                    MarkerName;                                              // 0x0708(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USlider*                                             PinColorSlider;                                          // 0x0710(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 RemoveAccept;                                            // 0x0718(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 RemoveClose;                                             // 0x0720(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UButton*                                             RemoveMarker;                                            // 0x0728(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UWidgetSwitcher*                                     TabBgSwitcher;                                           // 0x0730(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              TabSplitImgPlayer;                                       // 0x0738(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              TabSplitImgRemote;                                       // 0x0740(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ExecuteUbergraph_MapMarkersEntryUI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
