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
	 * WidgetBlueprintGeneratedClass HUDActiveMissionDisplayWidget.HUDActiveMissionDisplayWidget_C
	 * Size -> 0x0098 (FullSize[0x09B0] - InheritedSize[0x0918])
	 */
	class UHUDActiveMissionDisplayWidget_C : public UHUDActiveMissionWidget
	{
	public:
		class UTextBlock*                                          BestTimeNumberText;                                      // 0x0918(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UVerticalBox*                                        EffectsPanel;                                            // 0x0920(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UVerticalBox*                                        InnerMissionContainer;                                   // 0x0928(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UVerticalBox*                                        MissionAlertEntryContainer;                              // 0x0930(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UBorder*                                             MissionAlertFlyoutContainer;                             // 0x0938(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTextBlock*                                          MissionAlertHeader;                                      // 0x0940(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTextBlock*                                          MissionDescriptionTextBlock;                             // 0x0948(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UBorder*                                             MissionDifficultyPanel;                                  // 0x0950(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTextBlock*                                          MissionDifficultyTextBlock;                              // 0x0958(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTextBlock*                                          MissionNameTextBlock;                                    // 0x0960(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class USizeBox*                                            MissionRootContainer;                                    // 0x0968(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UVerticalBox*                                        MissionStatTrackerContainer;                             // 0x0970(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTextBlock*                                          MissionTimeValueTextBlock;                               // 0x0978(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UHUDActiveMissionPhaseRequirementWidget_C*           ObjectiveTimePhaseRequirementWidget;                     // 0x0980(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UVerticalBox*                                        PhaseRequirementContainer;                               // 0x0988(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UHUDActiveMissionPhaseRequirementWidget_C*           RacePhaseRequirementWidget;                              // 0x0990(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UVerticalBox*                                        TopMissionAlertEntryContainer;                           // 0x0998(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTextBlock*                                          TopMissionAlertTitleTextBlock;                           // 0x09A0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTextBlock*                                          WorldEffectsLabel;                                       // 0x09A8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ExecuteUbergraph_HUDActiveMissionDisplayWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
