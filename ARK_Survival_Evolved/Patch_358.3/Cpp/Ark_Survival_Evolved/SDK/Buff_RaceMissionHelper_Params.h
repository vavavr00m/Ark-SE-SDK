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
	 * Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.BPInstigatorSleeped
	 */
	struct ABuff_RaceMissionHelper_C_BPInstigatorSleeped_Params
	{
	public:
		bool                                                       bIsSleeped;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_X2B2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.SetSpline
	 */
	struct ABuff_RaceMissionHelper_C_SetSpline_Params
	{
	public:
		class AMissionSpline*                                      Spline;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       WasSet;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.Tick_UpdatePowerUps
	 */
	struct ABuff_RaceMissionHelper_C_Tick_UpdatePowerUps_Params
	{	};

	/**
	 * Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.ListenServerUpdateCheckpoints
	 */
	struct ABuff_RaceMissionHelper_C_ListenServerUpdateCheckpoints_Params
	{
	public:
		TArray<struct FMissionWorldIndicator>                      MissionDataBuff;                                         // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		class AShooterCharacter*                                   PC;                                                      // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.UpdateCheckpoint
	 */
	struct ABuff_RaceMissionHelper_C_UpdateCheckpoint_Params
	{
	public:
		class AMissionTrigger_RaceCheckpoint_C*                    PreviousCheckpoint;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AMissionTrigger_RaceCheckpoint_C*                    NewCheckpoint;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.Update Out Of Bounds Particle
	 */
	struct ABuff_RaceMissionHelper_C_UpdateOutOfBoundsParticle_Params
	{	};

	/**
	 * Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.UpdateNextCheckpointDirectionIndicator
	 */
	struct ABuff_RaceMissionHelper_C_UpdateNextCheckpointDirectionIndicator_Params
	{
	public:
		float                                                      Delta;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.GetPlaceText
	 */
	struct ABuff_RaceMissionHelper_C_GetPlaceText_Params
	{
	public:
		int32_t                                                    Place;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DRLX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Text;                                                    // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.BPGetHUDElements
	 */
	struct ABuff_RaceMissionHelper_C_BPGetHUDElements_Params
	{
	public:
		class APlayerController*                                   ForPC;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		TArray<struct FHUDElement>                                 OutElements;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.UserConstructionScript
	 */
	struct ABuff_RaceMissionHelper_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.MissionClientDataUpdated_Event
	 */
	struct ABuff_RaceMissionHelper_C_MissionClientDataUpdated_Event_Params
	{
	public:
		class APrimalBuff_MissionData*                             MissionDataBuff;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.BuffTickClient
	 */
	struct ABuff_RaceMissionHelper_C_BuffTickClient_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.BPDeactivated
	 */
	struct ABuff_RaceMissionHelper_C_BPDeactivated_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.ClientUpdatePlace
	 */
	struct ABuff_RaceMissionHelper_C_ClientUpdatePlace_Params
	{
	public:
		int32_t                                                    NewPlace;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    NumberOfPlayers;                                         // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.BPSetupForInstigator
	 */
	struct ABuff_RaceMissionHelper_C_BPSetupForInstigator_Params
	{
	public:
		class AActor*                                              ForInstigator;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.BuffTickServer
	 */
	struct ABuff_RaceMissionHelper_C_BuffTickServer_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.Client_UpdateCurrentCheckpointPowerUpTriggers
	 */
	struct ABuff_RaceMissionHelper_C_Client_UpdateCurrentCheckpointPowerUpTriggers_Params
	{
	public:
		TArray<class AMissionTrigger*>                             PowerUpTriggers;                                         // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.DeactivatePowerUpEmitters
	 */
	struct ABuff_RaceMissionHelper_C_DeactivatePowerUpEmitters_Params
	{	};

	/**
	 * Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.DeactivateSinglePowerUpEmitter
	 */
	struct ABuff_RaceMissionHelper_C_DeactivateSinglePowerUpEmitter_Params
	{
	public:
		int32_t                                                    TriggerOrder;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    CustomDataInt;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.RideMissionDino
	 */
	struct ABuff_RaceMissionHelper_C_RideMissionDino_Params
	{	};

	/**
	 * Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.DeactivateSinglePowerUpTriggerEmitter
	 */
	struct ABuff_RaceMissionHelper_C_DeactivateSinglePowerUpTriggerEmitter_Params
	{
	public:
		class AMissionTrigger*                                     TriggerHit;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.ClientUnhideActors
	 */
	struct ABuff_RaceMissionHelper_C_ClientUnhideActors_Params
	{
	public:
		TArray<class AActor*>                                      ActorsToUnhide;                                          // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.ClientUpdateBestTime
	 */
	struct ABuff_RaceMissionHelper_C_ClientUpdateBestTime_Params
	{
	public:
		float                                                      BestTime;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.SetCheckPoint
	 */
	struct ABuff_RaceMissionHelper_C_SetCheckPoint_Params
	{
	public:
		int32_t                                                    newIndex;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.ClientPlayFinishFX
	 */
	struct ABuff_RaceMissionHelper_C_ClientPlayFinishFX_Params
	{	};

	/**
	 * Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.DestroyDino
	 */
	struct ABuff_RaceMissionHelper_C_DestroyDino_Params
	{	};

	/**
	 * Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.TeleportBackToStart
	 */
	struct ABuff_RaceMissionHelper_C_TeleportBackToStart_Params
	{	};

	/**
	 * Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.ServerClaimConsolePlayer
	 */
	struct ABuff_RaceMissionHelper_C_ServerClaimConsolePlayer_Params
	{	};

	/**
	 * Function Buff_RaceMissionHelper.Buff_RaceMissionHelper_C.ExecuteUbergraph_Buff_RaceMissionHelper
	 */
	struct ABuff_RaceMissionHelper_C_ExecuteUbergraph_Buff_RaceMissionHelper_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
