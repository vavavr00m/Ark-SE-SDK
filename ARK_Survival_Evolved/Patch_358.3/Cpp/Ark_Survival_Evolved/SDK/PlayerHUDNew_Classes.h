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
	 * WidgetBlueprintGeneratedClass PlayerHUDNew.PlayerHUDNew_C
	 * Size -> 0x0051 (FullSize[0x06D9] - InheritedSize[0x0688])
	 */
	class UPlayerHUDNew_C : public UPlayerHUDUI
	{
	public:
		class UWidgetAnimation*                                    GamepadActiveToAlt;                                      // 0x0688(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UWidgetAnimation*                                    GamepadActiveToNormal;                                   // 0x0690(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UDataListEntryWidgetPrimalItem_CraftingPlayerHUD_C*  CraftingButton;                                          // 0x0698(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UElementStatusBarWidget_C*                           ElementBar;                                              // 0x06A0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UProgressBarWidget*                                  ExtraBrogress;                                           // 0x06A8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              GamepadActiveBackground;                                 // 0x06B0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCanvasPanel*                                        MainCanvas;                                              // 0x06B8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UPlayerHUDStatusBarsWidget_C*                        PrimaryStatusBars;                                       // 0x06C0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UDinoHUDStatusBarsWidget_C*                          SecondaryStatusBars;                                     // 0x06C8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCanvasPanel*                                        TextOverlayContainer;                                    // 0x06D0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       K2Node_Event_IsHidden;                                   // 0x06D8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor

	public:
		void SetElementBarBoostIconHidden(bool isHidden);
		void ExecuteUbergraph_PlayerHUDNew(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
