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
	 * WidgetBlueprintGeneratedClass ChatBoxUI.ChatBoxUI_C
	 * Size -> 0x0008 (FullSize[0x05D8] - InheritedSize[0x05D0])
	 */
	class UChatBoxUI_C : public UUI_ChatBox
	{
	public:
		class UEditableTextBox*                                    EditTextBox;                                             // 0x05D0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ExecuteUbergraph_ChatBoxUI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
