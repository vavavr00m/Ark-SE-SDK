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
	 * 		Name   -> Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPOnAnimPlayedNotify
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
	void AHyaenodon_Character_BP_C::BPOnAnimPlayedNotify(class UAnimMontage* AnimMontage, float InPlayRate, const class FName& StartSectionName, bool bReplicate, bool bReplicateToOwner, bool bForceTickPoseAndServerUpdateMesh, bool bForceTickPoseOnServer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPOnAnimPlayedNotify");
		
		AHyaenodon_Character_BP_C_BPOnAnimPlayedNotify_Params params {};
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
	 * 		Name   -> Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.Has Conflict with AI
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewParam1                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHyaenodon_Character_BP_C::HasConflictwithAI(bool* NewParam1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.Has Conflict with AI");
		
		AHyaenodon_Character_BP_C_HasConflictwithAI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam1 != nullptr)
			*NewParam1 = params.NewParam1;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.ShouldStandUp
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHyaenodon_Character_BP_C::ShouldStandUp(bool* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.ShouldStandUp");
		
		AHyaenodon_Character_BP_C_ShouldStandUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.CanStandUp
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHyaenodon_Character_BP_C::CanStandUp(bool* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.CanStandUp");
		
		AHyaenodon_Character_BP_C_CanStandUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.Can SitDown
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHyaenodon_Character_BP_C::CanSitDown(bool* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.Can SitDown");
		
		AHyaenodon_Character_BP_C_CanSitDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPNotifyBumpedPawn
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            BumpedPawn                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHyaenodon_Character_BP_C::BPNotifyBumpedPawn(class APrimalCharacter* BumpedPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPNotifyBumpedPawn");
		
		AHyaenodon_Character_BP_C_BPNotifyBumpedPawn_Params params {};
		params.BumpedPawn = BumpedPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPOnMovementModeChangedNotify
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      PreviousCustomMode                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHyaenodon_Character_BP_C::BPOnMovementModeChangedNotify(EMovementMode PrevMovementMode, unsigned char PreviousCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPOnMovementModeChangedNotify");
		
		AHyaenodon_Character_BP_C_BPOnMovementModeChangedNotify_Params params {};
		params.PrevMovementMode = PrevMovementMode;
		params.PreviousCustomMode = PreviousCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.OnJumped
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHyaenodon_Character_BP_C::OnJumped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.OnJumped");
		
		AHyaenodon_Character_BP_C_OnJumped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPShouldCancelDoAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AHyaenodon_Character_BP_C::BPShouldCancelDoAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPShouldCancelDoAttack");
		
		AHyaenodon_Character_BP_C_BPShouldCancelDoAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.OnSaddleUnequipped
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHyaenodon_Character_BP_C::OnSaddleUnequipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.OnSaddleUnequipped");
		
		AHyaenodon_Character_BP_C_OnSaddleUnequipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.OnSaddleEquipped
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AHyaenodon_Character_BP_C::OnSaddleEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.OnSaddleEquipped");
		
		AHyaenodon_Character_BP_C_OnSaddleEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.Reset Taming
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ForceReset                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHyaenodon_Character_BP_C::ResetTaming(bool ForceReset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.Reset Taming");
		
		AHyaenodon_Character_BP_C_ResetTaming_Params params {};
		params.ForceReset = ForceReset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.AttemptToFleeFromActor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ActorToCheck                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsCurrentTargetDangerous                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               DidFlee                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHyaenodon_Character_BP_C::AttemptToFleeFromActor(class AActor* ActorToCheck, bool IsCurrentTargetDangerous, bool* DidFlee)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.AttemptToFleeFromActor");
		
		AHyaenodon_Character_BP_C_AttemptToFleeFromActor_Params params {};
		params.ActorToCheck = ActorToCheck;
		params.IsCurrentTargetDangerous = IsCurrentTargetDangerous;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DidFlee != nullptr)
			*DidFlee = params.DidFlee;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.IsActorLowOnResources
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ActorToCheck                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsLow                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHyaenodon_Character_BP_C::IsActorLowOnResources(class AActor* ActorToCheck, bool* IsLow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.IsActorLowOnResources");
		
		AHyaenodon_Character_BP_C_IsActorLowOnResources_Params params {};
		params.ActorToCheck = ActorToCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsLow != nullptr)
			*IsLow = params.IsLow;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.CanFleeFromTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      TargetToFleeFrom                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DangerousMultiplier                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CurrentTargetIsDangerous                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CanFlee                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHyaenodon_Character_BP_C::CanFleeFromTarget(class AActor* TargetToFleeFrom, float DangerousMultiplier, bool CurrentTargetIsDangerous, bool* CanFlee)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.CanFleeFromTarget");
		
		AHyaenodon_Character_BP_C_CanFleeFromTarget_Params params {};
		params.TargetToFleeFrom = TargetToFleeFrom;
		params.DangerousMultiplier = DangerousMultiplier;
		params.CurrentTargetIsDangerous = CurrentTargetIsDangerous;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanFlee != nullptr)
			*CanFlee = params.CanFlee;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPUnstasis
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHyaenodon_Character_BP_C::BPUnstasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPUnstasis");
		
		AHyaenodon_Character_BP_C_BPUnstasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              IncomingDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (Parm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  PointHitInfo                                               (Parm)
	 */
	float AHyaenodon_Character_BP_C::BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPAdjustDamage");
		
		AHyaenodon_Character_BP_C_BPAdjustDamage_Params params {};
		params.IncomingDamage = IncomingDamage;
		params.TheDamageEvent = TheDamageEvent;
		params.EventInstigator = EventInstigator;
		params.DamageCauser = DamageCauser;
		params.bIsPointDamage = bIsPointDamage;
		params.PointHitInfo = PointHitInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.GatherPack
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHyaenodon_Character_BP_C::GatherPack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.GatherPack");
		
		AHyaenodon_Character_BP_C_GatherPack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPCanTargetCorpse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AHyaenodon_Character_BP_C::BPCanTargetCorpse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPCanTargetCorpse");
		
		AHyaenodon_Character_BP_C_BPCanTargetCorpse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.Get Threat Multiplier for Target
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      TargetToDetermine                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Multiplier                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHyaenodon_Character_BP_C::GetThreatMultiplierforTarget(class AActor* TargetToDetermine, float* Multiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.Get Threat Multiplier for Target");
		
		AHyaenodon_Character_BP_C_GetThreatMultiplierforTarget_Params params {};
		params.TargetToDetermine = TargetToDetermine;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Multiplier != nullptr)
			*Multiplier = params.Multiplier;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.TimeSinceLastTookDamageFromPlayer
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsStillAggrod                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHyaenodon_Character_BP_C::TimeSinceLastTookDamageFromPlayer(bool* IsStillAggrod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.TimeSinceLastTookDamageFromPlayer");
		
		AHyaenodon_Character_BP_C_TimeSinceLastTookDamageFromPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsStillAggrod != nullptr)
			*IsStillAggrod = params.IsStillAggrod;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPSetupTamed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bWasJustTamed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHyaenodon_Character_BP_C::BPSetupTamed(bool bWasJustTamed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPSetupTamed");
		
		AHyaenodon_Character_BP_C_BPSetupTamed_Params params {};
		params.bWasJustTamed = bWasJustTamed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.ReceiveAnyDamage
	 * 		Flags  -> (BlueprintAuthorityOnly, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UDamageType*                                 DamageType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AController*                                 InstigatedBy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHyaenodon_Character_BP_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.ReceiveAnyDamage");
		
		AHyaenodon_Character_BP_C_ReceiveAnyDamage_Params params {};
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
	 * 		Name   -> Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BlueprintCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AHyaenodon_Character_BP_C::BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BlueprintCanAttack");
		
		AHyaenodon_Character_BP_C_BlueprintCanAttack_Params params {};
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
	 * 		Name   -> Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.Is Actor Dangerous
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ActorToCheck                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               SkipIgnoreActorList                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsDangerous                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DangerMultiplier                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHyaenodon_Character_BP_C::IsActorDangerous(class AActor* ActorToCheck, bool SkipIgnoreActorList, bool* IsDangerous, float* DangerMultiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.Is Actor Dangerous");
		
		AHyaenodon_Character_BP_C_IsActorDangerous_Params params {};
		params.ActorToCheck = ActorToCheck;
		params.SkipIgnoreActorList = SkipIgnoreActorList;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsDangerous != nullptr)
			*IsDangerous = params.IsDangerous;
		if (DangerMultiplier != nullptr)
			*DangerMultiplier = params.DangerMultiplier;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPTimerServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHyaenodon_Character_BP_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPTimerServer");
		
		AHyaenodon_Character_BP_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.Pack Flee for Duration
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DurationOfFlee                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      TargetToFleeFrom                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               HavePackFlee                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHyaenodon_Character_BP_C::PackFleeforDuration(float DurationOfFlee, class AActor* TargetToFleeFrom, bool HavePackFlee)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.Pack Flee for Duration");
		
		AHyaenodon_Character_BP_C_PackFleeforDuration_Params params {};
		params.DurationOfFlee = DurationOfFlee;
		params.TargetToFleeFrom = TargetToFleeFrom;
		params.HavePackFlee = HavePackFlee;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.Flee For Duration
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DurationOfFlee                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      TargetToFleeFrom                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHyaenodon_Character_BP_C::FleeForDuration(float DurationOfFlee, class AActor* TargetToFleeFrom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.Flee For Duration");
		
		AHyaenodon_Character_BP_C_FleeForDuration_Params params {};
		params.DurationOfFlee = DurationOfFlee;
		params.TargetToFleeFrom = TargetToFleeFrom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.OnWildPet
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           petterPC                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHyaenodon_Character_BP_C::OnWildPet(class APlayerController* petterPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.OnWildPet");
		
		AHyaenodon_Character_BP_C_OnWildPet_Params params {};
		params.petterPC = petterPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPShouldForceFlee
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AHyaenodon_Character_BP_C::BPShouldForceFlee()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPShouldForceFlee");
		
		AHyaenodon_Character_BP_C_BPShouldForceFlee_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.IsInTamingFriendlyState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               tamingCanOccur                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               leaderIsNearby                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHyaenodon_Character_BP_C::IsInTamingFriendlyState(bool* tamingCanOccur, bool* leaderIsNearby)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.IsInTamingFriendlyState");
		
		AHyaenodon_Character_BP_C_IsInTamingFriendlyState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (tamingCanOccur != nullptr)
			*tamingCanOccur = params.tamingCanOccur;
		if (leaderIsNearby != nullptr)
			*leaderIsNearby = params.leaderIsNearby;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> AHyaenodon_Character_BP_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPGetMultiUseEntries");
		
		AHyaenodon_Character_BP_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AHyaenodon_Character_BP_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPTryMultiUse");
		
		AHyaenodon_Character_BP_C_BPTryMultiUse_Params params {};
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
	 * 		Name   -> Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.OnEatFood
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 foodItem                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHyaenodon_Character_BP_C::OnEatFood(class UPrimalItem* foodItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.OnEatFood");
		
		AHyaenodon_Character_BP_C_OnEatFood_Params params {};
		params.foodItem = foodItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPTamedConsumeFoodItem
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 foodItem                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHyaenodon_Character_BP_C::BPTamedConsumeFoodItem(class UPrimalItem* foodItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPTamedConsumeFoodItem");
		
		AHyaenodon_Character_BP_C_BPTamedConsumeFoodItem_Params params {};
		params.foodItem = foodItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPUntamedConsumeFoodItem
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 foodItem                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHyaenodon_Character_BP_C::BPUntamedConsumeFoodItem(class UPrimalItem* foodItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.BPUntamedConsumeFoodItem");
		
		AHyaenodon_Character_BP_C_BPUntamedConsumeFoodItem_Params params {};
		params.foodItem = foodItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHyaenodon_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.UserConstructionScript");
		
		AHyaenodon_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHyaenodon_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.ReceiveBeginPlay");
		
		AHyaenodon_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.OnDied_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            DiedCharacter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHyaenodon_Character_BP_C::OnDied_Event(class APrimalCharacter* DiedCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.OnDied_Event");
		
		AHyaenodon_Character_BP_C_OnDied_Event_Params params {};
		params.DiedCharacter = DiedCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.IncreaseWeight_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              newWeight                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHyaenodon_Character_BP_C::IncreaseWeight_Multicast(float newWeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.IncreaseWeight_Multicast");
		
		AHyaenodon_Character_BP_C_IncreaseWeight_Multicast_Params params {};
		params.newWeight = newWeight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.ResetWeight_Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              newWeight                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHyaenodon_Character_BP_C::ResetWeight_Multicast(float newWeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.ResetWeight_Multicast");
		
		AHyaenodon_Character_BP_C_ResetWeight_Multicast_Params params {};
		params.newWeight = newWeight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.RestoreStartledAfterDelay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHyaenodon_Character_BP_C::RestoreStartledAfterDelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.RestoreStartledAfterDelay");
		
		AHyaenodon_Character_BP_C_RestoreStartledAfterDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.DropAfterDelay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHyaenodon_Character_BP_C::DropAfterDelay(float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.DropAfterDelay");
		
		AHyaenodon_Character_BP_C_DropAfterDelay_Params params {};
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.SetIsJumpingAfterDelay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHyaenodon_Character_BP_C::SetIsJumpingAfterDelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.SetIsJumpingAfterDelay");
		
		AHyaenodon_Character_BP_C_SetIsJumpingAfterDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.SitDown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               PlayAnim                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHyaenodon_Character_BP_C::SitDown(bool PlayAnim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.SitDown");
		
		AHyaenodon_Character_BP_C_SitDown_Params params {};
		params.PlayAnim = PlayAnim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.TryStandUp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHyaenodon_Character_BP_C::TryStandUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.TryStandUp");
		
		AHyaenodon_Character_BP_C_TryStandUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.TrySitDown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHyaenodon_Character_BP_C::TrySitDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.TrySitDown");
		
		AHyaenodon_Character_BP_C_TrySitDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.standUp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHyaenodon_Character_BP_C::standUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.standUp");
		
		AHyaenodon_Character_BP_C_standUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.QuickSitDown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHyaenodon_Character_BP_C::QuickSitDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.QuickSitDown");
		
		AHyaenodon_Character_BP_C_QuickSitDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.ExecuteUbergraph_Hyaenodon_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AHyaenodon_Character_BP_C::ExecuteUbergraph_Hyaenodon_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Hyaenodon_Character_BP.Hyaenodon_Character_BP_C.ExecuteUbergraph_Hyaenodon_Character_BP");
		
		AHyaenodon_Character_BP_C_ExecuteUbergraph_Hyaenodon_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHyaenodon_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHyaenodon_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Hyaenodon_Character_BP.Hyaenodon_Character_BP_C");
		return ptr;
	}

}


