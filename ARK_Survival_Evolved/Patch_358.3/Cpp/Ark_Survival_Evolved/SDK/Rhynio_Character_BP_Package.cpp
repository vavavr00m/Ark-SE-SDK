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
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPAllowCarryCharacter
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            checkCharacter                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ARhynio_Character_BP_C::BPAllowCarryCharacter(class APrimalCharacter* checkCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPAllowCarryCharacter");
		
		ARhynio_Character_BP_C_BPAllowCarryCharacter_Params params {};
		params.checkCharacter = checkCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.GiveDossierToImprinter
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::GiveDossierToImprinter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.GiveDossierToImprinter");
		
		ARhynio_Character_BP_C_GiveDossierToImprinter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.DisableSelectRagdollBones
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::DisableSelectRagdollBones()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.DisableSelectRagdollBones");
		
		ARhynio_Character_BP_C_DisableSelectRagdollBones_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.ClearImpregAttackAnimVars
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::ClearImpregAttackAnimVars()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.ClearImpregAttackAnimVars");
		
		ARhynio_Character_BP_C_ClearImpregAttackAnimVars_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.BackupCancelPendingAttachStructure
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::BackupCancelPendingAttachStructure()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.BackupCancelPendingAttachStructure");
		
		ARhynio_Character_BP_C_BackupCancelPendingAttachStructure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.RefreshMovementMode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::RefreshMovementMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.RefreshMovementMode");
		
		ARhynio_Character_BP_C_RefreshMovementMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.UpdatePassengerCamBuff
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Passenger                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Clear                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::UpdatePassengerCamBuff(class APrimalCharacter* Passenger, bool Clear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.UpdatePassengerCamBuff");
		
		ARhynio_Character_BP_C_UpdatePassengerCamBuff_Params params {};
		params.Passenger = Passenger;
		params.Clear = Clear;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPNotifyClearPassenger
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            PassengerChar                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SeatIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::BPNotifyClearPassenger(class APrimalCharacter* PassengerChar, int32_t SeatIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPNotifyClearPassenger");
		
		ARhynio_Character_BP_C_BPNotifyClearPassenger_Params params {};
		params.PassengerChar = PassengerChar;
		params.SeatIndex = SeatIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPNotifyAddPassenger
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            PassengerChar                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SeatIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::BPNotifyAddPassenger(class APrimalCharacter* PassengerChar, int32_t SeatIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPNotifyAddPassenger");
		
		ARhynio_Character_BP_C_BPNotifyAddPassenger_Params params {};
		params.PassengerChar = PassengerChar;
		params.SeatIndex = SeatIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.UpdateLatchedFPVCam
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    RiderPC                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterPlayerController*                    PassengerPC                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Clear                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::UpdateLatchedFPVCam(class AShooterPlayerController* RiderPC, class AShooterPlayerController* PassengerPC, bool Clear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.UpdateLatchedFPVCam");
		
		ARhynio_Character_BP_C_UpdateLatchedFPVCam_Params params {};
		params.RiderPC = RiderPC;
		params.PassengerPC = PassengerPC;
		params.Clear = Clear;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.ClearWaterWalking
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::ClearWaterWalking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.ClearWaterWalking");
		
		ARhynio_Character_BP_C_ClearWaterWalking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.GetRhynioWanderOverride
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Loc                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::GetRhynioWanderOverride(struct FVector* Loc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.GetRhynioWanderOverride");
		
		ARhynio_Character_BP_C_GetRhynioWanderOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Loc != nullptr)
			*Loc = params.Loc;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.BP_GetCustomModifier_MaxSpeed
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ARhynio_Character_BP_C::BP_GetCustomModifier_MaxSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.BP_GetCustomModifier_MaxSpeed");
		
		ARhynio_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.ReceiveAnyDamage
	 * 		Flags  -> (BlueprintAuthorityOnly, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UDamageType*                                 DamageType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AController*                                 InstigatedBy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.ReceiveAnyDamage");
		
		ARhynio_Character_BP_C_ReceiveAnyDamage_Params params {};
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
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.BP_OnTamedOrderReceived
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            FromCharacter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EDinoTamedOrder                                    OrderType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bForce                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      enemyTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               orderNotExecuted                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::BP_OnTamedOrderReceived(class APrimalCharacter* FromCharacter, EDinoTamedOrder OrderType, bool bForce, class AActor* enemyTarget, bool orderNotExecuted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.BP_OnTamedOrderReceived");
		
		ARhynio_Character_BP_C_BP_OnTamedOrderReceived_Params params {};
		params.FromCharacter = FromCharacter;
		params.OrderType = OrderType;
		params.bForce = bForce;
		params.enemyTarget = enemyTarget;
		params.orderNotExecuted = orderNotExecuted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPOverrideMoveToOrder
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     MoveToLocation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterCharacter*                           OrderingPlayer                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ARhynio_Character_BP_C::BPOverrideMoveToOrder(const struct FVector& MoveToLocation, class AShooterCharacter* OrderingPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPOverrideMoveToOrder");
		
		ARhynio_Character_BP_C_BPOverrideMoveToOrder_Params params {};
		params.MoveToLocation = MoveToLocation;
		params.OrderingPlayer = OrderingPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPGetRiderUnboardLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            RidingCharacter                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector ARhynio_Character_BP_C::BPGetRiderUnboardLocation(class APrimalCharacter* RidingCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPGetRiderUnboardLocation");
		
		ARhynio_Character_BP_C_BPGetRiderUnboardLocation_Params params {};
		params.RidingCharacter = RidingCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.ShowRidingMU
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::ShowRidingMU()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.ShowRidingMU");
		
		ARhynio_Character_BP_C_ShowRidingMU_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.InterceptInputEvent
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      InputName                                                  (Parm, ZeroConstructor)
	 */
	void ARhynio_Character_BP_C::InterceptInputEvent(const class FString& InputName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.InterceptInputEvent");
		
		ARhynio_Character_BP_C_InterceptInputEvent_Params params {};
		params.InputName = InputName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.CanLatch
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               backwardsLatching                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CanLatch                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Normal                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Loc                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::CanLatch(const struct FVector& Offset, bool backwardsLatching, bool* CanLatch, struct FVector* Normal, struct FVector* Loc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.CanLatch");
		
		ARhynio_Character_BP_C_CanLatch_Params params {};
		params.Offset = Offset;
		params.backwardsLatching = backwardsLatching;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanLatch != nullptr)
			*CanLatch = params.CanLatch;
		if (Normal != nullptr)
			*Normal = params.Normal;
		if (Loc != nullptr)
			*Loc = params.Loc;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.AttemptRapidFireRangedProjectile
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::AttemptRapidFireRangedProjectile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.AttemptRapidFireRangedProjectile");
		
		ARhynio_Character_BP_C_AttemptRapidFireRangedProjectile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPServerHandleNetExecCommand
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           FromPC                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        CommandName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (Parm, OutParm, ReferenceParm)
	 */
	bool ARhynio_Character_BP_C::BPServerHandleNetExecCommand(class APlayerController* FromPC, const class FName& CommandName, struct FBPNetExecParams* ExecParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPServerHandleNetExecCommand");
		
		ARhynio_Character_BP_C_BPServerHandleNetExecCommand_Params params {};
		params.FromPC = FromPC;
		params.CommandName = CommandName;
		
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
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPGetOverrideCameraInterpSpeed
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DefaultTPVCameraSpeedInterpolationMultiplier               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DefaultTPVOffsetInterpSpeed                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              TPVCameraSpeedInterpolationMultiplier                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              TPVOffsetInterpSpeed                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::BPGetOverrideCameraInterpSpeed(float DefaultTPVCameraSpeedInterpolationMultiplier, float DefaultTPVOffsetInterpSpeed, float* TPVCameraSpeedInterpolationMultiplier, float* TPVOffsetInterpSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPGetOverrideCameraInterpSpeed");
		
		ARhynio_Character_BP_C_BPGetOverrideCameraInterpSpeed_Params params {};
		params.DefaultTPVCameraSpeedInterpolationMultiplier = DefaultTPVCameraSpeedInterpolationMultiplier;
		params.DefaultTPVOffsetInterpSpeed = DefaultTPVOffsetInterpSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TPVCameraSpeedInterpolationMultiplier != nullptr)
			*TPVCameraSpeedInterpolationMultiplier = params.TPVCameraSpeedInterpolationMultiplier;
		if (TPVOffsetInterpSpeed != nullptr)
			*TPVOffsetInterpSpeed = params.TPVOffsetInterpSpeed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.SwimmingTick
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::SwimmingTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.SwimmingTick");
		
		ARhynio_Character_BP_C_SwimmingTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.ClearLastDroppedIgnoredChar
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::ClearLastDroppedIgnoredChar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.ClearLastDroppedIgnoredChar");
		
		ARhynio_Character_BP_C_ClearLastDroppedIgnoredChar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPDidClearCarriedCharacter
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            PreviousCarriedCharacter                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::BPDidClearCarriedCharacter(class APrimalCharacter* PreviousCarriedCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPDidClearCarriedCharacter");
		
		ARhynio_Character_BP_C_BPDidClearCarriedCharacter_Params params {};
		params.PreviousCarriedCharacter = PreviousCarriedCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.AttemptInitialFlight
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::AttemptInitialFlight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.AttemptInitialFlight");
		
		ARhynio_Character_BP_C_AttemptInitialFlight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.AIAttemptExitWater
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::AIAttemptExitWater()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.AIAttemptExitWater");
		
		ARhynio_Character_BP_C_AIAttemptExitWater_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPUnstasis
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::BPUnstasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPUnstasis");
		
		ARhynio_Character_BP_C_BPUnstasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPDidSetCarriedCharacter
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            PreviousCarriedCharacter                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::BPDidSetCarriedCharacter(class APrimalCharacter* PreviousCarriedCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPDidSetCarriedCharacter");
		
		ARhynio_Character_BP_C_BPDidSetCarriedCharacter_Params params {};
		params.PreviousCarriedCharacter = PreviousCarriedCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.DisplayInsufficientStaminaMessage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::DisplayInsufficientStaminaMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.DisplayInsufficientStaminaMessage");
		
		ARhynio_Character_BP_C_DisplayInsufficientStaminaMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPCanLand
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanLand                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ARhynio_Character_BP_C::BPCanLand(bool CanLand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPCanLand");
		
		ARhynio_Character_BP_C_BPCanLand_Params params {};
		params.CanLand = CanLand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.ResetLocalInputVars
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::ResetLocalInputVars()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.ResetLocalInputVars");
		
		ARhynio_Character_BP_C_ResetLocalInputVars_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.ResetLocalHomingAimingVars
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::ResetLocalHomingAimingVars()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.ResetLocalHomingAimingVars");
		
		ARhynio_Character_BP_C_ResetLocalHomingAimingVars_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPHandleRightShoulderButton
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ARhynio_Character_BP_C::BPHandleRightShoulderButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPHandleRightShoulderButton");
		
		ARhynio_Character_BP_C_BPHandleRightShoulderButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.UpdateHUDHelper
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           ShooterChar                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               remove                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::UpdateHUDHelper(class AShooterCharacter* ShooterChar, bool remove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.UpdateHUDHelper");
		
		ARhynio_Character_BP_C_UpdateHUDHelper_Params params {};
		params.ShooterChar = ShooterChar;
		params.remove = remove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.IsValidLockOnChar
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Char                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CanLockOn                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::IsValidLockOnChar(class APrimalCharacter* Char, bool* CanLockOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.IsValidLockOnChar");
		
		ARhynio_Character_BP_C_IsValidLockOnChar_Params params {};
		params.Char = Char;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanLockOn != nullptr)
			*CanLockOn = params.CanLockOn;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPCanTargetCorpse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ARhynio_Character_BP_C::BPCanTargetCorpse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPCanTargetCorpse");
		
		ARhynio_Character_BP_C_BPCanTargetCorpse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.UpdateWaterSurfaceSplashVFX
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::UpdateWaterSurfaceSplashVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.UpdateWaterSurfaceSplashVFX");
		
		ARhynio_Character_BP_C_UpdateWaterSurfaceSplashVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.SpawnBigEnterWaterVFX
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::SpawnBigEnterWaterVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.SpawnBigEnterWaterVFX");
		
		ARhynio_Character_BP_C_SpawnBigEnterWaterVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.UnhideMesh
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::UnhideMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.UnhideMesh");
		
		ARhynio_Character_BP_C_UnhideMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.OverrideFinalWanderLocation
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     outVec                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ARhynio_Character_BP_C::OverrideFinalWanderLocation(struct FVector* outVec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.OverrideFinalWanderLocation");
		
		ARhynio_Character_BP_C_OverrideFinalWanderLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outVec != nullptr)
			*outVec = params.outVec;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.StopRapidFiring
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::StopRapidFiring()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.StopRapidFiring");
		
		ARhynio_Character_BP_C_StopRapidFiring_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPHandleOnStopTargeting
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ARhynio_Character_BP_C::BPHandleOnStopTargeting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPHandleOnStopTargeting");
		
		ARhynio_Character_BP_C_BPHandleOnStopTargeting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPClientHandleNetExecCommand
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CommandName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (Parm, OutParm, ReferenceParm)
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ARhynio_Character_BP_C::BPClientHandleNetExecCommand(const class FName& CommandName, struct FBPNetExecParams* ExecParams, class APlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPClientHandleNetExecCommand");
		
		ARhynio_Character_BP_C_BPClientHandleNetExecCommand_Params params {};
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
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.GetIsSurfaceSwimming
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               IsSurfaceSwimming                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::GetIsSurfaceSwimming(bool* IsSurfaceSwimming)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.GetIsSurfaceSwimming");
		
		ARhynio_Character_BP_C_GetIsSurfaceSwimming_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsSurfaceSwimming != nullptr)
			*IsSurfaceSwimming = params.IsSurfaceSwimming;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.SpawnWaterFootstepVFX
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::SpawnWaterFootstepVFX(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.SpawnWaterFootstepVFX");
		
		ARhynio_Character_BP_C_SpawnWaterFootstepVFX_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.UpdateWaterMovementVFX
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::UpdateWaterMovementVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.UpdateWaterMovementVFX");
		
		ARhynio_Character_BP_C_UpdateWaterMovementVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimNotify*                                 AnimNotifyObject                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::BlueprintAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.BlueprintAnimNotifyCustomEvent");
		
		ARhynio_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params {};
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
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.UpdateFlyingBraking
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HasRider                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::UpdateFlyingBraking(bool HasRider)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.UpdateFlyingBraking");
		
		ARhynio_Character_BP_C_UpdateFlyingBraking_Params params {};
		params.HasRider = HasRider;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPGetDragSocketDinoName
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        aGrabbedDino                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class FName ARhynio_Character_BP_C::BPGetDragSocketDinoName(class APrimalDinoCharacter* aGrabbedDino)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPGetDragSocketDinoName");
		
		ARhynio_Character_BP_C_BPGetDragSocketDinoName_Params params {};
		params.aGrabbedDino = aGrabbedDino;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.PlayLockOnSound
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::PlayLockOnSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.PlayLockOnSound");
		
		ARhynio_Character_BP_C_PlayLockOnSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> ARhynio_Character_BP_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPGetMultiUseEntries");
		
		ARhynio_Character_BP_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPGetRidingMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> ARhynio_Character_BP_C::BPGetRidingMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPGetRidingMultiUseEntries");
		
		ARhynio_Character_BP_C_BPGetRidingMultiUseEntries_Params params {};
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
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPCharacterSleeped
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::BPCharacterSleeped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPCharacterSleeped");
		
		ARhynio_Character_BP_C_BPCharacterSleeped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPOnStaminaDrained
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::BPOnStaminaDrained()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPOnStaminaDrained");
		
		ARhynio_Character_BP_C_BPOnStaminaDrained_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.AllowPlayMontage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                AnimMontage                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ARhynio_Character_BP_C::AllowPlayMontage(class UAnimMontage* AnimMontage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.AllowPlayMontage");
		
		ARhynio_Character_BP_C_AllowPlayMontage_Params params {};
		params.AnimMontage = AnimMontage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.UpdateWaterMovementVars
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsWaterWalk                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               PrevLand                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsSurfaceSwimming                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::UpdateWaterMovementVars(bool IsWaterWalk, bool PrevLand, bool IsSurfaceSwimming)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.UpdateWaterMovementVars");
		
		ARhynio_Character_BP_C_UpdateWaterMovementVars_Params params {};
		params.IsWaterWalk = IsWaterWalk;
		params.PrevLand = PrevLand;
		params.IsSurfaceSwimming = IsSurfaceSwimming;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPShouldForceFlee
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ARhynio_Character_BP_C::BPShouldForceFlee()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPShouldForceFlee");
		
		ARhynio_Character_BP_C_BPShouldForceFlee_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.UpdateWingVisForPlayers
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::UpdateWingVisForPlayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.UpdateWingVisForPlayers");
		
		ARhynio_Character_BP_C_UpdateWingVisForPlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.GetCanShootResin_Impure
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CanShoot                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsResinQuantityFail                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::GetCanShootResin_Impure(int32_t Type, bool* CanShoot, bool* IsResinQuantityFail)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.GetCanShootResin_Impure");
		
		ARhynio_Character_BP_C_GetCanShootResin_Impure_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanShoot != nullptr)
			*CanShoot = params.CanShoot;
		if (IsResinQuantityFail != nullptr)
			*IsResinQuantityFail = params.IsResinQuantityFail;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.GetHomingTarget
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      TargetActor                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               TracedToLast                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::GetHomingTarget(class AActor** TargetActor, bool* TracedToLast)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.GetHomingTarget");
		
		ARhynio_Character_BP_C_GetHomingTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TargetActor != nullptr)
			*TargetActor = params.TargetActor;
		if (TracedToLast != nullptr)
			*TracedToLast = params.TracedToLast;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.BP_InterceptMoveRight
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ARhynio_Character_BP_C::BP_InterceptMoveRight(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.BP_InterceptMoveRight");
		
		ARhynio_Character_BP_C_BP_InterceptMoveRight_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.BP_InterceptMoveForward
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ARhynio_Character_BP_C::BP_InterceptMoveForward(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.BP_InterceptMoveForward");
		
		ARhynio_Character_BP_C_BP_InterceptMoveForward_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.CanUseNonProjResinAbility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               CanUse                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::CanUseNonProjResinAbility(bool* CanUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.CanUseNonProjResinAbility");
		
		ARhynio_Character_BP_C_CanUseNonProjResinAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanUse != nullptr)
			*CanUse = params.CanUse;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.GetResinPercent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Percent                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::GetResinPercent(float* Percent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.GetResinPercent");
		
		ARhynio_Character_BP_C_GetResinPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Percent != nullptr)
			*Percent = params.Percent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.DisplayInsufficientResinMessage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::DisplayInsufficientResinMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.DisplayInsufficientResinMessage");
		
		ARhynio_Character_BP_C_DisplayInsufficientResinMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.IsResinDraining
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool ARhynio_Character_BP_C::IsResinDraining()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.IsResinDraining");
		
		ARhynio_Character_BP_C_IsResinDraining_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.DrainResinQuantity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::DrainResinQuantity(int32_t amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.DrainResinQuantity");
		
		ARhynio_Character_BP_C_DrainResinQuantity_Params params {};
		params.amount = amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.ResetStructurePlacing
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::ResetStructurePlacing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.ResetStructurePlacing");
		
		ARhynio_Character_BP_C_ResetStructurePlacing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.ClearWaterWalkingMode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::ClearWaterWalkingMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.ClearWaterWalkingMode");
		
		ARhynio_Character_BP_C_ClearWaterWalkingMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.OnRep_bInWaterWalkMode
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::OnRep_bInWaterWalkMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.OnRep_bInWaterWalkMode");
		
		ARhynio_Character_BP_C_OnRep_bInWaterWalkMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.AttemptSetWaterWalking
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Set                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::AttemptSetWaterWalking(bool Set, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.AttemptSetWaterWalking");
		
		ARhynio_Character_BP_C_AttemptSetWaterWalking_Params params {};
		params.Set = Set;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPNotifyClearRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderClearing                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::BPNotifyClearRider(class AShooterCharacter* RiderClearing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPNotifyClearRider");
		
		ARhynio_Character_BP_C_BPNotifyClearRider_Params params {};
		params.RiderClearing = RiderClearing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.ReceiveBeginPlay");
		
		ARhynio_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPDrawToRiderHUD
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterHUD*                                 HUD                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::BPDrawToRiderHUD(class AShooterHUD* HUD)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPDrawToRiderHUD");
		
		ARhynio_Character_BP_C_BPDrawToRiderHUD_Params params {};
		params.HUD = HUD;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPGetCrosshairColor
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	struct FLinearColor ARhynio_Character_BP_C::BPGetCrosshairColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPGetCrosshairColor");
		
		ARhynio_Character_BP_C_BPGetCrosshairColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.DoStructurePlacement
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Loc                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    Rot                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::DoStructurePlacement(const struct FVector& Loc, const struct FRotator& Rot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.DoStructurePlacement");
		
		ARhynio_Character_BP_C_DoStructurePlacement_Params params {};
		params.Loc = Loc;
		params.Rot = Rot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.DoPlaceStructure
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::DoPlaceStructure()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.DoPlaceStructure");
		
		ARhynio_Character_BP_C_DoPlaceStructure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.DoAttachStructure
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::DoAttachStructure()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.DoAttachStructure");
		
		ARhynio_Character_BP_C_DoAttachStructure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.RequestPlaceStructure
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Loc                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    Rot                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    ViewRot                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::RequestPlaceStructure(const struct FVector& Loc, const struct FRotator& Rot, const struct FRotator& ViewRot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.RequestPlaceStructure");
		
		ARhynio_Character_BP_C_RequestPlaceStructure_Params params {};
		params.Loc = Loc;
		params.Rot = Rot;
		params.ViewRot = ViewRot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.RemoveAttachedStructure
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::RemoveAttachedStructure()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.RemoveAttachedStructure");
		
		ARhynio_Character_BP_C_RemoveAttachedStructure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.ClientInitAttachedStructure
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::ClientInitAttachedStructure()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.ClientInitAttachedStructure");
		
		ARhynio_Character_BP_C_ClientInitAttachedStructure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.SetupAttachedStructure
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::SetupAttachedStructure()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.SetupAttachedStructure");
		
		ARhynio_Character_BP_C_SetupAttachedStructure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.OnRep_AttachedStructureID
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::OnRep_AttachedStructureID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.OnRep_AttachedStructureID");
		
		ARhynio_Character_BP_C_OnRep_AttachedStructureID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.SetHighlightColor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            Structure                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::SetHighlightColor(class APrimalStructure* Structure, const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.SetHighlightColor");
		
		ARhynio_Character_BP_C_SetHighlightColor_Params params {};
		params.Structure = Structure;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPTimerNonDedicated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::BPTimerNonDedicated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPTimerNonDedicated");
		
		ARhynio_Character_BP_C_BPTimerNonDedicated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPOnMovementModeChangedNotify
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      PreviousCustomMode                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::BPOnMovementModeChangedNotify(EMovementMode PrevMovementMode, unsigned char PreviousCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPOnMovementModeChangedNotify");
		
		ARhynio_Character_BP_C_BPOnMovementModeChangedNotify_Params params {};
		params.PrevMovementMode = PrevMovementMode;
		params.PreviousCustomMode = PreviousCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.BP_ModifyInputAcceleration
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     ModifyInputAccel                                           (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::BP_ModifyInputAcceleration(struct FVector* ModifyInputAccel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.BP_ModifyInputAcceleration");
		
		ARhynio_Character_BP_C_BP_ModifyInputAcceleration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ModifyInputAccel != nullptr)
			*ModifyInputAccel = params.ModifyInputAccel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPOverrideFlyingVelocity
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     InitialVelocity                                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Gravity                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector ARhynio_Character_BP_C::BPOverrideFlyingVelocity(struct FVector* InitialVelocity, struct FVector* Gravity, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPOverrideFlyingVelocity");
		
		ARhynio_Character_BP_C_BPOverrideFlyingVelocity_Params params {};
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
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.RequestAttachStructure
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            Structure                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::RequestAttachStructure(class APrimalStructure* Structure)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.RequestAttachStructure");
		
		ARhynio_Character_BP_C_RequestAttachStructure_Params params {};
		params.Structure = Structure;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.ShouldRequestStructuresPlacedOnFloor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APrimalStructure*                            Structure                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ARhynio_Character_BP_C::ShouldRequestStructuresPlacedOnFloor(class APrimalStructure* Structure)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.ShouldRequestStructuresPlacedOnFloor");
		
		ARhynio_Character_BP_C_ShouldRequestStructuresPlacedOnFloor_Params params {};
		params.Structure = Structure;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.SetupAimedStructure
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            Structure                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::SetupAimedStructure(class APrimalStructure* Structure)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.SetupAimedStructure");
		
		ARhynio_Character_BP_C_SetupAimedStructure_Params params {};
		params.Structure = Structure;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.GetStructurePlacer
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APrimalStructurePlacer*                      StructurePlacer                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::GetStructurePlacer(class APrimalStructurePlacer** StructurePlacer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.GetStructurePlacer");
		
		ARhynio_Character_BP_C_GetStructurePlacer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StructurePlacer != nullptr)
			*StructurePlacer = params.StructurePlacer;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.UpdateAimedStructure
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::UpdateAimedStructure()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.UpdateAimedStructure");
		
		ARhynio_Character_BP_C_UpdateAimedStructure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.SetLastAimedStructure
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            Structure                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::SetLastAimedStructure(class APrimalStructure* Structure)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.SetLastAimedStructure");
		
		ARhynio_Character_BP_C_SetLastAimedStructure_Params params {};
		params.Structure = Structure;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.HasSavedMaterialForComponent
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USceneComponent*                             Component                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalStructure*                            Structure                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::HasSavedMaterialForComponent(class USceneComponent* Component, class APrimalStructure* Structure, int32_t* index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.HasSavedMaterialForComponent");
		
		ARhynio_Character_BP_C_HasSavedMaterialForComponent_Params params {};
		params.Component = Component;
		params.Structure = Structure;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (index != nullptr)
			*index = params.index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.SetStructureHighlighted
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            Structure                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               NewHighlighted                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::SetStructureHighlighted(class APrimalStructure* Structure, bool NewHighlighted, const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.SetStructureHighlighted");
		
		ARhynio_Character_BP_C_SetStructureHighlighted_Params params {};
		params.Structure = Structure;
		params.NewHighlighted = NewHighlighted;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.ResetLastAimedStructure
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::ResetLastAimedStructure()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.ResetLastAimedStructure");
		
		ARhynio_Character_BP_C_ResetLastAimedStructure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.SpawnPreviewStructure
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::SpawnPreviewStructure()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.SpawnPreviewStructure");
		
		ARhynio_Character_BP_C_SpawnPreviewStructure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.GetAimedStructure
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            Structure                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::GetAimedStructure(class APrimalStructure** Structure)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.GetAimedStructure");
		
		ARhynio_Character_BP_C_GetAimedStructure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Structure != nullptr)
			*Structure = params.Structure;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.GetCanImpregnate
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        Dino                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::GetCanImpregnate(class APrimalDinoCharacter* Dino, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.GetCanImpregnate");
		
		ARhynio_Character_BP_C_GetCanImpregnate_Params params {};
		params.Dino = Dino;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.AttemptImpregnate
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        Dino                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::AttemptImpregnate(class APrimalDinoCharacter* Dino, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.AttemptImpregnate");
		
		ARhynio_Character_BP_C_AttemptImpregnate_Params params {};
		params.Dino = Dino;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.BlueprintAdjustOutputDamage
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OriginalDamageAmount                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      HitActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      OutDamageType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OutDamageImpulse                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ARhynio_Character_BP_C::BlueprintAdjustOutputDamage(int32_t AttackIndex, float OriginalDamageAmount, class AActor* HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.BlueprintAdjustOutputDamage");
		
		ARhynio_Character_BP_C_BlueprintAdjustOutputDamage_Params params {};
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
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.ClearIgnoreWater
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::ClearIgnoreWater()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.ClearIgnoreWater");
		
		ARhynio_Character_BP_C_ClearIgnoreWater_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.GetIsCloseToWaterSurface
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Close                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               SurfaceIsAbove                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::GetIsCloseToWaterSurface(bool* Close, bool* SurfaceIsAbove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.GetIsCloseToWaterSurface");
		
		ARhynio_Character_BP_C_GetIsCloseToWaterSurface_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Close != nullptr)
			*Close = params.Close;
		if (SurfaceIsAbove != nullptr)
			*SurfaceIsAbove = params.SurfaceIsAbove;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.AttemptExitWaterJump
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::AttemptExitWaterJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.AttemptExitWaterJump");
		
		ARhynio_Character_BP_C_AttemptExitWaterJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPOverrideGetAttackAnimationIndex
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class UAnimMontage*>                        AnimationArray                                             (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	int32_t ARhynio_Character_BP_C::BPOverrideGetAttackAnimationIndex(int32_t AttackIndex, TArray<class UAnimMontage*>* AnimationArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPOverrideGetAttackAnimationIndex");
		
		ARhynio_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params params {};
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
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPNotifySetRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderSetting                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::BPNotifySetRider(class AShooterCharacter* RiderSetting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPNotifySetRider");
		
		ARhynio_Character_BP_C_BPNotifySetRider_Params params {};
		params.RiderSetting = RiderSetting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPDinoPostBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::BPDinoPostBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPDinoPostBeginPlay");
		
		ARhynio_Character_BP_C_BPDinoPostBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.RidingTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::RidingTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.RidingTick");
		
		ARhynio_Character_BP_C_RidingTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.GetResinProjTargetLoc
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     TargetLoc                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::GetResinProjTargetLoc(struct FVector* TargetLoc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.GetResinProjTargetLoc");
		
		ARhynio_Character_BP_C_GetResinProjTargetLoc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TargetLoc != nullptr)
			*TargetLoc = params.TargetLoc;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.GetResinProjectile
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      ProjClass                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::GetResinProjectile(class UClass** ProjClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.GetResinProjectile");
		
		ARhynio_Character_BP_C_GetResinProjectile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ProjClass != nullptr)
			*ProjClass = params.ProjClass;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPTimerServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPTimerServer");
		
		ARhynio_Character_BP_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.BP_OnSetDeath
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::BP_OnSetDeath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.BP_OnSetDeath");
		
		ARhynio_Character_BP_C_BP_OnSetDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              IncomingDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (Parm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  PointHitInfo                                               (Parm)
	 */
	float ARhynio_Character_BP_C::BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPAdjustDamage");
		
		ARhynio_Character_BP_C_BPAdjustDamage_Params params {};
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
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ARhynio_Character_BP_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPTryMultiUse");
		
		ARhynio_Character_BP_C_BPTryMultiUse_Params params {};
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
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.UpdateResinQuantity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::UpdateResinQuantity(int32_t amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.UpdateResinQuantity");
		
		ARhynio_Character_BP_C_UpdateResinQuantity_Params params {};
		params.amount = amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPHandleControllerInitiatedAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ARhynio_Character_BP_C::BPHandleControllerInitiatedAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPHandleControllerInitiatedAttack");
		
		ARhynio_Character_BP_C_BPHandleControllerInitiatedAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPDoAttack
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::BPDoAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPDoAttack");
		
		ARhynio_Character_BP_C_BPDoAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.BlueprintCanRiderAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ARhynio_Character_BP_C::BlueprintCanRiderAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.BlueprintCanRiderAttack");
		
		ARhynio_Character_BP_C_BlueprintCanRiderAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.BlueprintCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ARhynio_Character_BP_C::BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.BlueprintCanAttack");
		
		ARhynio_Character_BP_C_BlueprintCanAttack_Params params {};
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
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.GetResinQuantity
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Quantity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::GetResinQuantity(int32_t* Quantity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.GetResinQuantity");
		
		ARhynio_Character_BP_C_GetResinQuantity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Quantity != nullptr)
			*Quantity = params.Quantity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.GetCanShootResin
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CanShoot                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsResinQuantityFail                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsStaminaFail                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::GetCanShootResin(int32_t Type, bool* CanShoot, bool* IsResinQuantityFail, bool* IsStaminaFail)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.GetCanShootResin");
		
		ARhynio_Character_BP_C_GetCanShootResin_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanShoot != nullptr)
			*CanShoot = params.CanShoot;
		if (IsResinQuantityFail != nullptr)
			*IsResinQuantityFail = params.IsResinQuantityFail;
		if (IsStaminaFail != nullptr)
			*IsStaminaFail = params.IsStaminaFail;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPOnDinoFiredProjectile
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterProjectile*                          Projectile                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::BPOnDinoFiredProjectile(class AShooterProjectile* Projectile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPOnDinoFiredProjectile");
		
		ARhynio_Character_BP_C_BPOnDinoFiredProjectile_Params params {};
		params.Projectile = Projectile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPGetHUDElements
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FHUDElement>                         OutElements                                                (Parm, OutParm, ZeroConstructor)
	 */
	void ARhynio_Character_BP_C::BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPGetHUDElements");
		
		ARhynio_Character_BP_C_BPGetHUDElements_Params params {};
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
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.DoWingTaunt
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::DoWingTaunt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.DoWingTaunt");
		
		ARhynio_Character_BP_C_DoWingTaunt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.StopMovementFn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::StopMovementFn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.StopMovementFn");
		
		ARhynio_Character_BP_C_StopMovementFn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.ShouldTryLatch
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               LandOnFailureToLatch                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::ShouldTryLatch(bool* ret, bool* LandOnFailureToLatch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.ShouldTryLatch");
		
		ARhynio_Character_BP_C_ShouldTryLatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
		if (LandOnFailureToLatch != nullptr)
			*LandOnFailureToLatch = params.LandOnFailureToLatch;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPModifyDesiredRotation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    InDesiredRotation                                          (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    OutDesiredRotation                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ARhynio_Character_BP_C::BPModifyDesiredRotation(float DeltaTime, struct FRotator* InDesiredRotation, struct FRotator* OutDesiredRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPModifyDesiredRotation");
		
		ARhynio_Character_BP_C_BPModifyDesiredRotation_Params params {};
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
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPSetupTamed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bWasJustTamed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::BPSetupTamed(bool bWasJustTamed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPSetupTamed");
		
		ARhynio_Character_BP_C_BPSetupTamed_Params params {};
		params.bWasJustTamed = bWasJustTamed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPOnStartJump
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ARhynio_Character_BP_C::BPOnStartJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPOnStartJump");
		
		ARhynio_Character_BP_C_BPOnStartJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPHandleUseButtonPress
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    RiderController                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ARhynio_Character_BP_C::BPHandleUseButtonPress(class AShooterPlayerController* RiderController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.BPHandleUseButtonPress");
		
		ARhynio_Character_BP_C_BPHandleUseButtonPress_Params params {};
		params.RiderController = RiderController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.DisableCameraInterpolation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::DisableCameraInterpolation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.DisableCameraInterpolation");
		
		ARhynio_Character_BP_C_DisableCameraInterpolation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.OnRep_LatchingSurfaceNormal
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::OnRep_LatchingSurfaceNormal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.OnRep_LatchingSurfaceNormal");
		
		ARhynio_Character_BP_C_OnRep_LatchingSurfaceNormal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.Controller Follow ActorRotation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::ControllerFollowActorRotation(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.Controller Follow ActorRotation");
		
		ARhynio_Character_BP_C_ControllerFollowActorRotation_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.ReferenceLatchingObjects
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::ReferenceLatchingObjects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.ReferenceLatchingObjects");
		
		ARhynio_Character_BP_C_ReferenceLatchingObjects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.LineTrace
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMeshComponent*                              Mesh                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        SocketName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               BackwardLatching                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               HitSomething                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Normal                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      HitActor                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::LineTrace(class UMeshComponent* Mesh, const class FName& SocketName, class AActor* Actor, const struct FVector& Offset, bool BackwardLatching, bool* HitSomething, struct FVector* Location, struct FVector* Normal, class AActor** HitActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.LineTrace");
		
		ARhynio_Character_BP_C_LineTrace_Params params {};
		params.Mesh = Mesh;
		params.SocketName = SocketName;
		params.Actor = Actor;
		params.Offset = Offset;
		params.BackwardLatching = BackwardLatching;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HitSomething != nullptr)
			*HitSomething = params.HitSomething;
		if (Location != nullptr)
			*Location = params.Location;
		if (Normal != nullptr)
			*Normal = params.Normal;
		if (HitActor != nullptr)
			*HitActor = params.HitActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.InterruptLatching
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::InterruptLatching()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.InterruptLatching");
		
		ARhynio_Character_BP_C_InterruptLatching_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.ProcessLatching
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::ProcessLatching(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.ProcessLatching");
		
		ARhynio_Character_BP_C_ProcessLatching_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.TryLatch
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               backwardsLatching                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::TryLatch(const struct FVector& Offset, bool backwardsLatching)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.TryLatch");
		
		ARhynio_Character_BP_C_TryLatch_Params params {};
		params.Offset = Offset;
		params.backwardsLatching = backwardsLatching;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.UserConstructionScript");
		
		ARhynio_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.InpActEvt_BrakeDino_K2Node_InputActionEvent_446
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::InpActEvt_BrakeDino_K2Node_InputActionEvent_446()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.InpActEvt_BrakeDino_K2Node_InputActionEvent_446");
		
		ARhynio_Character_BP_C_InpActEvt_BrakeDino_K2Node_InputActionEvent_446_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.InpActEvt_BrakeDino_K2Node_InputActionEvent_445
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::InpActEvt_BrakeDino_K2Node_InputActionEvent_445()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.InpActEvt_BrakeDino_K2Node_InputActionEvent_445");
		
		ARhynio_Character_BP_C_InpActEvt_BrakeDino_K2Node_InputActionEvent_445_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.InpActEvt_AltFire_K2Node_InputActionEvent_444
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::InpActEvt_AltFire_K2Node_InputActionEvent_444()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.InpActEvt_AltFire_K2Node_InputActionEvent_444");
		
		ARhynio_Character_BP_C_InpActEvt_AltFire_K2Node_InputActionEvent_444_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.InpActEvt_AltFire_K2Node_InputActionEvent_443
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::InpActEvt_AltFire_K2Node_InputActionEvent_443()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.InpActEvt_AltFire_K2Node_InputActionEvent_443");
		
		ARhynio_Character_BP_C_InpActEvt_AltFire_K2Node_InputActionEvent_443_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_442
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_442()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_442");
		
		ARhynio_Character_BP_C_InpActEvt_ArkGamepadLeftShoulder_K2Node_InputActionEvent_442_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_441
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_441()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_441");
		
		ARhynio_Character_BP_C_InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_441_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.InpActEvt_ToggleRtsMode_K2Node_InputActionEvent_440
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::InpActEvt_ToggleRtsMode_K2Node_InputActionEvent_440()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.InpActEvt_ToggleRtsMode_K2Node_InputActionEvent_440");
		
		ARhynio_Character_BP_C_InpActEvt_ToggleRtsMode_K2Node_InputActionEvent_440_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.InpActEvt_Poop_K2Node_InputActionEvent_439
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::InpActEvt_Poop_K2Node_InputActionEvent_439()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.InpActEvt_Poop_K2Node_InputActionEvent_439");
		
		ARhynio_Character_BP_C_InpActEvt_Poop_K2Node_InputActionEvent_439_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.Latch
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               backwardsLatching                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               TryLatch                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               LandOnFailureToLatch                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::Latch(bool backwardsLatching, bool TryLatch, bool LandOnFailureToLatch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.Latch");
		
		ARhynio_Character_BP_C_Latch_Params params {};
		params.backwardsLatching = backwardsLatching;
		params.TryLatch = TryLatch;
		params.LandOnFailureToLatch = LandOnFailureToLatch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.ReceiveTick");
		
		ARhynio_Character_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.LatchStartAnimation
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Downward                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::LatchStartAnimation(bool Downward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.LatchStartAnimation");
		
		ARhynio_Character_BP_C_LatchStartAnimation_Params params {};
		params.Downward = Downward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.UnLatch
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               LatchingInterrupted                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::UnLatch(bool LatchingInterrupted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.UnLatch");
		
		ARhynio_Character_BP_C_UnLatch_Params params {};
		params.LatchingInterrupted = LatchingInterrupted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.UnLatchStartAnimation
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Downward                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::UnLatchStartAnimation(bool Downward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.UnLatchStartAnimation");
		
		ARhynio_Character_BP_C_UnLatchStartAnimation_Params params {};
		params.Downward = Downward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.MoveToUsingDirection
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::MoveToUsingDirection(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.MoveToUsingDirection");
		
		ARhynio_Character_BP_C_MoveToUsingDirection_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.UnLatchMoveAndRotate
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::UnLatchMoveAndRotate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.UnLatchMoveAndRotate");
		
		ARhynio_Character_BP_C_UnLatchMoveAndRotate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.LatchingStartEvent
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::LatchingStartEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.LatchingStartEvent");
		
		ARhynio_Character_BP_C_LatchingStartEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.LatchingEndEvent
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::LatchingEndEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.LatchingEndEvent");
		
		ARhynio_Character_BP_C_LatchingEndEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.StopMovement
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::StopMovement(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.StopMovement");
		
		ARhynio_Character_BP_C_StopMovement_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.DisableFaceLatchingObjectRotation
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::DisableFaceLatchingObjectRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.DisableFaceLatchingObjectRotation");
		
		ARhynio_Character_BP_C_DisableFaceLatchingObjectRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181");
		
		ARhynio_Character_BP_C_InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.SetPassengersSurfaceCamera
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Yaw                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Pitch                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Roll                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::SetPassengersSurfaceCamera(float Yaw, float Pitch, float Roll)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.SetPassengersSurfaceCamera");
		
		ARhynio_Character_BP_C_SetPassengersSurfaceCamera_Params params {};
		params.Yaw = Yaw;
		params.Pitch = Pitch;
		params.Roll = Roll;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.LocalFaceLatchingObject
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::LocalFaceLatchingObject(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.LocalFaceLatchingObject");
		
		ARhynio_Character_BP_C_LocalFaceLatchingObject_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.StartedJump
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::StartedJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.StartedJump");
		
		ARhynio_Character_BP_C_StartedJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.MoveDuringUnlatching
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::MoveDuringUnlatching()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.MoveDuringUnlatching");
		
		ARhynio_Character_BP_C_MoveDuringUnlatching_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.Server_AttemptResinFire
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     TargetLoc                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               RapidFire                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        HomingTowardsBone                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::Server_AttemptResinFire(const struct FVector& TargetLoc, class AActor* TargetActor, bool RapidFire, const class FName& HomingTowardsBone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.Server_AttemptResinFire");
		
		ARhynio_Character_BP_C_Server_AttemptResinFire_Params params {};
		params.TargetLoc = TargetLoc;
		params.TargetActor = TargetActor;
		params.RapidFire = RapidFire;
		params.HomingTowardsBone = HomingTowardsBone;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.Server_SetLastResinProjTargetLoc
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     TargetLoc                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::Server_SetLastResinProjTargetLoc(const struct FVector& TargetLoc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.Server_SetLastResinProjTargetLoc");
		
		ARhynio_Character_BP_C_Server_SetLastResinProjTargetLoc_Params params {};
		params.TargetLoc = TargetLoc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.Server_AttemptExitWaterJump
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::Server_AttemptExitWaterJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.Server_AttemptExitWaterJump");
		
		ARhynio_Character_BP_C_Server_AttemptExitWaterJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.Server_RequestAttachStructure
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            Structure                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::Server_RequestAttachStructure(class APrimalStructure* Structure)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.Server_RequestAttachStructure");
		
		ARhynio_Character_BP_C_Server_RequestAttachStructure_Params params {};
		params.Structure = Structure;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.Server_RequestPlaceStructure
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Loc                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    Rot                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    ViewRot                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::Server_RequestPlaceStructure(const struct FVector& Loc, const struct FRotator& Rot, const struct FRotator& ViewRot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.Server_RequestPlaceStructure");
		
		ARhynio_Character_BP_C_Server_RequestPlaceStructure_Params params {};
		params.Loc = Loc;
		params.Rot = Rot;
		params.ViewRot = ViewRot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.Multi_ResetPendingAttachedStructure
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::Multi_ResetPendingAttachedStructure()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.Multi_ResetPendingAttachedStructure");
		
		ARhynio_Character_BP_C_Multi_ResetPendingAttachedStructure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.Multi_DoStructurePlacement
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Loc                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    Rot                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::Multi_DoStructurePlacement(const struct FVector& Loc, const struct FRotator& Rot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.Multi_DoStructurePlacement");
		
		ARhynio_Character_BP_C_Multi_DoStructurePlacement_Params params {};
		params.Loc = Loc;
		params.Rot = Rot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.BindReceivedStructuresDelegate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    ShooterPC                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::BindReceivedStructuresDelegate(class AShooterPlayerController* ShooterPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.BindReceivedStructuresDelegate");
		
		ARhynio_Character_BP_C_BindReceivedStructuresDelegate_Params params {};
		params.ShooterPC = ShooterPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.OnClientReceiveStructuresPlacedOnFloor_Event
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            Structure                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class APrimalStructure*>                    StructuresPlacedOnFloor                                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void ARhynio_Character_BP_C::OnClientReceiveStructuresPlacedOnFloor_Event(class APrimalStructure* Structure, TArray<class APrimalStructure*>* StructuresPlacedOnFloor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.OnClientReceiveStructuresPlacedOnFloor_Event");
		
		ARhynio_Character_BP_C_OnClientReceiveStructuresPlacedOnFloor_Event_Params params {};
		params.Structure = Structure;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StructuresPlacedOnFloor != nullptr)
			*StructuresPlacedOnFloor = params.StructuresPlacedOnFloor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.Server_AttemptSetWaterWalking
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Set                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::Server_AttemptSetWaterWalking(bool Set)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.Server_AttemptSetWaterWalking");
		
		ARhynio_Character_BP_C_Server_AttemptSetWaterWalking_Params params {};
		params.Set = Set;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.Multi_UpdateWaterMovementVars
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsWaterWalk                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               PrevLand                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsSurfaceSwimming                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::Multi_UpdateWaterMovementVars(bool IsWaterWalk, bool PrevLand, bool IsSurfaceSwimming)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.Multi_UpdateWaterMovementVars");
		
		ARhynio_Character_BP_C_Multi_UpdateWaterMovementVars_Params params {};
		params.IsWaterWalk = IsWaterWalk;
		params.PrevLand = PrevLand;
		params.IsSurfaceSwimming = IsSurfaceSwimming;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.Server_TryRhynioMultiuse
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::Server_TryRhynioMultiuse(class AShooterPlayerController* PC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.Server_TryRhynioMultiuse");
		
		ARhynio_Character_BP_C_Server_TryRhynioMultiuse_Params params {};
		params.PC = PC;
		params.UseIndex = UseIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.Server_SetShouldStopRapidFiring
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::Server_SetShouldStopRapidFiring()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.Server_SetShouldStopRapidFiring");
		
		ARhynio_Character_BP_C_Server_SetShouldStopRapidFiring_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.Multi_StopRapidFiring
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ARhynio_Character_BP_C::Multi_StopRapidFiring()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.Multi_StopRapidFiring");
		
		ARhynio_Character_BP_C_Multi_StopRapidFiring_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Rhynio_Character_BP.Rhynio_Character_BP_C.ExecuteUbergraph_Rhynio_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARhynio_Character_BP_C::ExecuteUbergraph_Rhynio_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Rhynio_Character_BP.Rhynio_Character_BP_C.ExecuteUbergraph_Rhynio_Character_BP");
		
		ARhynio_Character_BP_C_ExecuteUbergraph_Rhynio_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARhynio_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARhynio_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Rhynio_Character_BP.Rhynio_Character_BP_C");
		return ptr;
	}

}


