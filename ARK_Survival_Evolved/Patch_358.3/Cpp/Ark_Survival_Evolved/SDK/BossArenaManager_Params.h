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
	 * Function BossArenaManager.BossArenaManager_C.ManageArenaEnableBuffsForCharacter
	 */
	struct ABossArenaManager_C_ManageArenaEnableBuffsForCharacter_Params
	{
	public:
		class APrimalCharacter*                                    forChar;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BossArenaManager.BossArenaManager_C.SpawnedBoss
	 */
	struct ABossArenaManager_C_SpawnedBoss_Params
	{	};

	/**
	 * Function BossArenaManager.BossArenaManager_C.SFXBack to Home
	 */
	struct ABossArenaManager_C_SFXBacktoHome_Params
	{	};

	/**
	 * Function BossArenaManager.BossArenaManager_C.IssueReturnWarning
	 */
	struct ABossArenaManager_C_IssueReturnWarning_Params
	{	};

	/**
	 * Function BossArenaManager.BossArenaManager_C.BPClientHandleNetExecCommand
	 */
	struct ABossArenaManager_C_BPClientHandleNetExecCommand_Params
	{
	public:
		class FName                                                CommandName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0008(0x0040)  (Parm, OutParm, ReferenceParm)
		class APlayerController*                                   ForPC;                                                   // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9OEE[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BossArenaManager.BossArenaManager_C.KillMinions
	 */
	struct ABossArenaManager_C_KillMinions_Params
	{	};

	/**
	 * Function BossArenaManager.BossArenaManager_C.CheckForActivePlayers
	 */
	struct ABossArenaManager_C_CheckForActivePlayers_Params
	{	};

	/**
	 * Function BossArenaManager.BossArenaManager_C.GetAllActorsInBossArena
	 */
	struct ABossArenaManager_C_GetAllActorsInBossArena_Params
	{
	public:
		bool                                                       bIncludeUnconscious;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIncludeUntamedCreatures;                                // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIncludeDead;                                            // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIgnorePlayers;                                          // 0x0003(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIgnoreDinos;                                            // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIgnoreAttached;                                         // 0x0005(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EBLC[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class AActor*>                                      TheActors;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function BossArenaManager.BossArenaManager_C.IssueTimeWarning
	 */
	struct ABossArenaManager_C_IssueTimeWarning_Params
	{	};

	/**
	 * Function BossArenaManager.BossArenaManager_C.KillAllOccupants
	 */
	struct ABossArenaManager_C_KillAllOccupants_Params
	{	};

	/**
	 * Function BossArenaManager.BossArenaManager_C.TeleportBackToHome
	 */
	struct ABossArenaManager_C_TeleportBackToHome_Params
	{	};

	/**
	 * Function BossArenaManager.BossArenaManager_C.DidTeleport
	 */
	struct ABossArenaManager_C_DidTeleport_Params
	{
	public:
		struct FVector                                             ReturnPosition;                                          // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5O7M[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              OverrideBossClass;                                       // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BossArenaManager.BossArenaManager_C.IsValidForTeleport
	 */
	struct ABossArenaManager_C_IsValidForTeleport_Params
	{
	public:
		class FString                                              InvalidReason;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function BossArenaManager.BossArenaManager_C.UserConstructionScript
	 */
	struct ABossArenaManager_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BossArenaManager.BossArenaManager_C.StartBoss
	 */
	struct ABossArenaManager_C_StartBoss_Params
	{	};

	/**
	 * Function BossArenaManager.BossArenaManager_C.ReceiveBeginPlay
	 */
	struct ABossArenaManager_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BossArenaManager.BossArenaManager_C.ReceiveTick
	 */
	struct ABossArenaManager_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BossArenaManager.BossArenaManager_C.EventTeleportToHome
	 */
	struct ABossArenaManager_C_EventTeleportToHome_Params
	{	};

	/**
	 * Function BossArenaManager.BossArenaManager_C.SFXTeleportToHome
	 */
	struct ABossArenaManager_C_SFXTeleportToHome_Params
	{	};

	/**
	 * Function BossArenaManager.BossArenaManager_C.ExecuteUbergraph_BossArenaManager
	 */
	struct ABossArenaManager_C_ExecuteUbergraph_BossArenaManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
