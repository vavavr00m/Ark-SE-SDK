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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function Leaderboard_Race.Leaderboard_Race_C.BPFormatLeaderboardRow
	 */
	struct ULeaderboard_Race_C_BPFormatLeaderboardRow_Params
	{
	public:
		class FName                                                MissionTag;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    index;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4I30[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLeaderboardRow                                     DatabaseRow;                                             // 0x0010(0x0048)  (Parm, OutParm, ReferenceParm)
		struct FLeaderboardDisplayRow                              ReturnValue;                                             // 0x0058(0x0020)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Leaderboard_Race.Leaderboard_Race_C.SelectIcon
	 */
	struct ULeaderboard_Race_C_SelectIcon_Params
	{
	public:
		int32_t                                                    Place;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1FM3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture2D*                                          Icon;                                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Leaderboard_Race.Leaderboard_Race_C.ExecuteUbergraph_Leaderboard_Race
	 */
	struct ULeaderboard_Race_C_ExecuteUbergraph_Leaderboard_Race_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
