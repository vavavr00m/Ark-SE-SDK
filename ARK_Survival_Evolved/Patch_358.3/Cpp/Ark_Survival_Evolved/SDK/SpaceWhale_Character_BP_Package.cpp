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
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ForceTeleport
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceWhale_Character_BP_C::ForceTeleport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ForceTeleport");
		
		ASpaceWhale_Character_BP_C_ForceTeleport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.GetSocketForMeleeTraceForHitBlockers
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class FName ASpaceWhale_Character_BP_C::GetSocketForMeleeTraceForHitBlockers(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.GetSocketForMeleeTraceForHitBlockers");
		
		ASpaceWhale_Character_BP_C_GetSocketForMeleeTraceForHitBlockers_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPNotifyToggleHUD
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bHudHidden                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceWhale_Character_BP_C::BPNotifyToggleHUD(bool bHudHidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPNotifyToggleHUD");
		
		ASpaceWhale_Character_BP_C_BPNotifyToggleHUD_Params params {};
		params.bHudHidden = bHudHidden;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPModifyDesiredRotation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    InDesiredRotation                                          (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    OutDesiredRotation                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ASpaceWhale_Character_BP_C::BPModifyDesiredRotation(float DeltaTime, struct FRotator* InDesiredRotation, struct FRotator* OutDesiredRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPModifyDesiredRotation");
		
		ASpaceWhale_Character_BP_C_BPModifyDesiredRotation_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InDesiredRotation != nullptr)
			*InDesiredRotation = params.InDesiredRotation;
		if (OutDesiredRotation != nullptr)
			*OutDesiredRotation = params.OutDesiredRotation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPCustomIsRelevantForClient
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ASpaceWhale_Character_BP_C::BPCustomIsRelevantForClient(class APlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPCustomIsRelevantForClient");
		
		ASpaceWhale_Character_BP_C_BPCustomIsRelevantForClient_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPSetupTamed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bWasJustTamed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceWhale_Character_BP_C::BPSetupTamed(bool bWasJustTamed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPSetupTamed");
		
		ASpaceWhale_Character_BP_C_BPSetupTamed_Params params {};
		params.bWasJustTamed = bWasJustTamed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.DestroyHudWidget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               DestroyNow                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceWhale_Character_BP_C::DestroyHudWidget(bool DestroyNow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.DestroyHudWidget");
		
		ASpaceWhale_Character_BP_C_DestroyHudWidget_Params params {};
		params.DestroyNow = DestroyNow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPNotifySetRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderSetting                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceWhale_Character_BP_C::BPNotifySetRider(class AShooterCharacter* RiderSetting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPNotifySetRider");
		
		ASpaceWhale_Character_BP_C_BPNotifySetRider_Params params {};
		params.RiderSetting = RiderSetting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.PlayTurretRotationSound
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            InputPin                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceWhale_Character_BP_C::PlayTurretRotationSound(int32_t InputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.PlayTurretRotationSound");
		
		ASpaceWhale_Character_BP_C_PlayTurretRotationSound_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.CalculateUpshiftCameraOffset
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Offset                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceWhale_Character_BP_C::CalculateUpshiftCameraOffset(float* Offset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.CalculateUpshiftCameraOffset");
		
		ASpaceWhale_Character_BP_C_CalculateUpshiftCameraOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Offset != nullptr)
			*Offset = params.Offset;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              IncomingDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (Parm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  PointHitInfo                                               (Parm)
	 */
	float ASpaceWhale_Character_BP_C::BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPAdjustDamage");
		
		ASpaceWhale_Character_BP_C_BPAdjustDamage_Params params {};
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
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BP_PreventMovementMode
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      NewMovementMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      NewCustomMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ASpaceWhale_Character_BP_C::BP_PreventMovementMode(EMovementMode NewMovementMode, unsigned char NewCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BP_PreventMovementMode");
		
		ASpaceWhale_Character_BP_C_BP_PreventMovementMode_Params params {};
		params.NewMovementMode = NewMovementMode;
		params.NewCustomMode = NewCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BP_OnSetDeath
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceWhale_Character_BP_C::BP_OnSetDeath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BP_OnSetDeath");
		
		ASpaceWhale_Character_BP_C_BP_OnSetDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdateBombProduction
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceWhale_Character_BP_C::UpdateBombProduction(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdateBombProduction");
		
		ASpaceWhale_Character_BP_C_UpdateBombProduction_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.CurrentTeleportCost
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            NumCharacters                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ASpaceWhale_Character_BP_C::CurrentTeleportCost(int32_t NumCharacters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.CurrentTeleportCost");
		
		ASpaceWhale_Character_BP_C_CurrentTeleportCost_Params params {};
		params.NumCharacters = NumCharacters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BreakGrapples
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceWhale_Character_BP_C::BreakGrapples()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BreakGrapples");
		
		ASpaceWhale_Character_BP_C_BreakGrapples_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.SpawnDownShiftBurst
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceWhale_Character_BP_C::SpawnDownShiftBurst()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.SpawnDownShiftBurst");
		
		ASpaceWhale_Character_BP_C_SpawnDownShiftBurst_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.GetSaddleColor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            theRegion                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FLinearColor ASpaceWhale_Character_BP_C::GetSaddleColor(int32_t theRegion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.GetSaddleColor");
		
		ASpaceWhale_Character_BP_C_GetSaddleColor_Params params {};
		params.theRegion = theRegion;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdateTeleportingCharacters
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class APrimalCharacter*>                    TeleportingCharacters                                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void ASpaceWhale_Character_BP_C::UpdateTeleportingCharacters(TArray<class APrimalCharacter*>* TeleportingCharacters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdateTeleportingCharacters");
		
		ASpaceWhale_Character_BP_C_UpdateTeleportingCharacters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TeleportingCharacters != nullptr)
			*TeleportingCharacters = params.TeleportingCharacters;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.Local Request Bomb Targeting
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewBombTargetingMode                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceWhale_Character_BP_C::LocalRequestBombTargeting(bool NewBombTargetingMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.Local Request Bomb Targeting");
		
		ASpaceWhale_Character_BP_C_LocalRequestBombTargeting_Params params {};
		params.NewBombTargetingMode = NewBombTargetingMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdateHyperdriveTarget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceWhale_Character_BP_C::UpdateHyperdriveTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdateHyperdriveTarget");
		
		ASpaceWhale_Character_BP_C_UpdateHyperdriveTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdateBombing
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceWhale_Character_BP_C::UpdateBombing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdateBombing");
		
		ASpaceWhale_Character_BP_C_UpdateBombing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.DropBomb
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceWhale_Character_BP_C::DropBomb()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.DropBomb");
		
		ASpaceWhale_Character_BP_C_DropBomb_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPHandleOnStopFire
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ASpaceWhale_Character_BP_C::BPHandleOnStopFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPHandleOnStopFire");
		
		ASpaceWhale_Character_BP_C_BPHandleOnStopFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ShouldPlayBlinkEffect
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               ShouldPlay                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceWhale_Character_BP_C::ShouldPlayBlinkEffect(bool* ShouldPlay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ShouldPlayBlinkEffect");
		
		ASpaceWhale_Character_BP_C_ShouldPlayBlinkEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldPlay != nullptr)
			*ShouldPlay = params.ShouldPlay;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.SetSaddleVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewVisibility                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceWhale_Character_BP_C::SetSaddleVisibility(bool bNewVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.SetSaddleVisibility");
		
		ASpaceWhale_Character_BP_C_SetSaddleVisibility_Params params {};
		params.bNewVisibility = bNewVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ResetMaterials
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceWhale_Character_BP_C::ResetMaterials()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ResetMaterials");
		
		ASpaceWhale_Character_BP_C_ResetMaterials_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPAnimNotifyCustomState_Begin
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              TotalDuration                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimNotifyState*                            AnimNotifyObject                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceWhale_Character_BP_C::BPAnimNotifyCustomState_Begin(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, class UAnimNotifyState* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPAnimNotifyCustomState_Begin");
		
		ASpaceWhale_Character_BP_C_BPAnimNotifyCustomState_Begin_Params params {};
		params.CustomEventName = CustomEventName;
		params.MeshComp = MeshComp;
		params.Animation = Animation;
		params.TotalDuration = TotalDuration;
		params.AnimNotifyObject = AnimNotifyObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimNotify*                                 AnimNotifyObject                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceWhale_Character_BP_C::BlueprintAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BlueprintAnimNotifyCustomEvent");
		
		ASpaceWhale_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params {};
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
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ForceFleeTeleport
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceWhale_Character_BP_C::ForceFleeTeleport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ForceFleeTeleport");
		
		ASpaceWhale_Character_BP_C_ForceFleeTeleport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdateSpeedEffects
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceWhale_Character_BP_C::UpdateSpeedEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdateSpeedEffects");
		
		ASpaceWhale_Character_BP_C_UpdateSpeedEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdateTurretRotation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SeatIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceWhale_Character_BP_C::UpdateTurretRotation(float DeltaTime, int32_t SeatIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdateTurretRotation");
		
		ASpaceWhale_Character_BP_C_UpdateTurretRotation_Params params {};
		params.DeltaTime = DeltaTime;
		params.SeatIndex = SeatIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.IsLocalControllerTagged
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class APrimalCharacter*>                    Array                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	bool ASpaceWhale_Character_BP_C::IsLocalControllerTagged(TArray<class APrimalCharacter*>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.IsLocalControllerTagged");
		
		ASpaceWhale_Character_BP_C_IsLocalControllerTagged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdateBlinkEffect
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceWhale_Character_BP_C::UpdateBlinkEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdateBlinkEffect");
		
		ASpaceWhale_Character_BP_C_UpdateBlinkEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.CompleteTeleport
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceWhale_Character_BP_C::CompleteTeleport(bool Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.CompleteTeleport");
		
		ASpaceWhale_Character_BP_C_CompleteTeleport_Params params {};
		params.Success = Success;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ChargeTimeLeft
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	float ASpaceWhale_Character_BP_C::ChargeTimeLeft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ChargeTimeLeft");
		
		ASpaceWhale_Character_BP_C_ChargeTimeLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.CheckTeleportAngle
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     A                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ASpaceWhale_Character_BP_C::CheckTeleportAngle(const struct FVector& A)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.CheckTeleportAngle");
		
		ASpaceWhale_Character_BP_C_CheckTeleportAngle_Params params {};
		params.A = A;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.FireForTurretForPlayer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               FireLeft                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceWhale_Character_BP_C::FireForTurretForPlayer(class AShooterCharacter* Player, bool FireLeft)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.FireForTurretForPlayer");
		
		ASpaceWhale_Character_BP_C_FireForTurretForPlayer_Params params {};
		params.Player = Player;
		params.FireLeft = FireLeft;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.GetFireTransformForPlayer
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     FirePosition                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     FireDirection                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               FireLeft                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceWhale_Character_BP_C::GetFireTransformForPlayer(class AShooterCharacter* Player, struct FVector* FirePosition, struct FVector* FireDirection, bool* FireLeft)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.GetFireTransformForPlayer");
		
		ASpaceWhale_Character_BP_C_GetFireTransformForPlayer_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FirePosition != nullptr)
			*FirePosition = params.FirePosition;
		if (FireDirection != nullptr)
			*FireDirection = params.FireDirection;
		if (FireLeft != nullptr)
			*FireLeft = params.FireLeft;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.OnSaddleEquipped
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Equipped                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceWhale_Character_BP_C::OnSaddleEquipped(bool Equipped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.OnSaddleEquipped");
		
		ASpaceWhale_Character_BP_C_OnSaddleEquipped_Params params {};
		params.Equipped = Equipped;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.OnRep_IsChargingHyperspaceJump
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceWhale_Character_BP_C::OnRep_IsChargingHyperspaceJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.OnRep_IsChargingHyperspaceJump");
		
		ASpaceWhale_Character_BP_C_OnRep_IsChargingHyperspaceJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPNotifyClearRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderClearing                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceWhale_Character_BP_C::BPNotifyClearRider(class AShooterCharacter* RiderClearing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPNotifyClearRider");
		
		ASpaceWhale_Character_BP_C_BPNotifyClearRider_Params params {};
		params.RiderClearing = RiderClearing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPDrawToRiderHUD
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterHUD*                                 HUD                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceWhale_Character_BP_C::BPDrawToRiderHUD(class AShooterHUD* HUD)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPDrawToRiderHUD");
		
		ASpaceWhale_Character_BP_C_BPDrawToRiderHUD_Params params {};
		params.HUD = HUD;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdatePassengerSeatRotation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            PassengerIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    Rot                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceWhale_Character_BP_C::UpdatePassengerSeatRotation(int32_t PassengerIndex, const struct FRotator& Rot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdatePassengerSeatRotation");
		
		ASpaceWhale_Character_BP_C_UpdatePassengerSeatRotation_Params params {};
		params.PassengerIndex = PassengerIndex;
		params.Rot = Rot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.GetCurrentTeleportRadius
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               GetSmoothedDisplayValue                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ASpaceWhale_Character_BP_C::GetCurrentTeleportRadius(bool GetSmoothedDisplayValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.GetCurrentTeleportRadius");
		
		ASpaceWhale_Character_BP_C_GetCurrentTeleportRadius_Params params {};
		params.GetSmoothedDisplayValue = GetSmoothedDisplayValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPForceCameraStyle
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            ForViewTarget                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	ECameraStyle ASpaceWhale_Character_BP_C::BPForceCameraStyle(class APrimalCharacter* ForViewTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPForceCameraStyle");
		
		ASpaceWhale_Character_BP_C_BPForceCameraStyle_Params params {};
		params.ForViewTarget = ForViewTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.InTargetingMode
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsTargeting                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceWhale_Character_BP_C::InTargetingMode(bool* IsTargeting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.InTargetingMode");
		
		ASpaceWhale_Character_BP_C_InTargetingMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsTargeting != nullptr)
			*IsTargeting = params.IsTargeting;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.OnRep_IsTargetingBomb
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceWhale_Character_BP_C::OnRep_IsTargetingBomb()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.OnRep_IsTargetingBomb");
		
		ASpaceWhale_Character_BP_C_OnRep_IsTargetingBomb_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.OnRep_IsTargetingHyperdrive
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceWhale_Character_BP_C::OnRep_IsTargetingHyperdrive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.OnRep_IsTargetingHyperdrive");
		
		ASpaceWhale_Character_BP_C_OnRep_IsTargetingHyperdrive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPModifyForwardDirectionInput
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     directionInput                                             (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	struct FVector ASpaceWhale_Character_BP_C::BPModifyForwardDirectionInput(struct FVector* directionInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPModifyForwardDirectionInput");
		
		ASpaceWhale_Character_BP_C_BPModifyForwardDirectionInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (directionInput != nullptr)
			*directionInput = params.directionInput;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPShouldLimitForwardDirection
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ASpaceWhale_Character_BP_C::BPShouldLimitForwardDirection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPShouldLimitForwardDirection");
		
		ASpaceWhale_Character_BP_C_BPShouldLimitForwardDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPOverrideFlyingVelocity
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     InitialVelocity                                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Gravity                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector ASpaceWhale_Character_BP_C::BPOverrideFlyingVelocity(struct FVector* InitialVelocity, struct FVector* Gravity, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPOverrideFlyingVelocity");
		
		ASpaceWhale_Character_BP_C_BPOverrideFlyingVelocity_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InitialVelocity != nullptr)
			*InitialVelocity = params.InitialVelocity;
		if (Gravity != nullptr)
			*Gravity = params.Gravity;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.GetCharactersToMassTeleport
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     NearWorldLoc                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class APrimalCharacter*>                    FriendlyCharacters                                         (Parm, OutParm, ZeroConstructor)
	 */
	void ASpaceWhale_Character_BP_C::GetCharactersToMassTeleport(const struct FVector& NearWorldLoc, TArray<class APrimalCharacter*>* FriendlyCharacters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.GetCharactersToMassTeleport");
		
		ASpaceWhale_Character_BP_C_GetCharactersToMassTeleport_Params params {};
		params.NearWorldLoc = NearWorldLoc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FriendlyCharacters != nullptr)
			*FriendlyCharacters = params.FriendlyCharacters;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.AllowedToUseHyperdrive
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               CheckTimer                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Allowed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceWhale_Character_BP_C::AllowedToUseHyperdrive(bool CheckTimer, const struct FVector& Target, bool* Allowed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.AllowedToUseHyperdrive");
		
		ASpaceWhale_Character_BP_C_AllowedToUseHyperdrive_Params params {};
		params.CheckTimer = CheckTimer;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Allowed != nullptr)
			*Allowed = params.Allowed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ModifyCosmicEnergy
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delta                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ForceNetUpdate                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              NewValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceWhale_Character_BP_C::ModifyCosmicEnergy(float Delta, bool ForceNetUpdate, float* NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ModifyCosmicEnergy");
		
		ASpaceWhale_Character_BP_C_ModifyCosmicEnergy_Params params {};
		params.Delta = Delta;
		params.ForceNetUpdate = ForceNetUpdate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewValue != nullptr)
			*NewValue = params.NewValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.GetCosmicEnergy
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               GetSmoothedDisplayValue                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              current                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Max                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceWhale_Character_BP_C::GetCosmicEnergy(bool GetSmoothedDisplayValue, float* current, float* Max)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.GetCosmicEnergy");
		
		ASpaceWhale_Character_BP_C_GetCosmicEnergy_Params params {};
		params.GetSmoothedDisplayValue = GetSmoothedDisplayValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (current != nullptr)
			*current = params.current;
		if (Max != nullptr)
			*Max = params.Max;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.GetMaxCosmicEnergy
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              MaxEnergy                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceWhale_Character_BP_C::GetMaxCosmicEnergy(float* MaxEnergy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.GetMaxCosmicEnergy");
		
		ASpaceWhale_Character_BP_C_GetMaxCosmicEnergy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MaxEnergy != nullptr)
			*MaxEnergy = params.MaxEnergy;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPOnMassTeleportEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMassTeleportState                                 EventState                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalCharacter*                            TeleportInitiatedByChar                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceWhale_Character_BP_C::BPOnMassTeleportEvent(EMassTeleportState EventState, class APrimalCharacter* TeleportInitiatedByChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPOnMassTeleportEvent");
		
		ASpaceWhale_Character_BP_C_BPOnMassTeleportEvent_Params params {};
		params.EventState = EventState;
		params.TeleportInitiatedByChar = TeleportInitiatedByChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPGetHUDElements
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FHUDElement>                         OutElements                                                (Parm, OutParm, ZeroConstructor)
	 */
	void ASpaceWhale_Character_BP_C::BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPGetHUDElements");
		
		ASpaceWhale_Character_BP_C_BPGetHUDElements_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutElements != nullptr)
			*OutElements = params.OutElements;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.HyperdriveTargetingTrace
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     TraceStartLoc                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     TraceStartDir                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     WhaleStartLoc                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DebugDrawDuration                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               foundValidLocation                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceWhale_Character_BP_C::HyperdriveTargetingTrace(const struct FVector& TraceStartLoc, const struct FVector& TraceStartDir, const struct FVector& WhaleStartLoc, float DebugDrawDuration, bool* foundValidLocation, struct FVector* Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.HyperdriveTargetingTrace");
		
		ASpaceWhale_Character_BP_C_HyperdriveTargetingTrace_Params params {};
		params.TraceStartLoc = TraceStartLoc;
		params.TraceStartDir = TraceStartDir;
		params.WhaleStartLoc = WhaleStartLoc;
		params.DebugDrawDuration = DebugDrawDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (foundValidLocation != nullptr)
			*foundValidLocation = params.foundValidLocation;
		if (Location != nullptr)
			*Location = params.Location;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdateHyperdriveTargetingMode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceWhale_Character_BP_C::UpdateHyperdriveTargetingMode(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdateHyperdriveTargetingMode");
		
		ASpaceWhale_Character_BP_C_UpdateHyperdriveTargetingMode_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPOverrideCameraViewTarget
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CurrentCameraMode                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     DesiredCameraLocation                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    DesiredCameraRotation                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DesiredFOV                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bOverrideCameraLocation                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     CameraLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bOverrideCameraRotation                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    CameraRotation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bOverrideCameraFOV                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CameraFOV                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceWhale_Character_BP_C::BPOverrideCameraViewTarget(const class FName& CurrentCameraMode, const struct FVector& DesiredCameraLocation, const struct FRotator& DesiredCameraRotation, float DesiredFOV, bool* bOverrideCameraLocation, struct FVector* CameraLocation, bool* bOverrideCameraRotation, struct FRotator* CameraRotation, bool* bOverrideCameraFOV, float* CameraFOV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPOverrideCameraViewTarget");
		
		ASpaceWhale_Character_BP_C_BPOverrideCameraViewTarget_Params params {};
		params.CurrentCameraMode = CurrentCameraMode;
		params.DesiredCameraLocation = DesiredCameraLocation;
		params.DesiredCameraRotation = DesiredCameraRotation;
		params.DesiredFOV = DesiredFOV;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOverrideCameraLocation != nullptr)
			*bOverrideCameraLocation = params.bOverrideCameraLocation;
		if (CameraLocation != nullptr)
			*CameraLocation = params.CameraLocation;
		if (bOverrideCameraRotation != nullptr)
			*bOverrideCameraRotation = params.bOverrideCameraRotation;
		if (CameraRotation != nullptr)
			*CameraRotation = params.CameraRotation;
		if (bOverrideCameraFOV != nullptr)
			*bOverrideCameraFOV = params.bOverrideCameraFOV;
		if (CameraFOV != nullptr)
			*CameraFOV = params.CameraFOV;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ReceiveTick
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceWhale_Character_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ReceiveTick");
		
		ASpaceWhale_Character_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPHandleControllerInitiatedAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ASpaceWhale_Character_BP_C::BPHandleControllerInitiatedAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPHandleControllerInitiatedAttack");
		
		ASpaceWhale_Character_BP_C_BPHandleControllerInitiatedAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BlueprintCanRiderAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ASpaceWhale_Character_BP_C::BlueprintCanRiderAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BlueprintCanRiderAttack");
		
		ASpaceWhale_Character_BP_C_BlueprintCanRiderAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BlueprintCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ASpaceWhale_Character_BP_C::BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BlueprintCanAttack");
		
		ASpaceWhale_Character_BP_C_BlueprintCanAttack_Params params {};
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
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPOverrideGetAttackAnimationIndex
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class UAnimMontage*>                        AnimationArray                                             (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	int32_t ASpaceWhale_Character_BP_C::BPOverrideGetAttackAnimationIndex(int32_t AttackIndex, TArray<class UAnimMontage*>* AnimationArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPOverrideGetAttackAnimationIndex");
		
		ASpaceWhale_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimationArray != nullptr)
			*AnimationArray = params.AnimationArray;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPNotifyClearPassenger
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            PassengerChar                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SeatIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceWhale_Character_BP_C::BPNotifyClearPassenger(class APrimalCharacter* PassengerChar, int32_t SeatIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPNotifyClearPassenger");
		
		ASpaceWhale_Character_BP_C_BPNotifyClearPassenger_Params params {};
		params.PassengerChar = PassengerChar;
		params.SeatIndex = SeatIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPNotifyAddPassenger
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            PassengerChar                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SeatIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceWhale_Character_BP_C::BPNotifyAddPassenger(class APrimalCharacter* PassengerChar, int32_t SeatIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BPNotifyAddPassenger");
		
		ASpaceWhale_Character_BP_C_BPNotifyAddPassenger_Params params {};
		params.PassengerChar = PassengerChar;
		params.SeatIndex = SeatIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceWhale_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UserConstructionScript");
		
		ASpaceWhale_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ServerRequestStartHyperspaceJump
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     WorldLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceWhale_Character_BP_C::ServerRequestStartHyperspaceJump(const struct FVector& WorldLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ServerRequestStartHyperspaceJump");
		
		ASpaceWhale_Character_BP_C_ServerRequestStartHyperspaceJump_Params params {};
		params.WorldLocation = WorldLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ClientAckHyperspaceJump
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Success                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     OrigLocation                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     NewLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceWhale_Character_BP_C::ClientAckHyperspaceJump(bool Success, const struct FVector& OrigLocation, const struct FVector& NewLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ClientAckHyperspaceJump");
		
		ASpaceWhale_Character_BP_C_ClientAckHyperspaceJump_Params params {};
		params.Success = Success;
		params.OrigLocation = OrigLocation;
		params.NewLocation = NewLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.MultiUpdateCurrentGear
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewGear                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceWhale_Character_BP_C::MultiUpdateCurrentGear(int32_t NewGear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.MultiUpdateCurrentGear");
		
		ASpaceWhale_Character_BP_C_MultiUpdateCurrentGear_Params params {};
		params.NewGear = NewGear;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceWhale_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ReceiveBeginPlay");
		
		ASpaceWhale_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.DelayedGearFixup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceWhale_Character_BP_C::DelayedGearFixup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.DelayedGearFixup");
		
		ASpaceWhale_Character_BP_C_DelayedGearFixup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdateCurrentGear
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewGear                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceWhale_Character_BP_C::UpdateCurrentGear(int32_t NewGear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.UpdateCurrentGear");
		
		ASpaceWhale_Character_BP_C_UpdateCurrentGear_Params params {};
		params.NewGear = NewGear;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ServerRequestSetHyperdriveTargetingMode
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewTargetingMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceWhale_Character_BP_C::ServerRequestSetHyperdriveTargetingMode(bool NewTargetingMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ServerRequestSetHyperdriveTargetingMode");
		
		ASpaceWhale_Character_BP_C_ServerRequestSetHyperdriveTargetingMode_Params params {};
		params.NewTargetingMode = NewTargetingMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ServerRequestDropBomb
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceWhale_Character_BP_C::ServerRequestDropBomb()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ServerRequestDropBomb");
		
		ASpaceWhale_Character_BP_C_ServerRequestDropBomb_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ServerRequestSetBombTargetingMode
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewBombTargetingMode                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceWhale_Character_BP_C::ServerRequestSetBombTargetingMode(bool NewBombTargetingMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ServerRequestSetBombTargetingMode");
		
		ASpaceWhale_Character_BP_C_ServerRequestSetBombTargetingMode_Params params {};
		params.NewBombTargetingMode = NewBombTargetingMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BP_OnJumpPressed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceWhale_Character_BP_C::BP_OnJumpPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BP_OnJumpPressed");
		
		ASpaceWhale_Character_BP_C_BP_OnJumpPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BP_OnJumpReleased
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceWhale_Character_BP_C::BP_OnJumpReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.BP_OnJumpReleased");
		
		ASpaceWhale_Character_BP_C_BP_OnJumpReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.MultiHyperspaceJumpVFX
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     NewLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceWhale_Character_BP_C::MultiHyperspaceJumpVFX(const struct FVector& NewLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.MultiHyperspaceJumpVFX");
		
		ASpaceWhale_Character_BP_C_MultiHyperspaceJumpVFX_Params params {};
		params.NewLocation = NewLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.StartHyperspaceJump
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceWhale_Character_BP_C::StartHyperspaceJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.StartHyperspaceJump");
		
		ASpaceWhale_Character_BP_C_StartHyperspaceJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ServerRequestCancelHyperspaceJump
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceWhale_Character_BP_C::ServerRequestCancelHyperspaceJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ServerRequestCancelHyperspaceJump");
		
		ASpaceWhale_Character_BP_C_ServerRequestCancelHyperspaceJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ClientStartHyperspaceJump
	 * 		Flags  -> (Net, NetReliable, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class APrimalCharacter*>                    TaggedCharacters                                           (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void ASpaceWhale_Character_BP_C::ClientStartHyperspaceJump(TArray<class APrimalCharacter*>* TaggedCharacters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ClientStartHyperspaceJump");
		
		ASpaceWhale_Character_BP_C_ClientStartHyperspaceJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TaggedCharacters != nullptr)
			*TaggedCharacters = params.TaggedCharacters;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ClientCancelHyperspaceJump
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceWhale_Character_BP_C::ClientCancelHyperspaceJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ClientCancelHyperspaceJump");
		
		ASpaceWhale_Character_BP_C_ClientCancelHyperspaceJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ServerRequestStopBombs
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceWhale_Character_BP_C::ServerRequestStopBombs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ServerRequestStopBombs");
		
		ASpaceWhale_Character_BP_C_ServerRequestStopBombs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ClientPlayBombVFX
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceWhale_Character_BP_C::ClientPlayBombVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ClientPlayBombVFX");
		
		ASpaceWhale_Character_BP_C_ClientPlayBombVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ScanForPlayers
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceWhale_Character_BP_C::ScanForPlayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ScanForPlayers");
		
		ASpaceWhale_Character_BP_C_ScanForPlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ClientForceMeshRelevant
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceWhale_Character_BP_C::ClientForceMeshRelevant()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ClientForceMeshRelevant");
		
		ASpaceWhale_Character_BP_C_ClientForceMeshRelevant_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ForceHideSaddle
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceWhale_Character_BP_C::ForceHideSaddle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ForceHideSaddle");
		
		ASpaceWhale_Character_BP_C_ForceHideSaddle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.PostJumpComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceWhale_Character_BP_C::PostJumpComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.PostJumpComplete");
		
		ASpaceWhale_Character_BP_C_PostJumpComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ScanForTeleportActors
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceWhale_Character_BP_C::ScanForTeleportActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ScanForTeleportActors");
		
		ASpaceWhale_Character_BP_C_ScanForTeleportActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.TorporHit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceWhale_Character_BP_C::TorporHit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.TorporHit");
		
		ASpaceWhale_Character_BP_C_TorporHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.TorporHitRight
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceWhale_Character_BP_C::TorporHitRight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.TorporHitRight");
		
		ASpaceWhale_Character_BP_C_TorporHitRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.TorporHitLeft
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceWhale_Character_BP_C::TorporHitLeft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.TorporHitLeft");
		
		ASpaceWhale_Character_BP_C_TorporHitLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ClearTorporHit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceWhale_Character_BP_C::ClearTorporHit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ClearTorporHit");
		
		ASpaceWhale_Character_BP_C_ClearTorporHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ExecuteUbergraph_SpaceWhale_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceWhale_Character_BP_C::ExecuteUbergraph_SpaceWhale_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP.SpaceWhale_Character_BP_C.ExecuteUbergraph_SpaceWhale_Character_BP");
		
		ASpaceWhale_Character_BP_C_ExecuteUbergraph_SpaceWhale_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASpaceWhale_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASpaceWhale_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SpaceWhale_Character_BP.SpaceWhale_Character_BP_C");
		return ptr;
	}

}


