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
	 * Function MissionTypeBlueprintBase.MissionTypeBlueprintBase_C.PlaySoundForPlayersOnMission
	 */
	struct AMissionTypeBlueprintBase_C_PlaySoundForPlayersOnMission_Params
	{
	public:
		class USoundBase*                                          Sound;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MissionTypeBlueprintBase.MissionTypeBlueprintBase_C.BPStaticIsPlayerEligibleForMission
	 */
	struct AMissionTypeBlueprintBase_C_BPStaticIsPlayerEligibleForMission_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AShooterCharacter*                                   PlayerPawn;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APrimalBuff_MissionData*                             PlayerMissionData;                                       // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              OutReason;                                               // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_272X[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MissionTypeBlueprintBase.MissionTypeBlueprintBase_C.BPGetMetaTagsAsInts
	 */
	struct AMissionTypeBlueprintBase_C_BPGetMetaTagsAsInts_Params
	{
	public:
		TArray<int32_t>                                            OutTagIds;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function MissionTypeBlueprintBase.MissionTypeBlueprintBase_C.UserConstructionScript
	 */
	struct AMissionTypeBlueprintBase_C_UserConstructionScript_Params
	{	};

	/**
	 * Function MissionTypeBlueprintBase.MissionTypeBlueprintBase_C.OnMissionPhaseStarted
	 */
	struct AMissionTypeBlueprintBase_C_OnMissionPhaseStarted_Params
	{
	public:
		class FName                                                OldPhase;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                NewPhase;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MissionTypeBlueprintBase.MissionTypeBlueprintBase_C.BPOnMissionDeactivated
	 */
	struct AMissionTypeBlueprintBase_C_BPOnMissionDeactivated_Params
	{	};

	/**
	 * Function MissionTypeBlueprintBase.MissionTypeBlueprintBase_C.ExecuteUbergraph_MissionTypeBlueprintBase
	 */
	struct AMissionTypeBlueprintBase_C_ExecuteUbergraph_MissionTypeBlueprintBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
