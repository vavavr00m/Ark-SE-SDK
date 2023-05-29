/**
 * Name: Ark_Survival_Evolved
 * Version: Patch_357.9
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Mammoth_Character_BP.Mammoth_Character_BP_C.IsInWater
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool AMammoth_Character_BP_C::IsInWater()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.IsInWater");
		
		AMammoth_Character_BP_C_IsInWater_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Mammoth_Character_BP.Mammoth_Character_BP_C.WaterSprayCharacter
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMammoth_Character_BP_C::WaterSprayCharacter(class APrimalCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.WaterSprayCharacter");
		
		AMammoth_Character_BP_C_WaterSprayCharacter_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Mammoth_Character_BP.Mammoth_Character_BP_C.RefillWaterStat
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalCharacterStatusComponent*             StatusComp                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMammoth_Character_BP_C::RefillWaterStat(class UPrimalCharacterStatusComponent* StatusComp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.RefillWaterStat");
		
		AMammoth_Character_BP_C_RefillWaterStat_Params params {};
		params.StatusComp = StatusComp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPCanTakePassenger
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            PassengerSeatIndex                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bForcePassenger                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bAllowFlyersAndWaterDinos                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AMammoth_Character_BP_C::BPCanTakePassenger(class APrimalCharacter* Character, int32_t PassengerSeatIndex, bool bForcePassenger, bool bAllowFlyersAndWaterDinos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPCanTakePassenger");
		
		AMammoth_Character_BP_C_BPCanTakePassenger_Params params {};
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Mammoth_Character_BP.Mammoth_Character_BP_C.ThrottledTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMammoth_Character_BP_C::ThrottledTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.ThrottledTick");
		
		AMammoth_Character_BP_C_ThrottledTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Mammoth_Character_BP.Mammoth_Character_BP_C.BlueprintAdjustOutputDamage
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OriginalDamageAmount                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      HitActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      OutDamageType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OutDamageImpulse                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float AMammoth_Character_BP_C::BlueprintAdjustOutputDamage(int32_t AttackIndex, float OriginalDamageAmount, class AActor* HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.BlueprintAdjustOutputDamage");
		
		AMammoth_Character_BP_C_BlueprintAdjustOutputDamage_Params params {};
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Mammoth_Character_BP.Mammoth_Character_BP_C.ShortestAngleDifference
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              AngleCurrent                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              AngleTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Difference                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMammoth_Character_BP_C::ShortestAngleDifference(float AngleCurrent, float AngleTarget, float* Difference)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.ShortestAngleDifference");
		
		AMammoth_Character_BP_C_ShortestAngleDifference_Params params {};
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Mammoth_Character_BP.Mammoth_Character_BP_C.GetClampedLookDir
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               LimitLowerPitch                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Dir                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMammoth_Character_BP_C::GetClampedLookDir(bool LimitLowerPitch, struct FVector* Dir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.GetClampedLookDir");
		
		AMammoth_Character_BP_C_GetClampedLookDir_Params params {};
		params.LimitLowerPitch = LimitLowerPitch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Dir != nullptr)
			*Dir = params.Dir;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Mammoth_Character_BP.Mammoth_Character_BP_C.ThrowTrace
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AMammoth_Character_BP_C::ThrowTrace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.ThrowTrace");
		
		AMammoth_Character_BP_C_ThrowTrace_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Mammoth_Character_BP.Mammoth_Character_BP_C.GetThrowVelocity
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APrimalCharacter*                            ThrownCharacter                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector AMammoth_Character_BP_C::GetThrowVelocity(class APrimalCharacter* ThrownCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.GetThrowVelocity");
		
		AMammoth_Character_BP_C_GetThrowVelocity_Params params {};
		params.ThrownCharacter = ThrownCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPTimerServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMammoth_Character_BP_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPTimerServer");
		
		AMammoth_Character_BP_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Mammoth_Character_BP.Mammoth_Character_BP_C.canThrow
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool AMammoth_Character_BP_C::canThrow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.canThrow");
		
		AMammoth_Character_BP_C_canThrow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPTimerNonDedicated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMammoth_Character_BP_C::BPTimerNonDedicated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPTimerNonDedicated");
		
		AMammoth_Character_BP_C_BPTimerNonDedicated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPDidSetCarriedCharacter
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            PreviousCarriedCharacter                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMammoth_Character_BP_C::BPDidSetCarriedCharacter(class APrimalCharacter* PreviousCarriedCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPDidSetCarriedCharacter");
		
		AMammoth_Character_BP_C_BPDidSetCarriedCharacter_Params params {};
		params.PreviousCarriedCharacter = PreviousCarriedCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPNotifyToggleHUD
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bHudHidden                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMammoth_Character_BP_C::BPNotifyToggleHUD(bool bHudHidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPNotifyToggleHUD");
		
		AMammoth_Character_BP_C_BPNotifyToggleHUD_Params params {};
		params.bHudHidden = bHudHidden;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AMammoth_Character_BP_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPTryMultiUse");
		
		AMammoth_Character_BP_C_BPTryMultiUse_Params params {};
		params.ForPC = ForPC;
		params.UseIndex = UseIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> AMammoth_Character_BP_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPGetMultiUseEntries");
		
		AMammoth_Character_BP_C_BPGetMultiUseEntries_Params params {};
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Mammoth_Character_BP.Mammoth_Character_BP_C.ClearThrow
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMammoth_Character_BP_C::ClearThrow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.ClearThrow");
		
		AMammoth_Character_BP_C_ClearThrow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Mammoth_Character_BP.Mammoth_Character_BP_C.LaunchGrabbedCharacter
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMammoth_Character_BP_C::LaunchGrabbedCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.LaunchGrabbedCharacter");
		
		AMammoth_Character_BP_C_LaunchGrabbedCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPDidClearCarriedCharacter
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            PreviousCarriedCharacter                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMammoth_Character_BP_C::BPDidClearCarriedCharacter(class APrimalCharacter* PreviousCarriedCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPDidClearCarriedCharacter");
		
		AMammoth_Character_BP_C_BPDidClearCarriedCharacter_Params params {};
		params.PreviousCarriedCharacter = PreviousCarriedCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Mammoth_Character_BP.Mammoth_Character_BP_C.GrabFoundCharacter
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMammoth_Character_BP_C::GrabFoundCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.GrabFoundCharacter");
		
		AMammoth_Character_BP_C_GrabFoundCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Mammoth_Character_BP.Mammoth_Character_BP_C.FindProperGrabTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            TestChar                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalCharacter*                            TargetChar                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMammoth_Character_BP_C::FindProperGrabTarget(class APrimalCharacter* TestChar, class APrimalCharacter** TargetChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.FindProperGrabTarget");
		
		AMammoth_Character_BP_C_FindProperGrabTarget_Params params {};
		params.TestChar = TestChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TargetChar != nullptr)
			*TargetChar = params.TargetChar;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Mammoth_Character_BP.Mammoth_Character_BP_C.CheckProperCanCarry
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            TestActor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CanCarry                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMammoth_Character_BP_C::CheckProperCanCarry(class APrimalCharacter* TestActor, bool* CanCarry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.CheckProperCanCarry");
		
		AMammoth_Character_BP_C_CheckProperCanCarry_Params params {};
		params.TestActor = TestActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanCarry != nullptr)
			*CanCarry = params.CanCarry;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Mammoth_Character_BP.Mammoth_Character_BP_C.IsBetterGrabTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      NewTarget                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AMammoth_Character_BP_C::IsBetterGrabTarget(class AActor* NewTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.IsBetterGrabTarget");
		
		AMammoth_Character_BP_C_IsBetterGrabTarget_Params params {};
		params.NewTarget = NewTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Mammoth_Character_BP.Mammoth_Character_BP_C.GetGrabLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FVector AMammoth_Character_BP_C::GetGrabLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.GetGrabLocation");
		
		AMammoth_Character_BP_C_GetGrabLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Mammoth_Character_BP.Mammoth_Character_BP_C.RetrieveAnyGrabbableCharacter
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               FoundCharacter                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMammoth_Character_BP_C::RetrieveAnyGrabbableCharacter(bool* FoundCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.RetrieveAnyGrabbableCharacter");
		
		AMammoth_Character_BP_C_RetrieveAnyGrabbableCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FoundCharacter != nullptr)
			*FoundCharacter = params.FoundCharacter;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPOverrideGetAttackAnimationIndex
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class UAnimMontage*>                        AnimationArray                                             (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	int32_t AMammoth_Character_BP_C::BPOverrideGetAttackAnimationIndex(int32_t AttackIndex, TArray<class UAnimMontage*>* AnimationArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPOverrideGetAttackAnimationIndex");
		
		AMammoth_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params params {};
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPOnStartJump
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AMammoth_Character_BP_C::BPOnStartJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPOnStartJump");
		
		AMammoth_Character_BP_C_BPOnStartJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Mammoth_Character_BP.Mammoth_Character_BP_C.OnPassengerWeaponChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterWeapon*                              newWeapon                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMammoth_Character_BP_C::OnPassengerWeaponChanged(class AShooterWeapon* newWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.OnPassengerWeaponChanged");
		
		AMammoth_Character_BP_C_OnPassengerWeaponChanged_Params params {};
		params.newWeapon = newWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPNotifyAddPassenger
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            PassengerChar                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SeatIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMammoth_Character_BP_C::BPNotifyAddPassenger(class APrimalCharacter* PassengerChar, int32_t SeatIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPNotifyAddPassenger");
		
		AMammoth_Character_BP_C_BPNotifyAddPassenger_Params params {};
		params.PassengerChar = PassengerChar;
		params.SeatIndex = SeatIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPNotifyClearPassenger
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            PassengerChar                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SeatIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMammoth_Character_BP_C::BPNotifyClearPassenger(class APrimalCharacter* PassengerChar, int32_t SeatIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPNotifyClearPassenger");
		
		AMammoth_Character_BP_C_BPNotifyClearPassenger_Params params {};
		params.PassengerChar = PassengerChar;
		params.SeatIndex = SeatIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Mammoth_Character_BP.Mammoth_Character_BP_C.AllowTrumpetDebuff
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMammoth_Character_BP_C::AllowTrumpetDebuff(class APrimalCharacter* Target, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.AllowTrumpetDebuff");
		
		AMammoth_Character_BP_C_AllowTrumpetDebuff_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Mammoth_Character_BP.Mammoth_Character_BP_C.DoTrumpetAttack
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AMammoth_Character_BP_C::DoTrumpetAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.DoTrumpetAttack");
		
		AMammoth_Character_BP_C_DoTrumpetAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPDoAttack
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMammoth_Character_BP_C::BPDoAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPDoAttack");
		
		AMammoth_Character_BP_C_BPDoAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Mammoth_Character_BP.Mammoth_Character_BP_C.BlueprintCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AMammoth_Character_BP_C::BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.BlueprintCanAttack");
		
		AMammoth_Character_BP_C_BlueprintCanAttack_Params params {};
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Mammoth_Character_BP.Mammoth_Character_BP_C.BlueprintCanRiderAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AMammoth_Character_BP_C::BlueprintCanRiderAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.BlueprintCanRiderAttack");
		
		AMammoth_Character_BP_C_BlueprintCanRiderAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Mammoth_Character_BP.Mammoth_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMammoth_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.UserConstructionScript");
		
		AMammoth_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Mammoth_Character_BP.Mammoth_Character_BP_C.AnimNotify_EndGrab
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMammoth_Character_BP_C::AnimNotify_EndGrab()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.AnimNotify_EndGrab");
		
		AMammoth_Character_BP_C_AnimNotify_EndGrab_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Mammoth_Character_BP.Mammoth_Character_BP_C.TraceGrab
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMammoth_Character_BP_C::TraceGrab()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.TraceGrab");
		
		AMammoth_Character_BP_C_TraceGrab_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Mammoth_Character_BP.Mammoth_Character_BP_C.AnimNotify_StartGrab
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMammoth_Character_BP_C::AnimNotify_StartGrab()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.AnimNotify_StartGrab");
		
		AMammoth_Character_BP_C_AnimNotify_StartGrab_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Mammoth_Character_BP.Mammoth_Character_BP_C.AnimNotify_MidGrab
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMammoth_Character_BP_C::AnimNotify_MidGrab()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.AnimNotify_MidGrab");
		
		AMammoth_Character_BP_C_AnimNotify_MidGrab_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Mammoth_Character_BP.Mammoth_Character_BP_C.AnimNotify_EndGrabAttack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMammoth_Character_BP_C::AnimNotify_EndGrabAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.AnimNotify_EndGrabAttack");
		
		AMammoth_Character_BP_C_AnimNotify_EndGrabAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Mammoth_Character_BP.Mammoth_Character_BP_C.AnimNotify_ReleaseGrab
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMammoth_Character_BP_C::AnimNotify_ReleaseGrab()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.AnimNotify_ReleaseGrab");
		
		AMammoth_Character_BP_C_AnimNotify_ReleaseGrab_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Mammoth_Character_BP.Mammoth_Character_BP_C.ClientGrabNotify
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void AMammoth_Character_BP_C::ClientGrabNotify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.ClientGrabNotify");
		
		AMammoth_Character_BP_C_ClientGrabNotify_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Mammoth_Character_BP.Mammoth_Character_BP_C.ClientThrowNotify
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void AMammoth_Character_BP_C::ClientThrowNotify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.ClientThrowNotify");
		
		AMammoth_Character_BP_C_ClientThrowNotify_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Mammoth_Character_BP.Mammoth_Character_BP_C.ServerTraceHit
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     TraceLoc                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               TraceHit                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMammoth_Character_BP_C::ServerTraceHit(const struct FVector& TraceLoc, bool TraceHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.ServerTraceHit");
		
		AMammoth_Character_BP_C_ServerTraceHit_Params params {};
		params.TraceLoc = TraceLoc;
		params.TraceHit = TraceHit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Mammoth_Character_BP.Mammoth_Character_BP_C.AnimNotify_TrumpetVFX
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMammoth_Character_BP_C::AnimNotify_TrumpetVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.AnimNotify_TrumpetVFX");
		
		AMammoth_Character_BP_C_AnimNotify_TrumpetVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Mammoth_Character_BP.Mammoth_Character_BP_C.AnimNotify_StopTrumpetVFX
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMammoth_Character_BP_C::AnimNotify_StopTrumpetVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.AnimNotify_StopTrumpetVFX");
		
		AMammoth_Character_BP_C_AnimNotify_StopTrumpetVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Mammoth_Character_BP.Mammoth_Character_BP_C.AnimNotify_TrunkSplash
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMammoth_Character_BP_C::AnimNotify_TrunkSplash()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.AnimNotify_TrunkSplash");
		
		AMammoth_Character_BP_C_AnimNotify_TrunkSplash_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Mammoth_Character_BP.Mammoth_Character_BP_C.ExecuteUbergraph_Mammoth_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMammoth_Character_BP_C::ExecuteUbergraph_Mammoth_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Mammoth_Character_BP.Mammoth_Character_BP_C.ExecuteUbergraph_Mammoth_Character_BP");
		
		AMammoth_Character_BP_C_ExecuteUbergraph_Mammoth_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMammoth_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMammoth_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Mammoth_Character_BP.Mammoth_Character_BP_C");
		return ptr;
	}

}


