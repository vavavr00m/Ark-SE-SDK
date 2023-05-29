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
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.AllowPlayMontage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                AnimMontage                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ASpindles_Character_BP_C::AllowPlayMontage(class UAnimMontage* AnimMontage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.AllowPlayMontage");
		
		ASpindles_Character_BP_C_AllowPlayMontage_Params params {};
		params.AnimMontage = AnimMontage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.BPTimerNonDedicated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpindles_Character_BP_C::BPTimerNonDedicated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.BPTimerNonDedicated");
		
		ASpindles_Character_BP_C_BPTimerNonDedicated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.UpdateMiniGunState
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ASpindles_Character_BP_C::UpdateMiniGunState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.UpdateMiniGunState");
		
		ASpindles_Character_BP_C_UpdateMiniGunState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.BPTimerServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpindles_Character_BP_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.BPTimerServer");
		
		ASpindles_Character_BP_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.GetClampedCameraLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     OutLoc                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpindles_Character_BP_C::GetClampedCameraLocation(struct FVector* OutLoc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.GetClampedCameraLocation");
		
		ASpindles_Character_BP_C_GetClampedCameraLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutLoc != nullptr)
			*OutLoc = params.OutLoc;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.BPGetDebugInfoString
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	class FString ASpindles_Character_BP_C::BPGetDebugInfoString()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.BPGetDebugInfoString");
		
		ASpindles_Character_BP_C_BPGetDebugInfoString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.SpawnMinigunFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpindles_Character_BP_C::SpawnMinigunFX(const struct FVector& Start, const struct FVector& End)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.SpawnMinigunFX");
		
		ASpindles_Character_BP_C_SpawnMinigunFX_Params params {};
		params.Start = Start;
		params.End = End;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.BPHandlePoop
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ASpindles_Character_BP_C::BPHandlePoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.BPHandlePoop");
		
		ASpindles_Character_BP_C_BPHandlePoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.BPOverrideHurtAnim
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
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
	class UAnimMontage* ASpindles_Character_BP_C::BPOverrideHurtAnim(float DamageTaken, struct FDamageEvent* DamageEvent, class APawn* PawnInstigator, class AActor* DamageCauser, bool bIsLocalPath, bool bIsPointDamage, const struct FVector& PointDamageLocation, const struct FVector& PointDamageHitNormal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.BPOverrideHurtAnim");
		
		ASpindles_Character_BP_C_BPOverrideHurtAnim_Params params {};
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.UpdateCachedActivateMinigunModeWeightCheck
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ASpindles_Character_BP_C::UpdateCachedActivateMinigunModeWeightCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.UpdateCachedActivateMinigunModeWeightCheck");
		
		ASpindles_Character_BP_C_UpdateCachedActivateMinigunModeWeightCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.BlueprintGetAttackWeight
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              inputWeight                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ASpindles_Character_BP_C::BlueprintGetAttackWeight(int32_t AttackIndex, float inputWeight, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.BlueprintGetAttackWeight");
		
		ASpindles_Character_BP_C_BlueprintGetAttackWeight_Params params {};
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.GetMinigunModeTPVOffset
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     TPVOffset                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpindles_Character_BP_C::GetMinigunModeTPVOffset(struct FVector* TPVOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.GetMinigunModeTPVOffset");
		
		ASpindles_Character_BP_C_GetMinigunModeTPVOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TPVOffset != nullptr)
			*TPVOffset = params.TPVOffset;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.Set Minigun FireInput Pressed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpindles_Character_BP_C::SetMinigunFireInputPressed(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.Set Minigun FireInput Pressed");
		
		ASpindles_Character_BP_C_SetMinigunFireInputPressed_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.RidingTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpindles_Character_BP_C::RidingTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.RidingTick");
		
		ASpindles_Character_BP_C_RidingTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.BPHandleLeftShoulderButton
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ASpindles_Character_BP_C::BPHandleLeftShoulderButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.BPHandleLeftShoulderButton");
		
		ASpindles_Character_BP_C_BPHandleLeftShoulderButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.Set Minigun AOEInput Pressed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpindles_Character_BP_C::SetMinigunAOEInputPressed(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.Set Minigun AOEInput Pressed");
		
		ASpindles_Character_BP_C_SetMinigunAOEInputPressed_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.BPHandleControllerInitiatedAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ASpindles_Character_BP_C::BPHandleControllerInitiatedAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.BPHandleControllerInitiatedAttack");
		
		ASpindles_Character_BP_C_BPHandleControllerInitiatedAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.SwitchMinigunTPVCameraView
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpindles_Character_BP_C::SwitchMinigunTPVCameraView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.SwitchMinigunTPVCameraView");
		
		ASpindles_Character_BP_C_SwitchMinigunTPVCameraView_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.BP_InterceptMoveRight
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ASpindles_Character_BP_C::BP_InterceptMoveRight(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.BP_InterceptMoveRight");
		
		ASpindles_Character_BP_C_BP_InterceptMoveRight_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.BP_InterceptMoveForward
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ASpindles_Character_BP_C::BP_InterceptMoveForward(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.BP_InterceptMoveForward");
		
		ASpindles_Character_BP_C_BP_InterceptMoveForward_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.BPPreventFirstPerson
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ASpindles_Character_BP_C::BPPreventFirstPerson()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.BPPreventFirstPerson");
		
		ASpindles_Character_BP_C_BPPreventFirstPerson_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.BPNotifySetRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderSetting                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpindles_Character_BP_C::BPNotifySetRider(class AShooterCharacter* RiderSetting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.BPNotifySetRider");
		
		ASpindles_Character_BP_C_BPNotifySetRider_Params params {};
		params.RiderSetting = RiderSetting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.BPOverrideCameraViewTarget
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
	void ASpindles_Character_BP_C::BPOverrideCameraViewTarget(const class FName& CurrentCameraMode, const struct FVector& DesiredCameraLocation, const struct FRotator& DesiredCameraRotation, float DesiredFOV, bool* bOverrideCameraLocation, struct FVector* CameraLocation, bool* bOverrideCameraRotation, struct FRotator* CameraRotation, bool* bOverrideCameraFOV, float* CameraFOV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.BPOverrideCameraViewTarget");
		
		ASpindles_Character_BP_C_BPOverrideCameraViewTarget_Params params {};
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.BPHandleOnStopTargeting
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ASpindles_Character_BP_C::BPHandleOnStopTargeting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.BPHandleOnStopTargeting");
		
		ASpindles_Character_BP_C_BPHandleOnStopTargeting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.HasOverheatBuff
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpindles_Character_BP_C::HasOverheatBuff(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.HasOverheatBuff");
		
		ASpindles_Character_BP_C_HasOverheatBuff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.BP_GetCustomModifier_RotationRate
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ASpindles_Character_BP_C::BP_GetCustomModifier_RotationRate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.BP_GetCustomModifier_RotationRate");
		
		ASpindles_Character_BP_C_BP_GetCustomModifier_RotationRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.Is Server or SinglePlayer
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpindles_Character_BP_C::IsServerorSinglePlayer(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.Is Server or SinglePlayer");
		
		ASpindles_Character_BP_C_IsServerorSinglePlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.IsAIControlled
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpindles_Character_BP_C::IsAIControlled(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.IsAIControlled");
		
		ASpindles_Character_BP_C_IsAIControlled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.BPGetCrosshairLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              CanvasClipX                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CanvasClipY                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OutX                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OutY                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpindles_Character_BP_C::BPGetCrosshairLocation(float CanvasClipX, float CanvasClipY, float* OutX, float* OutY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.BPGetCrosshairLocation");
		
		ASpindles_Character_BP_C_BPGetCrosshairLocation_Params params {};
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.BPGetCrosshairAlpha
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ASpindles_Character_BP_C::BPGetCrosshairAlpha()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.BPGetCrosshairAlpha");
		
		ASpindles_Character_BP_C_BPGetCrosshairAlpha_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.IsFirstPersonView
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpindles_Character_BP_C::IsFirstPersonView(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.IsFirstPersonView");
		
		ASpindles_Character_BP_C_IsFirstPersonView_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpindles_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.ReceiveBeginPlay");
		
		ASpindles_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.BPNotifyClearRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderClearing                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpindles_Character_BP_C::BPNotifyClearRider(class AShooterCharacter* RiderClearing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.BPNotifyClearRider");
		
		ASpindles_Character_BP_C_BPNotifyClearRider_Params params {};
		params.RiderClearing = RiderClearing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.IsClientOrSinglePlayer
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpindles_Character_BP_C::IsClientOrSinglePlayer(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.IsClientOrSinglePlayer");
		
		ASpindles_Character_BP_C_IsClientOrSinglePlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.BPHandleOnStopFire
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ASpindles_Character_BP_C::BPHandleOnStopFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.BPHandleOnStopFire");
		
		ASpindles_Character_BP_C_BPHandleOnStopFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.BPAdjustAttackIndex
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	int32_t ASpindles_Character_BP_C::BPAdjustAttackIndex(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.BPAdjustAttackIndex");
		
		ASpindles_Character_BP_C_BPAdjustAttackIndex_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpindles_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.UserConstructionScript");
		
		ASpindles_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_170
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ASpindles_Character_BP_C::InpActEvt_Crouch_K2Node_InputActionEvent_170()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_170");
		
		ASpindles_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_170_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_169
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ASpindles_Character_BP_C::InpActEvt_Prone_K2Node_InputActionEvent_169()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_169");
		
		ASpindles_Character_BP_C_InpActEvt_Prone_K2Node_InputActionEvent_169_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.SetMinigunAOE
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpindles_Character_BP_C::SetMinigunAOE(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.SetMinigunAOE");
		
		ASpindles_Character_BP_C_SetMinigunAOE_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.SERVER_SetMinigunAOEInputPressed
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpindles_Character_BP_C::SERVER_SetMinigunAOEInputPressed(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.SERVER_SetMinigunAOEInputPressed");
		
		ASpindles_Character_BP_C_SERVER_SetMinigunAOEInputPressed_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.RequestStopAOEAttack
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ASpindles_Character_BP_C::RequestStopAOEAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.RequestStopAOEAttack");
		
		ASpindles_Character_BP_C_RequestStopAOEAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.SERVER_SetMinigunFireInputPressed
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpindles_Character_BP_C::SERVER_SetMinigunFireInputPressed(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.SERVER_SetMinigunFireInputPressed");
		
		ASpindles_Character_BP_C_SERVER_SetMinigunFireInputPressed_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.StartMinigunFire
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ASpindles_Character_BP_C::StartMinigunFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.StartMinigunFire");
		
		ASpindles_Character_BP_C_StartMinigunFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.StopMinigunFire
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ASpindles_Character_BP_C::StopMinigunFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.StopMinigunFire");
		
		ASpindles_Character_BP_C_StopMinigunFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.ClientSpawnMinigunFireFX
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpindles_Character_BP_C::ClientSpawnMinigunFireFX(const struct FVector& Start, const struct FVector& End)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.ClientSpawnMinigunFireFX");
		
		ASpindles_Character_BP_C_ClientSpawnMinigunFireFX_Params params {};
		params.Start = Start;
		params.End = End;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.MinigunModeOff
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpindles_Character_BP_C::MinigunModeOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.MinigunModeOff");
		
		ASpindles_Character_BP_C_MinigunModeOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.MinigunModeOn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpindles_Character_BP_C::MinigunModeOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.MinigunModeOn");
		
		ASpindles_Character_BP_C_MinigunModeOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.TickMinigunStaminaCost
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpindles_Character_BP_C::TickMinigunStaminaCost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.TickMinigunStaminaCost");
		
		ASpindles_Character_BP_C_TickMinigunStaminaCost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.ClientOutOfStamina
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ASpindles_Character_BP_C::ClientOutOfStamina()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.ClientOutOfStamina");
		
		ASpindles_Character_BP_C_ClientOutOfStamina_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.CheckConsumeResource
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpindles_Character_BP_C::CheckConsumeResource()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.CheckConsumeResource");
		
		ASpindles_Character_BP_C_CheckConsumeResource_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.LoopMinigunFiringAnim
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpindles_Character_BP_C::LoopMinigunFiringAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.LoopMinigunFiringAnim");
		
		ASpindles_Character_BP_C_LoopMinigunFiringAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.ServerEnableMinigunMode
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ASpindles_Character_BP_C::ServerEnableMinigunMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.ServerEnableMinigunMode");
		
		ASpindles_Character_BP_C_ServerEnableMinigunMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.ServerDisableMinigunMode
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ASpindles_Character_BP_C::ServerDisableMinigunMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.ServerDisableMinigunMode");
		
		ASpindles_Character_BP_C_ServerDisableMinigunMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.EnableMinigunMode
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ASpindles_Character_BP_C::EnableMinigunMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.EnableMinigunMode");
		
		ASpindles_Character_BP_C_EnableMinigunMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.DisableMinigunMode
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ASpindles_Character_BP_C::DisableMinigunMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.DisableMinigunMode");
		
		ASpindles_Character_BP_C_DisableMinigunMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.RotateAttack
	 * 		Flags  -> (NetReliable, BlueprintCallable, BlueprintEvent)
	 */
	void ASpindles_Character_BP_C::RotateAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.RotateAttack");
		
		ASpindles_Character_BP_C_RotateAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.AnimNotify_TurnForAttack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpindles_Character_BP_C::AnimNotify_TurnForAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.AnimNotify_TurnForAttack");
		
		ASpindles_Character_BP_C_AnimNotify_TurnForAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.AnimNotify_AttackTurnFinished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpindles_Character_BP_C::AnimNotify_AttackTurnFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.AnimNotify_AttackTurnFinished");
		
		ASpindles_Character_BP_C_AnimNotify_AttackTurnFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.StopCheckConsumeResource
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpindles_Character_BP_C::StopCheckConsumeResource()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.StopCheckConsumeResource");
		
		ASpindles_Character_BP_C_StopCheckConsumeResource_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.ToggleMinigunModeAimOffset
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ASpindles_Character_BP_C::ToggleMinigunModeAimOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.ToggleMinigunModeAimOffset");
		
		ASpindles_Character_BP_C_ToggleMinigunModeAimOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.SetupMinigunFiring
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                LoopAnim                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UParticleSystem*                             TrailFX                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpindles_Character_BP_C::SetupMinigunFiring(class UAnimMontage* LoopAnim, class UParticleSystem* TrailFX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.SetupMinigunFiring");
		
		ASpindles_Character_BP_C_SetupMinigunFiring_Params params {};
		params.LoopAnim = LoopAnim;
		params.TrailFX = TrailFX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.TickAOEStaminaCost
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpindles_Character_BP_C::TickAOEStaminaCost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.TickAOEStaminaCost");
		
		ASpindles_Character_BP_C_TickAOEStaminaCost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.TickMinigunTPVCamera
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpindles_Character_BP_C::TickMinigunTPVCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.TickMinigunTPVCamera");
		
		ASpindles_Character_BP_C_TickMinigunTPVCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.ReplicateCameraDataMinigunModeToServer
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsFirstPerson                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     CameraLocation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpindles_Character_BP_C::ReplicateCameraDataMinigunModeToServer(bool IsFirstPerson, const struct FVector& CameraLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.ReplicateCameraDataMinigunModeToServer");
		
		ASpindles_Character_BP_C_ReplicateCameraDataMinigunModeToServer_Params params {};
		params.IsFirstPerson = IsFirstPerson;
		params.CameraLocation = CameraLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.MULTI_StartAOEAttack
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ASpindles_Character_BP_C::MULTI_StartAOEAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.MULTI_StartAOEAttack");
		
		ASpindles_Character_BP_C_MULTI_StartAOEAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.MULTI_EndAOEAttack
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ASpindles_Character_BP_C::MULTI_EndAOEAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.MULTI_EndAOEAttack");
		
		ASpindles_Character_BP_C_MULTI_EndAOEAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.LeftShoulderPressed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpindles_Character_BP_C::LeftShoulderPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.LeftShoulderPressed");
		
		ASpindles_Character_BP_C_LeftShoulderPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.AnimNotify_TickAOEStaminaCost
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpindles_Character_BP_C::AnimNotify_TickAOEStaminaCost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.AnimNotify_TickAOEStaminaCost");
		
		ASpindles_Character_BP_C_AnimNotify_TickAOEStaminaCost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.AnimNotify_TickMinigunStaminaCost
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpindles_Character_BP_C::AnimNotify_TickMinigunStaminaCost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.AnimNotify_TickMinigunStaminaCost");
		
		ASpindles_Character_BP_C_AnimNotify_TickMinigunStaminaCost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Spindles_Character_BP.Spindles_Character_BP_C.ExecuteUbergraph_Spindles_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpindles_Character_BP_C::ExecuteUbergraph_Spindles_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Spindles_Character_BP.Spindles_Character_BP_C.ExecuteUbergraph_Spindles_Character_BP");
		
		ASpindles_Character_BP_C_ExecuteUbergraph_Spindles_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASpindles_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASpindles_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Spindles_Character_BP.Spindles_Character_BP_C");
		return ptr;
	}

}


