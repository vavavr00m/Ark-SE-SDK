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
	 * WidgetBlueprintGeneratedClass CharacterViewPanel.CharacterViewPanel_C
	 * Size -> 0x0008 (FullSize[0x0270] - InheritedSize[0x0268])
	 */
	class UCharacterViewPanel_C : public UCharacterViewPanelWidget
	{
	public:
		class UUI_PreviewWidget*                                   UI_PreviewWidget;                                        // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ExecuteUbergraph_CharacterViewPanel(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
