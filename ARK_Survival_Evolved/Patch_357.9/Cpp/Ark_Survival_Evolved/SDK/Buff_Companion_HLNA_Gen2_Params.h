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
	 * Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.PlayLinkedCompanionReactionsByExplorerNoteIndex
	 */
	struct ABuff_Companion_HLNA_Gen2_C_PlayLinkedCompanionReactionsByExplorerNoteIndex_Params
	{
	public:
		int32_t                                                    index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FAUI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.BPClientHandleNetExecCommand
	 */
	struct ABuff_Companion_HLNA_Gen2_C_BPClientHandleNetExecCommand_Params
	{
	public:
		class FName                                                CommandName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FBPNetExecParams                                    ExecParams;                                              // 0x0008(0x0040)  (Parm, OutParm, ReferenceParm)
		class APlayerController*                                   ForPC;                                                   // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U6N4[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.OnCompanionReactionPlayed
	 */
	struct ABuff_Companion_HLNA_Gen2_C_OnCompanionReactionPlayed_Params
	{
	public:
		struct FCompanionReactionData                              PlayedReactionData;                                      // 0x0000(0x00A0)  (Parm, OutParm, ReferenceParm)
		int32_t                                                    UniqueID;                                                // 0x00A0(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.play reaction for explorer note index
	 */
	struct ABuff_Companion_HLNA_Gen2_C_playreactionforexplorernoteindex_Params
	{
	public:
		int32_t                                                    explorernoteindex;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.NotifyItemAddedToCropPlot
	 */
	struct ABuff_Companion_HLNA_Gen2_C_NotifyItemAddedToCropPlot_Params
	{
	public:
		class UPrimalItem*                                         anItem;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.Has Completed All Required Missions For Final Boss
	 */
	struct ABuff_Companion_HLNA_Gen2_C_HasCompletedAllRequiredMissionsForFinalBoss_Params
	{
	public:
		class FName                                                Class;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       NewParam;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_10QA[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.Check for Nearby Explorer Notes
	 */
	struct ABuff_Companion_HLNA_Gen2_C_CheckforNearbyExplorerNotes_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.Check For Nearby Dispatchers
	 */
	struct ABuff_Companion_HLNA_Gen2_C_CheckForNearbyDispatchers_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.OnMyPlayerMissionComplete
	 */
	struct ABuff_Companion_HLNA_Gen2_C_OnMyPlayerMissionComplete_Params
	{
	public:
		class APrimalBuff_MissionData*                             MissionDataBuff;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class AMissionType*                                        Mission;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSuccess;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4I02[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.ReceiveBeginPlay
	 */
	struct ABuff_Companion_HLNA_Gen2_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.UserConstructionScript
	 */
	struct ABuff_Companion_HLNA_Gen2_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.React To Ability To Start Final Boss Mission Gen2
	 */
	struct ABuff_Companion_HLNA_Gen2_C_ReactToAbilityToStartFinalBossMissionGen2_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.PublicStopCompanionReaction
	 */
	struct ABuff_Companion_HLNA_Gen2_C_PublicStopCompanionReaction_Params
	{	};

	/**
	 * Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.unlock explorer note on client
	 */
	struct ABuff_Companion_HLNA_Gen2_C_unlockexplorernoteonclient_Params
	{
	public:
		int32_t                                                    explorernoteindex;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.delay play explorer note reaction
	 */
	struct ABuff_Companion_HLNA_Gen2_C_delayplayexplorernotereaction_Params
	{
	public:
		struct FCompanionReactionData                              ReactionData;                                            // 0x0000(0x00A0)  (Parm)
	};

	/**
	 * Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.ExecuteUbergraph_Buff_Companion_HLNA_Gen2
	 */
	struct ABuff_Companion_HLNA_Gen2_C_ExecuteUbergraph_Buff_Companion_HLNA_Gen2_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
