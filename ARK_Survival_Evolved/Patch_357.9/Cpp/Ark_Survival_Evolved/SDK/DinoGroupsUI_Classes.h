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
	 * WidgetBlueprintGeneratedClass DinoGroupsUI.DinoGroupsUI_C
	 * Size -> 0x00C0 (FullSize[0x06D0] - InheritedSize[0x0610])
	 */
	class UDinoGroupsUI_C : public UUI_DinoOrderGroups
	{
	public:
		class UImage*                                              ClassesBottomBorder;                                     // 0x0610(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              ClassesTopBorder;                                        // 0x0618(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UProgressBar*                                        ClassSizeBar;                                            // 0x0620(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 ClearGroupButton;                                        // 0x0628(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 ClearGroupCharsButton;                                   // 0x0630(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 ClearGroupClassButton;                                   // 0x0638(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              CreatureBottomBorder;                                    // 0x0640(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              CreatureTopBorder;                                       // 0x0648(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              DropAllIcon;                                             // 0x0650(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UEditableTextBox*                                    GroupNameEditBox;                                        // 0x0658(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UProgressBar*                                        GroupSizeBar;                                            // 0x0660(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              IconImage;                                               // 0x0668(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_13392;                                             // 0x0670(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_142;                                               // 0x0678(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_308;                                               // 0x0680(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_450;                                               // 0x0688(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_578;                                               // 0x0690(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_5888;                                              // 0x0698(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 RemoveDinoCharButton;                                    // 0x06A0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 RemoveDinoClassButton;                                   // 0x06A8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 RenameGroupButton;                                       // 0x06B0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              SeparatorLineBottom;                                     // 0x06B8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              SeparatorLineTop;                                        // 0x06C0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 SetGroupButton;                                          // 0x06C8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ExecuteUbergraph_DinoGroupsUI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
