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
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsUsingZipline
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::IsUsingZipline(bool* ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsUsingZipline");
		
		ADeinonychus_Character_BP_C_IsUsingZipline_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Is Playing Latched Jump Anim Public
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              TimeFromEndToConsiderFinished                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::IsPlayingLatchedJumpAnimPublic(float TimeFromEndToConsiderFinished, bool* ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Is Playing Latched Jump Anim Public");
		
		ADeinonychus_Character_BP_C_IsPlayingLatchedJumpAnimPublic_Params params {};
		params.TimeFromEndToConsiderFinished = TimeFromEndToConsiderFinished;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.CanUpdateRotation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool ADeinonychus_Character_BP_C::CanUpdateRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.CanUpdateRotation");
		
		ADeinonychus_Character_BP_C_CanUpdateRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.updateRotation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::updateRotation(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.updateRotation");
		
		ADeinonychus_Character_BP_C_updateRotation_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetUberpounceTraceStartingLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FVector ADeinonychus_Character_BP_C::GetUberpounceTraceStartingLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetUberpounceTraceStartingLocation");
		
		ADeinonychus_Character_BP_C_GetUberpounceTraceStartingLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UpdateErrorTolerance
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADeinonychus_Character_BP_C::UpdateErrorTolerance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UpdateErrorTolerance");
		
		ADeinonychus_Character_BP_C_UpdateErrorTolerance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsValidUberpounceTargetingData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FUberpounceData                             TargetingData                                              (Parm)
	 * 		bool                                               ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::IsValidUberpounceTargetingData(const struct FUberpounceData& TargetingData, bool* ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsValidUberpounceTargetingData");
		
		ADeinonychus_Character_BP_C_IsValidUberpounceTargetingData_Params params {};
		params.TargetingData = TargetingData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.MultiRequestJumpFn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Velocity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::MultiRequestJumpFn(const struct FVector& Velocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.MultiRequestJumpFn");
		
		ADeinonychus_Character_BP_C_MultiRequestJumpFn_Params params {};
		params.Velocity = Velocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.CanContinueUberpounce
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::CanContinueUberpounce(bool* ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.CanContinueUberpounce");
		
		ADeinonychus_Character_BP_C_CanContinueUberpounce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetDelayBeforeLatchAfterLatchedJump
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              LatchedJumpTimeToAutoLatch                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::GetDelayBeforeLatchAfterLatchedJump(float* LatchedJumpTimeToAutoLatch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetDelayBeforeLatchAfterLatchedJump");
		
		ADeinonychus_Character_BP_C_GetDelayBeforeLatchAfterLatchedJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LatchedJumpTimeToAutoLatch != nullptr)
			*LatchedJumpTimeToAutoLatch = params.LatchedJumpTimeToAutoLatch;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.JumpFromUberpounce
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              JumpStrength                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::JumpFromUberpounce(float JumpStrength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.JumpFromUberpounce");
		
		ADeinonychus_Character_BP_C_JumpFromUberpounce_Params params {};
		params.JumpStrength = JumpStrength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsPlayingLatchedJumpAnim
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              TimeFromEndToConsiderFinished                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::IsPlayingLatchedJumpAnim(float TimeFromEndToConsiderFinished, bool* ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsPlayingLatchedJumpAnim");
		
		ADeinonychus_Character_BP_C_IsPlayingLatchedJumpAnim_Params params {};
		params.TimeFromEndToConsiderFinished = TimeFromEndToConsiderFinished;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetTargetFOV
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	float ADeinonychus_Character_BP_C::GetTargetFOV()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetTargetFOV");
		
		ADeinonychus_Character_BP_C_GetTargetFOV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerEndUberpounceFn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Velocity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimMontage*                                MontageToPlayOnNonZeroVelocity                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::ServerEndUberpounceFn(const struct FVector& Velocity, class UAnimMontage* MontageToPlayOnNonZeroVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerEndUberpounceFn");
		
		ADeinonychus_Character_BP_C_ServerEndUberpounceFn_Params params {};
		params.Velocity = Velocity;
		params.MontageToPlayOnNonZeroVelocity = MontageToPlayOnNonZeroVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.TickSetRotation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::TickSetRotation(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.TickSetRotation");
		
		ADeinonychus_Character_BP_C_TickSetRotation_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UpdateRotationForUberpounce
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              PercentDistanceToTarget                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    TargetRotation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::UpdateRotationForUberpounce(float PercentDistanceToTarget, const struct FRotator& TargetRotation, bool* ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UpdateRotationForUberpounce");
		
		ADeinonychus_Character_BP_C_UpdateRotationForUberpounce_Params params {};
		params.PercentDistanceToTarget = PercentDistanceToTarget;
		params.TargetRotation = TargetRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetFallingLatchingAngles
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		TArray<float>                                      FallingLatchingAngles                                      (Parm, OutParm, ZeroConstructor)
	 */
	void ADeinonychus_Character_BP_C::GetFallingLatchingAngles(TArray<float>* FallingLatchingAngles)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetFallingLatchingAngles");
		
		ADeinonychus_Character_BP_C_GetFallingLatchingAngles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FallingLatchingAngles != nullptr)
			*FallingLatchingAngles = params.FallingLatchingAngles;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsValidUberpounceDataForLatching
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FUberpounceData                             Data                                                       (Parm)
	 * 		bool                                               ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::IsValidUberpounceDataForLatching(const struct FUberpounceData& Data, bool* ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsValidUberpounceDataForLatching");
		
		ADeinonychus_Character_BP_C_IsValidUberpounceDataForLatching_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsValidDirectionForLatchingSurfaceTrace
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ADeinonychus_Character_BP_C::IsValidDirectionForLatchingSurfaceTrace(const struct FVector& Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsValidDirectionForLatchingSurfaceTrace");
		
		ADeinonychus_Character_BP_C_IsValidDirectionForLatchingSurfaceTrace_Params params {};
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPRemovedAsPassenger
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::BPRemovedAsPassenger(class APrimalCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPRemovedAsPassenger");
		
		ADeinonychus_Character_BP_C_BPRemovedAsPassenger_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BP_OnEndCarried
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bFromDino                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bCancelAnyCarryBuffs                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::BP_OnEndCarried(bool bFromDino, bool bCancelAnyCarryBuffs)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BP_OnEndCarried");
		
		ADeinonychus_Character_BP_C_BP_OnEndCarried_Params params {};
		params.bFromDino = bFromDino;
		params.bCancelAnyCarryBuffs = bCancelAnyCarryBuffs;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPServerHandleNetExecCommand
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           FromPC                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        CommandName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (Parm, OutParm, ReferenceParm)
	 */
	bool ADeinonychus_Character_BP_C::BPServerHandleNetExecCommand(class APlayerController* FromPC, const class FName& CommandName, struct FBPNetExecParams* ExecParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPServerHandleNetExecCommand");
		
		ADeinonychus_Character_BP_C_BPServerHandleNetExecCommand_Params params {};
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
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.OnNonInstanceJumpOffWallInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              HoldTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::OnNonInstanceJumpOffWallInput(float HoldTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.OnNonInstanceJumpOffWallInput");
		
		ADeinonychus_Character_BP_C_OnNonInstanceJumpOffWallInput_Params params {};
		params.HoldTime = HoldTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetLatchJumpSpeedThresholdForRotate
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::GetLatchJumpSpeedThresholdForRotate(float* Res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetLatchJumpSpeedThresholdForRotate");
		
		ADeinonychus_Character_BP_C_GetLatchJumpSpeedThresholdForRotate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Res != nullptr)
			*Res = params.Res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.SpawnUberJumpFX
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FName>                                AttachPointNames                                           (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		class UParticleSystem*                             FXToSpawn                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::SpawnUberJumpFX(TArray<class FName>* AttachPointNames, class UParticleSystem* FXToSpawn, const struct FRotator& Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.SpawnUberJumpFX");
		
		ADeinonychus_Character_BP_C_SpawnUberJumpFX_Params params {};
		params.FXToSpawn = FXToSpawn;
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AttachPointNames != nullptr)
			*AttachPointNames = params.AttachPointNames;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Is Recently Unlatched
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Threshold                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::IsRecentlyUnlatched(float Threshold, bool* ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Is Recently Unlatched");
		
		ADeinonychus_Character_BP_C_IsRecentlyUnlatched_Params params {};
		params.Threshold = Threshold;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetCameraInterpSpeed
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              InterpSpeed                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::GetCameraInterpSpeed(float* InterpSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetCameraInterpSpeed");
		
		ADeinonychus_Character_BP_C_GetCameraInterpSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InterpSpeed != nullptr)
			*InterpSpeed = params.InterpSpeed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.OnJumpFromGround
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              HoldTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::OnJumpFromGround(float HoldTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.OnJumpFromGround");
		
		ADeinonychus_Character_BP_C_OnJumpFromGround_Params params {};
		params.HoldTime = HoldTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetUberpounceInterpSpeed
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Speed                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::GetUberpounceInterpSpeed(float* Speed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetUberpounceInterpSpeed");
		
		ADeinonychus_Character_BP_C_GetUberpounceInterpSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Speed != nullptr)
			*Speed = params.Speed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.CalcCurrentJump Hold Time
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::CalcCurrentJumpHoldTime(float* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.CalcCurrentJump Hold Time");
		
		ADeinonychus_Character_BP_C_CalcCurrentJumpHoldTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ClearOutOfRangeData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADeinonychus_Character_BP_C::ClearOutOfRangeData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ClearOutOfRangeData");
		
		ADeinonychus_Character_BP_C_ClearOutOfRangeData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetUberpounceRangeBase
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::GetUberpounceRangeBase(float* ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetUberpounceRangeBase");
		
		ADeinonychus_Character_BP_C_GetUberpounceRangeBase_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetUberpounceMaxRange
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::GetUberpounceMaxRange(float* ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetUberpounceMaxRange");
		
		ADeinonychus_Character_BP_C_GetUberpounceMaxRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UpdateTickThrottles
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADeinonychus_Character_BP_C::UpdateTickThrottles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UpdateTickThrottles");
		
		ADeinonychus_Character_BP_C_UpdateTickThrottles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPTimerNonDedicated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADeinonychus_Character_BP_C::BPTimerNonDedicated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPTimerNonDedicated");
		
		ADeinonychus_Character_BP_C_BPTimerNonDedicated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Throttled TickFn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADeinonychus_Character_BP_C::ThrottledTickFn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Throttled TickFn");
		
		ADeinonychus_Character_BP_C_ThrottledTickFn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPTimerServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADeinonychus_Character_BP_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPTimerServer");
		
		ADeinonychus_Character_BP_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.On Uberpounce AttachedToLocation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADeinonychus_Character_BP_C::OnUberpounceAttachedToLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.On Uberpounce AttachedToLocation");
		
		ADeinonychus_Character_BP_C_OnUberpounceAttachedToLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ScheduleChecking Falling Latch
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::ScheduleCheckingFallingLatch(float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ScheduleChecking Falling Latch");
		
		ADeinonychus_Character_BP_C_ScheduleCheckingFallingLatch_Params params {};
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.TryAddPinnedBuff
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::TryAddPinnedBuff(class APrimalCharacter* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.TryAddPinnedBuff");
		
		ADeinonychus_Character_BP_C_TryAddPinnedBuff_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ApplyJump
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Velocity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimMontage*                                Anim                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::ApplyJump(const struct FVector& Velocity, class UAnimMontage* Anim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ApplyJump");
		
		ADeinonychus_Character_BP_C_ApplyJump_Params params {};
		params.Velocity = Velocity;
		params.Anim = Anim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Get Pounce Latched Anim
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UAnimMontage*                                Anim                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        StartSectionName                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::GetPounceLatchedAnim(class UAnimMontage** Anim, class FName* StartSectionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Get Pounce Latched Anim");
		
		ADeinonychus_Character_BP_C_GetPounceLatchedAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Anim != nullptr)
			*Anim = params.Anim;
		if (StartSectionName != nullptr)
			*StartSectionName = params.StartSectionName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetInitialAnimationForUberpounce
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               QuickUberpounce                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimMontage*                                OutAnim                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        RetStartSectionName                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::GetInitialAnimationForUberpounce(bool QuickUberpounce, class UAnimMontage** OutAnim, class FName* RetStartSectionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetInitialAnimationForUberpounce");
		
		ADeinonychus_Character_BP_C_GetInitialAnimationForUberpounce_Params params {};
		params.QuickUberpounce = QuickUberpounce;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAnim != nullptr)
			*OutAnim = params.OutAnim;
		if (RetStartSectionName != nullptr)
			*RetStartSectionName = params.RetStartSectionName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Los
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalCharacter*                            Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::Los(const struct FVector& Start, const struct FVector& End, float Radius, class APrimalCharacter* Target, bool* ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Los");
		
		ADeinonychus_Character_BP_C_Los_Params params {};
		params.Start = Start;
		params.End = End;
		params.Radius = Radius;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.OnRep_UberpounceServerState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADeinonychus_Character_BP_C::OnRep_UberpounceServerState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.OnRep_UberpounceServerState");
		
		ADeinonychus_Character_BP_C_OnRep_UberpounceServerState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UberpounceSurface Normal Allows Sliding
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Allowed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Direction                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               EndUberpounce                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::UberpounceSurfaceNormalAllowsSliding(bool* Allowed, struct FVector* Direction, bool* EndUberpounce)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UberpounceSurface Normal Allows Sliding");
		
		ADeinonychus_Character_BP_C_UberpounceSurfaceNormalAllowsSliding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Allowed != nullptr)
			*Allowed = params.Allowed;
		if (Direction != nullptr)
			*Direction = params.Direction;
		if (EndUberpounce != nullptr)
			*EndUberpounce = params.EndUberpounce;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPDoAttack
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::BPDoAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPDoAttack");
		
		ADeinonychus_Character_BP_C_BPDoAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsGroundRotation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsCeiling                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::IsGroundRotation(const struct FRotator& Rotation, bool* Result, bool* IsCeiling)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsGroundRotation");
		
		ADeinonychus_Character_BP_C_IsGroundRotation_Params params {};
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		if (IsCeiling != nullptr)
			*IsCeiling = params.IsCeiling;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsPounceTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::IsPounceTarget(class APrimalCharacter* Target, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsPounceTarget");
		
		ADeinonychus_Character_BP_C_IsPounceTarget_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UberpounceCollisionCheck
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               RetHitSomething                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::UberpounceCollisionCheck(bool* RetHitSomething)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UberpounceCollisionCheck");
		
		ADeinonychus_Character_BP_C_UberpounceCollisionCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RetHitSomething != nullptr)
			*RetHitSomething = params.RetHitSomething;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.SpawnNestEgg
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADeinonychus_Character_BP_C::SpawnNestEgg()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.SpawnNestEgg");
		
		ADeinonychus_Character_BP_C_SpawnNestEgg_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetUberpounceLocationOffsetForSocket
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Offset                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::GetUberpounceLocationOffsetForSocket(const struct FRotator& Rotation, struct FVector* Offset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetUberpounceLocationOffsetForSocket");
		
		ADeinonychus_Character_BP_C_GetUberpounceLocationOffsetForSocket_Params params {};
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Offset != nullptr)
			*Offset = params.Offset;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.TerrainCheck
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               HitSomething                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::TerrainCheck(const struct FVector& Start, const struct FVector& End, float Radius, bool* HitSomething)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.TerrainCheck");
		
		ADeinonychus_Character_BP_C_TerrainCheck_Params params {};
		params.Start = Start;
		params.End = End;
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HitSomething != nullptr)
			*HitSomething = params.HitSomething;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsAnotherDeinonychusAttachedToSocket
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APrimalCharacter*                            Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        Socket                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::IsAnotherDeinonychusAttachedToSocket(class APrimalCharacter* Target, const class FName& Socket, bool* ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsAnotherDeinonychusAttachedToSocket");
		
		ADeinonychus_Character_BP_C_IsAnotherDeinonychusAttachedToSocket_Params params {};
		params.Target = Target;
		params.Socket = Socket;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.AllowPlayMontage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                AnimMontage                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ADeinonychus_Character_BP_C::AllowPlayMontage(class UAnimMontage* AnimMontage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.AllowPlayMontage");
		
		ADeinonychus_Character_BP_C_AllowPlayMontage_Params params {};
		params.AnimMontage = AnimMontage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.OnPounceTargetDodged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::OnPounceTargetDodged(class APrimalCharacter* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.OnPounceTargetDodged");
		
		ADeinonychus_Character_BP_C_OnPounceTargetDodged_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPModifyAimOffsetNoTarget
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    Aim                                                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	struct FRotator ADeinonychus_Character_BP_C::BPModifyAimOffsetNoTarget(struct FRotator* Aim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPModifyAimOffsetNoTarget");
		
		ADeinonychus_Character_BP_C_BPModifyAimOffsetNoTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Aim != nullptr)
			*Aim = params.Aim;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Get Uberpounce Position Offset Curves
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UCurveFloat*                                 RetZOffset                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UCurveFloat*                                 RetXYMult                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::GetUberpouncePositionOffsetCurves(class UCurveFloat** RetZOffset, class UCurveFloat** RetXYMult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Get Uberpounce Position Offset Curves");
		
		ADeinonychus_Character_BP_C_GetUberpouncePositionOffsetCurves_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RetZOffset != nullptr)
			*RetZOffset = params.RetZOffset;
		if (RetXYMult != nullptr)
			*RetXYMult = params.RetXYMult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Has Latchable SurfaceWhileFalling
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               RetSucccess                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FUberpounceData                             RetResultUberpounceData                                    (Parm, OutParm)
	 */
	void ADeinonychus_Character_BP_C::HasLatchableSurfaceWhileFalling(bool* RetSucccess, struct FUberpounceData* RetResultUberpounceData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Has Latchable SurfaceWhileFalling");
		
		ADeinonychus_Character_BP_C_HasLatchableSurfaceWhileFalling_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RetSucccess != nullptr)
			*RetSucccess = params.RetSucccess;
		if (RetResultUberpounceData != nullptr)
			*RetResultUberpounceData = params.RetResultUberpounceData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetInitialDamageOnUberpounceLatch
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APrimalCharacter*                            Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Damage                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::GetInitialDamageOnUberpounceLatch(class APrimalCharacter* Target, float* Damage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetInitialDamageOnUberpounceLatch");
		
		ADeinonychus_Character_BP_C_GetInitialDamageOnUberpounceLatch_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Damage != nullptr)
			*Damage = params.Damage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Get Uberpounce Stamina Cost Over Time
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              StaminaCost                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::GetUberpounceStaminaCostOverTime(float* StaminaCost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Get Uberpounce Stamina Cost Over Time");
		
		ADeinonychus_Character_BP_C_GetUberpounceStaminaCostOverTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StaminaCost != nullptr)
			*StaminaCost = params.StaminaCost;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.DeductStamina
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               SuccessfullyRemovedStamina                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::DeductStamina(float amount, bool* SuccessfullyRemovedStamina)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.DeductStamina");
		
		ADeinonychus_Character_BP_C_DeductStamina_Params params {};
		params.amount = amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SuccessfullyRemovedStamina != nullptr)
			*SuccessfullyRemovedStamina = params.SuccessfullyRemovedStamina;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.OnPinnedBuffEnded
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            BuffTarget                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::OnPinnedBuffEnded(class APrimalCharacter* BuffTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.OnPinnedBuffEnded");
		
		ADeinonychus_Character_BP_C_OnPinnedBuffEnded_Params params {};
		params.BuffTarget = BuffTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ComputeJumpVector
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::ComputeJumpVector(struct FVector* ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ComputeJumpVector");
		
		ADeinonychus_Character_BP_C_ComputeJumpVector_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.PushbackAfterPounceFn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADeinonychus_Character_BP_C::PushbackAfterPounceFn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.PushbackAfterPounceFn");
		
		ADeinonychus_Character_BP_C_PushbackAfterPounceFn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Latched Jump Launched
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADeinonychus_Character_BP_C::LatchedJumpLaunched()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Latched Jump Launched");
		
		ADeinonychus_Character_BP_C_LatchedJumpLaunched_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.LatchedJumpStart
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADeinonychus_Character_BP_C::LatchedJumpStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.LatchedJumpStart");
		
		ADeinonychus_Character_BP_C_LatchedJumpStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ResetMeshRelativeRotation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADeinonychus_Character_BP_C::ResetMeshRelativeRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ResetMeshRelativeRotation");
		
		ADeinonychus_Character_BP_C_ResetMeshRelativeRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.JumpPressedAndHeldFn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADeinonychus_Character_BP_C::JumpPressedAndHeldFn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.JumpPressedAndHeldFn");
		
		ADeinonychus_Character_BP_C_JumpPressedAndHeldFn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.CheckForFallingLatchFn
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               AutoJumpAfterLatch                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::CheckForFallingLatchFn(bool AutoJumpAfterLatch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.CheckForFallingLatchFn");
		
		ADeinonychus_Character_BP_C_CheckForFallingLatchFn_Params params {};
		params.AutoJumpAfterLatch = AutoJumpAfterLatch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.OnDeinonychusLatchedAttack
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADeinonychus_Character_BP_C::OnDeinonychusLatchedAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.OnDeinonychusLatchedAttack");
		
		ADeinonychus_Character_BP_C_OnDeinonychusLatchedAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.AllowSurfaceNormalForUberpounce
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     surfaceNormal                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::AllowSurfaceNormalForUberpounce(const struct FVector& surfaceNormal, bool* ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.AllowSurfaceNormalForUberpounce");
		
		ADeinonychus_Character_BP_C_AllowSurfaceNormalForUberpounce_Params params {};
		params.surfaceNormal = surfaceNormal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.TryAIBufferedUberpounce
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADeinonychus_Character_BP_C::TryAIBufferedUberpounce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.TryAIBufferedUberpounce");
		
		ADeinonychus_Character_BP_C_TryAIBufferedUberpounce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.SetQueuedUberpounceData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FUberpounceData                             Data                                                       (Parm)
	 */
	void ADeinonychus_Character_BP_C::SetQueuedUberpounceData(const struct FUberpounceData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.SetQueuedUberpounceData");
		
		ADeinonychus_Character_BP_C_SetQueuedUberpounceData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Get Uberpounce Transform Public
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FUberpounceData                             UberpounceData                                             (Parm)
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    Rotation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsGroundSurface                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::GetUberpounceTransformPublic(const struct FUberpounceData& UberpounceData, struct FVector* Location, struct FRotator* Rotation, bool* IsGroundSurface)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Get Uberpounce Transform Public");
		
		ADeinonychus_Character_BP_C_GetUberpounceTransformPublic_Params params {};
		params.UberpounceData = UberpounceData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
		if (Rotation != nullptr)
			*Rotation = params.Rotation;
		if (IsGroundSurface != nullptr)
			*IsGroundSurface = params.IsGroundSurface;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.OnUberpounceStateChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUberpounceState                                   NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EUberpounceState                                   PrevState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::OnUberpounceStateChanged(EUberpounceState NewState, EUberpounceState PrevState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.OnUberpounceStateChanged");
		
		ADeinonychus_Character_BP_C_OnUberpounceStateChanged_Params params {};
		params.NewState = NewState;
		params.PrevState = PrevState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.SetUberpounceState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUberpounceState                                   NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::SetUberpounceState(EUberpounceState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.SetUberpounceState");
		
		ADeinonychus_Character_BP_C_SetUberpounceState_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.LatchedJump
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              JumpStrength                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsLatchedAutoJump                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     WallHugDirection                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     DirectionOverride                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::LatchedJump(float JumpStrength, bool IsLatchedAutoJump, const struct FVector& WallHugDirection, const struct FVector& DirectionOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.LatchedJump");
		
		ADeinonychus_Character_BP_C_LatchedJump_Params params {};
		params.JumpStrength = JumpStrength;
		params.IsLatchedAutoJump = IsLatchedAutoJump;
		params.WallHugDirection = WallHugDirection;
		params.DirectionOverride = DirectionOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsNonAuthoritativeClient
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::IsNonAuthoritativeClient(bool* ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsNonAuthoritativeClient");
		
		ADeinonychus_Character_BP_C_IsNonAuthoritativeClient_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.SendClientMovementAdjustments
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADeinonychus_Character_BP_C::SendClientMovementAdjustments()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.SendClientMovementAdjustments");
		
		ADeinonychus_Character_BP_C_SendClientMovementAdjustments_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsDebugModeNonAuthoritativeClient
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::IsDebugModeNonAuthoritativeClient(bool* ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsDebugModeNonAuthoritativeClient");
		
		ADeinonychus_Character_BP_C_IsDebugModeNonAuthoritativeClient_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.StartUberpounceFromFalling
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FUberpounceData                             Data                                                       (Parm)
	 */
	void ADeinonychus_Character_BP_C::StartUberpounceFromFalling(const struct FUberpounceData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.StartUberpounceFromFalling");
		
		ADeinonychus_Character_BP_C_StartUberpounceFromFalling_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ClearQueuedData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADeinonychus_Character_BP_C::ClearQueuedData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ClearQueuedData");
		
		ADeinonychus_Character_BP_C_ClearQueuedData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.on Jump Input Released
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               QueryOnly                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               PounceOnly                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               QueryOnlyOnGroundTarget                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FUberpounceData                             UberpounceData                                             (Parm, OutParm)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalCharacter*                            RaptorPounceTarget                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::onJumpInputReleased(bool QueryOnly, bool PounceOnly, bool QueryOnlyOnGroundTarget, struct FUberpounceData* UberpounceData, bool* Result, class APrimalCharacter** RaptorPounceTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.on Jump Input Released");
		
		ADeinonychus_Character_BP_C_onJumpInputReleased_Params params {};
		params.QueryOnly = QueryOnly;
		params.PounceOnly = PounceOnly;
		params.QueryOnlyOnGroundTarget = QueryOnlyOnGroundTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UberpounceData != nullptr)
			*UberpounceData = params.UberpounceData;
		if (Result != nullptr)
			*Result = params.Result;
		if (RaptorPounceTarget != nullptr)
			*RaptorPounceTarget = params.RaptorPounceTarget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPHandleControllerInitiatedAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ADeinonychus_Character_BP_C::BPHandleControllerInitiatedAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPHandleControllerInitiatedAttack");
		
		ADeinonychus_Character_BP_C_BPHandleControllerInitiatedAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsValidGeoTypeForUberpounce
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         HitComponent                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               RetIsFoliage                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::IsValidGeoTypeForUberpounce(class AActor* Actor, class UPrimitiveComponent* HitComponent, bool* Result, bool* RetIsFoliage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsValidGeoTypeForUberpounce");
		
		ADeinonychus_Character_BP_C_IsValidGeoTypeForUberpounce_Params params {};
		params.Actor = Actor;
		params.HitComponent = HitComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		if (RetIsFoliage != nullptr)
			*RetIsFoliage = params.RetIsFoliage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPAdjustAttackIndex
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	int32_t ADeinonychus_Character_BP_C::BPAdjustAttackIndex(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPAdjustAttackIndex");
		
		ADeinonychus_Character_BP_C_BPAdjustAttackIndex_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.CanTryUberpounce
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::CanTryUberpounce(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.CanTryUberpounce");
		
		ADeinonychus_Character_BP_C_CanTryUberpounce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ResetMeshRelativeLocation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADeinonychus_Character_BP_C::ResetMeshRelativeLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ResetMeshRelativeLocation");
		
		ADeinonychus_Character_BP_C_ResetMeshRelativeLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.K2_OnMovementModeChanged
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EMovementMode                                      NewMovementMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      PrevCustomMode                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      NewCustomMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::K2_OnMovementModeChanged(EMovementMode PrevMovementMode, EMovementMode NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.K2_OnMovementModeChanged");
		
		ADeinonychus_Character_BP_C_K2_OnMovementModeChanged_Params params {};
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
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BP_OnJumpPressed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADeinonychus_Character_BP_C::BP_OnJumpPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BP_OnJumpPressed");
		
		ADeinonychus_Character_BP_C_BP_OnJumpPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UberpounceFanTrace
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<float>                                      FanAngles                                                  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		struct FVector                                     Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FUberpounceData                             ResultData                                                 (Parm, OutParm)
	 */
	void ADeinonychus_Character_BP_C::UberpounceFanTrace(TArray<float>* FanAngles, const struct FVector& Direction, const struct FVector& Start, const struct FRotator& Rotation, struct FUberpounceData* ResultData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UberpounceFanTrace");
		
		ADeinonychus_Character_BP_C_UberpounceFanTrace_Params params {};
		params.Direction = Direction;
		params.Start = Start;
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FanAngles != nullptr)
			*FanAngles = params.FanAngles;
		if (ResultData != nullptr)
			*ResultData = params.ResultData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.OnError
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Msg                                                        (Parm, ZeroConstructor)
	 */
	void ADeinonychus_Character_BP_C::OnError(const class FString& Msg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.OnError");
		
		ADeinonychus_Character_BP_C_OnError_Params params {};
		params.Msg = Msg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ComputeBufferedUberpounce
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FUberpounceData                             CurrentUberpounceData                                      (Parm)
	 * 		struct FVector                                     PreviousUberpounceStartLocation                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FUberpounceData                             ResultData                                                 (Parm, OutParm)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::ComputeBufferedUberpounce(const struct FUberpounceData& CurrentUberpounceData, const struct FVector& PreviousUberpounceStartLocation, struct FUberpounceData* ResultData, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ComputeBufferedUberpounce");
		
		ADeinonychus_Character_BP_C_ComputeBufferedUberpounce_Params params {};
		params.CurrentUberpounceData = CurrentUberpounceData;
		params.PreviousUberpounceStartLocation = PreviousUberpounceStartLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ResultData != nullptr)
			*ResultData = params.ResultData;
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPOnDinoCheat
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CheatName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bSetValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::BPOnDinoCheat(const class FName& CheatName, bool bSetValue, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPOnDinoCheat");
		
		ADeinonychus_Character_BP_C_BPOnDinoCheat_Params params {};
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
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsUberpounceDataNearlyEqual
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FUberpounceData                             L                                                          (Parm)
	 * 		struct FUberpounceData                             R                                                          (Parm)
	 * 		float                                              FloatErrorTolerance                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::IsUberpounceDataNearlyEqual(const struct FUberpounceData& L, const struct FUberpounceData& R, float FloatErrorTolerance, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsUberpounceDataNearlyEqual");
		
		ADeinonychus_Character_BP_C_IsUberpounceDataNearlyEqual_Params params {};
		params.L = L;
		params.R = R;
		params.FloatErrorTolerance = FloatErrorTolerance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.RidingTick
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::RidingTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.RidingTick");
		
		ADeinonychus_Character_BP_C_RidingTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPOverrideGetAttackAnimationIndex
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class UAnimMontage*>                        AnimationArray                                             (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	int32_t ADeinonychus_Character_BP_C::BPOverrideGetAttackAnimationIndex(int32_t AttackIndex, TArray<class UAnimMontage*>* AnimationArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPOverrideGetAttackAnimationIndex");
		
		ADeinonychus_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params params {};
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
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.CanJumpInternal
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ADeinonychus_Character_BP_C::CanJumpInternal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.CanJumpInternal");
		
		ADeinonychus_Character_BP_C_CanJumpInternal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BP_OnJumpReleased
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADeinonychus_Character_BP_C::BP_OnJumpReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BP_OnJumpReleased");
		
		ADeinonychus_Character_BP_C_BP_OnJumpReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.OnLanded
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (Parm, OutParm, ReferenceParm)
	 */
	void ADeinonychus_Character_BP_C::OnLanded(struct FHitResult* Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.OnLanded");
		
		ADeinonychus_Character_BP_C_OnLanded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Hit != nullptr)
			*Hit = params.Hit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C. Uberpounce Trace
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              InClosestTargetDistance                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               TraceForLocations                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     DeinonychusLocation                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    DeinonychusRotation                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               DebugMode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<float>                                      TraceRadii                                                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		bool                                               CheckDinoDotProduct                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     DotProductCompareVector                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DotProductThreshold                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     DotProductLocation                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               TraceForCharacters                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FUberpounceData                             Result                                                     (Parm, OutParm)
	 * 		bool                                               RetFoundTarget                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               RetTargetOutOfRange                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              RetClosestTargetDistance                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            RetFoundIndex                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::UberpounceTrace(const struct FVector& Start, const struct FVector& End, float InClosestTargetDistance, bool TraceForLocations, const struct FVector& DeinonychusLocation, const struct FRotator& DeinonychusRotation, bool DebugMode, TArray<float>* TraceRadii, bool CheckDinoDotProduct, const struct FVector& DotProductCompareVector, float DotProductThreshold, const struct FVector& DotProductLocation, bool TraceForCharacters, struct FUberpounceData* Result, bool* RetFoundTarget, bool* RetTargetOutOfRange, float* RetClosestTargetDistance, int32_t* RetFoundIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C. Uberpounce Trace");
		
		ADeinonychus_Character_BP_C_UberpounceTrace_Params params {};
		params.Start = Start;
		params.End = End;
		params.InClosestTargetDistance = InClosestTargetDistance;
		params.TraceForLocations = TraceForLocations;
		params.DeinonychusLocation = DeinonychusLocation;
		params.DeinonychusRotation = DeinonychusRotation;
		params.DebugMode = DebugMode;
		params.CheckDinoDotProduct = CheckDinoDotProduct;
		params.DotProductCompareVector = DotProductCompareVector;
		params.DotProductThreshold = DotProductThreshold;
		params.DotProductLocation = DotProductLocation;
		params.TraceForCharacters = TraceForCharacters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TraceRadii != nullptr)
			*TraceRadii = params.TraceRadii;
		if (Result != nullptr)
			*Result = params.Result;
		if (RetFoundTarget != nullptr)
			*RetFoundTarget = params.RetFoundTarget;
		if (RetTargetOutOfRange != nullptr)
			*RetTargetOutOfRange = params.RetTargetOutOfRange;
		if (RetClosestTargetDistance != nullptr)
			*RetClosestTargetDistance = params.RetClosestTargetDistance;
		if (RetFoundIndex != nullptr)
			*RetFoundIndex = params.RetFoundIndex;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BlueprintDrawFloatingHUD
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterHUD*                                 HUD                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterX                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterY                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DrawScale                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::BlueprintDrawFloatingHUD(class AShooterHUD* HUD, float CenterX, float CenterY, float DrawScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BlueprintDrawFloatingHUD");
		
		ADeinonychus_Character_BP_C_BlueprintDrawFloatingHUD_Params params {};
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
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetCurrentSocketLevel
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APrimalCharacter*                            forCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            OutLevel                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::GetCurrentSocketLevel(class APrimalCharacter* forCharacter, int32_t* OutLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetCurrentSocketLevel");
		
		ADeinonychus_Character_BP_C_GetCurrentSocketLevel_Params params {};
		params.forCharacter = forCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLevel != nullptr)
			*OutLevel = params.OutLevel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Get Socket Level
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      SocketName                                                 (Parm, ZeroConstructor)
	 * 		int32_t                                            OutLevel                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::GetSocketLevel(const class FString& SocketName, int32_t* OutLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Get Socket Level");
		
		ADeinonychus_Character_BP_C_GetSocketLevel_Params params {};
		params.SocketName = SocketName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLevel != nullptr)
			*OutLevel = params.OutLevel;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.EnableTurnToFaceRotation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ADeinonychus_Character_BP_C::EnableTurnToFaceRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.EnableTurnToFaceRotation");
		
		ADeinonychus_Character_BP_C_EnableTurnToFaceRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.FindScreenEdgeLocation
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     WorldLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              EdgeMarginPct                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector2D                                   ScreenPosition                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::FindScreenEdgeLocation(const struct FVector& WorldLocation, float EdgeMarginPct, struct FVector2D* ScreenPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.FindScreenEdgeLocation");
		
		ADeinonychus_Character_BP_C_FindScreenEdgeLocation_Params params {};
		params.WorldLocation = WorldLocation;
		params.EdgeMarginPct = EdgeMarginPct;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ScreenPosition != nullptr)
			*ScreenPosition = params.ScreenPosition;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetBleed HUDData for Character
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APrimalCharacter*                            Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector2D                                   WorldLocToScreenLoc                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector2D                                   ScreenLoc                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ProgressBar                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      RetBuffCountString                                         (Parm, OutParm, ZeroConstructor)
	 * 		class FString                                      DinoName                                                   (Parm, OutParm, ZeroConstructor)
	 * 		float                                              Scale                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                TextColor                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::GetBleedHUDDataforCharacter(class APrimalCharacter* Character, int32_t index, struct FVector2D* WorldLocToScreenLoc, struct FVector2D* ScreenLoc, float* ProgressBar, class FString* RetBuffCountString, class FString* DinoName, float* Scale, struct FLinearColor* TextColor, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetBleed HUDData for Character");
		
		ADeinonychus_Character_BP_C_GetBleedHUDDataforCharacter_Params params {};
		params.Character = Character;
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WorldLocToScreenLoc != nullptr)
			*WorldLocToScreenLoc = params.WorldLocToScreenLoc;
		if (ScreenLoc != nullptr)
			*ScreenLoc = params.ScreenLoc;
		if (ProgressBar != nullptr)
			*ProgressBar = params.ProgressBar;
		if (RetBuffCountString != nullptr)
			*RetBuffCountString = params.RetBuffCountString;
		if (DinoName != nullptr)
			*DinoName = params.DinoName;
		if (Scale != nullptr)
			*Scale = params.Scale;
		if (TextColor != nullptr)
			*TextColor = params.TextColor;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPDrawToRiderHUD
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterHUD*                                 HUD                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::BPDrawToRiderHUD(class AShooterHUD* HUD)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPDrawToRiderHUD");
		
		ADeinonychus_Character_BP_C_BPDrawToRiderHUD_Params params {};
		params.HUD = HUD;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.RemoveBleed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Instigator                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::RemoveBleed(class APrimalCharacter* Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.RemoveBleed");
		
		ADeinonychus_Character_BP_C_RemoveBleed_Params params {};
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.AddBleed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Instigator                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::AddBleed(class APrimalCharacter* Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.AddBleed");
		
		ADeinonychus_Character_BP_C_AddBleed_Params params {};
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetDebugString
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      Output                                                     (Parm, OutParm, ZeroConstructor)
	 */
	void ADeinonychus_Character_BP_C::GetDebugString(class FString* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetDebugString");
		
		ADeinonychus_Character_BP_C_GetDebugString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Get RotationAndLocation for UberpounceOnSurface
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     surfaceNormal                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         HitComponent                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     DeinonychusLocation                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    retRotation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     retLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::GetRotationAndLocationforUberpounceOnSurface(const struct FVector& Location, const struct FVector& surfaceNormal, class UPrimitiveComponent* HitComponent, const struct FVector& DeinonychusLocation, struct FRotator* retRotation, struct FVector* retLocation, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Get RotationAndLocation for UberpounceOnSurface");
		
		ADeinonychus_Character_BP_C_GetRotationAndLocationforUberpounceOnSurface_Params params {};
		params.Location = Location;
		params.surfaceNormal = surfaceNormal;
		params.HitComponent = HitComponent;
		params.DeinonychusLocation = DeinonychusLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (retRotation != nullptr)
			*retRotation = params.retRotation;
		if (retLocation != nullptr)
			*retLocation = params.retLocation;
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsValidGeoLocationForUberpounce
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     surfaceNormal                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     DeinonychusLocation                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    DeinonychusRotation                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         HitComponent                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsGround                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsFoliage                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::IsValidGeoLocationForUberpounce(const struct FVector& Location, const struct FVector& surfaceNormal, class AActor* Actor, const struct FVector& DeinonychusLocation, const struct FRotator& DeinonychusRotation, class UPrimitiveComponent* HitComponent, bool* Result, bool* IsGround, bool* IsFoliage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsValidGeoLocationForUberpounce");
		
		ADeinonychus_Character_BP_C_IsValidGeoLocationForUberpounce_Params params {};
		params.Location = Location;
		params.surfaceNormal = surfaceNormal;
		params.Actor = Actor;
		params.DeinonychusLocation = DeinonychusLocation;
		params.DeinonychusRotation = DeinonychusRotation;
		params.HitComponent = HitComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		if (IsGround != nullptr)
			*IsGround = params.IsGround;
		if (IsFoliage != nullptr)
			*IsFoliage = params.IsFoliage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BP_InterceptTurnInput
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ADeinonychus_Character_BP_C::BP_InterceptTurnInput(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BP_InterceptTurnInput");
		
		ADeinonychus_Character_BP_C_BP_InterceptTurnInput_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsUberpounceActive
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Active                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::IsUberpounceActive(bool* Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.IsUberpounceActive");
		
		ADeinonychus_Character_BP_C_IsUberpounceActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Active != nullptr)
			*Active = params.Active;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPOverrideCameraViewTarget
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
	void ADeinonychus_Character_BP_C::BPOverrideCameraViewTarget(const class FName& CurrentCameraMode, const struct FVector& DesiredCameraLocation, const struct FRotator& DesiredCameraRotation, float DesiredFOV, bool* bOverrideCameraLocation, struct FVector* CameraLocation, bool* bOverrideCameraRotation, struct FRotator* CameraRotation, bool* bOverrideCameraFOV, float* CameraFOV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPOverrideCameraViewTarget");
		
		ADeinonychus_Character_BP_C_BPOverrideCameraViewTarget_Params params {};
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
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetUberpounceTransform
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FUberpounceData                             UberpounceData                                             (Parm)
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    Rotation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsGroundSurface                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::GetUberpounceTransform(const struct FUberpounceData& UberpounceData, struct FVector* Location, struct FRotator* Rotation, bool* IsGroundSurface)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetUberpounceTransform");
		
		ADeinonychus_Character_BP_C_GetUberpounceTransform_Params params {};
		params.UberpounceData = UberpounceData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
		if (Rotation != nullptr)
			*Rotation = params.Rotation;
		if (IsGroundSurface != nullptr)
			*IsGroundSurface = params.IsGroundSurface;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UpdateAttachedUberpounceFn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADeinonychus_Character_BP_C::UpdateAttachedUberpounceFn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UpdateAttachedUberpounceFn");
		
		ADeinonychus_Character_BP_C_UpdateAttachedUberpounceFn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.SetUberpounceCollision
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               UberpounceActive                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::SetUberpounceCollision(bool UberpounceActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.SetUberpounceCollision");
		
		ADeinonychus_Character_BP_C_SetUberpounceCollision_Params params {};
		params.UberpounceActive = UberpounceActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.DebugDrawRotator
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    Rotator                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DrawScale                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Thinkness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::DebugDrawRotator(const struct FRotator& Rotator, float DrawScale, const struct FVector& Location, float Duration, float Thinkness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.DebugDrawRotator");
		
		ADeinonychus_Character_BP_C_DebugDrawRotator_Params params {};
		params.Rotator = Rotator;
		params.DrawScale = DrawScale;
		params.Location = Location;
		params.Duration = Duration;
		params.Thinkness = Thinkness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetUberpounceRotationFromSocket
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APrimalCharacter*                            Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        Socket                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    Rotation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::GetUberpounceRotationFromSocket(class APrimalCharacter* Target, const class FName& Socket, struct FRotator* Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.GetUberpounceRotationFromSocket");
		
		ADeinonychus_Character_BP_C_GetUberpounceRotationFromSocket_Params params {};
		params.Target = Target;
		params.Socket = Socket;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Rotation != nullptr)
			*Rotation = params.Rotation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.StopUberpounceTargeting
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADeinonychus_Character_BP_C::StopUberpounceTargeting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.StopUberpounceTargeting");
		
		ADeinonychus_Character_BP_C_StopUberpounceTargeting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPNotifyClearRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderClearing                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::BPNotifyClearRider(class AShooterCharacter* RiderClearing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPNotifyClearRider");
		
		ADeinonychus_Character_BP_C_BPNotifyClearRider_Params params {};
		params.RiderClearing = RiderClearing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPGetHUDElements
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FHUDElement>                         OutElements                                                (Parm, OutParm, ZeroConstructor)
	 */
	void ADeinonychus_Character_BP_C::BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPGetHUDElements");
		
		ADeinonychus_Character_BP_C_BPGetHUDElements_Params params {};
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
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.EndUberpounce
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Velocity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimMontage*                                MontageToPlayOnNonZeroVelocity                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::EndUberpounce(const struct FVector& Velocity, class UAnimMontage* MontageToPlayOnNonZeroVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.EndUberpounce");
		
		ADeinonychus_Character_BP_C_EndUberpounce_Params params {};
		params.Velocity = Velocity;
		params.MontageToPlayOnNonZeroVelocity = MontageToPlayOnNonZeroVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BP_InterceptMoveForward
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ADeinonychus_Character_BP_C::BP_InterceptMoveForward(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BP_InterceptMoveForward");
		
		ADeinonychus_Character_BP_C_BP_InterceptMoveForward_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BP_InterceptMoveRight
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ADeinonychus_Character_BP_C::BP_InterceptMoveRight(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BP_InterceptMoveRight");
		
		ADeinonychus_Character_BP_C_BP_InterceptMoveRight_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UpdateUberpounceFn
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADeinonychus_Character_BP_C::UpdateUberpounceFn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UpdateUberpounceFn");
		
		ADeinonychus_Character_BP_C_UpdateUberpounceFn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.StartUberPounce
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FUberpounceData                             Data                                                       (Parm)
	 */
	void ADeinonychus_Character_BP_C::StartUberPounce(const struct FUberpounceData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.StartUberPounce");
		
		ADeinonychus_Character_BP_C_StartUberPounce_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Find BestUberpounce Socket on Character
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     StartTrace                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     EndTrace                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CurrentClosestSocketDistance                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     ImpactLocation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              NewClosestSocketDistance                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        RetTargetSocket                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UMeshComponent*                              RetTargetMesh                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               RetFoundSocket                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    RetTargetRotation                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::FindBestUberpounceSocketonCharacter(class APrimalCharacter* Character, const struct FVector& StartTrace, const struct FVector& EndTrace, float CurrentClosestSocketDistance, const struct FVector& ImpactLocation, float* NewClosestSocketDistance, class FName* RetTargetSocket, class UMeshComponent** RetTargetMesh, bool* RetFoundSocket, struct FRotator* RetTargetRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Find BestUberpounce Socket on Character");
		
		ADeinonychus_Character_BP_C_FindBestUberpounceSocketonCharacter_Params params {};
		params.Character = Character;
		params.StartTrace = StartTrace;
		params.EndTrace = EndTrace;
		params.CurrentClosestSocketDistance = CurrentClosestSocketDistance;
		params.ImpactLocation = ImpactLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewClosestSocketDistance != nullptr)
			*NewClosestSocketDistance = params.NewClosestSocketDistance;
		if (RetTargetSocket != nullptr)
			*RetTargetSocket = params.RetTargetSocket;
		if (RetTargetMesh != nullptr)
			*RetTargetMesh = params.RetTargetMesh;
		if (RetFoundSocket != nullptr)
			*RetFoundSocket = params.RetFoundSocket;
		if (RetTargetRotation != nullptr)
			*RetTargetRotation = params.RetTargetRotation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UpdateUberPounceTargetingFn
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADeinonychus_Character_BP_C::UpdateUberPounceTargetingFn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UpdateUberPounceTargetingFn");
		
		ADeinonychus_Character_BP_C_UpdateUberPounceTargetingFn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPNotifySetRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderSetting                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::BPNotifySetRider(class AShooterCharacter* RiderSetting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPNotifySetRider");
		
		ADeinonychus_Character_BP_C_BPNotifySetRider_Params params {};
		params.RiderSetting = RiderSetting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.TryStartUberPounceTargeting
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADeinonychus_Character_BP_C::TryStartUberPounceTargeting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.TryStartUberPounceTargeting");
		
		ADeinonychus_Character_BP_C_TryStartUberPounceTargeting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BlueprintCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ADeinonychus_Character_BP_C::BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BlueprintCanAttack");
		
		ADeinonychus_Character_BP_C_BlueprintCanAttack_Params params {};
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
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BlueprintCanRiderAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ADeinonychus_Character_BP_C::BlueprintCanRiderAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BlueprintCanRiderAttack");
		
		ADeinonychus_Character_BP_C_BlueprintCanRiderAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimNotify*                                 AnimNotifyObject                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::BlueprintAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BlueprintAnimNotifyCustomEvent");
		
		ADeinonychus_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params {};
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
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADeinonychus_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UserConstructionScript");
		
		ADeinonychus_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_249
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ADeinonychus_Character_BP_C::InpActEvt_Crouch_K2Node_InputActionEvent_249()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_249");
		
		ADeinonychus_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_249_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_248
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ADeinonychus_Character_BP_C::InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_248()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_248");
		
		ADeinonychus_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_248_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UpdateUberPounceTargeting
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADeinonychus_Character_BP_C::UpdateUberPounceTargeting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UpdateUberPounceTargeting");
		
		ADeinonychus_Character_BP_C_UpdateUberPounceTargeting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UpdateUberpounce
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADeinonychus_Character_BP_C::UpdateUberpounce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UpdateUberpounce");
		
		ADeinonychus_Character_BP_C_UpdateUberpounce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerEndUberpounce
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Velocity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimMontage*                                MontageToPlayOnNonZeroVelocity                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::ServerEndUberpounce(const struct FVector& Velocity, class UAnimMontage* MontageToPlayOnNonZeroVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerEndUberpounce");
		
		ADeinonychus_Character_BP_C_ServerEndUberpounce_Params params {};
		params.Velocity = Velocity;
		params.MontageToPlayOnNonZeroVelocity = MontageToPlayOnNonZeroVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UpdateAttachedUberpounce
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADeinonychus_Character_BP_C::UpdateAttachedUberpounce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UpdateAttachedUberpounce");
		
		ADeinonychus_Character_BP_C_UpdateAttachedUberpounce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerRequestUberpounce
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FUberpounceData                             QueuedUberpounceData                                       (Parm)
	 * 		bool                                               QuickUberpounce                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::ServerRequestUberpounce(const struct FUberpounceData& QueuedUberpounceData, bool QuickUberpounce)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerRequestUberpounce");
		
		ADeinonychus_Character_BP_C_ServerRequestUberpounce_Params params {};
		params.QueuedUberpounceData = QueuedUberpounceData;
		params.QuickUberpounce = QuickUberpounce;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.MultiEndUberpounce
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Velocity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimMontage*                                MontageToPlayOnNonZeroVelocity                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::MultiEndUberpounce(const struct FVector& Velocity, class UAnimMontage* MontageToPlayOnNonZeroVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.MultiEndUberpounce");
		
		ADeinonychus_Character_BP_C_MultiEndUberpounce_Params params {};
		params.Velocity = Velocity;
		params.MontageToPlayOnNonZeroVelocity = MontageToPlayOnNonZeroVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.JumpPressedAndHeld
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADeinonychus_Character_BP_C::JumpPressedAndHeld()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.JumpPressedAndHeld");
		
		ADeinonychus_Character_BP_C_JumpPressedAndHeld_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerRequestPounce
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::ServerRequestPounce(class APrimalCharacter* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerRequestPounce");
		
		ADeinonychus_Character_BP_C_ServerRequestPounce_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ClearPounceEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADeinonychus_Character_BP_C::ClearPounceEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ClearPounceEvent");
		
		ADeinonychus_Character_BP_C_ClearPounceEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerRequestJump
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Velocity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::ServerRequestJump(const struct FVector& Velocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerRequestJump");
		
		ADeinonychus_Character_BP_C_ServerRequestJump_Params params {};
		params.Velocity = Velocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.MultiRequestJump
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Velocity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::MultiRequestJump(const struct FVector& Velocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.MultiRequestJump");
		
		ADeinonychus_Character_BP_C_MultiRequestJump_Params params {};
		params.Velocity = Velocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.MultiSetLocation
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::MultiSetLocation(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.MultiSetLocation");
		
		ADeinonychus_Character_BP_C_MultiSetLocation_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.MultiUpdateCurrentDataLocation
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EUberpounceState                                   VerifiedState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::MultiUpdateCurrentDataLocation(const struct FVector& Location, EUberpounceState VerifiedState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.MultiUpdateCurrentDataLocation");
		
		ADeinonychus_Character_BP_C_MultiUpdateCurrentDataLocation_Params params {};
		params.Location = Location;
		params.VerifiedState = VerifiedState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerStartUberpounceFromFalling
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FUberpounceData                             Data                                                       (Parm)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::ServerStartUberpounceFromFalling(const struct FUberpounceData& Data, const struct FVector& Location, const struct FRotator& Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerStartUberpounceFromFalling");
		
		ADeinonychus_Character_BP_C_ServerStartUberpounceFromFalling_Params params {};
		params.Data = Data;
		params.Location = Location;
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.MultiStartUberpounceFromFalling
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FUberpounceData                             Data                                                       (Parm)
	 */
	void ADeinonychus_Character_BP_C::MultiStartUberpounceFromFalling(const struct FUberpounceData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.MultiStartUberpounceFromFalling");
		
		ADeinonychus_Character_BP_C_MultiStartUberpounceFromFalling_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.QueuedUberpounce
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ADeinonychus_Character_BP_C::QueuedUberpounce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.QueuedUberpounce");
		
		ADeinonychus_Character_BP_C_QueuedUberpounce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADeinonychus_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ReceiveBeginPlay");
		
		ADeinonychus_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.StartCheckingForFallingLatch
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADeinonychus_Character_BP_C::StartCheckingForFallingLatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.StartCheckingForFallingLatch");
		
		ADeinonychus_Character_BP_C_StartCheckingForFallingLatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerRequestLatchedAutoJump
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Velocity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::ServerRequestLatchedAutoJump(const struct FVector& Velocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerRequestLatchedAutoJump");
		
		ADeinonychus_Character_BP_C_ServerRequestLatchedAutoJump_Params params {};
		params.Velocity = Velocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.CheckForFallingLatch
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADeinonychus_Character_BP_C::CheckForFallingLatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.CheckForFallingLatch");
		
		ADeinonychus_Character_BP_C_CheckForFallingLatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerRequestLatchedJump
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Velocity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::ServerRequestLatchedJump(const struct FVector& Velocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerRequestLatchedJump");
		
		ADeinonychus_Character_BP_C_ServerRequestLatchedJump_Params params {};
		params.Velocity = Velocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.MultiOnPounceStarted
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ADeinonychus_Character_BP_C::MultiOnPounceStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.MultiOnPounceStarted");
		
		ADeinonychus_Character_BP_C_MultiOnPounceStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerEndPouncing
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ADeinonychus_Character_BP_C::ServerEndPouncing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerEndPouncing");
		
		ADeinonychus_Character_BP_C_ServerEndPouncing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.MULTI_ApplyAtCliffTopVelocity
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ADeinonychus_Character_BP_C::MULTI_ApplyAtCliffTopVelocity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.MULTI_ApplyAtCliffTopVelocity");
		
		ADeinonychus_Character_BP_C_MULTI_ApplyAtCliffTopVelocity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.MULTI_TargetDodgedUberPounce
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     NewTargetLocation                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    NewTargetRotation                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalCharacter*                            OldTarget                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::MULTI_TargetDodgedUberPounce(const struct FVector& NewTargetLocation, const struct FRotator& NewTargetRotation, class APrimalCharacter* OldTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.MULTI_TargetDodgedUberPounce");
		
		ADeinonychus_Character_BP_C_MULTI_TargetDodgedUberPounce_Params params {};
		params.NewTargetLocation = NewTargetLocation;
		params.NewTargetRotation = NewTargetRotation;
		params.OldTarget = OldTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPUnstasis
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADeinonychus_Character_BP_C::BPUnstasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.BPUnstasis");
		
		ADeinonychus_Character_BP_C_BPUnstasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.MULTI_SetLocation
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::MULTI_SetLocation(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.MULTI_SetLocation");
		
		ADeinonychus_Character_BP_C_MULTI_SetLocation_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UberpounceDesyncDetected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADeinonychus_Character_BP_C::UberpounceDesyncDetected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.UberpounceDesyncDetected");
		
		ADeinonychus_Character_BP_C_UberpounceDesyncDetected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerSetLocDuringLatchedJump
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Loc                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::ServerSetLocDuringLatchedJump(const struct FVector& Loc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerSetLocDuringLatchedJump");
		
		ADeinonychus_Character_BP_C_ServerSetLocDuringLatchedJump_Params params {};
		params.Loc = Loc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Client_CallServerMulticast_JumpFX
	 * 		Flags  -> (Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticleSystem*                             FXToSpawn                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class FName>                                AttachPointNames                                           (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void ADeinonychus_Character_BP_C::Client_CallServerMulticast_JumpFX(class UParticleSystem* FXToSpawn, TArray<class FName>* AttachPointNames)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Client_CallServerMulticast_JumpFX");
		
		ADeinonychus_Character_BP_C_Client_CallServerMulticast_JumpFX_Params params {};
		params.FXToSpawn = FXToSpawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AttachPointNames != nullptr)
			*AttachPointNames = params.AttachPointNames;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Multicast_JumpFX
	 * 		Flags  -> (Net, NetReliable, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticleSystem*                             FXToSpawn                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class FName>                                AttachPointNames                                           (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void ADeinonychus_Character_BP_C::Multicast_JumpFX(class UParticleSystem* FXToSpawn, TArray<class FName>* AttachPointNames)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.Multicast_JumpFX");
		
		ADeinonychus_Character_BP_C_Multicast_JumpFX_Params params {};
		params.FXToSpawn = FXToSpawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AttachPointNames != nullptr)
			*AttachPointNames = params.AttachPointNames;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.SpawnLocalClinetSuperJumpFX
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADeinonychus_Character_BP_C::SpawnLocalClinetSuperJumpFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.SpawnLocalClinetSuperJumpFX");
		
		ADeinonychus_Character_BP_C_SpawnLocalClinetSuperJumpFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerSlideInputPressed
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ADeinonychus_Character_BP_C::ServerSlideInputPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerSlideInputPressed");
		
		ADeinonychus_Character_BP_C_ServerSlideInputPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerSlideInputReleased
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ADeinonychus_Character_BP_C::ServerSlideInputReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerSlideInputReleased");
		
		ADeinonychus_Character_BP_C_ServerSlideInputReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.TimeOutUberpounceRequest
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADeinonychus_Character_BP_C::TimeOutUberpounceRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.TimeOutUberpounceRequest");
		
		ADeinonychus_Character_BP_C_TimeOutUberpounceRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerUpdateTransformDuringLatchedJump
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     L                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    R                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::ServerUpdateTransformDuringLatchedJump(const struct FVector& L, const struct FRotator& R)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ServerUpdateTransformDuringLatchedJump");
		
		ADeinonychus_Character_BP_C_ServerUpdateTransformDuringLatchedJump_Params params {};
		params.L = L;
		params.R = R;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ExecuteUbergraph_Deinonychus_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADeinonychus_Character_BP_C::ExecuteUbergraph_Deinonychus_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.ExecuteUbergraph_Deinonychus_Character_BP");
		
		ADeinonychus_Character_BP_C_ExecuteUbergraph_Deinonychus_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.NewEventDispatcher__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ADeinonychus_Character_BP_C::NewEventDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Deinonychus_Character_BP.Deinonychus_Character_BP_C.NewEventDispatcher__DelegateSignature");
		
		ADeinonychus_Character_BP_C_NewEventDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADeinonychus_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADeinonychus_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Deinonychus_Character_BP.Deinonychus_Character_BP_C");
		return ptr;
	}

}


