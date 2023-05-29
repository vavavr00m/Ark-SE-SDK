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
	 * WidgetBlueprintGeneratedClass LeaderboardRow_Race.LeaderboardRow_Race_C
	 * Size -> 0x0008 (FullSize[0x05E8] - InheritedSize[0x05E0])
	 */
	class ULeaderboardRow_Race_C : public ULeaderboardRowWidget
	{
	public:
		class UHorizontalBox*                                      ColumnContainerWidget;                                   // 0x05E0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void ExecuteUbergraph_LeaderboardRow_Race(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
