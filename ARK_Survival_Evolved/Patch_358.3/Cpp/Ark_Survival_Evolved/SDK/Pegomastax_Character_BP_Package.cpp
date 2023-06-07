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
	 * 		Name   -> Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPClientHandleNetExecCommand
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CommandName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (Parm, OutParm, ReferenceParm)
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool APegomastax_Character_BP_C::BPClientHandleNetExecCommand(const class FName& CommandName, struct FBPNetExecParams* ExecParams, class APlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPClientHandleNetExecCommand");
		
		APegomastax_Character_BP_C_BPClientHandleNetExecCommand_Params params {};
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
	 * 		Name   -> Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.UpdateWaitingState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            TargetCharacter                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsInWaitingState                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APegomastax_Character_BP_C::UpdateWaitingState(class APrimalCharacter* TargetCharacter, bool* IsInWaitingState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.UpdateWaitingState");
		
		APegomastax_Character_BP_C_UpdateWaitingState_Params params {};
		params.TargetCharacter = TargetCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsInWaitingState != nullptr)
			*IsInWaitingState = params.IsInWaitingState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.IsInWaitingState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            TargetCharacter                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isWaiting                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APegomastax_Character_BP_C::IsInWaitingState(class APrimalCharacter* TargetCharacter, bool* isWaiting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.IsInWaitingState");
		
		APegomastax_Character_BP_C_IsInWaitingState_Params params {};
		params.TargetCharacter = TargetCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (isWaiting != nullptr)
			*isWaiting = params.isWaiting;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.WillRunToOwner
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       ownerPawn                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               willRun                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APegomastax_Character_BP_C::WillRunToOwner(class APawn* ownerPawn, bool* willRun)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.WillRunToOwner");
		
		APegomastax_Character_BP_C_WillRunToOwner_Params params {};
		params.ownerPawn = ownerPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (willRun != nullptr)
			*willRun = params.willRun;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPTimerServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APegomastax_Character_BP_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPTimerServer");
		
		APegomastax_Character_BP_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.FindPawnToGoBackTo
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       selectedPawn                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APegomastax_Character_BP_C::FindPawnToGoBackTo(class APawn** selectedPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.FindPawnToGoBackTo");
		
		APegomastax_Character_BP_C_FindPawnToGoBackTo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (selectedPawn != nullptr)
			*selectedPawn = params.selectedPawn;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPOnAnimPlayedNotify
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                AnimMontage                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              InPlayRate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        StartSectionName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bReplicate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bReplicateToOwner                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bForceTickPoseAndServerUpdateMesh                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bForceTickPoseOnServer                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APegomastax_Character_BP_C::BPOnAnimPlayedNotify(class UAnimMontage* AnimMontage, float InPlayRate, const class FName& StartSectionName, bool bReplicate, bool bReplicateToOwner, bool bForceTickPoseAndServerUpdateMesh, bool bForceTickPoseOnServer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPOnAnimPlayedNotify");
		
		APegomastax_Character_BP_C_BPOnAnimPlayedNotify_Params params {};
		params.AnimMontage = AnimMontage;
		params.InPlayRate = InPlayRate;
		params.StartSectionName = StartSectionName;
		params.bReplicate = bReplicate;
		params.bReplicateToOwner = bReplicateToOwner;
		params.bForceTickPoseAndServerUpdateMesh = bForceTickPoseAndServerUpdateMesh;
		params.bForceTickPoseOnServer = bForceTickPoseOnServer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.RestoreSecondaryAnims
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APegomastax_Character_BP_C::RestoreSecondaryAnims()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.RestoreSecondaryAnims");
		
		APegomastax_Character_BP_C_RestoreSecondaryAnims_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.ClearSecondaryAnims
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APegomastax_Character_BP_C::ClearSecondaryAnims()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.ClearSecondaryAnims");
		
		APegomastax_Character_BP_C_ClearSecondaryAnims_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.PostAttackActions
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               stoleItem                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APegomastax_Character_BP_C::PostAttackActions(bool stoleItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.PostAttackActions");
		
		APegomastax_Character_BP_C_PostAttackActions_Params params {};
		params.stoleItem = stoleItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.ShouldStopHolding
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShouldStop                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APegomastax_Character_BP_C::ShouldStopHolding(bool* ShouldStop)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.ShouldStopHolding");
		
		APegomastax_Character_BP_C_ShouldStopHolding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldStop != nullptr)
			*ShouldStop = params.ShouldStop;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.Can Play Holding Anim
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanPlay                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APegomastax_Character_BP_C::CanPlayHoldingAnim(bool* CanPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.Can Play Holding Anim");
		
		APegomastax_Character_BP_C_CanPlayHoldingAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanPlay != nullptr)
			*CanPlay = params.CanPlay;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPOnClearMountedDino
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APegomastax_Character_BP_C::BPOnClearMountedDino()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPOnClearMountedDino");
		
		APegomastax_Character_BP_C_BPOnClearMountedDino_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPOnSetMountedDino
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APegomastax_Character_BP_C::BPOnSetMountedDino()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPOnSetMountedDino");
		
		APegomastax_Character_BP_C_BPOnSetMountedDino_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.UpdateHoldingStatus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APegomastax_Character_BP_C::UpdateHoldingStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.UpdateHoldingStatus");
		
		APegomastax_Character_BP_C_UpdateHoldingStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPCharacterSleeped
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APegomastax_Character_BP_C::BPCharacterSleeped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPCharacterSleeped");
		
		APegomastax_Character_BP_C_BPCharacterSleeped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPOnMovementModeChangedNotify
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      PreviousCustomMode                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APegomastax_Character_BP_C::BPOnMovementModeChangedNotify(EMovementMode PrevMovementMode, unsigned char PreviousCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPOnMovementModeChangedNotify");
		
		APegomastax_Character_BP_C_BPOnMovementModeChangedNotify_Params params {};
		params.PrevMovementMode = PrevMovementMode;
		params.PreviousCustomMode = PreviousCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.CreateTamedInventory
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APegomastax_Character_BP_C::CreateTamedInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.CreateTamedInventory");
		
		APegomastax_Character_BP_C_CreateTamedInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.ProcessUsedItem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APegomastax_Character_BP_C::ProcessUsedItem(class UPrimalItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.ProcessUsedItem");
		
		APegomastax_Character_BP_C_ProcessUsedItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.CalculateBuffTimeForGroup
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalBuff*                                 Buff                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              extraTime                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APegomastax_Character_BP_C::CalculateBuffTimeForGroup(class APrimalBuff* Buff, float* extraTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.CalculateBuffTimeForGroup");
		
		APegomastax_Character_BP_C_CalculateBuffTimeForGroup_Params params {};
		params.Buff = Buff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (extraTime != nullptr)
			*extraTime = params.extraTime;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.NextPickPocketingMode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APegomastax_Character_BP_C::NextPickPocketingMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.NextPickPocketingMode");
		
		APegomastax_Character_BP_C_NextPickPocketingMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.CanReturnToCharacter
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               returnPossible                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APegomastax_Character_BP_C::CanReturnToCharacter(class AShooterPlayerController* PlayerController, bool* returnPossible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.CanReturnToCharacter");
		
		APegomastax_Character_BP_C_CanReturnToCharacter_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (returnPossible != nullptr)
			*returnPossible = params.returnPossible;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.CanStealItem
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               canSteal                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APegomastax_Character_BP_C::CanStealItem(class UPrimalItem* Item, bool* canSteal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.CanStealItem");
		
		APegomastax_Character_BP_C_CanStealItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (canSteal != nullptr)
			*canSteal = params.canSteal;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.GoBackToOwner
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APegomastax_Character_BP_C::GoBackToOwner(class APawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.GoBackToOwner");
		
		APegomastax_Character_BP_C_GoBackToOwner_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.Get NumPegosInGroup
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            maxExtraItems                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APegomastax_Character_BP_C::GetNumPegosInGroup(int32_t* maxExtraItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.Get NumPegosInGroup");
		
		APegomastax_Character_BP_C_GetNumPegosInGroup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (maxExtraItems != nullptr)
			*maxExtraItems = params.maxExtraItems;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.IsValidItemForTaming
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 PrimalItem                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APegomastax_Character_BP_C::IsValidItemForTaming(class UPrimalItem* PrimalItem, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.IsValidItemForTaming");
		
		APegomastax_Character_BP_C_IsValidItemForTaming_Params params {};
		params.PrimalItem = PrimalItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPInventoryItemUsed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     InventoryItemObject                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APegomastax_Character_BP_C::BPInventoryItemUsed(class UObject* InventoryItemObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPInventoryItemUsed");
		
		APegomastax_Character_BP_C_BPInventoryItemUsed_Params params {};
		params.InventoryItemObject = InventoryItemObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.ReceiveAnyDamage
	 * 		Flags  -> (BlueprintAuthorityOnly, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UDamageType*                                 DamageType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AController*                                 InstigatedBy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APegomastax_Character_BP_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.ReceiveAnyDamage");
		
		APegomastax_Character_BP_C_ReceiveAnyDamage_Params params {};
		params.Damage = Damage;
		params.DamageType = DamageType;
		params.InstigatedBy = InstigatedBy;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BlueprintDrawFloatingHUD
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterHUD*                                 HUD                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterX                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterY                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DrawScale                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APegomastax_Character_BP_C::BlueprintDrawFloatingHUD(class AShooterHUD* HUD, float CenterX, float CenterY, float DrawScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BlueprintDrawFloatingHUD");
		
		APegomastax_Character_BP_C_BlueprintDrawFloatingHUD_Params params {};
		params.HUD = HUD;
		params.CenterX = CenterX;
		params.CenterY = CenterY;
		params.DrawScale = DrawScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool APegomastax_Character_BP_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPTryMultiUse");
		
		APegomastax_Character_BP_C_BPTryMultiUse_Params params {};
		params.ForPC = ForPC;
		params.UseIndex = UseIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> APegomastax_Character_BP_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPGetMultiUseEntries");
		
		APegomastax_Character_BP_C_BPGetMultiUseEntries_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MultiUseEntries != nullptr)
			*MultiUseEntries = params.MultiUseEntries;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.AddAffinityFromFood
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APegomastax_Character_BP_C::AddAffinityFromFood(class UPrimalItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.AddAffinityFromFood");
		
		APegomastax_Character_BP_C_AddAffinityFromFood_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.StealItemInSlot
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            slotNumber                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalCharacter*                            Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APegomastax_Character_BP_C::StealItemInSlot(int32_t slotNumber, class APrimalCharacter* Character, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.StealItemInSlot");
		
		APegomastax_Character_BP_C_StealItemInSlot_Params params {};
		params.slotNumber = slotNumber;
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.Can StealFromCharacter
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               canSteal                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APegomastax_Character_BP_C::CanStealFromCharacter(class APrimalCharacter* Character, bool* canSteal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.Can StealFromCharacter");
		
		APegomastax_Character_BP_C_CanStealFromCharacter_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (canSteal != nullptr)
			*canSteal = params.canSteal;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.StealRandom Items
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NumItems                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               includeHotBarItems                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              totalChance                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              chancePerItem                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalCharacter*                            Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               succeeded                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APegomastax_Character_BP_C::StealRandomItems(int32_t NumItems, bool includeHotBarItems, float totalChance, float chancePerItem, class APrimalCharacter* Character, bool* succeeded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.StealRandom Items");
		
		APegomastax_Character_BP_C_StealRandomItems_Params params {};
		params.NumItems = NumItems;
		params.includeHotBarItems = includeHotBarItems;
		params.totalChance = totalChance;
		params.chancePerItem = chancePerItem;
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (succeeded != nullptr)
			*succeeded = params.succeeded;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.Stop FleeingWithLoot
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APegomastax_Character_BP_C::StopFleeingWithLoot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.Stop FleeingWithLoot");
		
		APegomastax_Character_BP_C_StopFleeingWithLoot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.StartFleeingWithLoot
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APegomastax_Character_BP_C::StartFleeingWithLoot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.StartFleeingWithLoot");
		
		APegomastax_Character_BP_C_StartFleeingWithLoot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPShouldForceFlee
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool APegomastax_Character_BP_C::BPShouldForceFlee()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPShouldForceFlee");
		
		APegomastax_Character_BP_C_BPShouldForceFlee_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.Do StealItem
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            CharacterToStealFrom                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimalItem*                                 itemToSteal                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ConsumeItem                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APegomastax_Character_BP_C::DoStealItem(class APrimalCharacter* CharacterToStealFrom, class UPrimalItem* itemToSteal, bool ConsumeItem, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.Do StealItem");
		
		APegomastax_Character_BP_C_DoStealItem_Params params {};
		params.CharacterToStealFrom = CharacterToStealFrom;
		params.itemToSteal = itemToSteal;
		params.ConsumeItem = ConsumeItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.Steal from Character
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               succeeded                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APegomastax_Character_BP_C::StealfromCharacter(class APrimalCharacter* Character, bool* succeeded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.Steal from Character");
		
		APegomastax_Character_BP_C_StealfromCharacter_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (succeeded != nullptr)
			*succeeded = params.succeeded;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BlueprintAdjustOutputDamage
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OriginalDamageAmount                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      HitActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      OutDamageType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OutDamageImpulse                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float APegomastax_Character_BP_C::BlueprintAdjustOutputDamage(int32_t AttackIndex, float OriginalDamageAmount, class AActor* HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BlueprintAdjustOutputDamage");
		
		APegomastax_Character_BP_C_BlueprintAdjustOutputDamage_Params params {};
		params.AttackIndex = AttackIndex;
		params.OriginalDamageAmount = OriginalDamageAmount;
		params.HitActor = HitActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutDamageType != nullptr)
			*OutDamageType = params.OutDamageType;
		if (OutDamageImpulse != nullptr)
			*OutDamageImpulse = params.OutDamageImpulse;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.CreateWildInventory
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APegomastax_Character_BP_C::CreateWildInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.CreateWildInventory");
		
		APegomastax_Character_BP_C_CreateWildInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.OnJumped
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APegomastax_Character_BP_C::OnJumped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.OnJumped");
		
		APegomastax_Character_BP_C_OnJumped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPModifyHarvestingWeightsArray
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<float>                                      resourceWeightsIn                                          (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<class UPrimalItem*>                         resourceItems                                              (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<float>                                      resourceWeightsOut                                         (Parm, OutParm, ZeroConstructor)
	 */
	void APegomastax_Character_BP_C::BPModifyHarvestingWeightsArray(TArray<float>* resourceWeightsIn, TArray<class UPrimalItem*>* resourceItems, TArray<float>* resourceWeightsOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPModifyHarvestingWeightsArray");
		
		APegomastax_Character_BP_C_BPModifyHarvestingWeightsArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (resourceWeightsIn != nullptr)
			*resourceWeightsIn = params.resourceWeightsIn;
		if (resourceItems != nullptr)
			*resourceItems = params.resourceItems;
		if (resourceWeightsOut != nullptr)
			*resourceWeightsOut = params.resourceWeightsOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPModifyHarvestingQuantity
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              originalQuantity                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      resourceSelected                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float APegomastax_Character_BP_C::BPModifyHarvestingQuantity(float originalQuantity, class UClass* resourceSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPModifyHarvestingQuantity");
		
		APegomastax_Character_BP_C_BPModifyHarvestingQuantity_Params params {};
		params.originalQuantity = originalQuantity;
		params.resourceSelected = resourceSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BlueprintCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool APegomastax_Character_BP_C::BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BlueprintCanAttack");
		
		APegomastax_Character_BP_C_BlueprintCanAttack_Params params {};
		params.AttackIndex = AttackIndex;
		params.Distance = Distance;
		params.attackRangeOffset = attackRangeOffset;
		params.OtherTarget = OtherTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APegomastax_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.UserConstructionScript");
		
		APegomastax_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPUnstasis
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APegomastax_Character_BP_C::BPUnstasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.BPUnstasis");
		
		APegomastax_Character_BP_C_BPUnstasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.PlayHoldingForTime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Time                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              preDelay                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Idle                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               HideBag                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APegomastax_Character_BP_C::PlayHoldingForTime(float Time, float preDelay, bool Idle, bool HideBag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.PlayHoldingForTime");
		
		APegomastax_Character_BP_C_PlayHoldingForTime_Params params {};
		params.Time = Time;
		params.preDelay = preDelay;
		params.Idle = Idle;
		params.HideBag = HideBag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.HideBag
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void APegomastax_Character_BP_C::HideBag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.HideBag");
		
		APegomastax_Character_BP_C_HideBag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.StopHoldingAfterFleeing
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APegomastax_Character_BP_C::StopHoldingAfterFleeing(float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.StopHoldingAfterFleeing");
		
		APegomastax_Character_BP_C_StopHoldingAfterFleeing_Params params {};
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.StopHoldingImmediate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               stopIdleHoldingAnim                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               stopRunHoldingAnim                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               HideBag                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              idleBlendOutTime                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APegomastax_Character_BP_C::StopHoldingImmediate(bool stopIdleHoldingAnim, bool stopRunHoldingAnim, bool HideBag, float idleBlendOutTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.StopHoldingImmediate");
		
		APegomastax_Character_BP_C_StopHoldingImmediate_Params params {};
		params.stopIdleHoldingAnim = stopIdleHoldingAnim;
		params.stopRunHoldingAnim = stopRunHoldingAnim;
		params.HideBag = HideBag;
		params.idleBlendOutTime = idleBlendOutTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.PlayHoldingImmediate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Idle                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APegomastax_Character_BP_C::PlayHoldingImmediate(bool Idle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.PlayHoldingImmediate");
		
		APegomastax_Character_BP_C_PlayHoldingImmediate_Params params {};
		params.Idle = Idle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.ShowBag
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void APegomastax_Character_BP_C::ShowBag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.ShowBag");
		
		APegomastax_Character_BP_C_ShowBag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.ShowBagAfterDelay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APegomastax_Character_BP_C::ShowBagAfterDelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.ShowBagAfterDelay");
		
		APegomastax_Character_BP_C_ShowBagAfterDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.FleeAfterTime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APegomastax_Character_BP_C::FleeAfterTime(float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.FleeAfterTime");
		
		APegomastax_Character_BP_C_FleeAfterTime_Params params {};
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.PlayCombinedHolding
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              timeBeforeRun                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              preDelay                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               HideBag                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              runHoldDuration                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APawn*                                       Owner                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APegomastax_Character_BP_C::PlayCombinedHolding(float timeBeforeRun, float preDelay, bool HideBag, float runHoldDuration, class APawn* Owner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.PlayCombinedHolding");
		
		APegomastax_Character_BP_C_PlayCombinedHolding_Params params {};
		params.timeBeforeRun = timeBeforeRun;
		params.preDelay = preDelay;
		params.HideBag = HideBag;
		params.runHoldDuration = runHoldDuration;
		params.Owner = Owner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.ExecuteUbergraph_Pegomastax_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APegomastax_Character_BP_C::ExecuteUbergraph_Pegomastax_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Pegomastax_Character_BP.Pegomastax_Character_BP_C.ExecuteUbergraph_Pegomastax_Character_BP");
		
		APegomastax_Character_BP_C_ExecuteUbergraph_Pegomastax_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APegomastax_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APegomastax_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Pegomastax_Character_BP.Pegomastax_Character_BP_C");
		return ptr;
	}

}


