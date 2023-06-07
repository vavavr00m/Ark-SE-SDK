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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function MissionRace_Interface.MissionRace_Interface_C.GetPlayerRanking
	 */
	struct UMissionRace_Interface_C_GetPlayerRanking_Params
	{
	public:
		int32_t                                                    PlayerIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    Ranking;                                                 // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MissionRace_Interface.MissionRace_Interface_C.GetRaceData
	 */
	struct UMissionRace_Interface_C_GetRaceData_Params
	{
	public:
		TArray<struct FRacePlayerData>                             RaceData;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
