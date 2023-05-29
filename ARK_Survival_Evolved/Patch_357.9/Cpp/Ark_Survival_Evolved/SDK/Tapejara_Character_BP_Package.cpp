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
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.StopMovementFn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATapejara_Character_BP_C::StopMovementFn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.StopMovementFn");
		
		ATapejara_Character_BP_C_StopMovementFn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.ShouldTryLatch
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               LandOnFailureToLatch                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATapejara_Character_BP_C::ShouldTryLatch(bool* Ret, bool* LandOnFailureToLatch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.ShouldTryLatch");
		
		ATapejara_Character_BP_C_ShouldTryLatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ret != nullptr)
			*Ret = params.Ret;
		if (LandOnFailureToLatch != nullptr)
			*LandOnFailureToLatch = params.LandOnFailureToLatch;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPOverrideGetAttackAnimationIndex
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class UAnimMontage*>                        AnimationArray                                             (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	int32_t ATapejara_Character_BP_C::BPOverrideGetAttackAnimationIndex(int32_t AttackIndex, TArray<class UAnimMontage*>* AnimationArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPOverrideGetAttackAnimationIndex");
		
		ATapejara_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params params {};
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
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPNotifyClearRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderClearing                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATapejara_Character_BP_C::BPNotifyClearRider(class AShooterCharacter* RiderClearing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPNotifyClearRider");
		
		ATapejara_Character_BP_C_BPNotifyClearRider_Params params {};
		params.RiderClearing = RiderClearing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPHandleOnStopTargeting
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ATapejara_Character_BP_C::BPHandleOnStopTargeting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPHandleOnStopTargeting");
		
		ATapejara_Character_BP_C_BPHandleOnStopTargeting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPModifyFOV
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              FOVIn                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ATapejara_Character_BP_C::BPModifyFOV(float FOVIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPModifyFOV");
		
		ATapejara_Character_BP_C_BPModifyFOV_Params params {};
		params.FOVIn = FOVIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPHandleControllerInitiatedAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATapejara_Character_BP_C::BPHandleControllerInitiatedAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPHandleControllerInitiatedAttack");
		
		ATapejara_Character_BP_C_BPHandleControllerInitiatedAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPModifyDesiredRotation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    InDesiredRotation                                          (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    OutDesiredRotation                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATapejara_Character_BP_C::BPModifyDesiredRotation(float DeltaTime, struct FRotator* InDesiredRotation, struct FRotator* OutDesiredRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPModifyDesiredRotation");
		
		ATapejara_Character_BP_C_BPModifyDesiredRotation_Params params {};
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPSetupTamed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bWasJustTamed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATapejara_Character_BP_C::BPSetupTamed(bool bWasJustTamed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPSetupTamed");
		
		ATapejara_Character_BP_C_BPSetupTamed_Params params {};
		params.bWasJustTamed = bWasJustTamed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPOnStartJump
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ATapejara_Character_BP_C::BPOnStartJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPOnStartJump");
		
		ATapejara_Character_BP_C_BPOnStartJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPHandleUseButtonPress
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    RiderController                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATapejara_Character_BP_C::BPHandleUseButtonPress(class AShooterPlayerController* RiderController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.BPHandleUseButtonPress");
		
		ATapejara_Character_BP_C_BPHandleUseButtonPress_Params params {};
		params.RiderController = RiderController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.DisableCameraInterpolation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATapejara_Character_BP_C::DisableCameraInterpolation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.DisableCameraInterpolation");
		
		ATapejara_Character_BP_C_DisableCameraInterpolation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.OnRep_LatchingSurfaceNormal
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATapejara_Character_BP_C::OnRep_LatchingSurfaceNormal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.OnRep_LatchingSurfaceNormal");
		
		ATapejara_Character_BP_C_OnRep_LatchingSurfaceNormal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.UpdateLatchedDinoCamera
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATapejara_Character_BP_C::UpdateLatchedDinoCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.UpdateLatchedDinoCamera");
		
		ATapejara_Character_BP_C_UpdateLatchedDinoCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.Controller Follow ActorRotation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATapejara_Character_BP_C::ControllerFollowActorRotation(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.Controller Follow ActorRotation");
		
		ATapejara_Character_BP_C_ControllerFollowActorRotation_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.ReferenceLatchingObjects
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATapejara_Character_BP_C::ReferenceLatchingObjects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.ReferenceLatchingObjects");
		
		ATapejara_Character_BP_C_ReferenceLatchingObjects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.LineTrace
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMeshComponent*                              Mesh                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        SocketName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               BackwardLatching                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               HitSomthing                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Normal                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      HitActor                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATapejara_Character_BP_C::LineTrace(class UMeshComponent* Mesh, const class FName& SocketName, class AActor* Actor, const struct FVector& Offset, bool BackwardLatching, bool* HitSomthing, struct FVector* Location, struct FVector* Normal, class AActor** HitActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.LineTrace");
		
		ATapejara_Character_BP_C_LineTrace_Params params {};
		params.Mesh = Mesh;
		params.SocketName = SocketName;
		params.Actor = Actor;
		params.Offset = Offset;
		params.BackwardLatching = BackwardLatching;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HitSomthing != nullptr)
			*HitSomthing = params.HitSomthing;
		if (Location != nullptr)
			*Location = params.Location;
		if (Normal != nullptr)
			*Normal = params.Normal;
		if (HitActor != nullptr)
			*HitActor = params.HitActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.InterruptLatching
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATapejara_Character_BP_C::InterruptLatching()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.InterruptLatching");
		
		ATapejara_Character_BP_C_InterruptLatching_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.ProcessLatching
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATapejara_Character_BP_C::ProcessLatching(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.ProcessLatching");
		
		ATapejara_Character_BP_C_ProcessLatching_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.TryLatch
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               BackwardsLatching                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATapejara_Character_BP_C::TryLatch(const struct FVector& Offset, bool BackwardsLatching)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.TryLatch");
		
		ATapejara_Character_BP_C_TryLatch_Params params {};
		params.Offset = Offset;
		params.BackwardsLatching = BackwardsLatching;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATapejara_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.UserConstructionScript");
		
		ATapejara_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.InpActEvt_AltFire_K2Node_InputActionEvent_178
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATapejara_Character_BP_C::InpActEvt_AltFire_K2Node_InputActionEvent_178()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.InpActEvt_AltFire_K2Node_InputActionEvent_178");
		
		ATapejara_Character_BP_C_InpActEvt_AltFire_K2Node_InputActionEvent_178_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_177
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATapejara_Character_BP_C::InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_177()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_177");
		
		ATapejara_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_177_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.InpActEvt_BrakeDino_K2Node_InputActionEvent_176
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATapejara_Character_BP_C::InpActEvt_BrakeDino_K2Node_InputActionEvent_176()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.InpActEvt_BrakeDino_K2Node_InputActionEvent_176");
		
		ATapejara_Character_BP_C_InpActEvt_BrakeDino_K2Node_InputActionEvent_176_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.InpActEvt_BrakeDino_K2Node_InputActionEvent_175
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATapejara_Character_BP_C::InpActEvt_BrakeDino_K2Node_InputActionEvent_175()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.InpActEvt_BrakeDino_K2Node_InputActionEvent_175");
		
		ATapejara_Character_BP_C_InpActEvt_BrakeDino_K2Node_InputActionEvent_175_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.Latch
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               BackwardsLatching                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               TryLatch                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               LandOnFailureToLatch                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATapejara_Character_BP_C::Latch(bool BackwardsLatching, bool TryLatch, bool LandOnFailureToLatch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.Latch");
		
		ATapejara_Character_BP_C_Latch_Params params {};
		params.BackwardsLatching = BackwardsLatching;
		params.TryLatch = TryLatch;
		params.LandOnFailureToLatch = LandOnFailureToLatch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATapejara_Character_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.ReceiveTick");
		
		ATapejara_Character_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.LatchStartAnimation
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATapejara_Character_BP_C::LatchStartAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.LatchStartAnimation");
		
		ATapejara_Character_BP_C_LatchStartAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.UnLatch
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               LatchingInterrupted                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATapejara_Character_BP_C::UnLatch(bool LatchingInterrupted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.UnLatch");
		
		ATapejara_Character_BP_C_UnLatch_Params params {};
		params.LatchingInterrupted = LatchingInterrupted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.UnLatchStartAnimation
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATapejara_Character_BP_C::UnLatchStartAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.UnLatchStartAnimation");
		
		ATapejara_Character_BP_C_UnLatchStartAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimNotify*                                 AnimNotifyObject                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATapejara_Character_BP_C::BlueprintAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.BlueprintAnimNotifyCustomEvent");
		
		ATapejara_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params {};
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.MoveToUsingDirection
	 * 		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATapejara_Character_BP_C::MoveToUsingDirection(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.MoveToUsingDirection");
		
		ATapejara_Character_BP_C_MoveToUsingDirection_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.UnLatchMoveAndRotate
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATapejara_Character_BP_C::UnLatchMoveAndRotate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.UnLatchMoveAndRotate");
		
		ATapejara_Character_BP_C_UnLatchMoveAndRotate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.LatchingStartEvent
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void ATapejara_Character_BP_C::LatchingStartEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.LatchingStartEvent");
		
		ATapejara_Character_BP_C_LatchingStartEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.LatchingEndEvent
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void ATapejara_Character_BP_C::LatchingEndEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.LatchingEndEvent");
		
		ATapejara_Character_BP_C_LatchingEndEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.StopMovement
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATapejara_Character_BP_C::StopMovement(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.StopMovement");
		
		ATapejara_Character_BP_C_StopMovement_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.DisableFaceLatchingObjectRotation
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ATapejara_Character_BP_C::DisableFaceLatchingObjectRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.DisableFaceLatchingObjectRotation");
		
		ATapejara_Character_BP_C_DisableFaceLatchingObjectRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATapejara_Character_BP_C::InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181");
		
		ATapejara_Character_BP_C_InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.SetPassengersSurfaceCamera
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Yaw                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Pitch                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Roll                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATapejara_Character_BP_C::SetPassengersSurfaceCamera(float Yaw, float Pitch, float Roll)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.SetPassengersSurfaceCamera");
		
		ATapejara_Character_BP_C_SetPassengersSurfaceCamera_Params params {};
		params.Yaw = Yaw;
		params.Pitch = Pitch;
		params.Roll = Roll;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.LocalFaceLatchingObject
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATapejara_Character_BP_C::LocalFaceLatchingObject(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.LocalFaceLatchingObject");
		
		ATapejara_Character_BP_C_LocalFaceLatchingObject_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.StartedJump
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATapejara_Character_BP_C::StartedJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.StartedJump");
		
		ATapejara_Character_BP_C_StartedJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.MoveDuringUnlatching
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATapejara_Character_BP_C::MoveDuringUnlatching()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.MoveDuringUnlatching");
		
		ATapejara_Character_BP_C_MoveDuringUnlatching_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Tapejara_Character_BP.Tapejara_Character_BP_C.ExecuteUbergraph_Tapejara_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATapejara_Character_BP_C::ExecuteUbergraph_Tapejara_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tapejara_Character_BP.Tapejara_Character_BP_C.ExecuteUbergraph_Tapejara_Character_BP");
		
		ATapejara_Character_BP_C_ExecuteUbergraph_Tapejara_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATapejara_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATapejara_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Tapejara_Character_BP.Tapejara_Character_BP_C");
		return ptr;
	}

}


