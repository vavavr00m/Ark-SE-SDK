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
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.RefreshNearbyTamingPCs
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAmargasaurus_Character_BP_C::RefreshNearbyTamingPCs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.RefreshNearbyTamingPCs");
		
		AAmargasaurus_Character_BP_C_RefreshNearbyTamingPCs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SpawnWaterBubbleVFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAmargasaurus_Character_BP_C::SpawnWaterBubbleVFX(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SpawnWaterBubbleVFX");
		
		AAmargasaurus_Character_BP_C_SpawnWaterBubbleVFX_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.UpdateWaterTrailVFX
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AAmargasaurus_Character_BP_C::UpdateWaterTrailVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.UpdateWaterTrailVFX");
		
		AAmargasaurus_Character_BP_C_UpdateWaterTrailVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SpawnWaterEntryVFX
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AAmargasaurus_Character_BP_C::SpawnWaterEntryVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SpawnWaterEntryVFX");
		
		AAmargasaurus_Character_BP_C_SpawnWaterEntryVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.UpdateRiddenBuff
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           Rider                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsClear                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAmargasaurus_Character_BP_C::UpdateRiddenBuff(class AShooterCharacter* Rider, bool IsClear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.UpdateRiddenBuff");
		
		AAmargasaurus_Character_BP_C_UpdateRiddenBuff_Params params {};
		params.Rider = Rider;
		params.IsClear = IsClear;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPNotifySetRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderSetting                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAmargasaurus_Character_BP_C::BPNotifySetRider(class AShooterCharacter* RiderSetting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPNotifySetRider");
		
		AAmargasaurus_Character_BP_C_BPNotifySetRider_Params params {};
		params.RiderSetting = RiderSetting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.K2_OnMovementModeChanged
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EMovementMode                                      NewMovementMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      PrevCustomMode                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      NewCustomMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAmargasaurus_Character_BP_C::K2_OnMovementModeChanged(EMovementMode PrevMovementMode, EMovementMode NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.K2_OnMovementModeChanged");
		
		AAmargasaurus_Character_BP_C_K2_OnMovementModeChanged_Params params {};
		params.PrevMovementMode = PrevMovementMode;
		params.NewMovementMode = NewMovementMode;
		params.PrevCustomMode = PrevCustomMode;
		params.NewCustomMode = NewCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.ToggleLockedAim
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAmargasaurus_Character_BP_C::ToggleLockedAim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.ToggleLockedAim");
		
		AAmargasaurus_Character_BP_C_ToggleLockedAim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SendTamingHUDMessage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ColorIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAmargasaurus_Character_BP_C::SendTamingHUDMessage(int32_t index, int32_t ColorIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SendTamingHUDMessage");
		
		AAmargasaurus_Character_BP_C_SendTamingHUDMessage_Params params {};
		params.index = index;
		params.ColorIndex = ColorIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.CharacterNonAggroBuffCheck
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           ShooterChar                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               HasNonAggroBuff                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAmargasaurus_Character_BP_C::CharacterNonAggroBuffCheck(class AShooterCharacter* ShooterChar, bool* HasNonAggroBuff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.CharacterNonAggroBuffCheck");
		
		AAmargasaurus_Character_BP_C_CharacterNonAggroBuffCheck_Params params {};
		params.ShooterChar = ShooterChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasNonAggroBuff != nullptr)
			*HasNonAggroBuff = params.HasNonAggroBuff;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.ApplyTempDebuffToHitActors
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAmargasaurus_Character_BP_C::ApplyTempDebuffToHitActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.ApplyTempDebuffToHitActors");
		
		AAmargasaurus_Character_BP_C_ApplyTempDebuffToHitActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BlueprintAdjustOutputDamage
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OriginalDamageAmount                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      HitActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      OutDamageType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OutDamageImpulse                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float AAmargasaurus_Character_BP_C::BlueprintAdjustOutputDamage(int32_t AttackIndex, float OriginalDamageAmount, class AActor* HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BlueprintAdjustOutputDamage");
		
		AAmargasaurus_Character_BP_C_BlueprintAdjustOutputDamage_Params params {};
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
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPLocalPossessedBy
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ByController                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAmargasaurus_Character_BP_C::BPLocalPossessedBy(class APlayerController* ByController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPLocalPossessedBy");
		
		AAmargasaurus_Character_BP_C_BPLocalPossessedBy_Params params {};
		params.ByController = ByController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPLocalUnpossessed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAmargasaurus_Character_BP_C::BPLocalUnpossessed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPLocalUnpossessed");
		
		AAmargasaurus_Character_BP_C_BPLocalUnpossessed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.RefreshNonRiderPossessedCrosshair
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAmargasaurus_Character_BP_C::RefreshNonRiderPossessedCrosshair()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.RefreshNonRiderPossessedCrosshair");
		
		AAmargasaurus_Character_BP_C_RefreshNonRiderPossessedCrosshair_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SpawnSpikeTypeToggleVFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            SpikeTypeIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAmargasaurus_Character_BP_C::SpawnSpikeTypeToggleVFX(int32_t SpikeTypeIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SpawnSpikeTypeToggleVFX");
		
		AAmargasaurus_Character_BP_C_SpawnSpikeTypeToggleVFX_Params params {};
		params.SpikeTypeIndex = SpikeTypeIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.UpdateSpikeColor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAmargasaurus_Character_BP_C::UpdateSpikeColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.UpdateSpikeColor");
		
		AAmargasaurus_Character_BP_C_UpdateSpikeColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.OnRep_CurrentSpikeType
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAmargasaurus_Character_BP_C::OnRep_CurrentSpikeType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.OnRep_CurrentSpikeType");
		
		AAmargasaurus_Character_BP_C_OnRep_CurrentSpikeType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SpawnSpikeMuzzleVFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            SpikeBoneIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SpikeTypeIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAmargasaurus_Character_BP_C::SpawnSpikeMuzzleVFX(int32_t SpikeBoneIndex, int32_t SpikeTypeIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SpawnSpikeMuzzleVFX");
		
		AAmargasaurus_Character_BP_C_SpawnSpikeMuzzleVFX_Params params {};
		params.SpikeBoneIndex = SpikeBoneIndex;
		params.SpikeTypeIndex = SpikeTypeIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPModifyDesiredRotation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    InDesiredRotation                                          (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    OutDesiredRotation                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AAmargasaurus_Character_BP_C::BPModifyDesiredRotation(float DeltaTime, struct FRotator* InDesiredRotation, struct FRotator* OutDesiredRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPModifyDesiredRotation");
		
		AAmargasaurus_Character_BP_C_BPModifyDesiredRotation_Params params {};
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
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.OnRep_ActiveSpikes
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAmargasaurus_Character_BP_C::OnRep_ActiveSpikes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.OnRep_ActiveSpikes");
		
		AAmargasaurus_Character_BP_C_OnRep_ActiveSpikes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPTimerNonDedicated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAmargasaurus_Character_BP_C::BPTimerNonDedicated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPTimerNonDedicated");
		
		AAmargasaurus_Character_BP_C_BPTimerNonDedicated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.GetNextSpikeToRegen
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NextIndex                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAmargasaurus_Character_BP_C::GetNextSpikeToRegen(int32_t* NextIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.GetNextSpikeToRegen");
		
		AAmargasaurus_Character_BP_C_GetNextSpikeToRegen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NextIndex != nullptr)
			*NextIndex = params.NextIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPDoAttack
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAmargasaurus_Character_BP_C::BPDoAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPDoAttack");
		
		AAmargasaurus_Character_BP_C_BPDoAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPOverrideCameraViewTarget
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
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
	void AAmargasaurus_Character_BP_C::BPOverrideCameraViewTarget(const class FName& CurrentCameraMode, const struct FVector& DesiredCameraLocation, const struct FRotator& DesiredCameraRotation, float DesiredFOV, bool* bOverrideCameraLocation, struct FVector* CameraLocation, bool* bOverrideCameraRotation, struct FRotator* CameraRotation, bool* bOverrideCameraFOV, float* CameraFOV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPOverrideCameraViewTarget");
		
		AAmargasaurus_Character_BP_C_BPOverrideCameraViewTarget_Params params {};
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
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPGetCrosshairColor
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	struct FLinearColor AAmargasaurus_Character_BP_C::BPGetCrosshairColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPGetCrosshairColor");
		
		AAmargasaurus_Character_BP_C_BPGetCrosshairColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.OnRep_bIsAimTargeting
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAmargasaurus_Character_BP_C::OnRep_bIsAimTargeting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.OnRep_bIsAimTargeting");
		
		AAmargasaurus_Character_BP_C_OnRep_bIsAimTargeting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.UpdateTamingParticleEmitting
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Emit                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAmargasaurus_Character_BP_C::UpdateTamingParticleEmitting(bool Emit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.UpdateTamingParticleEmitting");
		
		AAmargasaurus_Character_BP_C_UpdateTamingParticleEmitting_Params params {};
		params.Emit = Emit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPShouldForceFlee
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AAmargasaurus_Character_BP_C::BPShouldForceFlee()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPShouldForceFlee");
		
		AAmargasaurus_Character_BP_C_BPShouldForceFlee_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BlueprintDrawFloatingHUD
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterHUD*                                 HUD                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterX                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterY                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DrawScale                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAmargasaurus_Character_BP_C::BlueprintDrawFloatingHUD(class AShooterHUD* HUD, float CenterX, float CenterY, float DrawScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BlueprintDrawFloatingHUD");
		
		AAmargasaurus_Character_BP_C_BlueprintDrawFloatingHUD_Params params {};
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
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.AllowWakingTame
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AAmargasaurus_Character_BP_C::AllowWakingTame(class APlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.AllowWakingTame");
		
		AAmargasaurus_Character_BP_C_AllowWakingTame_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPFedWakingTameEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAmargasaurus_Character_BP_C::BPFedWakingTameEvent(class APlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPFedWakingTameEvent");
		
		AAmargasaurus_Character_BP_C_BPFedWakingTameEvent_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.OnRep_bTamingWantsFed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AAmargasaurus_Character_BP_C::OnRep_bTamingWantsFed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.OnRep_bTamingWantsFed");
		
		AAmargasaurus_Character_BP_C_OnRep_bTamingWantsFed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPServerHandleNetExecCommand
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           FromPC                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        CommandName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (Parm, OutParm, ReferenceParm)
	 */
	bool AAmargasaurus_Character_BP_C::BPServerHandleNetExecCommand(class APlayerController* FromPC, const class FName& CommandName, struct FBPNetExecParams* ExecParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPServerHandleNetExecCommand");
		
		AAmargasaurus_Character_BP_C_BPServerHandleNetExecCommand_Params params {};
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
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SetTamingPC
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Set                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAmargasaurus_Character_BP_C::SetTamingPC(class AShooterPlayerController* PC, bool Set)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SetTamingPC");
		
		AAmargasaurus_Character_BP_C_SetTamingPC_Params params {};
		params.PC = PC;
		params.Set = Set;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.TamingTakeDamage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAmargasaurus_Character_BP_C::TamingTakeDamage(float Damage, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.TamingTakeDamage");
		
		AAmargasaurus_Character_BP_C_TamingTakeDamage_Params params {};
		params.Damage = Damage;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPTimerServer
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AAmargasaurus_Character_BP_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPTimerServer");
		
		AAmargasaurus_Character_BP_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SetWildFollowTargetFromTamingPC
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Set                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAmargasaurus_Character_BP_C::SetWildFollowTargetFromTamingPC(bool Set)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SetWildFollowTargetFromTamingPC");
		
		AAmargasaurus_Character_BP_C_SetWildFollowTargetFromTamingPC_Params params {};
		params.Set = Set;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.ConvertDamageToAffinity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UDamageType*                                 DamageType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAmargasaurus_Character_BP_C::ConvertDamageToAffinity(float Damage, class UDamageType* DamageType, class AActor* DamageActor, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.ConvertDamageToAffinity");
		
		AAmargasaurus_Character_BP_C_ConvertDamageToAffinity_Params params {};
		params.Damage = Damage;
		params.DamageType = DamageType;
		params.DamageActor = DamageActor;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.GetSocketForMeleeTraceForHitBlockers
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class FName AAmargasaurus_Character_BP_C::GetSocketForMeleeTraceForHitBlockers(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.GetSocketForMeleeTraceForHitBlockers");
		
		AAmargasaurus_Character_BP_C_GetSocketForMeleeTraceForHitBlockers_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.GetNextSpikeType
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            FromIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            NextSpikeIndex                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAmargasaurus_Character_BP_C::GetNextSpikeType(int32_t FromIndex, int32_t* NextSpikeIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.GetNextSpikeType");
		
		AAmargasaurus_Character_BP_C_GetNextSpikeType_Params params {};
		params.FromIndex = FromIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NextSpikeIndex != nullptr)
			*NextSpikeIndex = params.NextSpikeIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPOverrideFloatingHUDLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	struct FVector AAmargasaurus_Character_BP_C::BPOverrideFloatingHUDLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPOverrideFloatingHUDLocation");
		
		AAmargasaurus_Character_BP_C_BPOverrideFloatingHUDLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPOverrideHurtAnim
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DamageTaken                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                DamageEvent                                                (Parm, OutParm, ReferenceParm)
	 * 		class APawn*                                       PawnInstigator                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsLocalPath                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     PointDamageLocation                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     PointDamageHitNormal                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class UAnimMontage* AAmargasaurus_Character_BP_C::BPOverrideHurtAnim(float DamageTaken, struct FDamageEvent* DamageEvent, class APawn* PawnInstigator, class AActor* DamageCauser, bool bIsLocalPath, bool bIsPointDamage, const struct FVector& PointDamageLocation, const struct FVector& PointDamageHitNormal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPOverrideHurtAnim");
		
		AAmargasaurus_Character_BP_C_BPOverrideHurtAnim_Params params {};
		params.DamageTaken = DamageTaken;
		params.PawnInstigator = PawnInstigator;
		params.DamageCauser = DamageCauser;
		params.bIsLocalPath = bIsLocalPath;
		params.bIsPointDamage = bIsPointDamage;
		params.PointDamageLocation = PointDamageLocation;
		params.PointDamageHitNormal = PointDamageHitNormal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DamageEvent != nullptr)
			*DamageEvent = params.DamageEvent;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BP_OnJumpPressed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAmargasaurus_Character_BP_C::BP_OnJumpPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BP_OnJumpPressed");
		
		AAmargasaurus_Character_BP_C_BP_OnJumpPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPOverrideGetAttackAnimationIndex
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class UAnimMontage*>                        AnimationArray                                             (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	int32_t AAmargasaurus_Character_BP_C::BPOverrideGetAttackAnimationIndex(int32_t AttackIndex, TArray<class UAnimMontage*>* AnimationArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPOverrideGetAttackAnimationIndex");
		
		AAmargasaurus_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params params {};
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
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SpikeStaminaCheck
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NotifyRiderOfFail                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAmargasaurus_Character_BP_C::SpikeStaminaCheck(bool NotifyRiderOfFail, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SpikeStaminaCheck");
		
		AAmargasaurus_Character_BP_C_SpikeStaminaCheck_Params params {};
		params.NotifyRiderOfFail = NotifyRiderOfFail;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPDinoARKDownloadedBegin
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAmargasaurus_Character_BP_C::BPDinoARKDownloadedBegin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPDinoARKDownloadedBegin");
		
		AAmargasaurus_Character_BP_C_BPDinoARKDownloadedBegin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BlueprintCanRiderAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AAmargasaurus_Character_BP_C::BlueprintCanRiderAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BlueprintCanRiderAttack");
		
		AAmargasaurus_Character_BP_C_BlueprintCanRiderAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPSetupTamed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bWasJustTamed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAmargasaurus_Character_BP_C::BPSetupTamed(bool bWasJustTamed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPSetupTamed");
		
		AAmargasaurus_Character_BP_C_BPSetupTamed_Params params {};
		params.bWasJustTamed = bWasJustTamed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.RemoveSpike
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAmargasaurus_Character_BP_C::RemoveSpike()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.RemoveSpike");
		
		AAmargasaurus_Character_BP_C_RemoveSpike_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AAmargasaurus_Character_BP_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPTryMultiUse");
		
		AAmargasaurus_Character_BP_C_BPTryMultiUse_Params params {};
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
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> AAmargasaurus_Character_BP_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPGetMultiUseEntries");
		
		AAmargasaurus_Character_BP_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.RidingTick
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAmargasaurus_Character_BP_C::RidingTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.RidingTick");
		
		AAmargasaurus_Character_BP_C_RidingTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.GetAimedSpikeTargetLoc
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Loc                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAmargasaurus_Character_BP_C::GetAimedSpikeTargetLoc(struct FVector* Loc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.GetAimedSpikeTargetLoc");
		
		AAmargasaurus_Character_BP_C_GetAimedSpikeTargetLoc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Loc != nullptr)
			*Loc = params.Loc;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPTriggerStasisEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAmargasaurus_Character_BP_C::BPTriggerStasisEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPTriggerStasisEvent");
		
		AAmargasaurus_Character_BP_C_BPTriggerStasisEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.GetNextSpikeIndex
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NextIndex                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAmargasaurus_Character_BP_C::GetNextSpikeIndex(int32_t* NextIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.GetNextSpikeIndex");
		
		AAmargasaurus_Character_BP_C_GetNextSpikeIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NextIndex != nullptr)
			*NextIndex = params.NextIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BP_OnUncryo
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAmargasaurus_Character_BP_C::BP_OnUncryo(class AShooterPlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BP_OnUncryo");
		
		AAmargasaurus_Character_BP_C_BP_OnUncryo_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.UnstasisRegenSpikes
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAmargasaurus_Character_BP_C::UnstasisRegenSpikes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.UnstasisRegenSpikes");
		
		AAmargasaurus_Character_BP_C_UnstasisRegenSpikes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPUnstasis
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAmargasaurus_Character_BP_C::BPUnstasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPUnstasis");
		
		AAmargasaurus_Character_BP_C_BPUnstasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.GetNumActiveSpikes
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            NumSpikes                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAmargasaurus_Character_BP_C::GetNumActiveSpikes(int32_t* NumSpikes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.GetNumActiveSpikes");
		
		AAmargasaurus_Character_BP_C_GetNumActiveSpikes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NumSpikes != nullptr)
			*NumSpikes = params.NumSpikes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SetupSpikes
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAmargasaurus_Character_BP_C::SetupSpikes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SetupSpikes");
		
		AAmargasaurus_Character_BP_C_SetupSpikes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.RefreshSpikeVisuals
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AAmargasaurus_Character_BP_C::RefreshSpikeVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.RefreshSpikeVisuals");
		
		AAmargasaurus_Character_BP_C_RefreshSpikeVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.CanShootSpike
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanShoot                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAmargasaurus_Character_BP_C::CanShootSpike(bool* CanShoot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.CanShootSpike");
		
		AAmargasaurus_Character_BP_C_CanShootSpike_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanShoot != nullptr)
			*CanShoot = params.CanShoot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.RegenSpike
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAmargasaurus_Character_BP_C::RegenSpike()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.RegenSpike");
		
		AAmargasaurus_Character_BP_C_RegenSpike_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPGetHUDElements
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FHUDElement>                         OutElements                                                (Parm, OutParm, ZeroConstructor)
	 */
	void AAmargasaurus_Character_BP_C::BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPGetHUDElements");
		
		AAmargasaurus_Character_BP_C_BPGetHUDElements_Params params {};
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
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BlueprintCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AAmargasaurus_Character_BP_C::BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BlueprintCanAttack");
		
		AAmargasaurus_Character_BP_C_BlueprintCanAttack_Params params {};
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
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPNotifyClearRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderClearing                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAmargasaurus_Character_BP_C::BPNotifyClearRider(class AShooterCharacter* RiderClearing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPNotifyClearRider");
		
		AAmargasaurus_Character_BP_C_BPNotifyClearRider_Params params {};
		params.RiderClearing = RiderClearing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPHandleOnStopTargeting
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AAmargasaurus_Character_BP_C::BPHandleOnStopTargeting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPHandleOnStopTargeting");
		
		AAmargasaurus_Character_BP_C_BPHandleOnStopTargeting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPHandleControllerInitiatedAttack
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AAmargasaurus_Character_BP_C::BPHandleControllerInitiatedAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPHandleControllerInitiatedAttack");
		
		AAmargasaurus_Character_BP_C_BPHandleControllerInitiatedAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAmargasaurus_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.UserConstructionScript");
		
		AAmargasaurus_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.Timeline_SpikeEmissive__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AAmargasaurus_Character_BP_C::Timeline_SpikeEmissive__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.Timeline_SpikeEmissive__FinishedFunc");
		
		AAmargasaurus_Character_BP_C_Timeline_SpikeEmissive__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.Timeline_SpikeEmissive__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AAmargasaurus_Character_BP_C::Timeline_SpikeEmissive__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.Timeline_SpikeEmissive__UpdateFunc");
		
		AAmargasaurus_Character_BP_C_Timeline_SpikeEmissive__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.Server_ShootSpike
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     TargetLoc                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAmargasaurus_Character_BP_C::Server_ShootSpike(const struct FVector& TargetLoc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.Server_ShootSpike");
		
		AAmargasaurus_Character_BP_C_Server_ShootSpike_Params params {};
		params.TargetLoc = TargetLoc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.Multi_LockRotRate
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Lock                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAmargasaurus_Character_BP_C::Multi_LockRotRate(bool Lock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.Multi_LockRotRate");
		
		AAmargasaurus_Character_BP_C_Multi_LockRotRate_Params params {};
		params.Lock = Lock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.Server_LockRotRate
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Lock                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAmargasaurus_Character_BP_C::Server_LockRotRate(bool Lock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.Server_LockRotRate");
		
		AAmargasaurus_Character_BP_C_Server_LockRotRate_Params params {};
		params.Lock = Lock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAmargasaurus_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.ReceiveBeginPlay");
		
		AAmargasaurus_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPAnimNotifyCustomState_End
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimNotifyState*                            AnimNotifyObject                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAmargasaurus_Character_BP_C::BPAnimNotifyCustomState_End(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotifyState* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPAnimNotifyCustomState_End");
		
		AAmargasaurus_Character_BP_C_BPAnimNotifyCustomState_End_Params params {};
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
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.Multi_SpawnSpikeVFX
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            SpikeBoneIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SpikeTypeIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAmargasaurus_Character_BP_C::Multi_SpawnSpikeVFX(int32_t SpikeBoneIndex, int32_t SpikeTypeIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.Multi_SpawnSpikeVFX");
		
		AAmargasaurus_Character_BP_C_Multi_SpawnSpikeVFX_Params params {};
		params.SpikeBoneIndex = SpikeBoneIndex;
		params.SpikeTypeIndex = SpikeTypeIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SetupTamingPCDamBind
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Bind                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAmargasaurus_Character_BP_C::SetupTamingPCDamBind(bool Bind)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.SetupTamingPCDamBind");
		
		AAmargasaurus_Character_BP_C_SetupTamingPCDamBind_Params params {};
		params.Bind = Bind;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.OnInstigatedAnyDamage_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UDamageType*                                 DamageType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamagedActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAmargasaurus_Character_BP_C::OnInstigatedAnyDamage_Event(float Damage, class UDamageType* DamageType, class AActor* DamagedActor, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.OnInstigatedAnyDamage_Event");
		
		AAmargasaurus_Character_BP_C_OnInstigatedAnyDamage_Event_Params params {};
		params.Damage = Damage;
		params.DamageType = DamageType;
		params.DamagedActor = DamagedActor;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.ReceiveAnyDamage
	 * 		Flags  -> (BlueprintAuthorityOnly, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UDamageType*                                 DamageType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AController*                                 InstigatedBy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAmargasaurus_Character_BP_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.ReceiveAnyDamage");
		
		AAmargasaurus_Character_BP_C_ReceiveAnyDamage_Params params {};
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
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.Multi_SetTamingParticleEmitting
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AAmargasaurus_Character_BP_C::Multi_SetTamingParticleEmitting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.Multi_SetTamingParticleEmitting");
		
		AAmargasaurus_Character_BP_C_Multi_SetTamingParticleEmitting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAmargasaurus_Character_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.ReceiveTick");
		
		AAmargasaurus_Character_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.Server_SetIsTargeting
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsTargeting                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAmargasaurus_Character_BP_C::Server_SetIsTargeting(bool IsTargeting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.Server_SetIsTargeting");
		
		AAmargasaurus_Character_BP_C_Server_SetIsTargeting_Params params {};
		params.IsTargeting = IsTargeting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPAnimNotifyCustomState_Begin
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              TotalDuration                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimNotifyState*                            AnimNotifyObject                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAmargasaurus_Character_BP_C::BPAnimNotifyCustomState_Begin(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, class UAnimNotifyState* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BPAnimNotifyCustomState_Begin");
		
		AAmargasaurus_Character_BP_C_BPAnimNotifyCustomState_Begin_Params params {};
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
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimNotify*                                 AnimNotifyObject                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAmargasaurus_Character_BP_C::BlueprintAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.BlueprintAnimNotifyCustomEvent");
		
		AAmargasaurus_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params {};
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
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.Multi_UpdateSpikeAimMats
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enable                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Interp                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAmargasaurus_Character_BP_C::Multi_UpdateSpikeAimMats(bool Enable, bool Interp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.Multi_UpdateSpikeAimMats");
		
		AAmargasaurus_Character_BP_C_Multi_UpdateSpikeAimMats_Params params {};
		params.Enable = Enable;
		params.Interp = Interp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.UpdateSpikeAimMats
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enable                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Interp                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAmargasaurus_Character_BP_C::UpdateSpikeAimMats(bool Enable, bool Interp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.UpdateSpikeAimMats");
		
		AAmargasaurus_Character_BP_C_UpdateSpikeAimMats_Params params {};
		params.Enable = Enable;
		params.Interp = Interp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.ExecuteUbergraph_Amargasaurus_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAmargasaurus_Character_BP_C::ExecuteUbergraph_Amargasaurus_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Amargasaurus_Character_BP.Amargasaurus_Character_BP_C.ExecuteUbergraph_Amargasaurus_Character_BP");
		
		AAmargasaurus_Character_BP_C_ExecuteUbergraph_Amargasaurus_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAmargasaurus_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAmargasaurus_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Amargasaurus_Character_BP.Amargasaurus_Character_BP_C");
		return ptr;
	}

}


