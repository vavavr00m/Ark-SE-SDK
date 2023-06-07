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
	 * 		Name   -> Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPNotifyBabyAgeIncrement
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              PreviousAge                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              NewAge                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProcoptodon_Character_BP_C::BPNotifyBabyAgeIncrement(float PreviousAge, float NewAge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPNotifyBabyAgeIncrement");
		
		AProcoptodon_Character_BP_C_BPNotifyBabyAgeIncrement_Params params {};
		params.PreviousAge = PreviousAge;
		params.NewAge = NewAge;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPTimerServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProcoptodon_Character_BP_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPTimerServer");
		
		AProcoptodon_Character_BP_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.UpdateNursingBuff
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShouldAdd                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalCharacter*                            TargetToNurse                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProcoptodon_Character_BP_C::UpdateNursingBuff(bool ShouldAdd, class APrimalCharacter* TargetToNurse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.UpdateNursingBuff");
		
		AProcoptodon_Character_BP_C_UpdateNursingBuff_Params params {};
		params.ShouldAdd = ShouldAdd;
		params.TargetToNurse = TargetToNurse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPNotifyMateBoostChanged
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProcoptodon_Character_BP_C::BPNotifyMateBoostChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPNotifyMateBoostChanged");
		
		AProcoptodon_Character_BP_C_BPNotifyMateBoostChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPTimerNonDedicated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProcoptodon_Character_BP_C::BPTimerNonDedicated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPTimerNonDedicated");
		
		AProcoptodon_Character_BP_C_BPTimerNonDedicated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPNotifySetRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderSetting                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProcoptodon_Character_BP_C::BPNotifySetRider(class AShooterCharacter* RiderSetting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPNotifySetRider");
		
		AProcoptodon_Character_BP_C_BPNotifySetRider_Params params {};
		params.RiderSetting = RiderSetting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPCharacterSleeped
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProcoptodon_Character_BP_C::BPCharacterSleeped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPCharacterSleeped");
		
		AProcoptodon_Character_BP_C_BPCharacterSleeped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPNotifyClearRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderClearing                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProcoptodon_Character_BP_C::BPNotifyClearRider(class AShooterCharacter* RiderClearing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPNotifyClearRider");
		
		AProcoptodon_Character_BP_C_BPNotifyClearRider_Params params {};
		params.RiderClearing = RiderClearing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.ServerStopJump
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProcoptodon_Character_BP_C::ServerStopJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.ServerStopJump");
		
		AProcoptodon_Character_BP_C_ServerStopJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPOnMovementModeChangedNotify
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      PreviousCustomMode                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProcoptodon_Character_BP_C::BPOnMovementModeChangedNotify(EMovementMode PrevMovementMode, unsigned char PreviousCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPOnMovementModeChangedNotify");
		
		AProcoptodon_Character_BP_C_BPOnMovementModeChangedNotify_Params params {};
		params.PrevMovementMode = PrevMovementMode;
		params.PreviousCustomMode = PreviousCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.GetLaunchDirection
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      CalcActor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector AProcoptodon_Character_BP_C::GetLaunchDirection(class AActor* CalcActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.GetLaunchDirection");
		
		AProcoptodon_Character_BP_C_GetLaunchDirection_Params params {};
		params.CalcActor = CalcActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.LaunchAtTracePoint
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProcoptodon_Character_BP_C::LaunchAtTracePoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.LaunchAtTracePoint");
		
		AProcoptodon_Character_BP_C_LaunchAtTracePoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.ExecuteJump
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProcoptodon_Character_BP_C::ExecuteJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.ExecuteJump");
		
		AProcoptodon_Character_BP_C_ExecuteJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.Prep Jump
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProcoptodon_Character_BP_C::PrepJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.Prep Jump");
		
		AProcoptodon_Character_BP_C_PrepJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.ShouldStopJumpRotation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AProcoptodon_Character_BP_C::ShouldStopJumpRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.ShouldStopJumpRotation");
		
		AProcoptodon_Character_BP_C_ShouldStopJumpRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.GetClampedLookDir
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               LimitLowerPitch                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector AProcoptodon_Character_BP_C::GetClampedLookDir(bool LimitLowerPitch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.GetClampedLookDir");
		
		AProcoptodon_Character_BP_C_GetClampedLookDir_Params params {};
		params.LimitLowerPitch = LimitLowerPitch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.JumpingTrace
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AProcoptodon_Character_BP_C::JumpingTrace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.JumpingTrace");
		
		AProcoptodon_Character_BP_C_JumpingTrace_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.ShortestAngleDistance
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              AngleCurrent                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              AngleTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Difference                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProcoptodon_Character_BP_C::ShortestAngleDistance(float AngleCurrent, float AngleTarget, float* Difference)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.ShortestAngleDistance");
		
		AProcoptodon_Character_BP_C_ShortestAngleDistance_Params params {};
		params.AngleCurrent = AngleCurrent;
		params.AngleTarget = AngleTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Difference != nullptr)
			*Difference = params.Difference;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPNotifyCarriedDinoBabyAgeIncrement
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        AgingCarriedDino                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              PreviousAge                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              NewAge                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProcoptodon_Character_BP_C::BPNotifyCarriedDinoBabyAgeIncrement(class APrimalDinoCharacter* AgingCarriedDino, float PreviousAge, float NewAge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPNotifyCarriedDinoBabyAgeIncrement");
		
		AProcoptodon_Character_BP_C_BPNotifyCarriedDinoBabyAgeIncrement_Params params {};
		params.AgingCarriedDino = AgingCarriedDino;
		params.PreviousAge = PreviousAge;
		params.NewAge = NewAge;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.Find Leap Dir
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	struct FVector AProcoptodon_Character_BP_C::FindLeapDir()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.Find Leap Dir");
		
		AProcoptodon_Character_BP_C_FindLeapDir_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPNotifyClearPassenger
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            PassengerChar                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SeatIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProcoptodon_Character_BP_C::BPNotifyClearPassenger(class APrimalCharacter* PassengerChar, int32_t SeatIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPNotifyClearPassenger");
		
		AProcoptodon_Character_BP_C_BPNotifyClearPassenger_Params params {};
		params.PassengerChar = PassengerChar;
		params.SeatIndex = SeatIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BlueprintCanRiderAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AProcoptodon_Character_BP_C::BlueprintCanRiderAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BlueprintCanRiderAttack");
		
		AProcoptodon_Character_BP_C_BlueprintCanRiderAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPNotifyAddPassenger
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            PassengerChar                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SeatIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProcoptodon_Character_BP_C::BPNotifyAddPassenger(class APrimalCharacter* PassengerChar, int32_t SeatIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPNotifyAddPassenger");
		
		AProcoptodon_Character_BP_C_BPNotifyAddPassenger_Params params {};
		params.PassengerChar = PassengerChar;
		params.SeatIndex = SeatIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BlueprintAdjustOutputDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OriginalDamageAmount                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      HitActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      OutDamageType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OutDamageImpulse                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float AProcoptodon_Character_BP_C::BlueprintAdjustOutputDamage(int32_t AttackIndex, float OriginalDamageAmount, class AActor* HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BlueprintAdjustOutputDamage");
		
		AProcoptodon_Character_BP_C_BlueprintAdjustOutputDamage_Params params {};
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
	 * 		Name   -> Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.Can Pouch Carry
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      GrabTarget                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               SkipCarryCheck                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AProcoptodon_Character_BP_C::CanPouchCarry(class AActor* GrabTarget, bool SkipCarryCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.Can Pouch Carry");
		
		AProcoptodon_Character_BP_C_CanPouchCarry_Params params {};
		params.GrabTarget = GrabTarget;
		params.SkipCarryCheck = SkipCarryCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPServerHandleNetExecCommand
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           FromPC                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        CommandName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (Parm, OutParm, ReferenceParm)
	 */
	bool AProcoptodon_Character_BP_C::BPServerHandleNetExecCommand(class APlayerController* FromPC, const class FName& CommandName, struct FBPNetExecParams* ExecParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPServerHandleNetExecCommand");
		
		AProcoptodon_Character_BP_C_BPServerHandleNetExecCommand_Params params {};
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
	 * 		Name   -> Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.CreatePouchGrabbableEntry
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            CharToAdd                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor)
	 * 		struct FMultiUseEntry                              MultiUseEntry                                              (Parm, OutParm)
	 */
	void AProcoptodon_Character_BP_C::CreatePouchGrabbableEntry(class APrimalCharacter* CharToAdd, const class FString& Name, struct FMultiUseEntry* MultiUseEntry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.CreatePouchGrabbableEntry");
		
		AProcoptodon_Character_BP_C_CreatePouchGrabbableEntry_Params params {};
		params.CharToAdd = CharToAdd;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MultiUseEntry != nullptr)
			*MultiUseEntry = params.MultiUseEntry;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AProcoptodon_Character_BP_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPTryMultiUse");
		
		AProcoptodon_Character_BP_C_BPTryMultiUse_Params params {};
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
	 * 		Name   -> Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPClientDoMultiUse
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ClientUseIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProcoptodon_Character_BP_C::BPClientDoMultiUse(class APlayerController* ForPC, int32_t ClientUseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPClientDoMultiUse");
		
		AProcoptodon_Character_BP_C_BPClientDoMultiUse_Params params {};
		params.ForPC = ForPC;
		params.ClientUseIndex = ClientUseIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPDoAttack
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProcoptodon_Character_BP_C::BPDoAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPDoAttack");
		
		AProcoptodon_Character_BP_C_BPDoAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> AProcoptodon_Character_BP_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BPGetMultiUseEntries");
		
		AProcoptodon_Character_BP_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProcoptodon_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.UserConstructionScript");
		
		AProcoptodon_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.TryPouchGrab
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            TargetCharacter                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProcoptodon_Character_BP_C::TryPouchGrab(class APrimalCharacter* TargetCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.TryPouchGrab");
		
		AProcoptodon_Character_BP_C_TryPouchGrab_Params params {};
		params.TargetCharacter = TargetCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.AnimNotify_KickHop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProcoptodon_Character_BP_C::AnimNotify_KickHop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.AnimNotify_KickHop");
		
		AProcoptodon_Character_BP_C_AnimNotify_KickHop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BP_OnJumpPressed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProcoptodon_Character_BP_C::BP_OnJumpPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BP_OnJumpPressed");
		
		AProcoptodon_Character_BP_C_BP_OnJumpPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BP_OnJumpReleased
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProcoptodon_Character_BP_C::BP_OnJumpReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.BP_OnJumpReleased");
		
		AProcoptodon_Character_BP_C_BP_OnJumpReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.DelayedPress
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProcoptodon_Character_BP_C::DelayedPress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.DelayedPress");
		
		AProcoptodon_Character_BP_C_DelayedPress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.Request Jump Response
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isHoldingJump                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProcoptodon_Character_BP_C::RequestJumpResponse(bool isHoldingJump)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.Request Jump Response");
		
		AProcoptodon_Character_BP_C_RequestJumpResponse_Params params {};
		params.isHoldingJump = isHoldingJump;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.Multi_SetPreventMovement
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewPreventMovement                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProcoptodon_Character_BP_C::Multi_SetPreventMovement(bool NewPreventMovement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.Multi_SetPreventMovement");
		
		AProcoptodon_Character_BP_C_Multi_SetPreventMovement_Params params {};
		params.NewPreventMovement = NewPreventMovement;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.DelayedClearJumping
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProcoptodon_Character_BP_C::DelayedClearJumping()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.DelayedClearJumping");
		
		AProcoptodon_Character_BP_C_DelayedClearJumping_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.Server_TraceTargetDir
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     AimLoc                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AimHit                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               JumpInstant                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProcoptodon_Character_BP_C::Server_TraceTargetDir(const struct FVector& AimLoc, bool AimHit, bool JumpInstant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.Server_TraceTargetDir");
		
		AProcoptodon_Character_BP_C_Server_TraceTargetDir_Params params {};
		params.AimLoc = AimLoc;
		params.AimHit = AimHit;
		params.JumpInstant = JumpInstant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.StartJumpIdle
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AProcoptodon_Character_BP_C::StartJumpIdle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.StartJumpIdle");
		
		AProcoptodon_Character_BP_C_StartJumpIdle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.ClearJump
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ForceImmediateClear                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProcoptodon_Character_BP_C::ClearJump(bool ForceImmediateClear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.ClearJump");
		
		AProcoptodon_Character_BP_C_ClearJump_Params params {};
		params.ForceImmediateClear = ForceImmediateClear;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.Multi_TraceTargetDir
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     AimLoc                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AimHit                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProcoptodon_Character_BP_C::Multi_TraceTargetDir(const struct FVector& AimLoc, bool AimHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.Multi_TraceTargetDir");
		
		AProcoptodon_Character_BP_C_Multi_TraceTargetDir_Params params {};
		params.AimLoc = AimLoc;
		params.AimHit = AimHit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.UpdateAllJumpRotation
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AProcoptodon_Character_BP_C::UpdateAllJumpRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.UpdateAllJumpRotation");
		
		AProcoptodon_Character_BP_C_UpdateAllJumpRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.UpdateJumpRotation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProcoptodon_Character_BP_C::UpdateJumpRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.UpdateJumpRotation");
		
		AProcoptodon_Character_BP_C_UpdateJumpRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.AnimNotify_JumpStart
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProcoptodon_Character_BP_C::AnimNotify_JumpStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.AnimNotify_JumpStart");
		
		AProcoptodon_Character_BP_C_AnimNotify_JumpStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.RequestJumpReady
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void AProcoptodon_Character_BP_C::RequestJumpReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.RequestJumpReady");
		
		AProcoptodon_Character_BP_C_RequestJumpReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.ServerArrestMovement
	 * 		Flags  -> (NetReliable, BlueprintCallable, BlueprintEvent)
	 */
	void AProcoptodon_Character_BP_C::ServerArrestMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.ServerArrestMovement");
		
		AProcoptodon_Character_BP_C_ServerArrestMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.ResetArrestMovement
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProcoptodon_Character_BP_C::ResetArrestMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.ResetArrestMovement");
		
		AProcoptodon_Character_BP_C_ResetArrestMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.DelayedCarryingResponseBehavior
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProcoptodon_Character_BP_C::DelayedCarryingResponseBehavior()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.DelayedCarryingResponseBehavior");
		
		AProcoptodon_Character_BP_C_DelayedCarryingResponseBehavior_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.ExecuteUbergraph_Procoptodon_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AProcoptodon_Character_BP_C::ExecuteUbergraph_Procoptodon_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Procoptodon_Character_BP.Procoptodon_Character_BP_C.ExecuteUbergraph_Procoptodon_Character_BP");
		
		AProcoptodon_Character_BP_C_ExecuteUbergraph_Procoptodon_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProcoptodon_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProcoptodon_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Procoptodon_Character_BP.Procoptodon_Character_BP_C");
		return ptr;
	}

}


