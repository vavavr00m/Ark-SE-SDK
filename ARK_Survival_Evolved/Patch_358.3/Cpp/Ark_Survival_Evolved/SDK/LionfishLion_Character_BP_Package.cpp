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
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.GetHudData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AttackComboPercent                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              MaxComboFlashingSpeed                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             LastUncloakTime                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CloakCooldown                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsFemale                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsCamoActive                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             LastRoarBuffTime                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              RoarBuffCooldown                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               HasMateBoost                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             LastTimeReleasedTeleport                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              TeleportCooldown                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              TeleportPercent                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsCurrentlyChargingTeleport                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalCharacter*                            LatestQuickteleportTarget                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              LeapCooldown                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             LastLeapTime                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              LeapPercent                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::GetHudData(float* AttackComboPercent, float* MaxComboFlashingSpeed, double* LastUncloakTime, float* CloakCooldown, bool* IsFemale, bool* IsCamoActive, double* LastRoarBuffTime, float* RoarBuffCooldown, bool* HasMateBoost, double* LastTimeReleasedTeleport, float* TeleportCooldown, float* TeleportPercent, bool* IsCurrentlyChargingTeleport, class APrimalCharacter** LatestQuickteleportTarget, float* LeapCooldown, double* LastLeapTime, float* LeapPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.GetHudData");
		
		ALionfishLion_Character_BP_C_GetHudData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AttackComboPercent != nullptr)
			*AttackComboPercent = params.AttackComboPercent;
		if (MaxComboFlashingSpeed != nullptr)
			*MaxComboFlashingSpeed = params.MaxComboFlashingSpeed;
		if (LastUncloakTime != nullptr)
			*LastUncloakTime = params.LastUncloakTime;
		if (CloakCooldown != nullptr)
			*CloakCooldown = params.CloakCooldown;
		if (IsFemale != nullptr)
			*IsFemale = params.IsFemale;
		if (IsCamoActive != nullptr)
			*IsCamoActive = params.IsCamoActive;
		if (LastRoarBuffTime != nullptr)
			*LastRoarBuffTime = params.LastRoarBuffTime;
		if (RoarBuffCooldown != nullptr)
			*RoarBuffCooldown = params.RoarBuffCooldown;
		if (HasMateBoost != nullptr)
			*HasMateBoost = params.HasMateBoost;
		if (LastTimeReleasedTeleport != nullptr)
			*LastTimeReleasedTeleport = params.LastTimeReleasedTeleport;
		if (TeleportCooldown != nullptr)
			*TeleportCooldown = params.TeleportCooldown;
		if (TeleportPercent != nullptr)
			*TeleportPercent = params.TeleportPercent;
		if (IsCurrentlyChargingTeleport != nullptr)
			*IsCurrentlyChargingTeleport = params.IsCurrentlyChargingTeleport;
		if (LatestQuickteleportTarget != nullptr)
			*LatestQuickteleportTarget = params.LatestQuickteleportTarget;
		if (LeapCooldown != nullptr)
			*LeapCooldown = params.LeapCooldown;
		if (LastLeapTime != nullptr)
			*LastLeapTime = params.LastLeapTime;
		if (LeapPercent != nullptr)
			*LeapPercent = params.LeapPercent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Keep Checking if the Fish Has Spawned
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::KeepCheckingiftheFishHasSpawned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Keep Checking if the Fish Has Spawned");
		
		ALionfishLion_Character_BP_C_KeepCheckingiftheFishHasSpawned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.try feed shadowman on delay
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::tryfeedshadowmanondelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.try feed shadowman on delay");
		
		ALionfishLion_Character_BP_C_tryfeedshadowmanondelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Shortly After Falling Asleep Prevent Affinity Reset
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::ShortlyAfterFallingAsleepPreventAffinityReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Shortly After Falling Asleep Prevent Affinity Reset");
		
		ALionfishLion_Character_BP_C_ShortlyAfterFallingAsleepPreventAffinityReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPPlayDying
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              KillingDamage                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                DamageEvent                                                (Parm, OutParm, ReferenceParm)
	 * 		class APawn*                                       InstigatingPawn                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::BPPlayDying(float KillingDamage, struct FDamageEvent* DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPPlayDying");
		
		ALionfishLion_Character_BP_C_BPPlayDying_Params params {};
		params.KillingDamage = KillingDamage;
		params.InstigatingPawn = InstigatingPawn;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DamageEvent != nullptr)
			*DamageEvent = params.DamageEvent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Lerping While Jumping
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::IsLerpingWhileJumping()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Lerping While Jumping");
		
		ALionfishLion_Character_BP_C_IsLerpingWhileJumping_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Delay Reset Gravity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::DelayResetGravity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Delay Reset Gravity");
		
		ALionfishLion_Character_BP_C_DelayResetGravity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.LFL Cloak Transition
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::LFLCloakTransition(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.LFL Cloak Transition");
		
		ALionfishLion_Character_BP_C_LFLCloakTransition_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.ReceivePossessed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 NewController                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::ReceivePossessed(class AController* NewController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.ReceivePossessed");
		
		ALionfishLion_Character_BP_C_ReceivePossessed_Params params {};
		params.NewController = NewController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Lerp Camera During Jump
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::LerpCameraDuringJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Lerp Camera During Jump");
		
		ALionfishLion_Character_BP_C_LerpCameraDuringJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPCanTakePassenger
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            PassengerSeatIndex                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bForcePassenger                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bAllowFlyersAndWaterDinos                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ALionfishLion_Character_BP_C::BPCanTakePassenger(class APrimalCharacter* Character, int32_t PassengerSeatIndex, bool bForcePassenger, bool bAllowFlyersAndWaterDinos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPCanTakePassenger");
		
		ALionfishLion_Character_BP_C_BPCanTakePassenger_Params params {};
		params.Character = Character;
		params.PassengerSeatIndex = PassengerSeatIndex;
		params.bForcePassenger = bForcePassenger;
		params.bAllowFlyersAndWaterDinos = bAllowFlyersAndWaterDinos;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.is asleep
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool ALionfishLion_Character_BP_C::isasleep()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.is asleep");
		
		ALionfishLion_Character_BP_C_isasleep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPCanCryo
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ALionfishLion_Character_BP_C::BPCanCryo(class AShooterPlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPCanCryo");
		
		ALionfishLion_Character_BP_C_BPCanCryo_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.IsPackLeader
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsLeader                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::IsPackLeader(bool* bIsLeader)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.IsPackLeader");
		
		ALionfishLion_Character_BP_C_IsPackLeader_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsLeader != nullptr)
			*bIsLeader = params.bIsLeader;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Display No Mate Boost Notification
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::DisplayNoMateBoostNotification()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Display No Mate Boost Notification");
		
		ALionfishLion_Character_BP_C_DisplayNoMateBoostNotification_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Prevented Interval to Check for Boss Dinos for Cloaking
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::PreventedIntervaltoCheckforBossDinosforCloaking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Prevented Interval to Check for Boss Dinos for Cloaking");
		
		ALionfishLion_Character_BP_C_PreventedIntervaltoCheckforBossDinosforCloaking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Near Boss
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::IsNearBoss()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Near Boss");
		
		ALionfishLion_Character_BP_C_IsNearBoss_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.ReceiveActorEndOverlap
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::ReceiveActorEndOverlap(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.ReceiveActorEndOverlap");
		
		ALionfishLion_Character_BP_C_ReceiveActorEndOverlap_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.ReceiveActorBeginOverlap
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.ReceiveActorBeginOverlap");
		
		ALionfishLion_Character_BP_C_ReceiveActorBeginOverlap_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Decrease Camo Stamina
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::DecreaseCamoStamina()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Decrease Camo Stamina");
		
		ALionfishLion_Character_BP_C_DecreaseCamoStamina_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.can cloak
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      InputPin                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalCharacter*                            AsPrimalCharacter                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ALionfishLion_Character_BP_C::cancloak(class AActor* InputPin, class APrimalCharacter** AsPrimalCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.can cloak");
		
		ALionfishLion_Character_BP_C_cancloak_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsPrimalCharacter != nullptr)
			*AsPrimalCharacter = params.AsPrimalCharacter;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Remove self as origin dino for cloaks
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            whogetsbuff                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::Removeselfasorigindinoforcloaks(class APrimalCharacter* whogetsbuff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Remove self as origin dino for cloaks");
		
		ALionfishLion_Character_BP_C_Removeselfasorigindinoforcloaks_Params params {};
		params.whogetsbuff = whogetsbuff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.add cloak buff with self as origin
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            whogetsbuff                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               forsolorider                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::addcloakbuffwithselfasorigin(class APrimalCharacter* whogetsbuff, bool forsolorider)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.add cloak buff with self as origin");
		
		ALionfishLion_Character_BP_C_addcloakbuffwithselfasorigin_Params params {};
		params.whogetsbuff = whogetsbuff;
		params.forsolorider = forsolorider;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.OnRep_is solo camo active
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::OnRep_issolocamoactive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.OnRep_is solo camo active");
		
		ALionfishLion_Character_BP_C_OnRep_issolocamoactive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Show Quick Teleport Indicator
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::ShowQuickTeleportIndicator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Show Quick Teleport Indicator");
		
		ALionfishLion_Character_BP_C_ShowQuickTeleportIndicator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Delay Check for Holding Down Crouch
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::DelayCheckforHoldingDownCrouch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Delay Check for Holding Down Crouch");
		
		ALionfishLion_Character_BP_C_DelayCheckforHoldingDownCrouch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Short Time After Initialization To Determine Targeting Team
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::ShortTimeAfterInitializationToDetermineTargetingTeam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Short Time After Initialization To Determine Targeting Team");
		
		ALionfishLion_Character_BP_C_ShortTimeAfterInitializationToDetermineTargetingTeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Long Prevent Tamed Sleeping Timer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::LongPreventTamedSleepingTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Long Prevent Tamed Sleeping Timer");
		
		ALionfishLion_Character_BP_C_LongPreventTamedSleepingTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Has Fish Trap Ready
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::HasFishTrapReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Has Fish Trap Ready");
		
		ALionfishLion_Character_BP_C_HasFishTrapReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.spawn wild Inventory
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::spawnwildInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.spawn wild Inventory");
		
		ALionfishLion_Character_BP_C_spawnwildInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Spawn tamed inventory
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::Spawntamedinventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Spawn tamed inventory");
		
		ALionfishLion_Character_BP_C_Spawntamedinventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Timeout Check To Determine If Rider Is Still Valid For Charging Big Spacebar Leap
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::TimeoutCheckToDetermineIfRiderIsStillValidForChargingBigSpacebarLeap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Timeout Check To Determine If Rider Is Still Valid For Charging Big Spacebar Leap");
		
		ALionfishLion_Character_BP_C_TimeoutCheckToDetermineIfRiderIsStillValidForChargingBigSpacebarLeap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Timeout Check For Still Holding Spacebar
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::TimeoutCheckForStillHoldingSpacebar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Timeout Check For Still Holding Spacebar");
		
		ALionfishLion_Character_BP_C_TimeoutCheckForStillHoldingSpacebar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Delay And Wake Up
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::DelayAndWakeUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Delay And Wake Up");
		
		ALionfishLion_Character_BP_C_DelayAndWakeUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.delay and fall asleep
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::delayandfallasleep()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.delay and fall asleep");
		
		ALionfishLion_Character_BP_C_delayandfallasleep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Can Teleport Attack
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ALionfishLion_Character_BP_C::CanTeleportAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Can Teleport Attack");
		
		ALionfishLion_Character_BP_C_CanTeleportAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.spawn flame location on the ground
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     StartPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     EndPoint                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::spawnflamelocationontheground(const struct FVector& StartPoint, const struct FVector& EndPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.spawn flame location on the ground");
		
		ALionfishLion_Character_BP_C_spawnflamelocationontheground_Params params {};
		params.StartPoint = StartPoint;
		params.EndPoint = EndPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPOnRefreshColorization
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FLinearColor>                        Colors                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void ALionfishLion_Character_BP_C::BPOnRefreshColorization(TArray<struct FLinearColor>* Colors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPOnRefreshColorization");
		
		ALionfishLion_Character_BP_C_BPOnRefreshColorization_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Colors != nullptr)
			*Colors = params.Colors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Reset animbp anims to normal
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::Resetanimbpanimstonormal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Reset animbp anims to normal");
		
		ALionfishLion_Character_BP_C_Resetanimbpanimstonormal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.restrict wild teleport attacking
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::restrictwildteleportattacking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.restrict wild teleport attacking");
		
		ALionfishLion_Character_BP_C_restrictwildteleportattacking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.shortly after fleeing from taming
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::shortlyafterfleeingfromtaming()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.shortly after fleeing from taming");
		
		ALionfishLion_Character_BP_C_shortlyafterfleeingfromtaming_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.show particle over optimal teleport target
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::showparticleoveroptimalteleporttarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.show particle over optimal teleport target");
		
		ALionfishLion_Character_BP_C_showparticleoveroptimalteleporttarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.toggle max combo vfx on limbs
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::togglemaxcombovfxonlimbs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.toggle max combo vfx on limbs");
		
		ALionfishLion_Character_BP_C_togglemaxcombovfxonlimbs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Restrict Max Combo Kill Fx
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::RestrictMaxComboKillFx()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Restrict Max Combo Kill Fx");
		
		ALionfishLion_Character_BP_C_RestrictMaxComboKillFx_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.restrict bite fx
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::restrictbitefx()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.restrict bite fx");
		
		ALionfishLion_Character_BP_C_restrictbitefx_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Prep For Mouth Slash
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::PrepForMouthSlash()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Prep For Mouth Slash");
		
		ALionfishLion_Character_BP_C_PrepForMouthSlash_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Prep For Left Paw Slash
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::PrepForLeftPawSlash()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Prep For Left Paw Slash");
		
		ALionfishLion_Character_BP_C_PrepForLeftPawSlash_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.prep for right paw slash
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::prepforrightpawslash()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.prep for right paw slash");
		
		ALionfishLion_Character_BP_C_prepforrightpawslash_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Landing From Big Spacebar Leap
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::IsLandingFromBigSpacebarLeap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Landing From Big Spacebar Leap");
		
		ALionfishLion_Character_BP_C_IsLandingFromBigSpacebarLeap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPPreventFallDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  HitResult                                                  (Parm, OutParm, ReferenceParm)
	 * 		float                                              FallDamageAmount                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ALionfishLion_Character_BP_C::BPPreventFallDamage(struct FHitResult* HitResult, float FallDamageAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPPreventFallDamage");
		
		ALionfishLion_Character_BP_C_BPPreventFallDamage_Params params {};
		params.FallDamageAmount = FallDamageAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HitResult != nullptr)
			*HitResult = params.HitResult;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPShouldForceFlee
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ALionfishLion_Character_BP_C::BPShouldForceFlee()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPShouldForceFlee");
		
		ALionfishLion_Character_BP_C_BPShouldForceFlee_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.flee after feeding
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::fleeafterfeeding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.flee after feeding");
		
		ALionfishLion_Character_BP_C_fleeafterfeeding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.feed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              FishWeight                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               cheatdebugbypass                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Fallback                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::feed(class APlayerController* PC, float FishWeight, bool cheatdebugbypass, bool Fallback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.feed");
		
		ALionfishLion_Character_BP_C_feed_Params params {};
		params.PC = PC;
		params.FishWeight = FishWeight;
		params.cheatdebugbypass = cheatdebugbypass;
		params.Fallback = Fallback;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.bite slash vfx
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::biteslashvfx()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.bite slash vfx");
		
		ALionfishLion_Character_BP_C_biteslashvfx_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.right paw slash vfx
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::rightpawslashvfx()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.right paw slash vfx");
		
		ALionfishLion_Character_BP_C_rightpawslashvfx_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.left paw slash vfx
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::leftpawslashvfx()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.left paw slash vfx");
		
		ALionfishLion_Character_BP_C_leftpawslashvfx_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.is able to be tamed
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               cantame                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Text                                                       (Parm, OutParm, ZeroConstructor)
	 */
	void ALionfishLion_Character_BP_C::isabletobetamed(class APlayerController* PC, bool* cantame, class FString* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.is able to be tamed");
		
		ALionfishLion_Character_BP_C_isabletobetamed_Params params {};
		params.PC = PC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (cantame != nullptr)
			*cantame = params.cantame;
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPOverrideHurtAnim
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
	class UAnimMontage* ALionfishLion_Character_BP_C::BPOverrideHurtAnim(float DamageTaken, struct FDamageEvent* DamageEvent, class APawn* PawnInstigator, class AActor* DamageCauser, bool bIsLocalPath, bool bIsPointDamage, const struct FVector& PointDamageLocation, const struct FVector& PointDamageHitNormal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPOverrideHurtAnim");
		
		ALionfishLion_Character_BP_C_BPOverrideHurtAnim_Params params {};
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
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.print string manual
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      InString                                                   (Parm, ZeroConstructor)
	 */
	void ALionfishLion_Character_BP_C::printstringmanual(const class FString& InString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.print string manual");
		
		ALionfishLion_Character_BP_C_printstringmanual_Params params {};
		params.InString = InString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Stop Release Big Spacebar Leap Anims
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::StopReleaseBigSpacebarLeapAnims()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Stop Release Big Spacebar Leap Anims");
		
		ALionfishLion_Character_BP_C_StopReleaseBigSpacebarLeapAnims_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.stop anim montage if playing
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                InputPin                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              BlendOut                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::stopanimmontageifplaying(class UAnimMontage* InputPin, float BlendOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.stop anim montage if playing");
		
		ALionfishLion_Character_BP_C_stopanimmontageifplaying_Params params {};
		params.InputPin = InputPin;
		params.BlendOut = BlendOut;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.get aerial rotation while pouncing
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    meshrot                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FRotator ALionfishLion_Character_BP_C::getaerialrotationwhilepouncing(struct FRotator* meshrot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.get aerial rotation while pouncing");
		
		ALionfishLion_Character_BP_C_getaerialrotationwhilepouncing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (meshrot != nullptr)
			*meshrot = params.meshrot;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.set up dynamic mats
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::setupdynamicmats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.set up dynamic mats");
		
		ALionfishLion_Character_BP_C_setupdynamicmats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Has Found Multiple Targets
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::HasFoundMultipleTargets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Has Found Multiple Targets");
		
		ALionfishLion_Character_BP_C_HasFoundMultipleTargets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Timer Check Teleport Targets
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::TimerCheckTeleportTargets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Timer Check Teleport Targets");
		
		ALionfishLion_Character_BP_C_TimerCheckTeleportTargets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.save control rot
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::savecontrolrot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.save control rot");
		
		ALionfishLion_Character_BP_C_savecontrolrot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.retrieve control rot
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::retrievecontrolrot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.retrieve control rot");
		
		ALionfishLion_Character_BP_C_retrievecontrolrot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Shortly After Tele
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::ShortlyAfterTele()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Shortly After Tele");
		
		ALionfishLion_Character_BP_C_ShortlyAfterTele_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Restrict Was Seen Requests
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::RestrictWasSeenRequests()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Restrict Was Seen Requests");
		
		ALionfishLion_Character_BP_C_RestrictWasSeenRequests_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.someone has line of sight to lion
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::someonehaslineofsighttolion(class AShooterPlayerController* PlayerController, bool* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.someone has line of sight to lion");
		
		ALionfishLion_Character_BP_C_someonehaslineofsighttolion_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Check if Viewed by Players
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::CheckifViewedbyPlayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Check if Viewed by Players");
		
		ALionfishLion_Character_BP_C_CheckifViewedbyPlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Do Attack Cloak
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::DoAttackCloak()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Do Attack Cloak");
		
		ALionfishLion_Character_BP_C_DoAttackCloak_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Server Request Charge Big Spacebar Leap
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::ServerRequestChargeBigSpacebarLeap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Server Request Charge Big Spacebar Leap");
		
		ALionfishLion_Character_BP_C_ServerRequestChargeBigSpacebarLeap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Server Request End Charge Big Spacebar Leap
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     helddirectioninputs                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     InputPin                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            A2                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            InputPin2                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::ServerRequestEndChargeBigSpacebarLeap(const struct FVector& helddirectioninputs, class UObject* InputPin, int32_t A2, int32_t InputPin2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Server Request End Charge Big Spacebar Leap");
		
		ALionfishLion_Character_BP_C_ServerRequestEndChargeBigSpacebarLeap_Params params {};
		params.helddirectioninputs = helddirectioninputs;
		params.InputPin = InputPin;
		params.A2 = A2;
		params.InputPin2 = InputPin2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Server Request Jump
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::ServerRequestJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Server Request Jump");
		
		ALionfishLion_Character_BP_C_ServerRequestJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Server Request Anim Start Jump
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::ServerRequestAnimStartJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Server Request Anim Start Jump");
		
		ALionfishLion_Character_BP_C_ServerRequestAnimStartJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Server Requiest Crit Bite
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::ServerRequiestCritBite()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Server Requiest Crit Bite");
		
		ALionfishLion_Character_BP_C_ServerRequiestCritBite_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Server Request Hold Teleport
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     viewdirection                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               quicktapteleport                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::ServerRequestHoldTeleport(const struct FVector& viewdirection, class UObject* Target, bool quicktapteleport)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Server Request Hold Teleport");
		
		ALionfishLion_Character_BP_C_ServerRequestHoldTeleport_Params params {};
		params.viewdirection = viewdirection;
		params.Target = Target;
		params.quicktapteleport = quicktapteleport;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BlueprintGetAttackWeight
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              inputWeight                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ALionfishLion_Character_BP_C::BlueprintGetAttackWeight(int32_t AttackIndex, float inputWeight, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BlueprintGetAttackWeight");
		
		ALionfishLion_Character_BP_C_BlueprintGetAttackWeight_Params params {};
		params.AttackIndex = AttackIndex;
		params.inputWeight = inputWeight;
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
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Add solo cloak buffs
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::Addsolocloakbuffs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Add solo cloak buffs");
		
		ALionfishLion_Character_BP_C_Addsolocloakbuffs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.consolidated can attack
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            InputPin                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ALionfishLion_Character_BP_C::consolidatedcanattack(int32_t InputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.consolidated can attack");
		
		ALionfishLion_Character_BP_C_consolidatedcanattack_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Get Appropriate Extra Distance to Land In Front the Target from Current Position
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     currentlocation                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      Enemy                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector ALionfishLion_Character_BP_C::GetAppropriateExtraDistancetoLandInFronttheTargetfromCurrentPosition(const struct FVector& currentlocation, class AActor* Enemy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Get Appropriate Extra Distance to Land In Front the Target from Current Position");
		
		ALionfishLion_Character_BP_C_GetAppropriateExtraDistancetoLandInFronttheTargetfromCurrentPosition_Params params {};
		params.currentlocation = currentlocation;
		params.Enemy = Enemy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Teleport End Location Blocked
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  OutHit                                                     (Parm, OutParm)
	 */
	bool ALionfishLion_Character_BP_C::IsTeleportEndLocationBlocked(const struct FVector& Start, const struct FVector& End, struct FHitResult* OutHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Teleport End Location Blocked");
		
		ALionfishLion_Character_BP_C_IsTeleportEndLocationBlocked_Params params {};
		params.Start = Start;
		params.End = End;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHit != nullptr)
			*OutHit = params.OutHit;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Get Desired Teleport Final Location In Front Of the Enemy
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     currentposition                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      Enemy                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     finallocation                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::GetDesiredTeleportFinalLocationInFrontOftheEnemy(const struct FVector& currentposition, class AActor* Enemy, struct FVector* finallocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Get Desired Teleport Final Location In Front Of the Enemy");
		
		ALionfishLion_Character_BP_C_GetDesiredTeleportFinalLocationInFrontOftheEnemy_Params params {};
		params.currentposition = currentposition;
		params.Enemy = Enemy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (finallocation != nullptr)
			*finallocation = params.finallocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Check If The LFL Can Physically Fit To The Teleport Target
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               doublecheckedandallclear                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::CheckIfTheLFLCanPhysicallyFitToTheTeleportTarget(const struct FVector& Start, const struct FVector& End, bool* doublecheckedandallclear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Check If The LFL Can Physically Fit To The Teleport Target");
		
		ALionfishLion_Character_BP_C_CheckIfTheLFLCanPhysicallyFitToTheTeleportTarget_Params params {};
		params.Start = Start;
		params.End = End;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (doublecheckedandallclear != nullptr)
			*doublecheckedandallclear = params.doublecheckedandallclear;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.disable tele targeting vfx
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::disableteletargetingvfx()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.disable tele targeting vfx");
		
		ALionfishLion_Character_BP_C_disableteletargetingvfx_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.OnRep_is sleeping state
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::OnRep_issleepingstate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.OnRep_is sleeping state");
		
		ALionfishLion_Character_BP_C_OnRep_issleepingstate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.spawn cloaked footstep
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticleSystem*                             EmitterTemplate                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     InputPin                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::spawncloakedfootstep(class UParticleSystem* EmitterTemplate, const struct FRotator& Rotation, const struct FVector& InputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.spawn cloaked footstep");
		
		ALionfishLion_Character_BP_C_spawncloakedfootstep_Params params {};
		params.EmitterTemplate = EmitterTemplate;
		params.Rotation = Rotation;
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPDinoTooltipCustomTamingProgressBar
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               overrideTamingProgressBarIfActive                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              progressPercent                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Label                                                      (Parm, OutParm, ZeroConstructor)
	 */
	bool ALionfishLion_Character_BP_C::BPDinoTooltipCustomTamingProgressBar(bool* overrideTamingProgressBarIfActive, float* progressPercent, class FString* Label)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPDinoTooltipCustomTamingProgressBar");
		
		ALionfishLion_Character_BP_C_BPDinoTooltipCustomTamingProgressBar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (overrideTamingProgressBarIfActive != nullptr)
			*overrideTamingProgressBarIfActive = params.overrideTamingProgressBarIfActive;
		if (progressPercent != nullptr)
			*progressPercent = params.progressPercent;
		if (Label != nullptr)
			*Label = params.Label;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPOnTamedProcessOrder
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            FromCharacter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EDinoTamedOrder                                    OrderType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bForce                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      enemyTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               orderNotExecuted                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::BPOnTamedProcessOrder(class APrimalCharacter* FromCharacter, EDinoTamedOrder OrderType, bool bForce, class AActor* enemyTarget, bool orderNotExecuted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPOnTamedProcessOrder");
		
		ALionfishLion_Character_BP_C_BPOnTamedProcessOrder_Params params {};
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
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.cooldown after action before being able to sleep
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::cooldownafteractionbeforebeingabletosleep()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.cooldown after action before being able to sleep");
		
		ALionfishLion_Character_BP_C_cooldownafteractionbeforebeingabletosleep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BP_OnTamedOrderReceived
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            FromCharacter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EDinoTamedOrder                                    OrderType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bForce                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      enemyTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               orderNotExecuted                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::BP_OnTamedOrderReceived(class APrimalCharacter* FromCharacter, EDinoTamedOrder OrderType, bool bForce, class AActor* enemyTarget, bool orderNotExecuted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BP_OnTamedOrderReceived");
		
		ALionfishLion_Character_BP_C_BP_OnTamedOrderReceived_Params params {};
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
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Prevent Tamed Sleeping Timer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::PreventTamedSleepingTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Prevent Tamed Sleeping Timer");
		
		ALionfishLion_Character_BP_C_PreventTamedSleepingTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> ALionfishLion_Character_BP_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPGetMultiUseEntries");
		
		ALionfishLion_Character_BP_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multiuse logic
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FMultiUseEntry>                      localmultiuse                                              (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		class APlayerController*                           PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      returnmultiuse                                             (Parm, OutParm, ZeroConstructor)
	 */
	void ALionfishLion_Character_BP_C::multiuselogic(TArray<struct FMultiUseEntry>* localmultiuse, class APlayerController* PC, TArray<struct FMultiUseEntry>* returnmultiuse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multiuse logic");
		
		ALionfishLion_Character_BP_C_multiuselogic_Params params {};
		params.PC = PC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (localmultiuse != nullptr)
			*localmultiuse = params.localmultiuse;
		if (returnmultiuse != nullptr)
			*returnmultiuse = params.returnmultiuse;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPClientDoMultiUse
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ClientUseIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::BPClientDoMultiUse(class APlayerController* ForPC, int32_t ClientUseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPClientDoMultiUse");
		
		ALionfishLion_Character_BP_C_BPClientDoMultiUse_Params params {};
		params.ForPC = ForPC;
		params.ClientUseIndex = ClientUseIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Natural Armor Defense Amount Calculation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	float ALionfishLion_Character_BP_C::NaturalArmorDefenseAmountCalculation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Natural Armor Defense Amount Calculation");
		
		ALionfishLion_Character_BP_C_NaturalArmorDefenseAmountCalculation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Set up Natural Armor value based on level
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::SetupNaturalArmorvaluebasedonlevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Set up Natural Armor value based on level");
		
		ALionfishLion_Character_BP_C_SetupNaturalArmorvaluebasedonlevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.attempt to set up natural armor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::attempttosetupnaturalarmor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.attempt to set up natural armor");
		
		ALionfishLion_Character_BP_C_attempttosetupnaturalarmor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.teleport stun duration calculation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	float ALionfishLion_Character_BP_C::teleportstundurationcalculation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.teleport stun duration calculation");
		
		ALionfishLion_Character_BP_C_teleportstundurationcalculation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Time Threshold for Determining Held Bite
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::TimeThresholdforDeterminingHeldBite()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Time Threshold for Determining Held Bite");
		
		ALionfishLion_Character_BP_C_TimeThresholdforDeterminingHeldBite_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Short Time After Ending Teleport
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::ShortTimeAfterEndingTeleport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Short Time After Ending Teleport");
		
		ALionfishLion_Character_BP_C_ShortTimeAfterEndingTeleport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.tele attack object types
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<EObjectTypeQuery>                           Array                                                      (Parm, OutParm, ZeroConstructor)
	 */
	void ALionfishLion_Character_BP_C::teleattackobjecttypes(TArray<EObjectTypeQuery>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.tele attack object types");
		
		ALionfishLion_Character_BP_C_teleattackobjecttypes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.straight line teleport charge move detection sphere
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::straightlineteleportchargemovedetectionsphere()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.straight line teleport charge move detection sphere");
		
		ALionfishLion_Character_BP_C_straightlineteleportchargemovedetectionsphere_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.detect targets in a straight line over time
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::detecttargetsinastraightlineovertime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.detect targets in a straight line over time");
		
		ALionfishLion_Character_BP_C_detecttargetsinastraightlineovertime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Identify Best Aimed Target For Quickteleport - Clientside
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Character                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::IdentifyBestAimedTargetForQuickteleportClientside(class APrimalCharacter** Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Identify Best Aimed Target For Quickteleport - Clientside");
		
		ALionfishLion_Character_BP_C_IdentifyBestAimedTargetForQuickteleportClientside_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Character != nullptr)
			*Character = params.Character;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.set dino and rider hidden
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Hidden                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              PlayRate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               dontreversefromend                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::setdinoandriderhidden(bool Hidden, float PlayRate, bool dontreversefromend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.set dino and rider hidden");
		
		ALionfishLion_Character_BP_C_setdinoandriderhidden_Params params {};
		params.Hidden = Hidden;
		params.PlayRate = PlayRate;
		params.dontreversefromend = dontreversefromend;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Valid Teleport Target 
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ishudelemcheck                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     teleporttracespherelocation                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               cantarget                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::IsValidTeleportTarget(class APrimalCharacter* Target, bool ishudelemcheck, const struct FVector& teleporttracespherelocation, bool* cantarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Valid Teleport Target ");
		
		ALionfishLion_Character_BP_C_IsValidTeleportTarget_Params params {};
		params.Target = Target;
		params.ishudelemcheck = ishudelemcheck;
		params.teleporttracespherelocation = teleporttracespherelocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (cantarget != nullptr)
			*cantarget = params.cantarget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.set final location and rotation after teleport
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     StartLoc                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     EndLoc                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               turnaround                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::setfinallocationandrotationafterteleport(const struct FVector& StartLoc, const struct FVector& EndLoc, bool turnaround)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.set final location and rotation after teleport");
		
		ALionfishLion_Character_BP_C_setfinallocationandrotationafterteleport_Params params {};
		params.StartLoc = StartLoc;
		params.EndLoc = EndLoc;
		params.turnaround = turnaround;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.damage teleport target
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::damageteleporttarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.damage teleport target");
		
		ALionfishLion_Character_BP_C_damageteleporttarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.prepare LFL for teleporting to target
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::prepareLFLforteleportingtotarget(const struct FVector& End, const struct FVector& Start)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.prepare LFL for teleporting to target");
		
		ALionfishLion_Character_BP_C_prepareLFLforteleportingtotarget_Params params {};
		params.End = End;
		params.Start = Start;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.is line of sight to target blocked
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Debug                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     fromspecificlocation                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               simplecheck                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bLocked                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::islineofsighttotargetblocked(class AActor* Target, bool Debug, const struct FVector& fromspecificlocation, bool simplecheck, bool* bLocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.is line of sight to target blocked");
		
		ALionfishLion_Character_BP_C_islineofsighttotargetblocked_Params params {};
		params.Target = Target;
		params.Debug = Debug;
		params.fromspecificlocation = fromspecificlocation;
		params.simplecheck = simplecheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bLocked != nullptr)
			*bLocked = params.bLocked;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.get rotation to face opponent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     currentlocation                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      Enemy                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FRotator ALionfishLion_Character_BP_C::getrotationtofaceopponent(const struct FVector& currentlocation, class AActor* Enemy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.get rotation to face opponent");
		
		ALionfishLion_Character_BP_C_getrotationtofaceopponent_Params params {};
		params.currentlocation = currentlocation;
		params.Enemy = Enemy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Get Desired Teleport Final Location Behind The Enemy
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     currentposition                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      Enemy                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     finallocation                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::GetDesiredTeleportFinalLocationBehindTheEnemy(const struct FVector& currentposition, class AActor* Enemy, struct FVector* finallocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Get Desired Teleport Final Location Behind The Enemy");
		
		ALionfishLion_Character_BP_C_GetDesiredTeleportFinalLocationBehindTheEnemy_Params params {};
		params.currentposition = currentposition;
		params.Enemy = Enemy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (finallocation != nullptr)
			*finallocation = params.finallocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.get appropriate extra distance to land behind the target from current position
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     currentlocation                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      Enemy                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector ALionfishLion_Character_BP_C::getappropriateextradistancetolandbehindthetargetfromcurrentposition(const struct FVector& currentlocation, class AActor* Enemy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.get appropriate extra distance to land behind the target from current position");
		
		ALionfishLion_Character_BP_C_getappropriateextradistancetolandbehindthetargetfromcurrentposition_Params params {};
		params.currentlocation = currentlocation;
		params.Enemy = Enemy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.request release charge teleport
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isquicktapteleport                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::requestreleasechargeteleport(bool isquicktapteleport)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.request release charge teleport");
		
		ALionfishLion_Character_BP_C_requestreleasechargeteleport_Params params {};
		params.isquicktapteleport = isquicktapteleport;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Sort Selected Teleport Targets By Distance From Center
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::SortSelectedTeleportTargetsByDistanceFromCenter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Sort Selected Teleport Targets By Distance From Center");
		
		ALionfishLion_Character_BP_C_SortSelectedTeleportTargetsByDistanceFromCenter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Select Next Teleport Target While Charging
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::SelectNextTeleportTargetWhileCharging()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Select Next Teleport Target While Charging");
		
		ALionfishLion_Character_BP_C_SelectNextTeleportTargetWhileCharging_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.get teleport trace sphere location
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     viewdirection                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector ALionfishLion_Character_BP_C::getteleporttracespherelocation(const struct FVector& viewdirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.get teleport trace sphere location");
		
		ALionfishLion_Character_BP_C_getteleporttracespherelocation_Params params {};
		params.viewdirection = viewdirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Charging Teleport
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::IsChargingTeleport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Charging Teleport");
		
		ALionfishLion_Character_BP_C_IsChargingTeleport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Teleport Stop
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     hittarget                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::TeleportStop(class UObject* hittarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Teleport Stop");
		
		ALionfishLion_Character_BP_C_TeleportStop_Params params {};
		params.hittarget = hittarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Start Teleport
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              TeleportStrengthPercentage                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isquicktapteleport                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::StartTeleport(float TeleportStrengthPercentage, bool isquicktapteleport)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Start Teleport");
		
		ALionfishLion_Character_BP_C_StartTeleport_Params params {};
		params.TeleportStrengthPercentage = TeleportStrengthPercentage;
		params.isquicktapteleport = isquicktapteleport;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Get Teleport Character Octree Overlap Radius
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	float ALionfishLion_Character_BP_C::GetTeleportCharacterOctreeOverlapRadius()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Get Teleport Character Octree Overlap Radius");
		
		ALionfishLion_Character_BP_C_GetTeleportCharacterOctreeOverlapRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Mid Teleport
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               IsMidTeleport                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::IsMidTeleport(bool* IsMidTeleport)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Mid Teleport");
		
		ALionfishLion_Character_BP_C_IsMidTeleport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsMidTeleport != nullptr)
			*IsMidTeleport = params.IsMidTeleport;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Teleport Cooldown Active
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::IsTeleportCooldownActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Teleport Cooldown Active");
		
		ALionfishLion_Character_BP_C_IsTeleportCooldownActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Request Release Teleport
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::RequestReleaseTeleport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Request Release Teleport");
		
		ALionfishLion_Character_BP_C_RequestReleaseTeleport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Time Threshold For Determining Charge Teleport
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::TimeThresholdForDeterminingChargeTeleport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Time Threshold For Determining Charge Teleport");
		
		ALionfishLion_Character_BP_C_TimeThresholdForDeterminingChargeTeleport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Time Threshold For Determining Jump Or Big Spacebar Leap
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::TimeThresholdForDeterminingJumpOrBigSpacebarLeap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Time Threshold For Determining Jump Or Big Spacebar Leap");
		
		ALionfishLion_Character_BP_C_TimeThresholdForDeterminingJumpOrBigSpacebarLeap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPOnStopJump
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	bool ALionfishLion_Character_BP_C::BPOnStopJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPOnStopJump");
		
		ALionfishLion_Character_BP_C_BPOnStopJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.sync movement inputs
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::syncmovementinputs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.sync movement inputs");
		
		ALionfishLion_Character_BP_C_syncmovementinputs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.duration to hold on to current combo count
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	float ALionfishLion_Character_BP_C::durationtoholdontocurrentcombocount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.duration to hold on to current combo count");
		
		ALionfishLion_Character_BP_C_durationtoholdontocurrentcombocount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.remove character from max combo attacked characters array
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      InputPin                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::removecharacterfrommaxcomboattackedcharactersarray(class AActor* InputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.remove character from max combo attacked characters array");
		
		ALionfishLion_Character_BP_C_removecharacterfrommaxcomboattackedcharactersarray_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.clear recently max combo attacked characters array
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::clearrecentlymaxcomboattackedcharactersarray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.clear recently max combo attacked characters array");
		
		ALionfishLion_Character_BP_C_clearrecentlymaxcomboattackedcharactersarray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPKilledSomethingEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            killedTarget                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::BPKilledSomethingEvent(class APrimalCharacter* killedTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPKilledSomethingEvent");
		
		ALionfishLion_Character_BP_C_BPKilledSomethingEvent_Params params {};
		params.killedTarget = killedTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.PerformanceThrottledTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::PerformanceThrottledTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.PerformanceThrottledTick");
		
		ALionfishLion_Character_BP_C_PerformanceThrottledTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Blend Fov Back To Normal After Big Spacebar Leap
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::BlendFovBackToNormalAfterBigSpacebarLeap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Blend Fov Back To Normal After Big Spacebar Leap");
		
		ALionfishLion_Character_BP_C_BlendFovBackToNormalAfterBigSpacebarLeap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Close Enough To Hit Big Spacebar Leap Target
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               canhittarget                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::IsCloseEnoughToHitBigSpacebarLeapTarget(bool* canhittarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Close Enough To Hit Big Spacebar Leap Target");
		
		ALionfishLion_Character_BP_C_IsCloseEnoughToHitBigSpacebarLeapTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (canhittarget != nullptr)
			*canhittarget = params.canhittarget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Frozen From Hitstop
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::IsFrozenFromHitstop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Frozen From Hitstop");
		
		ALionfishLion_Character_BP_C_IsFrozenFromHitstop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.On Big Spacebar Leap Land
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::OnBigSpacebarLeapLand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.On Big Spacebar Leap Land");
		
		ALionfishLion_Character_BP_C_OnBigSpacebarLeapLand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Blending FOV Back To Normal After Big Spacebar Leap
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::IsBlendingFOVBackToNormalAfterBigSpacebarLeap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Blending FOV Back To Normal After Big Spacebar Leap");
		
		ALionfishLion_Character_BP_C_IsBlendingFOVBackToNormalAfterBigSpacebarLeap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BP_PreventMovementMode
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      NewMovementMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      NewCustomMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ALionfishLion_Character_BP_C::BP_PreventMovementMode(EMovementMode NewMovementMode, unsigned char NewCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BP_PreventMovementMode");
		
		ALionfishLion_Character_BP_C_BP_PreventMovementMode_Params params {};
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
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.On Big Spacebar Leap Hit Target
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            InputPin                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::OnBigSpacebarLeapHitTarget(class APrimalCharacter* InputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.On Big Spacebar Leap Hit Target");
		
		ALionfishLion_Character_BP_C_OnBigSpacebarLeapHitTarget_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Request Turnaround Stop on Other Side Of Big Spacebar Leap Target
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::RequestTurnaroundStoponOtherSideOfBigSpacebarLeapTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Request Turnaround Stop on Other Side Of Big Spacebar Leap Target");
		
		ALionfishLion_Character_BP_C_RequestTurnaroundStoponOtherSideOfBigSpacebarLeapTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Check for Ground and Halt Anim
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               retry                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::CheckforGroundandHaltAnim(bool* retry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Check for Ground and Halt Anim");
		
		ALionfishLion_Character_BP_C_CheckforGroundandHaltAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (retry != nullptr)
			*retry = params.retry;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Extra Big Spacebar Leap Ground Checks
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::ExtraBigSpacebarLeapGroundChecks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Extra Big Spacebar Leap Ground Checks");
		
		ALionfishLion_Character_BP_C_ExtraBigSpacebarLeapGroundChecks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Prevent Repeated Big Spacebar Leap Anim
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::PreventRepeatedBigSpacebarLeapAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Prevent Repeated Big Spacebar Leap Anim");
		
		ALionfishLion_Character_BP_C_PreventRepeatedBigSpacebarLeapAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Mid Big Spacebar Leap
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               IsMidBigSpacebarLeap                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::IsMidBigSpacebarLeap(bool* IsMidBigSpacebarLeap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Mid Big Spacebar Leap");
		
		ALionfishLion_Character_BP_C_IsMidBigSpacebarLeap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsMidBigSpacebarLeap != nullptr)
			*IsMidBigSpacebarLeap = params.IsMidBigSpacebarLeap;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.lerp time to move to other side of the target
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::lerptimetomovetoothersideofthetarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.lerp time to move to other side of the target");
		
		ALionfishLion_Character_BP_C_lerptimetomovetoothersideofthetarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Post Finisher Buildup FOV Return To Normal
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::PostFinisherBuildupFOVReturnToNormal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Post Finisher Buildup FOV Return To Normal");
		
		ALionfishLion_Character_BP_C_PostFinisherBuildupFOVReturnToNormal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Playing FOVIncrease On Finisher Buildup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::IsPlayingFOVIncreaseOnFinisherBuildup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Playing FOVIncrease On Finisher Buildup");
		
		ALionfishLion_Character_BP_C_IsPlayingFOVIncreaseOnFinisherBuildup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Allow Short Time Before Swapping Between Big Spacebar Leap Anticipation Poses
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::AllowShortTimeBeforeSwappingBetweenBigSpacebarLeapAnticipationPoses()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Allow Short Time Before Swapping Between Big Spacebar Leap Anticipation Poses");
		
		ALionfishLion_Character_BP_C_AllowShortTimeBeforeSwappingBetweenBigSpacebarLeapAnticipationPoses_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.ReceiveTick");
		
		ALionfishLion_Character_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.tick events
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delta                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::tickevents(float Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.tick events");
		
		ALionfishLion_Character_BP_C_tickevents_Params params {};
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Force Initial Big Spacebar Leap
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::ForceInitialBigSpacebarLeap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Force Initial Big Spacebar Leap");
		
		ALionfishLion_Character_BP_C_ForceInitialBigSpacebarLeap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.play sleep during day anim
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::playsleepduringdayanim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.play sleep during day anim");
		
		ALionfishLion_Character_BP_C_playsleepduringdayanim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Should Restrict Movement
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool ALionfishLion_Character_BP_C::ShouldRestrictMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Should Restrict Movement");
		
		ALionfishLion_Character_BP_C_ShouldRestrictMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPOverrideCameraViewTarget
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
	void ALionfishLion_Character_BP_C::BPOverrideCameraViewTarget(const class FName& CurrentCameraMode, const struct FVector& DesiredCameraLocation, const struct FRotator& DesiredCameraRotation, float DesiredFOV, bool* bOverrideCameraLocation, struct FVector* CameraLocation, bool* bOverrideCameraRotation, struct FRotator* CameraRotation, bool* bOverrideCameraFOV, float* CameraFOV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPOverrideCameraViewTarget");
		
		ALionfishLion_Character_BP_C_BPOverrideCameraViewTarget_Params params {};
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
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimNotify*                                 AnimNotifyObject                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::BlueprintAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BlueprintAnimNotifyCustomEvent");
		
		ALionfishLion_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params {};
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
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPOnStartJump
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ALionfishLion_Character_BP_C::BPOnStartJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPOnStartJump");
		
		ALionfishLion_Character_BP_C_BPOnStartJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Update Right Swipe Attack Anim Priorities
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            attackindex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::UpdateRightSwipeAttackAnimPriorities(int32_t attackindex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Update Right Swipe Attack Anim Priorities");
		
		ALionfishLion_Character_BP_C_UpdateRightSwipeAttackAnimPriorities_Params params {};
		params.attackindex = attackindex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Update Bite Attack Anim Priorities
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            attackindex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::UpdateBiteAttackAnimPriorities(int32_t attackindex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Update Bite Attack Anim Priorities");
		
		ALionfishLion_Character_BP_C_UpdateBiteAttackAnimPriorities_Params params {};
		params.attackindex = attackindex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.RidingTick
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::RidingTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.RidingTick");
		
		ALionfishLion_Character_BP_C_RidingTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPModifyDesiredRotation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    InDesiredRotation                                          (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    OutDesiredRotation                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ALionfishLion_Character_BP_C::BPModifyDesiredRotation(float DeltaTime, struct FRotator* InDesiredRotation, struct FRotator* OutDesiredRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPModifyDesiredRotation");
		
		ALionfishLion_Character_BP_C_BPModifyDesiredRotation_Params params {};
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
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPGetCrosshairLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              CanvasClipX                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CanvasClipY                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OutX                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OutY                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::BPGetCrosshairLocation(float CanvasClipX, float CanvasClipY, float* OutX, float* OutY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPGetCrosshairLocation");
		
		ALionfishLion_Character_BP_C_BPGetCrosshairLocation_Params params {};
		params.CanvasClipX = CanvasClipX;
		params.CanvasClipY = CanvasClipY;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutX != nullptr)
			*OutX = params.OutX;
		if (OutY != nullptr)
			*OutY = params.OutY;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPGetCrosshairColor
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	struct FLinearColor ALionfishLion_Character_BP_C::BPGetCrosshairColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPGetCrosshairColor");
		
		ALionfishLion_Character_BP_C_BPGetCrosshairColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Entering Or Exiting Roar Movement Restriction
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::EnteringOrExitingRoarMovementRestriction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Entering Or Exiting Roar Movement Restriction");
		
		ALionfishLion_Character_BP_C_EnteringOrExitingRoarMovementRestriction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Entering or Exiting Camo Movement Restriction
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::EnteringorExitingCamoMovementRestriction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Entering or Exiting Camo Movement Restriction");
		
		ALionfishLion_Character_BP_C_EnteringorExitingCamoMovementRestriction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Prevent Big Spacebar Leap Anim at First
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::PreventBigSpacebarLeapAnimatFirst()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Prevent Big Spacebar Leap Anim at First");
		
		ALionfishLion_Character_BP_C_PreventBigSpacebarLeapAnimatFirst_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Low Gravity Timeout
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::LowGravityTimeout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Low Gravity Timeout");
		
		ALionfishLion_Character_BP_C_LowGravityTimeout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Post Big Spacebar Leap Landing Reduced Friction
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::PostBigSpacebarLeapLandingReducedFriction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Post Big Spacebar Leap Landing Reduced Friction");
		
		ALionfishLion_Character_BP_C_PostBigSpacebarLeapLandingReducedFriction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Low Big Spacebar Leap Friction
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::LowBigSpacebarLeapFriction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Low Big Spacebar Leap Friction");
		
		ALionfishLion_Character_BP_C_LowBigSpacebarLeapFriction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPOnMovementModeChangedNotify
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      PreviousCustomMode                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::BPOnMovementModeChangedNotify(EMovementMode PrevMovementMode, unsigned char PreviousCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPOnMovementModeChangedNotify");
		
		ALionfishLion_Character_BP_C_BPOnMovementModeChangedNotify_Params params {};
		params.PrevMovementMode = PrevMovementMode;
		params.PreviousCustomMode = PreviousCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPTimerNonDedicated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::BPTimerNonDedicated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPTimerNonDedicated");
		
		ALionfishLion_Character_BP_C_BPTimerNonDedicated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Interpolate Mesh
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::InterpolateMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Interpolate Mesh");
		
		ALionfishLion_Character_BP_C_InterpolateMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.hard set rotation but interp mesh location
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    NewRotation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::hardsetrotationbutinterpmeshlocation(const struct FRotator& NewRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.hard set rotation but interp mesh location");
		
		ALionfishLion_Character_BP_C_hardsetrotationbutinterpmeshlocation_Params params {};
		params.NewRotation = NewRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Set Rotation and Interp Mesh
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    NewRotation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::SetRotationandInterpMesh(const struct FRotator& NewRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Set Rotation and Interp Mesh");
		
		ALionfishLion_Character_BP_C_SetRotationandInterpMesh_Params params {};
		params.NewRotation = NewRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.update transforms
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::updatetransforms()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.update transforms");
		
		ALionfishLion_Character_BP_C_updatetransforms_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.update anims
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ensureAnimsPlaying                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::updateanims(bool ensureAnimsPlaying)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.update anims");
		
		ALionfishLion_Character_BP_C_updateanims_Params params {};
		params.ensureAnimsPlaying = ensureAnimsPlaying;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Close To Ground
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              CheckDistance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::IsCloseToGround(float CheckDistance, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Close To Ground");
		
		ALionfishLion_Character_BP_C_IsCloseToGround_Params params {};
		params.CheckDistance = CheckDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Set Use Aim Offsets
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               newstate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::SetUseAimOffsets(bool newstate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Set Use Aim Offsets");
		
		ALionfishLion_Character_BP_C_SetUseAimOffsets_Params params {};
		params.newstate = newstate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Update Jumping Anim
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::UpdateJumpingAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Update Jumping Anim");
		
		ALionfishLion_Character_BP_C_UpdateJumpingAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Manual Play Land Anim
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::ManualPlayLandAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Manual Play Land Anim");
		
		ALionfishLion_Character_BP_C_ManualPlayLandAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Big Spacebar Leap Start
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::BigSpacebarLeapStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Big Spacebar Leap Start");
		
		ALionfishLion_Character_BP_C_BigSpacebarLeapStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.OnRep_CurrentClimbingState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::OnRep_CurrentClimbingState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.OnRep_CurrentClimbingState");
		
		ALionfishLion_Character_BP_C_OnRep_CurrentClimbingState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Net Set State
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_PredatorClimbingState                            newstate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::NetSetState(E_PredatorClimbingState newstate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Net Set State");
		
		ALionfishLion_Character_BP_C_NetSetState_Params params {};
		params.newstate = newstate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Can Keep Pouncing during Big Spacebar Leap
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::CanKeepPouncingduringBigSpacebarLeap(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Can Keep Pouncing during Big Spacebar Leap");
		
		ALionfishLion_Character_BP_C_CanKeepPouncingduringBigSpacebarLeap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Big Spacebar Leap Tick
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::BigSpacebarLeapTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Big Spacebar Leap Tick");
		
		ALionfishLion_Character_BP_C_BigSpacebarLeapTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Get Default Dino
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class ALionfishLion_Character_BP_C*                Ref                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::GetDefaultDino(class ALionfishLion_Character_BP_C** Ref)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Get Default Dino");
		
		ALionfishLion_Character_BP_C_GetDefaultDino_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ref != nullptr)
			*Ref = params.Ref;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.remove carry buff from prey
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::removecarrybufffromprey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.remove carry buff from prey");
		
		ALionfishLion_Character_BP_C_removecarrybufffromprey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.can carry creature
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::cancarrycreature(class APrimalCharacter* Character, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.can carry creature");
		
		ALionfishLion_Character_BP_C_cancarrycreature_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Big Spacebar Leap Stop
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     hittarget                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::BigSpacebarLeapStop(class UObject* hittarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Big Spacebar Leap Stop");
		
		ALionfishLion_Character_BP_C_BigSpacebarLeapStop_Params params {};
		params.hittarget = hittarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.initilialize sleep
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::initilializesleep()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.initilialize sleep");
		
		ALionfishLion_Character_BP_C_initilializesleep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Reenable Collision
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::ReenableCollision()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Reenable Collision");
		
		ALionfishLion_Character_BP_C_ReenableCollision_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              IncomingDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (Parm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  PointHitInfo                                               (Parm)
	 */
	float ALionfishLion_Character_BP_C::BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPAdjustDamage");
		
		ALionfishLion_Character_BP_C_BPAdjustDamage_Params params {};
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
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Calculate Big Spacebar Leap Direction
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      TargettedCharacter                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              BigSpacebarLeapvelocity                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     BigSpacebarLeapdir                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::CalculateBigSpacebarLeapDirection(class AActor* TargettedCharacter, float BigSpacebarLeapvelocity, struct FVector* BigSpacebarLeapdir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Calculate Big Spacebar Leap Direction");
		
		ALionfishLion_Character_BP_C_CalculateBigSpacebarLeapDirection_Params params {};
		params.TargettedCharacter = TargettedCharacter;
		params.BigSpacebarLeapvelocity = BigSpacebarLeapvelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BigSpacebarLeapdir != nullptr)
			*BigSpacebarLeapdir = params.BigSpacebarLeapdir;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.True Wake Up Other Pack Dinos
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::TrueWakeUpOtherPackDinos()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.True Wake Up Other Pack Dinos");
		
		ALionfishLion_Character_BP_C_TrueWakeUpOtherPackDinos_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.wake up other pack dinos
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               resettheiraffinity                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::wakeupotherpackdinos(bool resettheiraffinity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.wake up other pack dinos");
		
		ALionfishLion_Character_BP_C_wakeupotherpackdinos_Params params {};
		params.resettheiraffinity = resettheiraffinity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Delay True Wake Up
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::DelayTrueWakeUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Delay True Wake Up");
		
		ALionfishLion_Character_BP_C_DelayTrueWakeUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Rotate During Big Spacebar Leap
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::RotateDuringBigSpacebarLeap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Rotate During Big Spacebar Leap");
		
		ALionfishLion_Character_BP_C_RotateDuringBigSpacebarLeap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Update Appearance
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::UpdateAppearance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Update Appearance");
		
		ALionfishLion_Character_BP_C_UpdateAppearance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.OnRep_bIsDaytime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::OnRep_bIsDaytime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.OnRep_bIsDaytime");
		
		ALionfishLion_Character_BP_C_OnRep_bIsDaytime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Get Is Fully Awake
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::GetIsFullyAwake(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Get Is Fully Awake");
		
		ALionfishLion_Character_BP_C_GetIsFullyAwake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Dino Needs to Sleep
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::DinoNeedstoSleep(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Dino Needs to Sleep");
		
		ALionfishLion_Character_BP_C_DinoNeedstoSleep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Has Valid Target
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::HasValidTarget(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Has Valid Target");
		
		ALionfishLion_Character_BP_C_HasValidTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Get Sleep Debt to Deprived Ratio
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Ratio                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::GetSleepDebttoDeprivedRatio(float* Ratio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Get Sleep Debt to Deprived Ratio");
		
		ALionfishLion_Character_BP_C_GetSleepDebttoDeprivedRatio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ratio != nullptr)
			*Ratio = params.Ratio;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Dino Grounded
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::IsDinoGrounded(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Dino Grounded");
		
		ALionfishLion_Character_BP_C_IsDinoGrounded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Dino in Shallow Water
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               shallowWaters                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::IsDinoinShallowWater(bool* shallowWaters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Dino in Shallow Water");
		
		ALionfishLion_Character_BP_C_IsDinoinShallowWater_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (shallowWaters != nullptr)
			*shallowWaters = params.shallowWaters;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Can Wake
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::CanWake(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Can Wake");
		
		ALionfishLion_Character_BP_C_CanWake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Can Sleep
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::CanSleep(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Can Sleep");
		
		ALionfishLion_Character_BP_C_CanSleep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.On Fall Asleep
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::OnFallAsleep()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.On Fall Asleep");
		
		ALionfishLion_Character_BP_C_OnFallAsleep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.On Wake Up
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::OnWakeUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.On Wake Up");
		
		ALionfishLion_Character_BP_C_OnWakeUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Set Torpidity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              newTorpidity                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::SetTorpidity(float newTorpidity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Set Torpidity");
		
		ALionfishLion_Character_BP_C_SetTorpidity_Params params {};
		params.newTorpidity = newTorpidity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Update Sleep Related Actions
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::UpdateSleepRelatedActions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Update Sleep Related Actions");
		
		ALionfishLion_Character_BP_C_UpdateSleepRelatedActions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Play Natural Sleeping Anims
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isFallingAsleep                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isAlerted                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::PlayNaturalSleepingAnims(bool isFallingAsleep, bool isAlerted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Play Natural Sleeping Anims");
		
		ALionfishLion_Character_BP_C_PlayNaturalSleepingAnims_Params params {};
		params.isFallingAsleep = isFallingAsleep;
		params.isAlerted = isAlerted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Net Set Natural Sleep State
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isAsleep                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::NetSetNaturalSleepState(bool isAsleep)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Net Set Natural Sleep State");
		
		ALionfishLion_Character_BP_C_NetSetNaturalSleepState_Params params {};
		params.isAsleep = isAsleep;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BlueprintDrawFloatingHUD
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterHUD*                                 HUD                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterX                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterY                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DrawScale                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::BlueprintDrawFloatingHUD(class AShooterHUD* HUD, float CenterX, float CenterY, float DrawScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BlueprintDrawFloatingHUD");
		
		ALionfishLion_Character_BP_C_BlueprintDrawFloatingHUD_Params params {};
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
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPBecomeAdult
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::BPBecomeAdult()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPBecomeAdult");
		
		ALionfishLion_Character_BP_C_BPBecomeAdult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPBecomeBaby
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::BPBecomeBaby()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPBecomeBaby");
		
		ALionfishLion_Character_BP_C_BPBecomeBaby_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPPreventRiding
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           ByPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bDontCheckDistance                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ALionfishLion_Character_BP_C::BPPreventRiding(class AShooterCharacter* ByPawn, bool bDontCheckDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPPreventRiding");
		
		ALionfishLion_Character_BP_C_BPPreventRiding_Params params {};
		params.ByPawn = ByPawn;
		params.bDontCheckDistance = bDontCheckDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Possible to Sleep
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::IsPossibletoSleep(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Possible to Sleep");
		
		ALionfishLion_Character_BP_C_IsPossibletoSleep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ALionfishLion_Character_BP_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPTryMultiUse");
		
		ALionfishLion_Character_BP_C_BPTryMultiUse_Params params {};
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
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Allow Nocturnal Logic
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::AllowNocturnalLogic(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Allow Nocturnal Logic");
		
		ALionfishLion_Character_BP_C_AllowNocturnalLogic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Update Sleep Debt
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::UpdateSleepDebt(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Update Sleep Debt");
		
		ALionfishLion_Character_BP_C_UpdateSleepDebt_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Has Sleep Debt
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::HasSleepDebt(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Has Sleep Debt");
		
		ALionfishLion_Character_BP_C_HasSleepDebt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is time of day when lion wants to sleep
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::Istimeofdaywhenlionwantstosleep(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is time of day when lion wants to sleep");
		
		ALionfishLion_Character_BP_C_Istimeofdaywhenlionwantstosleep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Target Attacking Ally
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::IsTargetAttackingAlly(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Target Attacking Ally");
		
		ALionfishLion_Character_BP_C_IsTargetAttackingAlly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Tamed Following
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::IsTamedFollowing(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Tamed Following");
		
		ALionfishLion_Character_BP_C_IsTamedFollowing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Check for Wake
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::CheckforWake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Check for Wake");
		
		ALionfishLion_Character_BP_C_CheckforWake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Check for Sleep
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::CheckforSleep()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Check for Sleep");
		
		ALionfishLion_Character_BP_C_CheckforSleep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPTimerServer
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPTimerServer");
		
		ALionfishLion_Character_BP_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Check Time Of Day
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ForceUpdate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::CheckTimeOfDay(bool ForceUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Check Time Of Day");
		
		ALionfishLion_Character_BP_C_CheckTimeOfDay_Params params {};
		params.ForceUpdate = ForceUpdate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Init Nocturnal Dino
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::InitNocturnalDino()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Init Nocturnal Dino");
		
		ALionfishLion_Character_BP_C_InitNocturnalDino_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Setup Refs
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::SetupRefs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Setup Refs");
		
		ALionfishLion_Character_BP_C_SetupRefs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPNotifyStructurePlacedNearby
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            NewStructure                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::BPNotifyStructurePlacedNearby(class APrimalStructure* NewStructure)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPNotifyStructurePlacedNearby");
		
		ALionfishLion_Character_BP_C_BPNotifyStructurePlacedNearby_Params params {};
		params.NewStructure = NewStructure;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Wake Up
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               forceSuccess                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::WakeUp(bool forceSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Wake Up");
		
		ALionfishLion_Character_BP_C_WakeUp_Params params {};
		params.forceSuccess = forceSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Fall Asleep
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               forceSuccess                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ignoreIsPossible                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               TriggeredByMultiuse                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::FallAsleep(bool forceSuccess, bool ignoreIsPossible, bool TriggeredByMultiuse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Fall Asleep");
		
		ALionfishLion_Character_BP_C_FallAsleep_Params params {};
		params.forceSuccess = forceSuccess;
		params.ignoreIsPossible = ignoreIsPossible;
		params.TriggeredByMultiuse = TriggeredByMultiuse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Sleep Deprived
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::IsSleepDeprived(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Sleep Deprived");
		
		ALionfishLion_Character_BP_C_IsSleepDeprived_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Display Message
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor)
	 */
	void ALionfishLion_Character_BP_C::DisplayMessage(const class FString& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Display Message");
		
		ALionfishLion_Character_BP_C_DisplayMessage_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.OnRep_is camo active
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::OnRep_iscamoactive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.OnRep_is camo active");
		
		ALionfishLion_Character_BP_C_OnRep_iscamoactive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.net set use camo
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               newstate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               solo                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::netsetusecamo(bool newstate, bool solo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.net set use camo");
		
		ALionfishLion_Character_BP_C_netsetusecamo_Params params {};
		params.newstate = newstate;
		params.solo = solo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Can Use Camo
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isforstart                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::CanUseCamo(bool isforstart, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Can Use Camo");
		
		ALionfishLion_Character_BP_C_CanUseCamo_Params params {};
		params.isforstart = isforstart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.does it have enough stamina
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              staminarequirement                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::doesithaveenoughstamina(float staminarequirement, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.does it have enough stamina");
		
		ALionfishLion_Character_BP_C_doesithaveenoughstamina_Params params {};
		params.staminarequirement = staminarequirement;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.K2_OnMovementModeChanged
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EMovementMode                                      NewMovementMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      PrevCustomMode                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      NewCustomMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::K2_OnMovementModeChanged(EMovementMode PrevMovementMode, EMovementMode NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.K2_OnMovementModeChanged");
		
		ALionfishLion_Character_BP_C_K2_OnMovementModeChanged_Params params {};
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
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BP_OnTargetedByTamedOrder
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            OrderingCharacter                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalDinoCharacter*                        AttackingDino                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bForced                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::BP_OnTargetedByTamedOrder(class APrimalCharacter* OrderingCharacter, class APrimalDinoCharacter* AttackingDino, bool bForced)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BP_OnTargetedByTamedOrder");
		
		ALionfishLion_Character_BP_C_BP_OnTargetedByTamedOrder_Params params {};
		params.OrderingCharacter = OrderingCharacter;
		params.AttackingDino = AttackingDino;
		params.bForced = bForced;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Add Rider to Camo Fade Queue
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           Rider                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               enterCamo                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bInstant                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::AddRidertoCamoFadeQueue(class AShooterCharacter* Rider, bool enterCamo, bool bInstant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Add Rider to Camo Fade Queue");
		
		ALionfishLion_Character_BP_C_AddRidertoCamoFadeQueue_Params params {};
		params.Rider = Rider;
		params.enterCamo = enterCamo;
		params.bInstant = bInstant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPNotifyClearPassenger
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            PassengerChar                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SeatIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::BPNotifyClearPassenger(class APrimalCharacter* PassengerChar, int32_t SeatIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPNotifyClearPassenger");
		
		ALionfishLion_Character_BP_C_BPNotifyClearPassenger_Params params {};
		params.PassengerChar = PassengerChar;
		params.SeatIndex = SeatIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPNotifyIfPassengerLaunchShoulderMount
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            launchedCharacter                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::BPNotifyIfPassengerLaunchShoulderMount(class APrimalCharacter* launchedCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPNotifyIfPassengerLaunchShoulderMount");
		
		ALionfishLion_Character_BP_C_BPNotifyIfPassengerLaunchShoulderMount_Params params {};
		params.launchedCharacter = launchedCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Activate Rider Camo Particles
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               enterCamo                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterCharacter*                           specificRider                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::ActivateRiderCamoParticles(bool enterCamo, class AShooterCharacter* specificRider)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Activate Rider Camo Particles");
		
		ALionfishLion_Character_BP_C_ActivateRiderCamoParticles_Params params {};
		params.enterCamo = enterCamo;
		params.specificRider = specificRider;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Clean Allow Target when Using Camo Array
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::CleanAllowTargetwhenUsingCamoArray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Clean Allow Target when Using Camo Array");
		
		ALionfishLion_Character_BP_C_CleanAllowTargetwhenUsingCamoArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Set All Riders Hidden
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Hidden                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::SetAllRidersHidden(bool Hidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Set All Riders Hidden");
		
		ALionfishLion_Character_BP_C_SetAllRidersHidden_Params params {};
		params.Hidden = Hidden;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Set Camo Active
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Active                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::SetCamoActive(bool Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Set Camo Active");
		
		ALionfishLion_Character_BP_C_SetCamoActive_Params params {};
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Request Release Big Spacebar Leap Charge
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::RequestReleaseBigSpacebarLeapCharge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Request Release Big Spacebar Leap Charge");
		
		ALionfishLion_Character_BP_C_RequestReleaseBigSpacebarLeapCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPServerHandleNetExecCommand
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           FromPC                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        CommandName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (Parm, OutParm, ReferenceParm)
	 */
	bool ALionfishLion_Character_BP_C::BPServerHandleNetExecCommand(class APlayerController* FromPC, const class FName& CommandName, struct FBPNetExecParams* ExecParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPServerHandleNetExecCommand");
		
		ALionfishLion_Character_BP_C_BPServerHandleNetExecCommand_Params params {};
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
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.get held direction relative to camera forward
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               inwater                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector ALionfishLion_Character_BP_C::gethelddirectionrelativetocameraforward(bool inwater)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.get held direction relative to camera forward");
		
		ALionfishLion_Character_BP_C_gethelddirectionrelativetocameraforward_Params params {};
		params.inwater = inwater;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Reset Moveforward
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::ResetMoveforward()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Reset Moveforward");
		
		ALionfishLion_Character_BP_C_ResetMoveforward_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BP_InterceptMoveForward
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ALionfishLion_Character_BP_C::BP_InterceptMoveForward(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BP_InterceptMoveForward");
		
		ALionfishLion_Character_BP_C_BP_InterceptMoveForward_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Reset Moveright
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::ResetMoveright()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Reset Moveright");
		
		ALionfishLion_Character_BP_C_ResetMoveright_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BP_InterceptMoveRight
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ALionfishLion_Character_BP_C::BP_InterceptMoveRight(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BP_InterceptMoveRight");
		
		ALionfishLion_Character_BP_C_BP_InterceptMoveRight_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Big Spacebar Leap Cooldown Active
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::IsBigSpacebarLeapCooldownActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Big Spacebar Leap Cooldown Active");
		
		ALionfishLion_Character_BP_C_IsBigSpacebarLeapCooldownActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is in Initial Big Spacebar Leap
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::IsinInitialBigSpacebarLeap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is in Initial Big Spacebar Leap");
		
		ALionfishLion_Character_BP_C_IsinInitialBigSpacebarLeap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Start Big Spacebar Leap
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              BigSpacebarLeapStrengthPercentage                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::StartBigSpacebarLeap(float BigSpacebarLeapStrengthPercentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Start Big Spacebar Leap");
		
		ALionfishLion_Character_BP_C_StartBigSpacebarLeap_Params params {};
		params.BigSpacebarLeapStrengthPercentage = BigSpacebarLeapStrengthPercentage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.CanJumpInternal
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ALionfishLion_Character_BP_C::CanJumpInternal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.CanJumpInternal");
		
		ALionfishLion_Character_BP_C_CanJumpInternal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BP_GetCustomModifier_MaxSpeed
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ALionfishLion_Character_BP_C::BP_GetCustomModifier_MaxSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BP_GetCustomModifier_MaxSpeed");
		
		ALionfishLion_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BlueprintCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ALionfishLion_Character_BP_C::BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BlueprintCanAttack");
		
		ALionfishLion_Character_BP_C_BlueprintCanAttack_Params params {};
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
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Charging Big Spacebar Leap
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::IsChargingBigSpacebarLeap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Is Charging Big Spacebar Leap");
		
		ALionfishLion_Character_BP_C_IsChargingBigSpacebarLeap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Apply Pack Buff
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::ApplyPackBuff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Apply Pack Buff");
		
		ALionfishLion_Character_BP_C_ApplyPackBuff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BlueprintCanRiderAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ALionfishLion_Character_BP_C::BlueprintCanRiderAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BlueprintCanRiderAttack");
		
		ALionfishLion_Character_BP_C_BlueprintCanRiderAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.InterceptInputEvent
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      InputName                                                  (Parm, ZeroConstructor)
	 */
	void ALionfishLion_Character_BP_C::InterceptInputEvent(const class FString& InputName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.InterceptInputEvent");
		
		ALionfishLion_Character_BP_C_InterceptInputEvent_Params params {};
		params.InputName = InputName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Reset Current Combo Melee Index
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::ResetCurrentComboMeleeIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Reset Current Combo Melee Index");
		
		ALionfishLion_Character_BP_C_ResetCurrentComboMeleeIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Reset Combo Count
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::ResetComboCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Reset Combo Count");
		
		ALionfishLion_Character_BP_C_ResetComboCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BlueprintAdjustOutputDamage
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OriginalDamageAmount                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      HitActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      OutDamageType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OutDamageImpulse                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ALionfishLion_Character_BP_C::BlueprintAdjustOutputDamage(int32_t AttackIndex, float OriginalDamageAmount, class AActor* HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BlueprintAdjustOutputDamage");
		
		ALionfishLion_Character_BP_C_BlueprintAdjustOutputDamage_Params params {};
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
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPAdjustAttackIndex
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	int32_t ALionfishLion_Character_BP_C::BPAdjustAttackIndex(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPAdjustAttackIndex");
		
		ALionfishLion_Character_BP_C_BPAdjustAttackIndex_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPDoAttack
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::BPDoAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPDoAttack");
		
		ALionfishLion_Character_BP_C_BPDoAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.ReceiveAnyDamage
	 * 		Flags  -> (BlueprintAuthorityOnly, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UDamageType*                                 DamageType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AController*                                 InstigatedBy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.ReceiveAnyDamage");
		
		ALionfishLion_Character_BP_C_ReceiveAnyDamage_Params params {};
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
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPNotifyLevelUp
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ExtraCharacterLevel                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::BPNotifyLevelUp(int32_t ExtraCharacterLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPNotifyLevelUp");
		
		ALionfishLion_Character_BP_C_BPNotifyLevelUp_Params params {};
		params.ExtraCharacterLevel = ExtraCharacterLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPUnstasis
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::BPUnstasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPUnstasis");
		
		ALionfishLion_Character_BP_C_BPUnstasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPNotifySetRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderSetting                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::BPNotifySetRider(class AShooterCharacter* RiderSetting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPNotifySetRider");
		
		ALionfishLion_Character_BP_C_BPNotifySetRider_Params params {};
		params.RiderSetting = RiderSetting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPGetHUDOverrideBuffProgressBarPercent
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ALionfishLion_Character_BP_C::BPGetHUDOverrideBuffProgressBarPercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPGetHUDOverrideBuffProgressBarPercent");
		
		ALionfishLion_Character_BP_C_BPGetHUDOverrideBuffProgressBarPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPOnDinoCheat
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CheatName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bSetValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::BPOnDinoCheat(const class FName& CheatName, bool bSetValue, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPOnDinoCheat");
		
		ALionfishLion_Character_BP_C_BPOnDinoCheat_Params params {};
		params.CheatName = CheatName;
		params.bSetValue = bSetValue;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPNotifyClearRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderClearing                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::BPNotifyClearRider(class AShooterCharacter* RiderClearing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPNotifyClearRider");
		
		ALionfishLion_Character_BP_C_BPNotifyClearRider_Params params {};
		params.RiderClearing = RiderClearing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPHandleControllerInitiatedAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ALionfishLion_Character_BP_C::BPHandleControllerInitiatedAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPHandleControllerInitiatedAttack");
		
		ALionfishLion_Character_BP_C_BPHandleControllerInitiatedAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPHandleOnStopTargeting
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ALionfishLion_Character_BP_C::BPHandleOnStopTargeting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPHandleOnStopTargeting");
		
		ALionfishLion_Character_BP_C_BPHandleOnStopTargeting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.UserConstructionScript");
		
		ALionfishLion_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.grow teleport target sphere__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::growteleporttargetsphere__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.grow teleport target sphere__FinishedFunc");
		
		ALionfishLion_Character_BP_C_growteleporttargetsphere__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.grow teleport target sphere__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::growteleporttargetsphere__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.grow teleport target sphere__UpdateFunc");
		
		ALionfishLion_Character_BP_C_growteleporttargetsphere__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.move between teleport targets__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::movebetweenteleporttargets__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.move between teleport targets__FinishedFunc");
		
		ALionfishLion_Character_BP_C_movebetweenteleporttargets__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.move between teleport targets__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::movebetweenteleporttargets__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.move between teleport targets__UpdateFunc");
		
		ALionfishLion_Character_BP_C_movebetweenteleporttargets__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.fade hide dino__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::fadehidedino__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.fade hide dino__FinishedFunc");
		
		ALionfishLion_Character_BP_C_fadehidedino__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.fade hide dino__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::fadehidedino__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.fade hide dino__UpdateFunc");
		
		ALionfishLion_Character_BP_C_fadehidedino__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.lerp to normal__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::lerptonormal__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.lerp to normal__FinishedFunc");
		
		ALionfishLion_Character_BP_C_lerptonormal__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.lerp to normal__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::lerptonormal__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.lerp to normal__UpdateFunc");
		
		ALionfishLion_Character_BP_C_lerptonormal__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Timeline_1__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::Timeline_1__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Timeline_1__FinishedFunc");
		
		ALionfishLion_Character_BP_C_Timeline_1__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Timeline_1__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::Timeline_1__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Timeline_1__UpdateFunc");
		
		ALionfishLion_Character_BP_C_Timeline_1__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Timeline_2__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::Timeline_2__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Timeline_2__FinishedFunc");
		
		ALionfishLion_Character_BP_C_Timeline_2__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Timeline_2__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::Timeline_2__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Timeline_2__UpdateFunc");
		
		ALionfishLion_Character_BP_C_Timeline_2__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.stealth anim timeline__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::stealthanimtimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.stealth anim timeline__FinishedFunc");
		
		ALionfishLion_Character_BP_C_stealthanimtimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.stealth anim timeline__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::stealthanimtimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.stealth anim timeline__UpdateFunc");
		
		ALionfishLion_Character_BP_C_stealthanimtimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Timeline_0__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Timeline_0__FinishedFunc");
		
		ALionfishLion_Character_BP_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Timeline_0__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Timeline_0__UpdateFunc");
		
		ALionfishLion_Character_BP_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.client start charge Big Spacebar Leap
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::clientstartchargeBigSpacebarLeap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.client start charge Big Spacebar Leap");
		
		ALionfishLion_Character_BP_C_clientstartchargeBigSpacebarLeap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.client end charge Big Spacebar Leap
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ismaxcomboBigSpacebarLeap                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::clientendchargeBigSpacebarLeap(bool ismaxcomboBigSpacebarLeap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.client end charge Big Spacebar Leap");
		
		ALionfishLion_Character_BP_C_clientendchargeBigSpacebarLeap_Params params {};
		params.ismaxcomboBigSpacebarLeap = ismaxcomboBigSpacebarLeap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Event_CleanAllowTargetWhenUsingCamoArray
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::Event_CleanAllowTargetWhenUsingCamoArray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Event_CleanAllowTargetWhenUsingCamoArray");
		
		ALionfishLion_Character_BP_C_Event_CleanAllowTargetWhenUsingCamoArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Event_RestartCheckTargetArrayTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::Event_RestartCheckTargetArrayTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Event_RestartCheckTargetArrayTimer");
		
		ALionfishLion_Character_BP_C_Event_RestartCheckTargetArrayTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast started roar
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::multicaststartedroar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast started roar");
		
		ALionfishLion_Character_BP_C_multicaststartedroar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.ReceiveBeginPlay");
		
		ALionfishLion_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Re initialize nocturnal dino
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::Reinitializenocturnaldino()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Re initialize nocturnal dino");
		
		ALionfishLion_Character_BP_C_Reinitializenocturnaldino_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.OnIsDaytime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::OnIsDaytime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.OnIsDaytime");
		
		ALionfishLion_Character_BP_C_OnIsDaytime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.OnIsNighttime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::OnIsNighttime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.OnIsNighttime");
		
		ALionfishLion_Character_BP_C_OnIsNighttime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.EnableMovementAfterDelay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::EnableMovementAfterDelay(float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.EnableMovementAfterDelay");
		
		ALionfishLion_Character_BP_C_EnableMovementAfterDelay_Params params {};
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.DisableMovementAfterDelay
	 * 		Flags  -> (NetReliable, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::DisableMovementAfterDelay(float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.DisableMovementAfterDelay");
		
		ALionfishLion_Character_BP_C_DisableMovementAfterDelay_Params params {};
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BndEvt__Mesh_K2Node_ComponentBoundEvent_144_ComponentHitSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     NormalImpulse                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  Hit                                                        (Parm, OutParm, ReferenceParm)
	 */
	void ALionfishLion_Character_BP_C::BndEvt__Mesh_K2Node_ComponentBoundEvent_144_ComponentHitSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult* Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BndEvt__Mesh_K2Node_ComponentBoundEvent_144_ComponentHitSignature__DelegateSignature");
		
		ALionfishLion_Character_BP_C_BndEvt__Mesh_K2Node_ComponentBoundEvent_144_ComponentHitSignature__DelegateSignature_Params params {};
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.NormalImpulse = NormalImpulse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Hit != nullptr)
			*Hit = params.Hit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.bind sleeping buff dispatcher
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalBuff*                                 Buff                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::bindsleepingbuffdispatcher(class APrimalBuff* Buff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.bind sleeping buff dispatcher");
		
		ALionfishLion_Character_BP_C_bindsleepingbuffdispatcher_Params params {};
		params.Buff = Buff;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.awoken from other buff added
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::awokenfromotherbuffadded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.awoken from other buff added");
		
		ALionfishLion_Character_BP_C_awokenfromotherbuffadded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Server_NetSetClimbingState
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_PredatorClimbingState                            NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::Server_NetSetClimbingState(E_PredatorClimbingState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Server_NetSetClimbingState");
		
		ALionfishLion_Character_BP_C_Server_NetSetClimbingState_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.PreventLandingAnimBriefly
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::PreventLandingAnimBriefly()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.PreventLandingAnimBriefly");
		
		ALionfishLion_Character_BP_C_PreventLandingAnimBriefly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BP_OnJumpPressed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::BP_OnJumpPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BP_OnJumpPressed");
		
		ALionfishLion_Character_BP_C_BP_OnJumpPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.SyncGravityForBig Spacebar LeapFall
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::SyncGravityForBigSpacebarLeapFall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.SyncGravityForBig Spacebar LeapFall");
		
		ALionfishLion_Character_BP_C_SyncGravityForBigSpacebarLeapFall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.client started secondary roar
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::clientstartedsecondaryroar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.client started secondary roar");
		
		ALionfishLion_Character_BP_C_clientstartedsecondaryroar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.delay update cloak animbp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::delayupdatecloakanimbp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.delay update cloak animbp");
		
		ALionfishLion_Character_BP_C_delayupdatecloakanimbp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast hit swipe on target
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              combocount                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::multicasthitswipeontarget(float combocount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast hit swipe on target");
		
		ALionfishLion_Character_BP_C_multicasthitswipeontarget_Params params {};
		params.combocount = combocount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast hit bite on target
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              combovalue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     targetloc                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::multicasthitbiteontarget(float combovalue, const struct FVector& targetloc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast hit bite on target");
		
		ALionfishLion_Character_BP_C_multicasthitbiteontarget_Params params {};
		params.combovalue = combovalue;
		params.targetloc = targetloc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast start jumping
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::multicaststartjumping()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast start jumping");
		
		ALionfishLion_Character_BP_C_multicaststartjumping_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.temporarily set fall blend to zero
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::temporarilysetfallblendtozero()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.temporarily set fall blend to zero");
		
		ALionfishLion_Character_BP_C_temporarilysetfallblendtozero_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.keep trying to init nocturnal anim
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::keeptryingtoinitnocturnalanim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.keep trying to init nocturnal anim");
		
		ALionfishLion_Character_BP_C_keeptryingtoinitnocturnalanim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast tame
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::multicasttame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast tame");
		
		ALionfishLion_Character_BP_C_multicasttame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast play natural sleeping anims
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isfallingasleep                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isalerted                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::multicastplaynaturalsleepinganims(bool isfallingasleep, bool isalerted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast play natural sleeping anims");
		
		ALionfishLion_Character_BP_C_multicastplaynaturalsleepinganims_Params params {};
		params.isfallingasleep = isfallingasleep;
		params.isalerted = isalerted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.early end Big Spacebar Leap
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::earlyendBigSpacebarLeap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.early end Big Spacebar Leap");
		
		ALionfishLion_Character_BP_C_earlyendBigSpacebarLeap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.lerp to location after Big Spacebar Leap
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::lerptolocationafterBigSpacebarLeap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.lerp to location after Big Spacebar Leap");
		
		ALionfishLion_Character_BP_C_lerptolocationafterBigSpacebarLeap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast Big Spacebar Leap end
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::multicastBigSpacebarLeapend()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast Big Spacebar Leap end");
		
		ALionfishLion_Character_BP_C_multicastBigSpacebarLeapend_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast started Big Spacebar Leap 2
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              BigSpacebarLeapStrengthPercentage                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::multicaststartedBigSpacebarLeap2(float BigSpacebarLeapStrengthPercentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast started Big Spacebar Leap 2");
		
		ALionfishLion_Character_BP_C_multicaststartedBigSpacebarLeap2_Params params {};
		params.BigSpacebarLeapStrengthPercentage = BigSpacebarLeapStrengthPercentage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast on max combo Big Spacebar Leap hit
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::multicastonmaxcomboBigSpacebarLeaphit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast on max combo Big Spacebar Leap hit");
		
		ALionfishLion_Character_BP_C_multicastonmaxcomboBigSpacebarLeaphit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Hitstop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              HitstopTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::Hitstop(float HitstopTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Hitstop");
		
		ALionfishLion_Character_BP_C_Hitstop_Params params {};
		params.HitstopTime = HitstopTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.max combo Big Spacebar Leap hitstop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::maxcomboBigSpacebarLeaphitstop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.max combo Big Spacebar Leap hitstop");
		
		ALionfishLion_Character_BP_C_maxcomboBigSpacebarLeaphitstop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast on killed dino with max combo attack
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     targetlocation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::multicastonkilleddinowithmaxcomboattack(const struct FVector& targetlocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast on killed dino with max combo attack");
		
		ALionfishLion_Character_BP_C_multicastonkilleddinowithmaxcomboattack_Params params {};
		params.targetlocation = targetlocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.ServerSyncMovementValues
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              syncedright                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::ServerSyncMovementValues(float syncedright)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.ServerSyncMovementValues");
		
		ALionfishLion_Character_BP_C_ServerSyncMovementValues_Params params {};
		params.syncedright = syncedright;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.client start charge teleport
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::clientstartchargeteleport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.client start charge teleport");
		
		ALionfishLion_Character_BP_C_clientstartchargeteleport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.client end charge teleport
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ismaxcomboTeleport                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isquicktapteleport                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::clientendchargeteleport(bool ismaxcomboTeleport, bool isquicktapteleport)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.client end charge teleport");
		
		ALionfishLion_Character_BP_C_clientendchargeteleport_Params params {};
		params.ismaxcomboTeleport = ismaxcomboTeleport;
		params.isquicktapteleport = isquicktapteleport;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast started teleport 2
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isquicktapteleport                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            TeleportTargetCount                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::multicaststartedteleport2(bool isquicktapteleport, int32_t TeleportTargetCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.multicast started teleport 2");
		
		ALionfishLion_Character_BP_C_multicaststartedteleport2_Params params {};
		params.isquicktapteleport = isquicktapteleport;
		params.TeleportTargetCount = TeleportTargetCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.teleport to targets
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::teleporttotargets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.teleport to targets");
		
		ALionfishLion_Character_BP_C_teleporttotargets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.start teleport attack actual movement
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     initiallocation                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::startteleportattackactualmovement(const struct FVector& initiallocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.start teleport attack actual movement");
		
		ALionfishLion_Character_BP_C_startteleportattackactualmovement_Params params {};
		params.initiallocation = initiallocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.soft cancel teleport on failing to get targets
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               cancelanim                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::softcancelteleportonfailingtogettargets(bool cancelanim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.soft cancel teleport on failing to get targets");
		
		ALionfishLion_Character_BP_C_softcancelteleportonfailingtogettargets_Params params {};
		params.cancelanim = cancelanim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.teleport attack to position
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     StartLoc                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     EndLoc                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               probablyfinalteleport                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               turnaround                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::teleportattacktoposition(const struct FVector& StartLoc, const struct FVector& EndLoc, bool probablyfinalteleport, bool turnaround)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.teleport attack to position");
		
		ALionfishLion_Character_BP_C_teleportattacktoposition_Params params {};
		params.StartLoc = StartLoc;
		params.EndLoc = EndLoc;
		params.probablyfinalteleport = probablyfinalteleport;
		params.turnaround = turnaround;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.finished teleport attack
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::finishedteleportattack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.finished teleport attack");
		
		ALionfishLion_Character_BP_C_finishedteleportattack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.hide dino for teleport
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Hidden                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              PlayRate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               dontreversefromend                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::hidedinoforteleport(bool Hidden, float PlayRate, bool dontreversefromend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.hide dino for teleport");
		
		ALionfishLion_Character_BP_C_hidedinoforteleport_Params params {};
		params.Hidden = Hidden;
		params.PlayRate = PlayRate;
		params.dontreversefromend = dontreversefromend;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPDinoPostBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::BPDinoPostBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.BPDinoPostBeginPlay");
		
		ALionfishLion_Character_BP_C_BPDinoPostBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.restart dino clientside
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::restartdinoclientside()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.restart dino clientside");
		
		ALionfishLion_Character_BP_C_restartdinoclientside_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.soft cancel charge Big Spacebar Leap
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::softcancelchargeBigSpacebarLeap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.soft cancel charge Big Spacebar Leap");
		
		ALionfishLion_Character_BP_C_softcancelchargeBigSpacebarLeap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.InpAxisEvt_MoveUp_K2Node_InputAxisEvent_612
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::InpAxisEvt_MoveUp_K2Node_InputAxisEvent_612(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.InpAxisEvt_MoveUp_K2Node_InputAxisEvent_612");
		
		ALionfishLion_Character_BP_C_InpAxisEvt_MoveUp_K2Node_InputAxisEvent_612_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Multi_UpdateBuffTime
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsActive                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::Multi_UpdateBuffTime(bool bIsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Multi_UpdateBuffTime");
		
		ALionfishLion_Character_BP_C_Multi_UpdateBuffTime_Params params {};
		params.bIsActive = bIsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.trace loc
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     NewParam                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::traceloc(const struct FVector& NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.trace loc");
		
		ALionfishLion_Character_BP_C_traceloc_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.lerp loc to normal
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::lerploctonormal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.lerp loc to normal");
		
		ALionfishLion_Character_BP_C_lerploctonormal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.stop mesh lerp to normal
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::stopmeshlerptonormal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.stop mesh lerp to normal");
		
		ALionfishLion_Character_BP_C_stopmeshlerptonormal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Set New Time on Fade
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewTime                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::SetNewTimeonFade(float NewTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Set New Time on Fade");
		
		ALionfishLion_Character_BP_C_SetNewTimeonFade_Params params {};
		params.NewTime = NewTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Lerp While Jumping
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::LerpWhileJumping()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.Lerp While Jumping");
		
		ALionfishLion_Character_BP_C_LerpWhileJumping_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.OnActorCustomEvent_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        EventCustomName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      EventCustomString                                          (Parm, ZeroConstructor)
	 * 		class AActor*                                      InstigatorActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::OnActorCustomEvent_Event(const class FName& EventCustomName, const class FString& EventCustomString, class AActor* InstigatorActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.OnActorCustomEvent_Event");
		
		ALionfishLion_Character_BP_C_OnActorCustomEvent_Event_Params params {};
		params.EventCustomName = EventCustomName;
		params.EventCustomString = EventCustomString;
		params.InstigatorActor = InstigatorActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.lerp rot to next tele loc
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              newyaw                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              prevyaw                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::lerprottonextteleloc(float newyaw, float prevyaw)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.lerp rot to next tele loc");
		
		ALionfishLion_Character_BP_C_lerprottonextteleloc_Params params {};
		params.newyaw = newyaw;
		params.prevyaw = prevyaw;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.activate max combo Big Spacebar Leap particle
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::activatemaxcomboBigSpacebarLeapparticle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.activate max combo Big Spacebar Leap particle");
		
		ALionfishLion_Character_BP_C_activatemaxcomboBigSpacebarLeapparticle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.activate water Big Spacebar Leap particles
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ALionfishLion_Character_BP_C::activatewaterBigSpacebarLeapparticles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.activate water Big Spacebar Leap particles");
		
		ALionfishLion_Character_BP_C_activatewaterBigSpacebarLeapparticles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.ExecuteUbergraph_LionfishLion_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ALionfishLion_Character_BP_C::ExecuteUbergraph_LionfishLion_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LionfishLion_Character_BP.LionfishLion_Character_BP_C.ExecuteUbergraph_LionfishLion_Character_BP");
		
		ALionfishLion_Character_BP_C_ExecuteUbergraph_LionfishLion_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALionfishLion_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALionfishLion_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LionfishLion_Character_BP.LionfishLion_Character_BP_C");
		return ptr;
	}

}


