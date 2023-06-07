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
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.BPCanCryo
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ACrab_Character_BP_C::BPCanCryo(class AShooterPlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.BPCanCryo");
		
		ACrab_Character_BP_C_BPCanCryo_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.BPGetDragSocketDinoName
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        aGrabbedDino                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class FName ACrab_Character_BP_C::BPGetDragSocketDinoName(class APrimalDinoCharacter* aGrabbedDino)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.BPGetDragSocketDinoName");
		
		ACrab_Character_BP_C_BPGetDragSocketDinoName_Params params {};
		params.aGrabbedDino = aGrabbedDino;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.BPOnMovementModeChangedNotify
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      PreviousCustomMode                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACrab_Character_BP_C::BPOnMovementModeChangedNotify(EMovementMode PrevMovementMode, unsigned char PreviousCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.BPOnMovementModeChangedNotify");
		
		ACrab_Character_BP_C_BPOnMovementModeChangedNotify_Params params {};
		params.PrevMovementMode = PrevMovementMode;
		params.PreviousCustomMode = PreviousCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.Should Stop Jump Rotation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               returnvalue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACrab_Character_BP_C::ShouldStopJumpRotation(bool* returnvalue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.Should Stop Jump Rotation");
		
		ACrab_Character_BP_C_ShouldStopJumpRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (returnvalue != nullptr)
			*returnvalue = params.returnvalue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.BPShouldCancelDoAttack
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ACrab_Character_BP_C::BPShouldCancelDoAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.BPShouldCancelDoAttack");
		
		ACrab_Character_BP_C_BPShouldCancelDoAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.BlueprintAdjustOutputDamage
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OriginalDamageAmount                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      HitActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      OutDamageType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OutDamageImpulse                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ACrab_Character_BP_C::BlueprintAdjustOutputDamage(int32_t AttackIndex, float OriginalDamageAmount, class AActor* HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.BlueprintAdjustOutputDamage");
		
		ACrab_Character_BP_C_BlueprintAdjustOutputDamage_Params params {};
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
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.ImpulseTowardTarget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsApex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACrab_Character_BP_C::ImpulseTowardTarget(bool IsApex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.ImpulseTowardTarget");
		
		ACrab_Character_BP_C_ImpulseTowardTarget_Params params {};
		params.IsApex = IsApex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.Shortest Angle Distance
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              AngleCurrent                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              AngleTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Difference                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACrab_Character_BP_C::ShortestAngleDistance(float AngleCurrent, float AngleTarget, float* Difference)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.Shortest Angle Distance");
		
		ACrab_Character_BP_C_ShortestAngleDistance_Params params {};
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
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.StopThrowOrReleaseGrab
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ReleasedCharacter                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACrab_Character_BP_C::StopThrowOrReleaseGrab(int32_t index, bool* ReleasedCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.StopThrowOrReleaseGrab");
		
		ACrab_Character_BP_C_StopThrowOrReleaseGrab_Params params {};
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReleasedCharacter != nullptr)
			*ReleasedCharacter = params.ReleasedCharacter;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.BPHandleOnStopFire
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ACrab_Character_BP_C::BPHandleOnStopFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.BPHandleOnStopFire");
		
		ACrab_Character_BP_C_BPHandleOnStopFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.BPHandleOnStopTargeting
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ACrab_Character_BP_C::BPHandleOnStopTargeting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.BPHandleOnStopTargeting");
		
		ACrab_Character_BP_C_BPHandleOnStopTargeting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.BPHandleControllerInitiatedAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ACrab_Character_BP_C::BPHandleControllerInitiatedAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.BPHandleControllerInitiatedAttack");
		
		ACrab_Character_BP_C_BPHandleControllerInitiatedAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.BPAdjustAttackIndex
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	int32_t ACrab_Character_BP_C::BPAdjustAttackIndex(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.BPAdjustAttackIndex");
		
		ACrab_Character_BP_C_BPAdjustAttackIndex_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.ProcessThrow
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACrab_Character_BP_C::ProcessThrow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.ProcessThrow");
		
		ACrab_Character_BP_C_ProcessThrow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.ProcessJump
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACrab_Character_BP_C::ProcessJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.ProcessJump");
		
		ACrab_Character_BP_C_ProcessJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.BP_InterceptMoveForward
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ACrab_Character_BP_C::BP_InterceptMoveForward(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.BP_InterceptMoveForward");
		
		ACrab_Character_BP_C_BP_InterceptMoveForward_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.BP_InterceptMoveRight
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ACrab_Character_BP_C::BP_InterceptMoveRight(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.BP_InterceptMoveRight");
		
		ACrab_Character_BP_C_BP_InterceptMoveRight_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.BPNotifySetRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderSetting                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACrab_Character_BP_C::BPNotifySetRider(class AShooterCharacter* RiderSetting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.BPNotifySetRider");
		
		ACrab_Character_BP_C_BPNotifySetRider_Params params {};
		params.RiderSetting = RiderSetting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.Crab Adjust Attack Index
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            InputPin                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            RetAttackIndex                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACrab_Character_BP_C::CrabAdjustAttackIndex(int32_t InputPin, int32_t* RetAttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.Crab Adjust Attack Index");
		
		ACrab_Character_BP_C_CrabAdjustAttackIndex_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RetAttackIndex != nullptr)
			*RetAttackIndex = params.RetAttackIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.HasSecondaryCarriedChar
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ACrab_Character_BP_C::HasSecondaryCarriedChar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.HasSecondaryCarriedChar");
		
		ACrab_Character_BP_C_HasSecondaryCarriedChar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.IsCarryingCharacterSecondary
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               OutputPin                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACrab_Character_BP_C::IsCarryingCharacterSecondary(bool* OutputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.IsCarryingCharacterSecondary");
		
		ACrab_Character_BP_C_IsCarryingCharacterSecondary_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutputPin != nullptr)
			*OutputPin = params.OutputPin;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.GetCarriedCharacterSecondary
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APrimalCharacter*                            OutputPin                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACrab_Character_BP_C::GetCarriedCharacterSecondary(class APrimalCharacter** OutputPin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.GetCarriedCharacterSecondary");
		
		ACrab_Character_BP_C_GetCarriedCharacterSecondary_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutputPin != nullptr)
			*OutputPin = params.OutputPin;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.LaunchAtTracePoint
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACrab_Character_BP_C::LaunchAtTracePoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.LaunchAtTracePoint");
		
		ACrab_Character_BP_C_LaunchAtTracePoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.GetClampedLookDir
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               LimitLowerPitch                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector ACrab_Character_BP_C::GetClampedLookDir(bool LimitLowerPitch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.GetClampedLookDir");
		
		ACrab_Character_BP_C_GetClampedLookDir_Params params {};
		params.LimitLowerPitch = LimitLowerPitch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.ThrowTrace
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ACrab_Character_BP_C::ThrowTrace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.ThrowTrace");
		
		ACrab_Character_BP_C_ThrowTrace_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.BPAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              IncomingDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (Parm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  PointHitInfo                                               (Parm)
	 */
	float ACrab_Character_BP_C::BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.BPAdjustDamage");
		
		ACrab_Character_BP_C_BPAdjustDamage_Params params {};
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
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.IsCrabSubmerged
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ACrab_Character_BP_C::IsCrabSubmerged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.IsCrabSubmerged");
		
		ACrab_Character_BP_C_IsCrabSubmerged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.SlamIfDoubleClicking
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CurrentAttackIndex                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACrab_Character_BP_C::SlamIfDoubleClicking(int32_t CurrentAttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.SlamIfDoubleClicking");
		
		ACrab_Character_BP_C_SlamIfDoubleClicking_Params params {};
		params.CurrentAttackIndex = CurrentAttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.PlayGrabbedIdle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsMoving                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACrab_Character_BP_C::PlayGrabbedIdle(bool IsMoving)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.PlayGrabbedIdle");
		
		ACrab_Character_BP_C_PlayGrabbedIdle_Params params {};
		params.IsMoving = IsMoving;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.BPTimerServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACrab_Character_BP_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.BPTimerServer");
		
		ACrab_Character_BP_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.GrabFoundCharacter
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACrab_Character_BP_C::GrabFoundCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.GrabFoundCharacter");
		
		ACrab_Character_BP_C_GrabFoundCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.Is Better Grab Target
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      NewTarget                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     NewTargHitLoc                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ACrab_Character_BP_C::IsBetterGrabTarget(class AActor* NewTarget, const struct FVector& NewTargHitLoc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.Is Better Grab Target");
		
		ACrab_Character_BP_C_IsBetterGrabTarget_Params params {};
		params.NewTarget = NewTarget;
		params.NewTargHitLoc = NewTargHitLoc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.Find Proper Grab Target
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            TestChar                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalCharacter*                            TargetChar                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACrab_Character_BP_C::FindProperGrabTarget(class APrimalCharacter* TestChar, class APrimalCharacter** TargetChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.Find Proper Grab Target");
		
		ACrab_Character_BP_C_FindProperGrabTarget_Params params {};
		params.TestChar = TestChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TargetChar != nullptr)
			*TargetChar = params.TargetChar;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.Check Proper Can Carry
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            TestActor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CanCarry                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACrab_Character_BP_C::CheckProperCanCarry(class APrimalCharacter* TestActor, bool* CanCarry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.Check Proper Can Carry");
		
		ACrab_Character_BP_C_CheckProperCanCarry_Params params {};
		params.TestActor = TestActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanCarry != nullptr)
			*CanCarry = params.CanCarry;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.Throw Grabbed Characters
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACrab_Character_BP_C::ThrowGrabbedCharacters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.Throw Grabbed Characters");
		
		ACrab_Character_BP_C_ThrowGrabbedCharacters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.Retrieve Any Grabbable Character
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               FoundCharacter                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACrab_Character_BP_C::RetrieveAnyGrabbableCharacter(bool* FoundCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.Retrieve Any Grabbable Character");
		
		ACrab_Character_BP_C_RetrieveAnyGrabbableCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FoundCharacter != nullptr)
			*FoundCharacter = params.FoundCharacter;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.GetGrabClawLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FVector ACrab_Character_BP_C::GetGrabClawLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.GetGrabClawLocation");
		
		ACrab_Character_BP_C_GetGrabClawLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.BPNotifyClearRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderClearing                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACrab_Character_BP_C::BPNotifyClearRider(class AShooterCharacter* RiderClearing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.BPNotifyClearRider");
		
		ACrab_Character_BP_C_BPNotifyClearRider_Params params {};
		params.RiderClearing = RiderClearing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.BPCharacterSleeped
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACrab_Character_BP_C::BPCharacterSleeped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.BPCharacterSleeped");
		
		ACrab_Character_BP_C_BPCharacterSleeped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.BPTimerNonDedicated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACrab_Character_BP_C::BPTimerNonDedicated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.BPTimerNonDedicated");
		
		ACrab_Character_BP_C_BPTimerNonDedicated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.BPDoAttack
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACrab_Character_BP_C::BPDoAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.BPDoAttack");
		
		ACrab_Character_BP_C_BPDoAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.Server_StopThrow
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACrab_Character_BP_C::Server_StopThrow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.Server_StopThrow");
		
		ACrab_Character_BP_C_Server_StopThrow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.BlueprintCanRiderAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ACrab_Character_BP_C::BlueprintCanRiderAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.BlueprintCanRiderAttack");
		
		ACrab_Character_BP_C_BlueprintCanRiderAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.SharedCanAttack
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CanAttack                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACrab_Character_BP_C::SharedCanAttack(int32_t AttackIndex, bool* CanAttack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.SharedCanAttack");
		
		ACrab_Character_BP_C_SharedCanAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanAttack != nullptr)
			*CanAttack = params.CanAttack;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.BlueprintCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ACrab_Character_BP_C::BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.BlueprintCanAttack");
		
		ACrab_Character_BP_C_BlueprintCanAttack_Params params {};
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
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.GetLaunchDirection
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      CalcActor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector ACrab_Character_BP_C::GetLaunchDirection(class AActor* CalcActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.GetLaunchDirection");
		
		ACrab_Character_BP_C_GetLaunchDirection_Params params {};
		params.CalcActor = CalcActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.BPDidClearCarriedCharacter
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            PreviousCarriedCharacter                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACrab_Character_BP_C::BPDidClearCarriedCharacter(class APrimalCharacter* PreviousCarriedCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.BPDidClearCarriedCharacter");
		
		ACrab_Character_BP_C_BPDidClearCarriedCharacter_Params params {};
		params.PreviousCarriedCharacter = PreviousCarriedCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.BPDidSetCarriedCharacter
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            PreviousCarriedCharacter                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACrab_Character_BP_C::BPDidSetCarriedCharacter(class APrimalCharacter* PreviousCarriedCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.BPDidSetCarriedCharacter");
		
		ACrab_Character_BP_C_BPDidSetCarriedCharacter_Params params {};
		params.PreviousCarriedCharacter = PreviousCarriedCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACrab_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.UserConstructionScript");
		
		ACrab_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_166
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ACrab_Character_BP_C::InpActEvt_Crouch_K2Node_InputActionEvent_166()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_166");
		
		ACrab_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_166_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_165
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ACrab_Character_BP_C::InpActEvt_Crouch_K2Node_InputActionEvent_165()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_165");
		
		ACrab_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_165_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_164
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ACrab_Character_BP_C::InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_164()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_164");
		
		ACrab_Character_BP_C_InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_164_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_163
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ACrab_Character_BP_C::InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_163()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_163");
		
		ACrab_Character_BP_C_InpActEvt_CrouchProneToggle_K2Node_InputActionEvent_163_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.Request Tertiary Pressed
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsHolding                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ToggleAction                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACrab_Character_BP_C::RequestTertiaryPressed(bool IsHolding, bool ToggleAction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.Request Tertiary Pressed");
		
		ACrab_Character_BP_C_RequestTertiaryPressed_Params params {};
		params.IsHolding = IsHolding;
		params.ToggleAction = ToggleAction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.Request Jump Response
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isHoldingJump                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACrab_Character_BP_C::RequestJumpResponse(bool isHoldingJump)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.Request Jump Response");
		
		ACrab_Character_BP_C_RequestJumpResponse_Params params {};
		params.isHoldingJump = isHoldingJump;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.AnimNotify_StartGrabLeftTracing
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ACrab_Character_BP_C::AnimNotify_StartGrabLeftTracing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.AnimNotify_StartGrabLeftTracing");
		
		ACrab_Character_BP_C_AnimNotify_StartGrabLeftTracing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.AnimNotify_EndGrabTracing
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ACrab_Character_BP_C::AnimNotify_EndGrabTracing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.AnimNotify_EndGrabTracing");
		
		ACrab_Character_BP_C_AnimNotify_EndGrabTracing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.TraceGrab
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ACrab_Character_BP_C::TraceGrab()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.TraceGrab");
		
		ACrab_Character_BP_C_TraceGrab_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.AnimNotify_StartGrabRightTracing
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ACrab_Character_BP_C::AnimNotify_StartGrabRightTracing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.AnimNotify_StartGrabRightTracing");
		
		ACrab_Character_BP_C_AnimNotify_StartGrabRightTracing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.AnimNotify_ReleaseGrabbedCharacters
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ACrab_Character_BP_C::AnimNotify_ReleaseGrabbedCharacters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.AnimNotify_ReleaseGrabbedCharacters");
		
		ACrab_Character_BP_C_AnimNotify_ReleaseGrabbedCharacters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.Multi_SwimUp
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ACrab_Character_BP_C::Multi_SwimUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.Multi_SwimUp");
		
		ACrab_Character_BP_C_Multi_SwimUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.SwimUp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ACrab_Character_BP_C::SwimUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.SwimUp");
		
		ACrab_Character_BP_C_SwimUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.SwimJump
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ACrab_Character_BP_C::SwimJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.SwimJump");
		
		ACrab_Character_BP_C_SwimJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.AnimNotify_MidGrabTrace
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ACrab_Character_BP_C::AnimNotify_MidGrabTrace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.AnimNotify_MidGrabTrace");
		
		ACrab_Character_BP_C_AnimNotify_MidGrabTrace_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.AnimNotify_GroundPoundLeft
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ACrab_Character_BP_C::AnimNotify_GroundPoundLeft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.AnimNotify_GroundPoundLeft");
		
		ACrab_Character_BP_C_AnimNotify_GroundPoundLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.PlayTracedVFX
	 * 		Flags  -> (NetReliable, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticleSystem*                             ParticleSystem                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     StartLoc                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACrab_Character_BP_C::PlayTracedVFX(class UParticleSystem* ParticleSystem, const struct FVector& StartLoc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.PlayTracedVFX");
		
		ACrab_Character_BP_C_PlayTracedVFX_Params params {};
		params.ParticleSystem = ParticleSystem;
		params.StartLoc = StartLoc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.AnimNotify_GroundPoundRight
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ACrab_Character_BP_C::AnimNotify_GroundPoundRight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.AnimNotify_GroundPoundRight");
		
		ACrab_Character_BP_C_AnimNotify_GroundPoundRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.Server_DropCharacters
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ACrab_Character_BP_C::Server_DropCharacters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.Server_DropCharacters");
		
		ACrab_Character_BP_C_Server_DropCharacters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.Multi_SetPreventMovement
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewPreventMovement                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACrab_Character_BP_C::Multi_SetPreventMovement(bool NewPreventMovement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.Multi_SetPreventMovement");
		
		ACrab_Character_BP_C_Multi_SetPreventMovement_Params params {};
		params.NewPreventMovement = NewPreventMovement;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.DelayedClearThrowing
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ACrab_Character_BP_C::DelayedClearThrowing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.DelayedClearThrowing");
		
		ACrab_Character_BP_C_DelayedClearThrowing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.Server_TraceTargetDir
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     AimLoc                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AimHit                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               JumpInstant                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ThrowInstant                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACrab_Character_BP_C::Server_TraceTargetDir(const struct FVector& AimLoc, bool AimHit, bool JumpInstant, bool ThrowInstant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.Server_TraceTargetDir");
		
		ACrab_Character_BP_C_Server_TraceTargetDir_Params params {};
		params.AimLoc = AimLoc;
		params.AimHit = AimHit;
		params.JumpInstant = JumpInstant;
		params.ThrowInstant = ThrowInstant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.StartThrowIdle
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ACrab_Character_BP_C::StartThrowIdle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.StartThrowIdle");
		
		ACrab_Character_BP_C_StartThrowIdle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.ClearThrow
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ForceImmediateClear                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACrab_Character_BP_C::ClearThrow(bool ForceImmediateClear)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.ClearThrow");
		
		ACrab_Character_BP_C_ClearThrow_Params params {};
		params.ForceImmediateClear = ForceImmediateClear;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.Multi_TraceTargetDir
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     AimLoc                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AimHit                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACrab_Character_BP_C::Multi_TraceTargetDir(const struct FVector& AimLoc, bool AimHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.Multi_TraceTargetDir");
		
		ACrab_Character_BP_C_Multi_TraceTargetDir_Params params {};
		params.AimLoc = AimLoc;
		params.AimHit = AimHit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.BP_OnJumpPressed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACrab_Character_BP_C::BP_OnJumpPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.BP_OnJumpPressed");
		
		ACrab_Character_BP_C_BP_OnJumpPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.BP_OnJumpReleased
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACrab_Character_BP_C::BP_OnJumpReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.BP_OnJumpReleased");
		
		ACrab_Character_BP_C_BP_OnJumpReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.DelayedPress
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ACrab_Character_BP_C::DelayedPress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.DelayedPress");
		
		ACrab_Character_BP_C_DelayedPress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.UpdateAllJumpRotation
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ACrab_Character_BP_C::UpdateAllJumpRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.UpdateAllJumpRotation");
		
		ACrab_Character_BP_C_UpdateAllJumpRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.UpdateJumpRotation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ACrab_Character_BP_C::UpdateJumpRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.UpdateJumpRotation");
		
		ACrab_Character_BP_C_UpdateJumpRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.AnimNotify_CrabLand
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ACrab_Character_BP_C::AnimNotify_CrabLand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.AnimNotify_CrabLand");
		
		ACrab_Character_BP_C_AnimNotify_CrabLand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.ServerRequestRightAttack
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               buttonHeld                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACrab_Character_BP_C::ServerRequestRightAttack(bool buttonHeld)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.ServerRequestRightAttack");
		
		ACrab_Character_BP_C_ServerRequestRightAttack_Params params {};
		params.buttonHeld = buttonHeld;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.ServerRequestLeftAttack
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               buttonHeld                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACrab_Character_BP_C::ServerRequestLeftAttack(bool buttonHeld)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.ServerRequestLeftAttack");
		
		ACrab_Character_BP_C_ServerRequestLeftAttack_Params params {};
		params.buttonHeld = buttonHeld;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.DelayedRightAttack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ACrab_Character_BP_C::DelayedRightAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.DelayedRightAttack");
		
		ACrab_Character_BP_C_DelayedRightAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.DelayedLeftAttack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ACrab_Character_BP_C::DelayedLeftAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.DelayedLeftAttack");
		
		ACrab_Character_BP_C_DelayedLeftAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.Server_DropRight
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ACrab_Character_BP_C::Server_DropRight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.Server_DropRight");
		
		ACrab_Character_BP_C_Server_DropRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.Server_DropLeft
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ACrab_Character_BP_C::Server_DropLeft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.Server_DropLeft");
		
		ACrab_Character_BP_C_Server_DropLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.ServerRequestDoubleSmash
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ACrab_Character_BP_C::ServerRequestDoubleSmash()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.ServerRequestDoubleSmash");
		
		ACrab_Character_BP_C_ServerRequestDoubleSmash_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.DelayedThrowPress
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ACrab_Character_BP_C::DelayedThrowPress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.DelayedThrowPress");
		
		ACrab_Character_BP_C_DelayedThrowPress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.AIWaterJump
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ACrab_Character_BP_C::AIWaterJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.AIWaterJump");
		
		ACrab_Character_BP_C_AIWaterJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.Multi_HurtResponse
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               WasBullet                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACrab_Character_BP_C::Multi_HurtResponse(bool WasBullet, const struct FVector& Location, const struct FRotator& Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.Multi_HurtResponse");
		
		ACrab_Character_BP_C_Multi_HurtResponse_Params params {};
		params.WasBullet = WasBullet;
		params.Location = Location;
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.ClearTorporHit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ACrab_Character_BP_C::ClearTorporHit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.ClearTorporHit");
		
		ACrab_Character_BP_C_ClearTorporHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.TorporHit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ACrab_Character_BP_C::TorporHit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.TorporHit");
		
		ACrab_Character_BP_C_TorporHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.ServerArrestMovement
	 * 		Flags  -> (NetReliable, BlueprintCallable, BlueprintEvent)
	 */
	void ACrab_Character_BP_C::ServerArrestMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.ServerArrestMovement");
		
		ACrab_Character_BP_C_ServerArrestMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.ResetArrestMovement
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ACrab_Character_BP_C::ResetArrestMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.ResetArrestMovement");
		
		ACrab_Character_BP_C_ResetArrestMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Crab_Character_BP.Crab_Character_BP_C.ExecuteUbergraph_Crab_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACrab_Character_BP_C::ExecuteUbergraph_Crab_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Crab_Character_BP.Crab_Character_BP_C.ExecuteUbergraph_Crab_Character_BP");
		
		ACrab_Character_BP_C_ExecuteUbergraph_Crab_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACrab_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACrab_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Crab_Character_BP.Crab_Character_BP_C");
		return ptr;
	}

}


