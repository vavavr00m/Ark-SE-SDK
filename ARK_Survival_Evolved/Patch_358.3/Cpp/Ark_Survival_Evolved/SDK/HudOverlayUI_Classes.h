#pragma once

/**
 * Name: Ark_Survival_Evolved
 * Version: Patch_358.3
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
	 * WidgetBlueprintGeneratedClass HudOverlayUI.HudOverlayUI_C
	 * Size -> 0x0008 (FullSize[0x0540] - InheritedSize[0x0538])
	 */
	class UHudOverlayUI_C : public UUI_HudOverlay
	{
	public:
		class UHUDOVerlayWidget*                                   HudOverlay;                                              // 0x0538(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ExecuteUbergraph_HudOverlayUI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
