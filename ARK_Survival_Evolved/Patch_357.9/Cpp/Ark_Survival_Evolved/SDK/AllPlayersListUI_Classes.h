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
	 * WidgetBlueprintGeneratedClass AllPlayersListUI.AllPlayersListUI_C
	 * Size -> 0x0050 (FullSize[0x05F8] - InheritedSize[0x05A8])
	 */
	class UAllPlayersListUI_C : public UUI_AllPlayersList
	{
	public:
		class UImage*                                              FrontOverlayAdditive;                                    // 0x05A8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_1;                                                 // 0x05B0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_1110;                                              // 0x05B8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_1179;                                              // 0x05C0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_93;                                                // 0x05C8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UEditableTextBox*                                    PlayerNameFilter;                                        // 0x05D0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 SelectBtn;                                               // 0x05D8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 SortByPlayerNameButton;                                  // 0x05E0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 SortByTribeNameButton;                                   // 0x05E8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UEditableTextBox*                                    TribeNameFilter;                                         // 0x05F0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ExecuteUbergraph_AllPlayersListUI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
