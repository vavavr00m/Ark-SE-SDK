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
	 * BlueprintGeneratedClass Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C
	 * Size -> 0x02C0 (FullSize[0x70D0] - InheritedSize[0x6E10])
	 */
	class ABuff_Companion_HLNA_Gen2_C : public ABuff_Companion_HLNA_C
	{
	public:
		float                                                      distancetocheckfornearbyexplorernotesforreaction;        // 0x6E10(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      intervaltocheckfornearbyexplorernotesforreaction;        // 0x6E14(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      intervaltocheckfornearbyexplorernotesforreactionextradelay; // 0x6E18(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      distancetocheckfornearbydispatchersforreaction;          // 0x6E1C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      intervaltocheckfornearbydispatchersforreaction;          // 0x6E20(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AQ2M[0x4];                                   // 0x6E24(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCompanionReactionData>                      CompanionReactions_Gen2_FirstDispatcherEncountered;      // 0x6E28(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FCompanionReactionData>                      CompanionReactions_Gen2_FirstExplorerNoteEncountered;    // 0x6E38(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FCompanionReactionData>                      CompanionReactions_Gen2_NewExplorerNoteEncountered;      // 0x6E48(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FCompanionReactionData>                      CompanionReactions_Gen2_FirstMutagenEncountered;         // 0x6E58(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FCompanionReactionData>                      CompanionReactions_Gen2_FinalBossIsReady;                // 0x6E68(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FCompanionReactionData                              ReactionTemplateWithSFXArray;                            // 0x6E78(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    plantspeciesRexplorernoteindex;                          // 0x6F18(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_S02Y[0x4];                                   // 0x6F1C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        ReqMissionTags_Gamma;                                    // 0x6F20(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class FName>                                        ReqMissionTags_Beta;                                     // 0x6F30(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<class FName>                                        ReqMissionTags_Alpha;                                    // 0x6F40(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FStruct_ArrayOfMissionModules>               ExplorerNoteLinkedCompanionReactionModules;              // 0x6F50(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<int32_t>                                            ExplorerNoteLinkedCompanionReactionModules_Indices;      // 0x6F60(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		bool                                                       CallFunc_IsDedicatedServer_ReturnValue;                  // 0x6F70(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_99II[0x3];                                   // 0x6F71(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CallFunc_Array_Length_ReturnValue;                       // 0x6F74(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    K2Node_CustomEvent_explorer_note_index;                  // 0x6F78(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		int32_t                                                    Temp_int_Loop_Counter_Variable;                          // 0x6F7C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		bool                                                       CallFunc_Less_IntInt_ReturnValue;                        // 0x6F80(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZMJX[0x7];                                   // 0x6F81(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCompanionReactionData                              CallFunc_Array_Get_Item;                                 // 0x6F88(0x00A0) Transient, DuplicateTransient
		int32_t                                                    CallFunc_Add_IntInt_ReturnValue;                         // 0x7028(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FUJQ[0x4];                                   // 0x702C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCompanionReactionData                              K2Node_CustomEvent_Reaction_Data;                        // 0x7030(0x00A0) Transient, DuplicateTransient

	public:
		void PlayLinkedCompanionReactionsByExplorerNoteIndex(int32_t index);
		bool BPClientHandleNetExecCommand(const class FName& CommandName, struct FBPNetExecParams* ExecParams, class APlayerController* ForPC);
		void OnCompanionReactionPlayed(struct FCompanionReactionData* PlayedReactionData, int32_t UniqueID);
		void playreactionforexplorernoteindex(int32_t explorernoteindex);
		void NotifyItemAddedToCropPlot(class UPrimalItem* anItem);
		void HasCompletedAllRequiredMissionsForFinalBoss(const class FName& Class, bool* NewParam);
		void CheckforNearbyExplorerNotes();
		void CheckForNearbyDispatchers();
		void OnMyPlayerMissionComplete(class APrimalBuff_MissionData* MissionDataBuff, class AMissionType* Mission, bool bSuccess);
		void ReceiveBeginPlay();
		void UserConstructionScript();
		void ReactToAbilityToStartFinalBossMissionGen2();
		void PublicStopCompanionReaction();
		void unlockexplorernoteonclient(int32_t explorernoteindex);
		void delayplayexplorernotereaction(const struct FCompanionReactionData& ReactionData);
		void ExecuteUbergraph_Buff_Companion_HLNA_Gen2(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
