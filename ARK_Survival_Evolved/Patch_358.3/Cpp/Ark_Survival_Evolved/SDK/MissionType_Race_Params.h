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
	 * Function MissionType_Race.MissionType_Race_C.GetRaceData
	 */
	struct AMissionType_Race_C_GetRaceData_Params
	{
	public:
		TArray<struct FRacePlayerData>                             RaceData;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.GetPlayerRanking
	 */
	struct AMissionType_Race_C_GetPlayerRanking_Params
	{
	public:
		int32_t                                                    PlayerIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    Ranking;                                                 // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.RaceSetupAfterDelay
	 */
	struct AMissionType_Race_C_RaceSetupAfterDelay_Params
	{	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.GetRaceShooterPCAndPawn
	 */
	struct AMissionType_Race_C_GetRaceShooterPCAndPawn_Params
	{
	public:
		class APrimalCharacter*                                    primalChar;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AShooterPlayerController*                            ShooterPC;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AShooterCharacter*                                   ShooterChar;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.TeleportPlayersToStartLine
	 */
	struct AMissionType_Race_C_TeleportPlayersToStartLine_Params
	{	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.OnResultOverlappedCheckpointFX
	 */
	struct AMissionType_Race_C_OnResultOverlappedCheckpointFX_Params
	{
	public:
		bool                                                       Overlapped;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_TZZC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterPlayerController*                            ForController;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.CheckOverlappedCheckpointFX
	 */
	struct AMissionType_Race_C_CheckOverlappedCheckpointFX_Params
	{
	public:
		class AShooterPlayerController*                            PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AMissionTrigger*                                     HitTrigger;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.AttemptReRideDinoOnDinoRespawn
	 */
	struct AMissionType_Race_C_AttemptReRideDinoOnDinoRespawn_Params
	{
	public:
		class AShooterCharacter*                                   Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.GetCheckpointToTeleportTo
	 */
	struct AMissionType_Race_C_GetCheckpointToTeleportTo_Params
	{
	public:
		int32_t                                                    PlayerIndex;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MW32[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AMissionTrigger*                                     Checkpoint;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.InitializeRaceData
	 */
	struct AMissionType_Race_C_InitializeRaceData_Params
	{	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.OnCheckpointIncremented
	 */
	struct AMissionType_Race_C_OnCheckpointIncremented_Params
	{
	public:
		class AShooterPlayerController*                            PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AMissionTrigger*                                     HitTrigger;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.GetSplineForOutOfBoundsCheckForPlayer
	 */
	struct AMissionType_Race_C_GetSplineForOutOfBoundsCheckForPlayer_Params
	{
	public:
		class AShooterCharacter*                                   ShooterChar;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AMissionSpline*                                      Spline;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.GetRaceActorsToUnhide
	 */
	struct AMissionType_Race_C_GetRaceActorsToUnhide_Params
	{
	public:
		TArray<class AActor*>                                      actors;                                                  // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.OnTeleportedCharInBounds
	 */
	struct AMissionType_Race_C_OnTeleportedCharInBounds_Params
	{
	public:
		class APrimalCharacter*                                    forChar;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.GetNearbyWaterLocation
	 */
	struct AMissionType_Race_C_GetNearbyWaterLocation_Params
	{
	public:
		struct FVector                                             StartLocation;                                           // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Forward;                                                 // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      OverrideZOffset;                                         // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             FinalLocation;                                           // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.Is Power Up Active for Player
	 */
	struct AMissionType_Race_C_IsPowerUpActiveforPlayer_Params
	{
	public:
		class AShooterPlayerController*                            SC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AMissionTrigger*                                     Powerup;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsValid;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KNV2[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.Handle Out Of Bounds
	 */
	struct AMissionType_Race_C_HandleOutOfBounds_Params
	{	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.TeleportPlayerAndDinoToCheckpoint
	 */
	struct AMissionType_Race_C_TeleportPlayerAndDinoToCheckpoint_Params
	{
	public:
		class APrimalDinoCharacter*                                Dino;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AShooterCharacter*                                   Player;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.SpawnDinoForPlayer
	 */
	struct AMissionType_Race_C_SpawnDinoForPlayer_Params
	{
	public:
		class AShooterCharacter*                                   Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APrimalDinoCharacter*                                SpawnedDino;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.Handle Player Time Outs
	 */
	struct AMissionType_Race_C_HandlePlayerTimeOuts_Params
	{	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.BPOverrideMissionTimerColor
	 */
	struct AMissionType_Race_C_BPOverrideMissionTimerColor_Params
	{
	public:
		class AShooterPlayerController*                            ShooterContr;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FLinearColor                                        DefaultColor;                                            // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FLinearColor                                        CurrentColor;                                            // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		struct FLinearColor                                        TimerOverrideColor;                                      // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.GetBestTimeForPlayer
	 */
	struct AMissionType_Race_C_GetBestTimeForPlayer_Params
	{
	public:
		class AShooterPlayerController*                            ShooterCont;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      BestValidTime;                                           // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.BPGetExtraLocalMissionIndicators
	 */
	struct AMissionType_Race_C_BPGetExtraLocalMissionIndicators_Params
	{
	public:
		class APlayerController*                                   Controller;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AShooterCharacter*                                   PlayerPawn;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMissionWorldIndicator>                      IndicatorsIn;                                            // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FMissionWorldIndicator>                      IndicatorsOut;                                           // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.GetBestTime
	 */
	struct AMissionType_Race_C_GetBestTime_Params
	{
	public:
		float                                                      BestTime;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FKWJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.NotifyAllTopPlayerFinish
	 */
	struct AMissionType_Race_C_NotifyAllTopPlayerFinish_Params
	{
	public:
		bool                                                       Finished;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BXXR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterCharacter*                                   Character;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.Play Leaderboard Reactions
	 */
	struct AMissionType_Race_C_PlayLeaderboardReactions_Params
	{
	public:
		float                                                      LeaderboardScoreFloat;                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HY7C[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterCharacter*                                   Player;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.On Player Got in Top 10 Of The Leaderboard
	 */
	struct AMissionType_Race_C_OnPlayerGotinTop10OfTheLeaderboard_Params
	{
	public:
		class AShooterCharacter*                                   Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.On Player Got First Place on the Leaderboard
	 */
	struct AMissionType_Race_C_OnPlayerGotFirstPlaceontheLeaderboard_Params
	{
	public:
		class AShooterCharacter*                                   Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.Play Encouragement Reactions
	 */
	struct AMissionType_Race_C_PlayEncouragementReactions_Params
	{	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.BPOnMissionPlayerLeftBounds
	 */
	struct AMissionType_Race_C_BPOnMissionPlayerLeftBounds_Params
	{	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.AddPowerTriggersFromLastCheckPointToIgnoreList
	 */
	struct AMissionType_Race_C_AddPowerTriggersFromLastCheckPointToIgnoreList_Params
	{
	public:
		class AShooterCharacter*                                   Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.AddTriggerToIgnoreList
	 */
	struct AMissionType_Race_C_AddTriggerToIgnoreList_Params
	{
	public:
		class AMissionTrigger*                                     Trigger;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AShooterCharacter*                                   Player;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.HasPlayerHitTrigger
	 */
	struct AMissionType_Race_C_HasPlayerHitTrigger_Params
	{
	public:
		class AShooterCharacter*                                   Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AMissionTrigger*                                     Trigger;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HasHitBefore;                                            // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_460Y[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.BPOnMissionPlayerRespawned
	 */
	struct AMissionType_Race_C_BPOnMissionPlayerRespawned_Params
	{
	public:
		class AShooterCharacter*                                   Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AShooterPlayerController*                            Controller;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.OnThrottledClientTick
	 */
	struct AMissionType_Race_C_OnThrottledClientTick_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.Play Reaction When Player Has Left Dino For Too Long
	 */
	struct AMissionType_Race_C_PlayReactionWhenPlayerHasLeftDinoForTooLong_Params
	{	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.GetSpawnPointsForStartingLine
	 */
	struct AMissionType_Race_C_GetSpawnPointsForStartingLine_Params
	{
	public:
		class AMissionServerSidePoint*                             MissionServerSidePoint;                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    NumberOfRacers;                                          // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GSKG[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class APrimalCharacter*                                    PrimalCharacterType;                                     // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FRotator                                            ForwardRot;                                              // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.Play Checkpoint Reaction
	 */
	struct AMissionType_Race_C_PlayCheckpointReaction_Params
	{
	public:
		bool                                                       FinalCheckpoint;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I16J[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AShooterCharacter*                                   Player;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.GeneratePerPlayerPhaseRequirements
	 */
	struct AMissionType_Race_C_GeneratePerPlayerPhaseRequirements_Params
	{
	public:
		class AShooterPlayerController*                            Controller;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AShooterCharacter*                                   Character;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                PhaseName;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMissionPhaseRequirement>                    Requirements;                                            // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.ActivateRacePowerUps
	 */
	struct AMissionType_Race_C_ActivateRacePowerUps_Params
	{
	public:
		class AMissionTrigger*                                     Trigger;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class APrimalCharacter*                                    TriggeringActor;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.CalcRaceXPRatio
	 */
	struct AMissionType_Race_C_CalcRaceXPRatio_Params
	{
	public:
		class APrimalCharacter*                                    Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    Place;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.BPGenerateMissionRewards
	 */
	struct AMissionType_Race_C_BPGenerateMissionRewards_Params
	{
	public:
		struct FCharacterAndControllerPair                         Player;                                                  // 0x0000(0x0010)  (Parm)
		bool                                                       bCompletedSuccessfully;                                  // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_M08F[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      XPReward;                                                // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<class UPrimalItem*>                                 GeneratedItems;                                          // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.BPGetMissionTimerText
	 */
	struct AMissionType_Race_C_BPGetMissionTimerText_Params
	{
	public:
		class AShooterPlayerController*                            ShootCont;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.GeneratePhaseRequirements
	 */
	struct AMissionType_Race_C_GeneratePhaseRequirements_Params
	{
	public:
		class FName                                                PhaseName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMissionPhaseRequirement>                    Requirements;                                            // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.GetDinoNameFromArray
	 */
	struct AMissionType_Race_C_GetDinoNameFromArray_Params
	{
	public:
		int32_t                                                    ArrayIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JIIO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Item;                                                    // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.GetNamedDinoSetup
	 */
	struct AMissionType_Race_C_GetNamedDinoSetup_Params
	{
	public:
		struct FDinoSetup                                          InSetup;                                                 // 0x0000(0x00F0)  (Parm)
		class FString                                              Name;                                                    // 0x00F0(0x0010)  (Parm, ZeroConstructor)
		struct FDinoSetup                                          Setup;                                                   // 0x0100(0x00F0)  (Parm, OutParm)
	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.IsMissionComplete
	 */
	struct AMissionType_Race_C_IsMissionComplete_Params
	{
	public:
		class AShooterCharacter*                                   forCharacter;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AShooterPlayerController*                            ForController;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_NALU[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.TryIncrementCheckpoint
	 */
	struct AMissionType_Race_C_TryIncrementCheckpoint_Params
	{
	public:
		class AShooterPlayerController*                            PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AMissionTrigger*                                     HitTrigger;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Success;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AtEnd;                                                   // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_WQYN[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.BPIsPhaseComplete
	 */
	struct AMissionType_Race_C_BPIsPhaseComplete_Params
	{
	public:
		class FName                                                PhaseName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.GetPerPlayerWorldIndicators
	 */
	struct AMissionType_Race_C_GetPerPlayerWorldIndicators_Params
	{
	public:
		class AShooterPlayerController*                            Controller;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AShooterCharacter*                                   Character;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FMissionWorldIndicator>                      WorldIndicators;                                         // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.GetNextCheckpoint
	 */
	struct AMissionType_Race_C_GetNextCheckpoint_Params
	{
	public:
		class AShooterPlayerController*                            Controller;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AMissionTrigger*                                     NewParam;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    index;                                                   // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FDLX[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AMissionTrigger*                                     NextCheckpoint;                                          // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CompletedRace;                                           // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P368[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.UserConstructionScript
	 */
	struct AMissionType_Race_C_UserConstructionScript_Params
	{	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.BPOnMissionTriggerBeginOverlap
	 */
	struct AMissionType_Race_C_BPOnMissionTriggerBeginOverlap_Params
	{
	public:
		class AMissionTrigger*                                     Trigger;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.BPOnMissionComplete
	 */
	struct AMissionType_Race_C_BPOnMissionComplete_Params
	{
	public:
		class AShooterCharacter*                                   ForPlayer;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AShooterPlayerController*                            ForController;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bLastPhaseSuccess;                                       // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JI74[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      XPRewarded;                                              // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<class UPrimalItem*>                                 ItemsRewarded;                                           // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.OnThrottledServerTick
	 */
	struct AMissionType_Race_C_OnThrottledServerTick_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.BPOnMissionServerSetup
	 */
	struct AMissionType_Race_C_BPOnMissionServerSetup_Params
	{	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.RaceStarted
	 */
	struct AMissionType_Race_C_RaceStarted_Params
	{
	public:
		class FName                                                OldPhaseName;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                NewPhaseName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.RaceSetup
	 */
	struct AMissionType_Race_C_RaceSetup_Params
	{
	public:
		class FName                                                OldPhaseName;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                NewPhaseName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.ReceiveBeginPlay
	 */
	struct AMissionType_Race_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.TeleportToStart
	 */
	struct AMissionType_Race_C_TeleportToStart_Params
	{
	public:
		class FName                                                OldPhaseName;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class FName                                                NewPhaseName;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.BPOnMissionDinoDied
	 */
	struct AMissionType_Race_C_BPOnMissionDinoDied_Params
	{
	public:
		class APrimalDinoCharacter*                                Dino;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      KillingDamage;                                           // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ATIZ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0010(0x0020)  (Parm, OutParm, ReferenceParm)
		class AController*                                         Killer;                                                  // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0038(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.BPOnMissionPlayerDied
	 */
	struct AMissionType_Race_C_BPOnMissionPlayerDied_Params
	{
	public:
		class AShooterCharacter*                                   Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AShooterPlayerController*                            Controller;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		float                                                      KillingDamage;                                           // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0PPP[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FDamageEvent                                        DamageEvent;                                             // 0x0018(0x0020)  (Parm, OutParm, ReferenceParm)
		class AController*                                         Killer;                                                  // 0x0038(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AActor*                                              DamageCauser;                                            // 0x0040(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.PutPlayersOnMissionDino
	 */
	struct AMissionType_Race_C_PutPlayersOnMissionDino_Params
	{	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.BPOnPlayerRemovedFromMission
	 */
	struct AMissionType_Race_C_BPOnPlayerRemovedFromMission_Params
	{
	public:
		class AShooterCharacter*                                   Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AShooterPlayerController*                            Controller;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bFromMissionCompleteEvent;                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bLastPhaseSuccess;                                       // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.ServerAddConsolePlayer
	 */
	struct AMissionType_Race_C_ServerAddConsolePlayer_Params
	{	};

	/**
	 * Function MissionType_Race.MissionType_Race_C.ExecuteUbergraph_MissionType_Race
	 */
	struct AMissionType_Race_C_ExecuteUbergraph_MissionType_Race_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
