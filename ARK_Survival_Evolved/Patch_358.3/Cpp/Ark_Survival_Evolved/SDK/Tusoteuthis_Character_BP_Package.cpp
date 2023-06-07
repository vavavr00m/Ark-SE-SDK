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
	 * 		Name   -> Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.GetSocketForMeleeTraceForHitBlockers
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class FName ATusoteuthis_Character_BP_C::GetSocketForMeleeTraceForHitBlockers(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.GetSocketForMeleeTraceForHitBlockers");
		
		ATusoteuthis_Character_BP_C_GetSocketForMeleeTraceForHitBlockers_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.BPDidClearCarriedCharacter
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            PreviousCarriedCharacter                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATusoteuthis_Character_BP_C::BPDidClearCarriedCharacter(class APrimalCharacter* PreviousCarriedCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.BPDidClearCarriedCharacter");
		
		ATusoteuthis_Character_BP_C_BPDidClearCarriedCharacter_Params params {};
		params.PreviousCarriedCharacter = PreviousCarriedCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.BPDidSetCarriedCharacter
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            PreviousCarriedCharacter                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATusoteuthis_Character_BP_C::BPDidSetCarriedCharacter(class APrimalCharacter* PreviousCarriedCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.BPDidSetCarriedCharacter");
		
		ATusoteuthis_Character_BP_C_BPDidSetCarriedCharacter_Params params {};
		params.PreviousCarriedCharacter = PreviousCarriedCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATusoteuthis_Character_BP_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.BPTryMultiUse");
		
		ATusoteuthis_Character_BP_C_BPTryMultiUse_Params params {};
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
	 * 		Name   -> Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> ATusoteuthis_Character_BP_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.BPGetMultiUseEntries");
		
		ATusoteuthis_Character_BP_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.PrepareForCrushingPrey
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATusoteuthis_Character_BP_C::PrepareForCrushingPrey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.PrepareForCrushingPrey");
		
		ATusoteuthis_Character_BP_C_PrepareForCrushingPrey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.BPNotifySetRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderSetting                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATusoteuthis_Character_BP_C::BPNotifySetRider(class AShooterCharacter* RiderSetting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.BPNotifySetRider");
		
		ATusoteuthis_Character_BP_C_BPNotifySetRider_Params params {};
		params.RiderSetting = RiderSetting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.BPNotifyClearRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderClearing                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATusoteuthis_Character_BP_C::BPNotifyClearRider(class AShooterCharacter* RiderClearing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.BPNotifyClearRider");
		
		ATusoteuthis_Character_BP_C_BPNotifyClearRider_Params params {};
		params.RiderClearing = RiderClearing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.BPSetupTamed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bWasJustTamed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATusoteuthis_Character_BP_C::BPSetupTamed(bool bWasJustTamed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.BPSetupTamed");
		
		ATusoteuthis_Character_BP_C_BPSetupTamed_Params params {};
		params.bWasJustTamed = bWasJustTamed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.DoesPreyEscape
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATusoteuthis_Character_BP_C::DoesPreyEscape(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.DoesPreyEscape");
		
		ATusoteuthis_Character_BP_C_DoesPreyEscape_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.CanGrab
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATusoteuthis_Character_BP_C::CanGrab(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.CanGrab");
		
		ATusoteuthis_Character_BP_C_CanGrab_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.BPFedWakingTameEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATusoteuthis_Character_BP_C::BPFedWakingTameEvent(class APlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.BPFedWakingTameEvent");
		
		ATusoteuthis_Character_BP_C_BPFedWakingTameEvent_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.GetDefaultDino
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class ATusoteuthis_Character_BP_C*                 Ref                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATusoteuthis_Character_BP_C::GetDefaultDino(class ATusoteuthis_Character_BP_C** Ref)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.GetDefaultDino");
		
		ATusoteuthis_Character_BP_C_GetDefaultDino_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ref != nullptr)
			*Ref = params.Ref;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.OnRep_UTurnTargetRot
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATusoteuthis_Character_BP_C::OnRep_UTurnTargetRot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.OnRep_UTurnTargetRot");
		
		ATusoteuthis_Character_BP_C_OnRep_UTurnTargetRot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimNotify*                                 AnimNotifyObject                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATusoteuthis_Character_BP_C::BlueprintAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.BlueprintAnimNotifyCustomEvent");
		
		ATusoteuthis_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params {};
		params.CustomEventName = CustomEventName;
		params.MeshComp = MeshComp;
		params.Animation = Animation;
		params.AnimNotifyObject = AnimNotifyObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.CheckForIsCrushingPrey
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATusoteuthis_Character_BP_C::CheckForIsCrushingPrey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.CheckForIsCrushingPrey");
		
		ATusoteuthis_Character_BP_C_CheckForIsCrushingPrey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.Update MovementByTurnState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATusoteuthis_Character_BP_C::UpdateMovementByTurnState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.Update MovementByTurnState");
		
		ATusoteuthis_Character_BP_C_UpdateMovementByTurnState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.OnRep_bIsCrushingPrey
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATusoteuthis_Character_BP_C::OnRep_bIsCrushingPrey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.OnRep_bIsCrushingPrey");
		
		ATusoteuthis_Character_BP_C_OnRep_bIsCrushingPrey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.BPDoAttack
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATusoteuthis_Character_BP_C::BPDoAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.BPDoAttack");
		
		ATusoteuthis_Character_BP_C_BPDoAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.CheckForResetTurn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATusoteuthis_Character_BP_C::CheckForResetTurn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.CheckForResetTurn");
		
		ATusoteuthis_Character_BP_C_CheckForResetTurn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.BPTimerServer
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATusoteuthis_Character_BP_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.BPTimerServer");
		
		ATusoteuthis_Character_BP_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.CanTargetBeCrushed
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATusoteuthis_Character_BP_C::CanTargetBeCrushed(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.CanTargetBeCrushed");
		
		ATusoteuthis_Character_BP_C_CanTargetBeCrushed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.ResetTurnState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ForceReset                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATusoteuthis_Character_BP_C::ResetTurnState(bool ForceReset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.ResetTurnState");
		
		ATusoteuthis_Character_BP_C_ResetTurnState_Params params {};
		params.ForceReset = ForceReset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.TurnAround
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               newTurnState                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATusoteuthis_Character_BP_C::TurnAround(bool newTurnState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.TurnAround");
		
		ATusoteuthis_Character_BP_C_TurnAround_Params params {};
		params.newTurnState = newTurnState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.NetSetIsTurnedAround
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               forceSuccess                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATusoteuthis_Character_BP_C::NetSetIsTurnedAround(bool NewValue, bool forceSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.NetSetIsTurnedAround");
		
		ATusoteuthis_Character_BP_C_NetSetIsTurnedAround_Params params {};
		params.NewValue = NewValue;
		params.forceSuccess = forceSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.OnRep_bIsTurnedAround
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATusoteuthis_Character_BP_C::OnRep_bIsTurnedAround()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.OnRep_bIsTurnedAround");
		
		ATusoteuthis_Character_BP_C_OnRep_bIsTurnedAround_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.TryCrushingPrey
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATusoteuthis_Character_BP_C::TryCrushingPrey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.TryCrushingPrey");
		
		ATusoteuthis_Character_BP_C_TryCrushingPrey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.RemoveCarryBuffFromPrey
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATusoteuthis_Character_BP_C::RemoveCarryBuffFromPrey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.RemoveCarryBuffFromPrey");
		
		ATusoteuthis_Character_BP_C_RemoveCarryBuffFromPrey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.SyphonHealthFromPrey
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATusoteuthis_Character_BP_C::SyphonHealthFromPrey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.SyphonHealthFromPrey");
		
		ATusoteuthis_Character_BP_C_SyphonHealthFromPrey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.DropPrey
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               playDropAnim                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               forceSuccess                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATusoteuthis_Character_BP_C::DropPrey(bool playDropAnim, bool forceSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.DropPrey");
		
		ATusoteuthis_Character_BP_C_DropPrey_Params params {};
		params.playDropAnim = playDropAnim;
		params.forceSuccess = forceSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.IsCrushingValidCharacter
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATusoteuthis_Character_BP_C::IsCrushingValidCharacter(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.IsCrushingValidCharacter");
		
		ATusoteuthis_Character_BP_C_IsCrushingValidCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.BlueprintCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATusoteuthis_Character_BP_C::BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.BlueprintCanAttack");
		
		ATusoteuthis_Character_BP_C_BlueprintCanAttack_Params params {};
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
	 * 		Name   -> Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.BlueprintCanRiderAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATusoteuthis_Character_BP_C::BlueprintCanRiderAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.BlueprintCanRiderAttack");
		
		ATusoteuthis_Character_BP_C_BlueprintCanRiderAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.ReceiveAnyDamage
	 * 		Flags  -> (BlueprintAuthorityOnly, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UDamageType*                                 DamageType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AController*                                 InstigatedBy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATusoteuthis_Character_BP_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.ReceiveAnyDamage");
		
		ATusoteuthis_Character_BP_C_ReceiveAnyDamage_Params params {};
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
	 * 		Name   -> Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATusoteuthis_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.UserConstructionScript");
		
		ATusoteuthis_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.TurnMeshAround__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATusoteuthis_Character_BP_C::TurnMeshAround__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.TurnMeshAround__FinishedFunc");
		
		ATusoteuthis_Character_BP_C_TurnMeshAround__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.TurnMeshAround__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATusoteuthis_Character_BP_C::TurnMeshAround__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.TurnMeshAround__UpdateFunc");
		
		ATusoteuthis_Character_BP_C_TurnMeshAround__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.TurnMeshAround__Turnt__EventFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATusoteuthis_Character_BP_C::TurnMeshAround__Turnt__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.TurnMeshAround__Turnt__EventFunc");
		
		ATusoteuthis_Character_BP_C_TurnMeshAround__Turnt__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.TurnActorAround__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATusoteuthis_Character_BP_C::TurnActorAround__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.TurnActorAround__FinishedFunc");
		
		ATusoteuthis_Character_BP_C_TurnActorAround__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.TurnActorAround__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATusoteuthis_Character_BP_C::TurnActorAround__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.TurnActorAround__UpdateFunc");
		
		ATusoteuthis_Character_BP_C_TurnActorAround__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.InpActEvt_Jump_K2Node_InputActionEvent_268
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATusoteuthis_Character_BP_C::InpActEvt_Jump_K2Node_InputActionEvent_268()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.InpActEvt_Jump_K2Node_InputActionEvent_268");
		
		ATusoteuthis_Character_BP_C_InpActEvt_Jump_K2Node_InputActionEvent_268_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.AnimNotify_ParalyzePrey
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATusoteuthis_Character_BP_C::AnimNotify_ParalyzePrey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.AnimNotify_ParalyzePrey");
		
		ATusoteuthis_Character_BP_C_AnimNotify_ParalyzePrey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.InkAttackFX
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATusoteuthis_Character_BP_C::InkAttackFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.InkAttackFX");
		
		ATusoteuthis_Character_BP_C_InkAttackFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.PlayAttackTurnTimeline
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATusoteuthis_Character_BP_C::PlayAttackTurnTimeline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.PlayAttackTurnTimeline");
		
		ATusoteuthis_Character_BP_C_PlayAttackTurnTimeline_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATusoteuthis_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.ReceiveBeginPlay");
		
		ATusoteuthis_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.Multi_UpdateMovementByTurnState
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATusoteuthis_Character_BP_C::Multi_UpdateMovementByTurnState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.Multi_UpdateMovementByTurnState");
		
		ATusoteuthis_Character_BP_C_Multi_UpdateMovementByTurnState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.AnimNotify_DamagePrey
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATusoteuthis_Character_BP_C::AnimNotify_DamagePrey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.AnimNotify_DamagePrey");
		
		ATusoteuthis_Character_BP_C_AnimNotify_DamagePrey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.PlayUTurnTimeline
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATusoteuthis_Character_BP_C::PlayUTurnTimeline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.PlayUTurnTimeline");
		
		ATusoteuthis_Character_BP_C_PlayUTurnTimeline_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.Server_JumpPressed
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ATusoteuthis_Character_BP_C::Server_JumpPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.Server_JumpPressed");
		
		ATusoteuthis_Character_BP_C_Server_JumpPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.UpdateMovementAfterDelay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATusoteuthis_Character_BP_C::UpdateMovementAfterDelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.UpdateMovementAfterDelay");
		
		ATusoteuthis_Character_BP_C_UpdateMovementAfterDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.AnimNotify_GrabAllies
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATusoteuthis_Character_BP_C::AnimNotify_GrabAllies()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.AnimNotify_GrabAllies");
		
		ATusoteuthis_Character_BP_C_AnimNotify_GrabAllies_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.ExecuteUbergraph_Tusoteuthis_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATusoteuthis_Character_BP_C::ExecuteUbergraph_Tusoteuthis_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C.ExecuteUbergraph_Tusoteuthis_Character_BP");
		
		ATusoteuthis_Character_BP_C_ExecuteUbergraph_Tusoteuthis_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATusoteuthis_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATusoteuthis_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Tusoteuthis_Character_BP.Tusoteuthis_Character_BP_C");
		return ptr;
	}

}


