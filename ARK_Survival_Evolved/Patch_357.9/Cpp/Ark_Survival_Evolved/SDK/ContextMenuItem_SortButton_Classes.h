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
	 * WidgetBlueprintGeneratedClass ContextMenuItem_SortButton.ContextMenuItem_SortButton_C
	 * Size -> 0x0030 (FullSize[0x0388] - InheritedSize[0x0358])
	 */
	class UContextMenuItem_SortButton_C : public UContextMenuItem_Sort
	{
	public:
		class UImage*                                              asc;                                                     // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 Button;                                                  // 0x0360(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCheckBox*                                           CheckBox;                                                // 0x0368(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Desc;                                                    // 0x0370(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UInputKeyDisplayWidget*                              ShortcutKey;                                             // 0x0378(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UWidgetSwitcher*                                     SortDir;                                                 // 0x0380(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ExecuteUbergraph_ContextMenuItem_SortButton(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
