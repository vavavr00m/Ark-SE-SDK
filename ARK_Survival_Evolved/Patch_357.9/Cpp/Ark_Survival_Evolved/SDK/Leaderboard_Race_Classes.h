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
	 * BlueprintGeneratedClass Leaderboard_Race.Leaderboard_Race_C
	 * Size -> 0x001C (FullSize[0x0074] - InheritedSize[0x0058])
	 */
	class ULeaderboard_Race_C : public ULeaderboard
	{
	public:
		class UTexture2D*                                          GoldIcon;                                                // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UTexture2D*                                          SilverIcon;                                              // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		class UTexture2D*                                          BronzeIcon;                                              // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		int32_t                                                    MaxPlayerNameCharacterCount;                             // 0x0070(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		struct FLeaderboardDisplayRow BPFormatLeaderboardRow(const class FName& MissionTag, int32_t index, struct FLeaderboardRow* DatabaseRow);
		void SelectIcon(int32_t Place, class UTexture2D** Icon);
		void ExecuteUbergraph_Leaderboard_Race(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
