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
	 * WidgetBlueprintGeneratedClass GamepadButtonLegend.GamepadButtonLegend_C
	 * Size -> 0x0008 (FullSize[0x0288] - InheritedSize[0x0280])
	 */
	class UGamepadButtonLegend_C : public UGamepadButtonLegendWidget
	{
	public:
		class UImage*                                              ButtonImage;                                             // 0x0280(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ExecuteUbergraph_GamepadButtonLegend(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
