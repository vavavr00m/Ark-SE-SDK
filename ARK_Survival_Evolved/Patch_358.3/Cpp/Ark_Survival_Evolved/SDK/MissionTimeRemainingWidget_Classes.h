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
	 * WidgetBlueprintGeneratedClass MissionTimeRemainingWidget.MissionTimeRemainingWidget_C
	 * Size -> 0x0018 (FullSize[0x0268] - InheritedSize[0x0250])
	 */
	class UMissionTimeRemainingWidget_C : public UMissionTimerWidget
	{
	public:
		class UProgressBar*                                        TimeRemainingProgressBar;                                // 0x0250(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTextBlock*                                          TimeRemainingText;                                       // 0x0258(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UTextBlock*                                          TimerLabelText;                                          // 0x0260(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ExecuteUbergraph_MissionTimeRemainingWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
