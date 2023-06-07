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
	 * WidgetBlueprintGeneratedClass Hub.Hub_C
	 * Size -> 0x0110 (FullSize[0x0840] - InheritedSize[0x0730])
	 */
	class UHub_C : public UUI_Hub
	{
	public:
		class UWidgetAnimation*                                    ExtraClose;                                              // 0x0730(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UWidgetAnimation*                                    ExtraOpen;                                               // 0x0738(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UWidgetAnimation*                                    Close;                                                   // 0x0740(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UWidgetAnimation*                                    Open;                                                    // 0x0748(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 CloseHubButton;                                          // 0x0750(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 EngramsMenuButton;                                       // 0x0758(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UGamepadButtonLegend_C*                              GamepadButtonLegend_FaceBottom;                          // 0x0760(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UGamepadButtonLegend_Left_C*                         GamepadButtonLegend_FaceLeft;                            // 0x0768(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UGamepadButtonLegend_C*                              GamepadButtonLegend_FaceRight;                           // 0x0770(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UGamepadButtonLegend_Left_C*                         GamepadButtonLegend_FaceTop;                             // 0x0778(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UGamepadButtonLegend_Left_C*                         GamepadButtonLegend_LeftShoulder;                        // 0x0780(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UGamepadButtonLegend_C*                              GamepadButtonLegend_LeftStick;                           // 0x0788(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UGamepadButtonLegend_Left_C*                         GamepadButtonLegend_LeftTrigger;                         // 0x0790(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UGamepadButtonLegend_C*                              GamepadButtonLegend_RightStick;                          // 0x0798(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UGamepadButtonLegend_Left_C*                         GamepadButtonLegend_RightTrigger;                        // 0x07A0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UGamepadButtonLegend_C*                              GamepadButtonLegend_Start;                               // 0x07A8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              GamepadIcon_NextMenu;                                    // 0x07B0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              GamepadIcon_PrevMenu;                                    // 0x07B8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_367;                                               // 0x07C0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_462;                                               // 0x07C8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_517;                                               // 0x07D0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_55;                                                // 0x07D8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_56;                                                // 0x07E0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_57;                                                // 0x07E8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_59;                                                // 0x07F0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_66;                                                // 0x07F8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UImage*                                              Image_93;                                                // 0x0800(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 InventoryMenuButton;                                     // 0x0808(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 MissionListMenuButton;                                   // 0x0810(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UWidgetSwitcher*                                     SubMenuSwitcher;                                         // 0x0818(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 SurvivorProfileMenuButton;                               // 0x0820(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 TameGroupsMenuButton;                                    // 0x0828(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 TamingListMenuButton;                                    // 0x0830(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UCustomButtonWidget*                                 TribeManagerMenuButton;                                  // 0x0838(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ExecuteUbergraph_Hub(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
