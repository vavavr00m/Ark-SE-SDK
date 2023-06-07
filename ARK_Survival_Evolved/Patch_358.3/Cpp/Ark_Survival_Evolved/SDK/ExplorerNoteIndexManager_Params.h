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
	 * Function ExplorerNoteIndexManager.ExplorerNoteIndexManager_C.Story Explorer Note Unlocked Count and Max
	 */
	struct UExplorerNoteIndexManager_C_StoryExplorerNoteUnlockedCountandMax_Params
	{
	public:
		int32_t                                                    UnlockedCount;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    MaxStoryExplorerNotes;                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ExplorerNoteIndexManager.ExplorerNoteIndexManager_C.Still Has Story Explorer Note This Player Can Unlock
	 */
	struct UExplorerNoteIndexManager_C_StillHasStoryExplorerNoteThisPlayerCanUnlock_Params
	{
	public:
		bool                                                       stillhassometounlock;                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ExplorerNoteIndexManager.ExplorerNoteIndexManager_C.Still Has Factoid Explorer Note This Player Can Unlock
	 */
	struct UExplorerNoteIndexManager_C_StillHasFactoidExplorerNoteThisPlayerCanUnlock_Params
	{
	public:
		bool                                                       stillhassometounlock;                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ExplorerNoteIndexManager.ExplorerNoteIndexManager_C.Get Next Gen 1 Glitch Story Mission Explorer Note Index
	 */
	struct UExplorerNoteIndexManager_C_GetNextGen1GlitchStoryMissionExplorerNoteIndex_Params
	{
	public:
		int32_t                                                    nextunlockableglitchstorymissionnoteindex;               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ExplorerNoteIndexManager.ExplorerNoteIndexManager_C.Get Random Gen 1 Factoid Explorer Note Index
	 */
	struct UExplorerNoteIndexManager_C_GetRandomGen1FactoidExplorerNoteIndex_Params
	{
	public:
		int32_t                                                    unlockablerandomexplorernoteindex;                       // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ExplorerNoteIndexManager.ExplorerNoteIndexManager_C.GetNextUnlockableExplorerNoteIndex
	 */
	struct UExplorerNoteIndexManager_C_GetNextUnlockableExplorerNoteIndex_Params
	{
	public:
		TArray<int32_t>                                            arrayofexplorernoteindicies;                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       Success;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_F08K[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    nextindex;                                               // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ExplorerNoteIndexManager.ExplorerNoteIndexManager_C.GetRandomUnlockableExplorerNoteIndex
	 */
	struct UExplorerNoteIndexManager_C_GetRandomUnlockableExplorerNoteIndex_Params
	{
	public:
		TArray<int32_t>                                            arrayofexplorernoteindicies;                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       Success;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_51MN[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    randomunlockableindex;                                   // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ExplorerNoteIndexManager.ExplorerNoteIndexManager_C.ExecuteUbergraph_ExplorerNoteIndexManager
	 */
	struct UExplorerNoteIndexManager_C_ExecuteUbergraph_ExplorerNoteIndexManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
