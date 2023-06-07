/**
 * Name: Ark_Survival_Evolved
 * Version: Patch_358.3
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.PlayLinkedCompanionReactionsByExplorerNoteIndex
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_Gen2_C::PlayLinkedCompanionReactionsByExplorerNoteIndex(int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.PlayLinkedCompanionReactionsByExplorerNoteIndex");
		
		ABuff_Companion_HLNA_Gen2_C_PlayLinkedCompanionReactionsByExplorerNoteIndex_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.BPClientHandleNetExecCommand
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CommandName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (Parm, OutParm, ReferenceParm)
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_Companion_HLNA_Gen2_C::BPClientHandleNetExecCommand(const class FName& CommandName, struct FBPNetExecParams* ExecParams, class APlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.BPClientHandleNetExecCommand");
		
		ABuff_Companion_HLNA_Gen2_C_BPClientHandleNetExecCommand_Params params {};
		params.CommandName = CommandName;
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ExecParams != nullptr)
			*ExecParams = params.ExecParams;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.OnCompanionReactionPlayed
	 * 		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCompanionReactionData                      PlayedReactionData                                         (Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            UniqueID                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_Gen2_C::OnCompanionReactionPlayed(struct FCompanionReactionData* PlayedReactionData, int32_t UniqueID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.OnCompanionReactionPlayed");
		
		ABuff_Companion_HLNA_Gen2_C_OnCompanionReactionPlayed_Params params {};
		params.UniqueID = UniqueID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayedReactionData != nullptr)
			*PlayedReactionData = params.PlayedReactionData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.play reaction for explorer note index
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            explorernoteindex                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_Gen2_C::playreactionforexplorernoteindex(int32_t explorernoteindex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.play reaction for explorer note index");
		
		ABuff_Companion_HLNA_Gen2_C_playreactionforexplorernoteindex_Params params {};
		params.explorernoteindex = explorernoteindex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.NotifyItemAddedToCropPlot
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 anItem                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_Gen2_C::NotifyItemAddedToCropPlot(class UPrimalItem* anItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.NotifyItemAddedToCropPlot");
		
		ABuff_Companion_HLNA_Gen2_C_NotifyItemAddedToCropPlot_Params params {};
		params.anItem = anItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.Has Completed All Required Missions For Final Boss
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_Gen2_C::HasCompletedAllRequiredMissionsForFinalBoss(const class FName& Class, bool* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.Has Completed All Required Missions For Final Boss");
		
		ABuff_Companion_HLNA_Gen2_C_HasCompletedAllRequiredMissionsForFinalBoss_Params params {};
		params.Class = Class;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.Check for Nearby Explorer Notes
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_Gen2_C::CheckforNearbyExplorerNotes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.Check for Nearby Explorer Notes");
		
		ABuff_Companion_HLNA_Gen2_C_CheckforNearbyExplorerNotes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.Check For Nearby Dispatchers
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_Gen2_C::CheckForNearbyDispatchers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.Check For Nearby Dispatchers");
		
		ABuff_Companion_HLNA_Gen2_C_CheckForNearbyDispatchers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.OnMyPlayerMissionComplete
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalBuff_MissionData*                     MissionDataBuff                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AMissionType*                                Mission                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_Gen2_C::OnMyPlayerMissionComplete(class APrimalBuff_MissionData* MissionDataBuff, class AMissionType* Mission, bool bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.OnMyPlayerMissionComplete");
		
		ABuff_Companion_HLNA_Gen2_C_OnMyPlayerMissionComplete_Params params {};
		params.MissionDataBuff = MissionDataBuff;
		params.Mission = Mission;
		params.bSuccess = bSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_Gen2_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.ReceiveBeginPlay");
		
		ABuff_Companion_HLNA_Gen2_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_Gen2_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.UserConstructionScript");
		
		ABuff_Companion_HLNA_Gen2_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.React To Ability To Start Final Boss Mission Gen2
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_Gen2_C::ReactToAbilityToStartFinalBossMissionGen2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.React To Ability To Start Final Boss Mission Gen2");
		
		ABuff_Companion_HLNA_Gen2_C_ReactToAbilityToStartFinalBossMissionGen2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.PublicStopCompanionReaction
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_Companion_HLNA_Gen2_C::PublicStopCompanionReaction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.PublicStopCompanionReaction");
		
		ABuff_Companion_HLNA_Gen2_C_PublicStopCompanionReaction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.unlock explorer note on client
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            explorernoteindex                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_Gen2_C::unlockexplorernoteonclient(int32_t explorernoteindex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.unlock explorer note on client");
		
		ABuff_Companion_HLNA_Gen2_C_unlockexplorernoteonclient_Params params {};
		params.explorernoteindex = explorernoteindex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.delay play explorer note reaction
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCompanionReactionData                      ReactionData                                               (Parm)
	 */
	void ABuff_Companion_HLNA_Gen2_C::delayplayexplorernotereaction(const struct FCompanionReactionData& ReactionData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.delay play explorer note reaction");
		
		ABuff_Companion_HLNA_Gen2_C_delayplayexplorernotereaction_Params params {};
		params.ReactionData = ReactionData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.ExecuteUbergraph_Buff_Companion_HLNA_Gen2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_Companion_HLNA_Gen2_C::ExecuteUbergraph_Buff_Companion_HLNA_Gen2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C.ExecuteUbergraph_Buff_Companion_HLNA_Gen2");
		
		ABuff_Companion_HLNA_Gen2_C_ExecuteUbergraph_Buff_Companion_HLNA_Gen2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_Companion_HLNA_Gen2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_Companion_HLNA_Gen2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Companion_HLNA_Gen2.Buff_Companion_HLNA_Gen2_C");
		return ptr;
	}

}


