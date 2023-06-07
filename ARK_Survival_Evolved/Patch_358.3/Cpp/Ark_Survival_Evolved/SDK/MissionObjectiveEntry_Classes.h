﻿#pragma once

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
	 * WidgetBlueprintGeneratedClass MissionObjectiveEntry.MissionObjectiveEntry_C
	 * Size -> 0x0010 (FullSize[0x0278] - InheritedSize[0x0268])
	 */
	class UMissionObjectiveEntry_C : public UMissionObjectiveEntryWidget
	{
	public:
		class UImage*                                              MissionObjectiveCompletionIcon;                          // 0x0268(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		class UProgressBar*                                        MissionObjectiveProgressBar;                             // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ExecuteUbergraph_MissionObjectiveEntry(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
