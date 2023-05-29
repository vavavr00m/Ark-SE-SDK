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
	 * Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.ReceiveBeginPlay
	 */
	struct AMissionTrigger_RaceCheckpoint_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.ResetCheckpoint
	 */
	struct AMissionTrigger_RaceCheckpoint_C_ResetCheckpoint_Params
	{	};

	/**
	 * Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.IsCheckpointActive_PURE
	 */
	struct AMissionTrigger_RaceCheckpoint_C_IsCheckpointActive_PURE_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.IsCheckpointActive
	 */
	struct AMissionTrigger_RaceCheckpoint_C_IsCheckpointActive_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.DeactivateCheckpoint
	 */
	struct AMissionTrigger_RaceCheckpoint_C_DeactivateCheckpoint_Params
	{	};

	/**
	 * Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.InitCheckpoint
	 */
	struct AMissionTrigger_RaceCheckpoint_C_InitCheckpoint_Params
	{	};

	/**
	 * Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.SetCheckpointEnabled
	 */
	struct AMissionTrigger_RaceCheckpoint_C_SetCheckpointEnabled_Params
	{
	public:
		bool                                                       NewEnabled;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.OnCheckpointHit
	 */
	struct AMissionTrigger_RaceCheckpoint_C_OnCheckpointHit_Params
	{	};

	/**
	 * Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.SetCheckpointFX_Active
	 */
	struct AMissionTrigger_RaceCheckpoint_C_SetCheckpointFX_Active_Params
	{
	public:
		bool                                                       newActive;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AlsoEnable;                                              // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E0XP[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.BP_OverrideTargetingLocation
	 */
	struct AMissionTrigger_RaceCheckpoint_C_BP_OverrideTargetingLocation_Params
	{
	public:
		class AActor*                                              Attacker;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             ReturnValue;                                             // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.UserConstructionScript
	 */
	struct AMissionTrigger_RaceCheckpoint_C_UserConstructionScript_Params
	{	};

	/**
	 * Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.Timeline_PulseColor__FinishedFunc
	 */
	struct AMissionTrigger_RaceCheckpoint_C_Timeline_PulseColor__FinishedFunc_Params
	{	};

	/**
	 * Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.Timeline_PulseColor__UpdateFunc
	 */
	struct AMissionTrigger_RaceCheckpoint_C_Timeline_PulseColor__UpdateFunc_Params
	{	};

	/**
	 * Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.Timeline_CheckpointActivate__FinishedFunc
	 */
	struct AMissionTrigger_RaceCheckpoint_C_Timeline_CheckpointActivate__FinishedFunc_Params
	{	};

	/**
	 * Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.Timeline_CheckpointActivate__UpdateFunc
	 */
	struct AMissionTrigger_RaceCheckpoint_C_Timeline_CheckpointActivate__UpdateFunc_Params
	{	};

	/**
	 * Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.Timeline_FadeInCheckpoint__FinishedFunc
	 */
	struct AMissionTrigger_RaceCheckpoint_C_Timeline_FadeInCheckpoint__FinishedFunc_Params
	{	};

	/**
	 * Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.Timeline_FadeInCheckpoint__UpdateFunc
	 */
	struct AMissionTrigger_RaceCheckpoint_C_Timeline_FadeInCheckpoint__UpdateFunc_Params
	{	};

	/**
	 * Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.FadeOut
	 */
	struct AMissionTrigger_RaceCheckpoint_C_FadeOut_Params
	{	};

	/**
	 * Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.FadeIn
	 */
	struct AMissionTrigger_RaceCheckpoint_C_FadeIn_Params
	{	};

	/**
	 * Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.CheckpointPulse
	 */
	struct AMissionTrigger_RaceCheckpoint_C_CheckpointPulse_Params
	{	};

	/**
	 * Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.DisableCheckpoint
	 */
	struct AMissionTrigger_RaceCheckpoint_C_DisableCheckpoint_Params
	{	};

	/**
	 * Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.EnableCheckpoint
	 */
	struct AMissionTrigger_RaceCheckpoint_C_EnableCheckpoint_Params
	{	};

	/**
	 * Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.DisableCheckpoint_NOW
	 */
	struct AMissionTrigger_RaceCheckpoint_C_DisableCheckpoint_NOW_Params
	{	};

	/**
	 * Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.EnableCheckpoint_NOW
	 */
	struct AMissionTrigger_RaceCheckpoint_C_EnableCheckpoint_NOW_Params
	{	};

	/**
	 * Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.CheckpointHitServerReaction
	 */
	struct AMissionTrigger_RaceCheckpoint_C_CheckpointHitServerReaction_Params
	{
	public:
		class APrimalCharacter*                                    TriggeringActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MissionTrigger_RaceCheckpoint.MissionTrigger_RaceCheckpoint_C.ExecuteUbergraph_MissionTrigger_RaceCheckpoint
	 */
	struct AMissionTrigger_RaceCheckpoint_C_ExecuteUbergraph_MissionTrigger_RaceCheckpoint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
