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
	 * Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.OnUnlockedExplorerNote
	 */
	struct AMissionType_GlitchCounter_Base_C_OnUnlockedExplorerNote_Params
	{	};

	/**
	 * Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.GetCompletedGlitchCount
	 */
	struct AMissionType_GlitchCounter_Base_C_GetCompletedGlitchCount_Params
	{
	public:
		class AShooterCharacter*                                   Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    CountCompleted;                                          // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.StaticOnReplicatedMissionDataUpdated
	 */
	struct AMissionType_GlitchCounter_Base_C_StaticOnReplicatedMissionDataUpdated_Params
	{
	public:
		class APrimalBuff_MissionData*                             missionData;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.StaticOnMissionDataInitialized
	 */
	struct AMissionType_GlitchCounter_Base_C_StaticOnMissionDataInitialized_Params
	{
	public:
		class APrimalBuff_MissionData*                             missionData;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.GetMissionDisplayName
	 */
	struct AMissionType_GlitchCounter_Base_C_GetMissionDisplayName_Params
	{
	public:
		class APlayerController*                                   ShootCont;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.GetNumGlitchesCompleted
	 */
	struct AMissionType_GlitchCounter_Base_C_GetNumGlitchesCompleted_Params
	{
	public:
		class AShooterCharacter*                                   ShooterCharacter;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ret;                                                     // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.GetIntFromMissionType
	 */
	struct AMissionType_GlitchCounter_Base_C_GetIntFromMissionType_Params
	{
	public:
		class FName                                                Tag;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AShooterCharacter*                                   PlayerPawn;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.IsMissionComplete
	 */
	struct AMissionType_GlitchCounter_Base_C_IsMissionComplete_Params
	{
	public:
		class AShooterCharacter*                                   forCharacter;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AShooterPlayerController*                            ForController;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6XOL[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.UserConstructionScript
	 */
	struct AMissionType_GlitchCounter_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function MissionType_GlitchCounter_Base.MissionType_GlitchCounter_Base_C.ExecuteUbergraph_MissionType_GlitchCounter_Base
	 */
	struct AMissionType_GlitchCounter_Base_C_ExecuteUbergraph_MissionType_GlitchCounter_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
