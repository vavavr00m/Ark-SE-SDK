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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass ExplorerNoteIndexManager.ExplorerNoteIndexManager_C
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UExplorerNoteIndexManager_C : public UObject
	{
	public:
		TArray<int32_t>                                            Genesis_1_Random_Factoid_Explorer_Notes_Indicies;        // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<int32_t>                                            Genesis_1_Ordered_Glitch_Story_Mission_Explorer_Notes_Indicies; // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

	public:
		void StoryExplorerNoteUnlockedCountandMax(int32_t* UnlockedCount, int32_t* MaxStoryExplorerNotes);
		void StillHasStoryExplorerNoteThisPlayerCanUnlock(bool* stillhassometounlock);
		void StillHasFactoidExplorerNoteThisPlayerCanUnlock(bool* stillhassometounlock);
		void GetNextGen1GlitchStoryMissionExplorerNoteIndex(int32_t* nextunlockableglitchstorymissionnoteindex);
		void GetRandomGen1FactoidExplorerNoteIndex(int32_t* unlockablerandomexplorernoteindex);
		void GetNextUnlockableExplorerNoteIndex(TArray<int32_t>* arrayofexplorernoteindicies, bool* Success, int32_t* nextindex);
		void GetRandomUnlockableExplorerNoteIndex(TArray<int32_t>* arrayofexplorernoteindicies, bool* Success, int32_t* randomunlockableindex);
		void ExecuteUbergraph_ExplorerNoteIndexManager(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
