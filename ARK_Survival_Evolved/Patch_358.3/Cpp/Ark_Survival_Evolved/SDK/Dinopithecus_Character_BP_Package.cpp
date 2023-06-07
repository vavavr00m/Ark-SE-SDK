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
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPCanBeBaseForCharacter
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ADinopithecus_Character_BP_C::BPCanBeBaseForCharacter(class APawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPCanBeBaseForCharacter");
		
		ADinopithecus_Character_BP_C_BPCanBeBaseForCharacter_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.IsUsingZipline
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::IsUsingZipline(bool* ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.IsUsingZipline");
		
		ADinopithecus_Character_BP_C_IsUsingZipline_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPGetArmorDurabilityDecreaseMultiplier
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ADinopithecus_Character_BP_C::BPGetArmorDurabilityDecreaseMultiplier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPGetArmorDurabilityDecreaseMultiplier");
		
		ADinopithecus_Character_BP_C_BPGetArmorDurabilityDecreaseMultiplier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.EndUberpounce
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Velocity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimMontage*                                MontageToPlayOnNonZeroVelocity                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::EndUberpounce(const struct FVector& Velocity, class UAnimMontage* MontageToPlayOnNonZeroVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.EndUberpounce");
		
		ADinopithecus_Character_BP_C_EndUberpounce_Params params {};
		params.Velocity = Velocity;
		params.MontageToPlayOnNonZeroVelocity = MontageToPlayOnNonZeroVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateAnimSpeed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::UpdateAnimSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateAnimSpeed");
		
		ADinopithecus_Character_BP_C_UpdateAnimSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UberpounceDesyncDetected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::UberpounceDesyncDetected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UberpounceDesyncDetected");
		
		ADinopithecus_Character_BP_C_UberpounceDesyncDetected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPGetRiderUnboardLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            RidingCharacter                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector ADinopithecus_Character_BP_C::BPGetRiderUnboardLocation(class APrimalCharacter* RidingCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPGetRiderUnboardLocation");
		
		ADinopithecus_Character_BP_C_BPGetRiderUnboardLocation_Params params {};
		params.RidingCharacter = RidingCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Update Server Corrections
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::UpdateServerCorrections()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Update Server Corrections");
		
		ADinopithecus_Character_BP_C_UpdateServerCorrections_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.CanUpdateRotation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ADinopithecus_Character_BP_C::CanUpdateRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.CanUpdateRotation");
		
		ADinopithecus_Character_BP_C_CanUpdateRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetUberpounceTraceStartingLocation
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	struct FVector ADinopithecus_Character_BP_C::GetUberpounceTraceStartingLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetUberpounceTraceStartingLocation");
		
		ADinopithecus_Character_BP_C_GetUberpounceTraceStartingLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.IsValidUberpounceTargetingData
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FUberpounceData                             TargetingData                                              (Parm)
	 * 		bool                                               ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::IsValidUberpounceTargetingData(const struct FUberpounceData& TargetingData, bool* ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.IsValidUberpounceTargetingData");
		
		ADinopithecus_Character_BP_C_IsValidUberpounceTargetingData_Params params {};
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
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPTriggerStasisEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::BPTriggerStasisEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPTriggerStasisEvent");
		
		ADinopithecus_Character_BP_C_BPTriggerStasisEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.MultiRequestJumpFn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Velocity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::MultiRequestJumpFn(const struct FVector& Velocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.MultiRequestJumpFn");
		
		ADinopithecus_Character_BP_C_MultiRequestJumpFn_Params params {};
		params.Velocity = Velocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BP_OverrideCameraTargetOriginLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     OutOverrideOrigin                                          (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		class FName                                        WithCameraStyle                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::BP_OverrideCameraTargetOriginLocation(struct FVector* OutOverrideOrigin, const class FName& WithCameraStyle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BP_OverrideCameraTargetOriginLocation");
		
		ADinopithecus_Character_BP_C_BP_OverrideCameraTargetOriginLocation_Params params {};
		params.WithCameraStyle = WithCameraStyle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutOverrideOrigin != nullptr)
			*OutOverrideOrigin = params.OutOverrideOrigin;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.CanContinueUberpounce
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::CanContinueUberpounce(bool* ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.CanContinueUberpounce");
		
		ADinopithecus_Character_BP_C_CanContinueUberpounce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BP_OverrideCarriedCharacterTransform
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            ForCarriedChar                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ADinopithecus_Character_BP_C::BP_OverrideCarriedCharacterTransform(class APrimalCharacter* ForCarriedChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BP_OverrideCarriedCharacterTransform");
		
		ADinopithecus_Character_BP_C_BP_OverrideCarriedCharacterTransform_Params params {};
		params.ForCarriedChar = ForCarriedChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AllowWakingTame
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ADinopithecus_Character_BP_C::AllowWakingTame(class APlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AllowWakingTame");
		
		ADinopithecus_Character_BP_C_AllowWakingTame_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetDelayBeforeLatchAfterLatchedJump
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              LatchedJumpTimeToAutoLatch                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::GetDelayBeforeLatchAfterLatchedJump(float* LatchedJumpTimeToAutoLatch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetDelayBeforeLatchAfterLatchedJump");
		
		ADinopithecus_Character_BP_C_GetDelayBeforeLatchAfterLatchedJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LatchedJumpTimeToAutoLatch != nullptr)
			*LatchedJumpTimeToAutoLatch = params.LatchedJumpTimeToAutoLatch;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.HasAnyStamina
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool ADinopithecus_Character_BP_C::HasAnyStamina()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.HasAnyStamina");
		
		ADinopithecus_Character_BP_C_HasAnyStamina_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPOverrideCameraViewTarget
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
	void ADinopithecus_Character_BP_C::BPOverrideCameraViewTarget(const class FName& CurrentCameraMode, const struct FVector& DesiredCameraLocation, const struct FRotator& DesiredCameraRotation, float DesiredFOV, bool* bOverrideCameraLocation, struct FVector* CameraLocation, bool* bOverrideCameraRotation, struct FRotator* CameraRotation, bool* bOverrideCameraFOV, float* CameraFOV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPOverrideCameraViewTarget");
		
		ADinopithecus_Character_BP_C_BPOverrideCameraViewTarget_Params params {};
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
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.CanAdultCarryBaby
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADinopithecus_Character_BP_C*                Dino                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Allowed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::CanAdultCarryBaby(class ADinopithecus_Character_BP_C* Dino, bool* Allowed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.CanAdultCarryBaby");
		
		ADinopithecus_Character_BP_C_CanAdultCarryBaby_Params params {};
		params.Dino = Dino;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Allowed != nullptr)
			*Allowed = params.Allowed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateTaming
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::UpdateTaming()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateTaming");
		
		ADinopithecus_Character_BP_C_UpdateTaming_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.PackMemberDied
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADino_Character_BP_Pack_C*                   DeadDino                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::PackMemberDied(class ADino_Character_BP_Pack_C* DeadDino)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.PackMemberDied");
		
		ADinopithecus_Character_BP_C_PackMemberDied_Params params {};
		params.DeadDino = DeadDino;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateTickThrottles
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::UpdateTickThrottles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateTickThrottles");
		
		ADinopithecus_Character_BP_C_UpdateTickThrottles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateBabyRiding
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::UpdateBabyRiding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateBabyRiding");
		
		ADinopithecus_Character_BP_C_UpdateBabyRiding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BabyStopRiding
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::BabyStopRiding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BabyStopRiding");
		
		ADinopithecus_Character_BP_C_BabyStopRiding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BabyStartRiding
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::BabyStartRiding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BabyStartRiding");
		
		ADinopithecus_Character_BP_C_BabyStartRiding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.FindAdultToRide
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::FindAdultToRide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.FindAdultToRide");
		
		ADinopithecus_Character_BP_C_FindAdultToRide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.CanBabyRide
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool ADinopithecus_Character_BP_C::CanBabyRide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.CanBabyRide");
		
		ADinopithecus_Character_BP_C_CanBabyRide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPGetDragSocketDinoName
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        aGrabbedDino                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class FName ADinopithecus_Character_BP_C::BPGetDragSocketDinoName(class APrimalDinoCharacter* aGrabbedDino)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPGetDragSocketDinoName");
		
		ADinopithecus_Character_BP_C_BPGetDragSocketDinoName_Params params {};
		params.aGrabbedDino = aGrabbedDino;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPDidClearCarriedCharacter
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            PreviousCarriedCharacter                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::BPDidClearCarriedCharacter(class APrimalCharacter* PreviousCarriedCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPDidClearCarriedCharacter");
		
		ADinopithecus_Character_BP_C_BPDidClearCarriedCharacter_Params params {};
		params.PreviousCarriedCharacter = PreviousCarriedCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BabyTryMount
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::BabyTryMount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BabyTryMount");
		
		ADinopithecus_Character_BP_C_BabyTryMount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OverrideRandomWanderLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     originalDestination                                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     inVec                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::OverrideRandomWanderLocation(struct FVector* originalDestination, struct FVector* inVec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OverrideRandomWanderLocation");
		
		ADinopithecus_Character_BP_C_OverrideRandomWanderLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (originalDestination != nullptr)
			*originalDestination = params.originalDestination;
		if (inVec != nullptr)
			*inVec = params.inVec;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Update Camera 
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::UpdateCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Update Camera ");
		
		ADinopithecus_Character_BP_C_UpdateCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateClientInterpSpeeds
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::UpdateClientInterpSpeeds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateClientInterpSpeeds");
		
		ADinopithecus_Character_BP_C_UpdateClientInterpSpeeds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPAdjustAttackIndex
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	int32_t ADinopithecus_Character_BP_C::BPAdjustAttackIndex(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPAdjustAttackIndex");
		
		ADinopithecus_Character_BP_C_BPAdjustAttackIndex_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPHandleRightShoulderButton
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ADinopithecus_Character_BP_C::BPHandleRightShoulderButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPHandleRightShoulderButton");
		
		ADinopithecus_Character_BP_C_BPHandleRightShoulderButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.PlaySplashVFXAWaterSurfaceFromLocation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::PlaySplashVFXAWaterSurfaceFromLocation(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.PlaySplashVFXAWaterSurfaceFromLocation");
		
		ADinopithecus_Character_BP_C_PlaySplashVFXAWaterSurfaceFromLocation_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetPingMult
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::GetPingMult(float* ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetPingMult");
		
		ADinopithecus_Character_BP_C_GetPingMult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateAOEGroundPound
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::UpdateAOEGroundPound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateAOEGroundPound");
		
		ADinopithecus_Character_BP_C_UpdateAOEGroundPound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AOEGroundPound
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::AOEGroundPound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AOEGroundPound");
		
		ADinopithecus_Character_BP_C_AOEGroundPound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.PickupPoop
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::PickupPoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.PickupPoop");
		
		ADinopithecus_Character_BP_C_PickupPoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPForceCameraStyle
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            ForViewTarget                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	ECameraStyle ADinopithecus_Character_BP_C::BPForceCameraStyle(class APrimalCharacter* ForViewTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPForceCameraStyle");
		
		ADinopithecus_Character_BP_C_BPForceCameraStyle_Params params {};
		params.ForViewTarget = ForViewTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPOverrideMoveToOrder
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     MoveToLocation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterCharacter*                           OrderingPlayer                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ADinopithecus_Character_BP_C::BPOverrideMoveToOrder(const struct FVector& MoveToLocation, class AShooterCharacter* OrderingPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPOverrideMoveToOrder");
		
		ADinopithecus_Character_BP_C_BPOverrideMoveToOrder_Params params {};
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
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.IsCheckingForFallingLatch
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::IsCheckingForFallingLatch(bool* ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.IsCheckingForFallingLatch");
		
		ADinopithecus_Character_BP_C_IsCheckingForFallingLatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetTargetFOV
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ADinopithecus_Character_BP_C::GetTargetFOV()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetTargetFOV");
		
		ADinopithecus_Character_BP_C_GetTargetFOV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateHUDWidget
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::UpdateHUDWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateHUDWidget");
		
		ADinopithecus_Character_BP_C_UpdateHUDWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ReceiveDestroyed");
		
		ADinopithecus_Character_BP_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPNotifyToggleHUD
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bHudHidden                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::BPNotifyToggleHUD(bool bHudHidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPNotifyToggleHUD");
		
		ADinopithecus_Character_BP_C_BPNotifyToggleHUD_Params params {};
		params.bHudHidden = bHudHidden;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.SetupHUDWidget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Rider                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::SetupHUDWidget(class AActor* Rider)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.SetupHUDWidget");
		
		ADinopithecus_Character_BP_C_SetupHUDWidget_Params params {};
		params.Rider = Rider;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.DestroyHudWidget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               DestroyNow                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::DestroyHudWidget(bool DestroyNow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.DestroyHudWidget");
		
		ADinopithecus_Character_BP_C_DestroyHudWidget_Params params {};
		params.DestroyNow = DestroyNow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPHandlePoop
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ADinopithecus_Character_BP_C::BPHandlePoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPHandlePoop");
		
		ADinopithecus_Character_BP_C_BPHandlePoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPShouldCancelDoAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ADinopithecus_Character_BP_C::BPShouldCancelDoAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPShouldCancelDoAttack");
		
		ADinopithecus_Character_BP_C_BPShouldCancelDoAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPLimitPlayerRotation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            viewingCharacter                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    InViewRotation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FRotator ADinopithecus_Character_BP_C::BPLimitPlayerRotation(class APrimalCharacter* viewingCharacter, const struct FRotator& InViewRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPLimitPlayerRotation");
		
		ADinopithecus_Character_BP_C_BPLimitPlayerRotation_Params params {};
		params.viewingCharacter = viewingCharacter;
		params.InViewRotation = InViewRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateVFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::UpdateVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateVFX");
		
		ADinopithecus_Character_BP_C_UpdateVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ApplyJump
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Velocity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimMontage*                                Anim                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::ApplyJump(const struct FVector& Velocity, class UAnimMontage* Anim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ApplyJump");
		
		ADinopithecus_Character_BP_C_ApplyJump_Params params {};
		params.Velocity = Velocity;
		params.Anim = Anim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPGetGravityZScale
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	float ADinopithecus_Character_BP_C::BPGetGravityZScale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPGetGravityZScale");
		
		ADinopithecus_Character_BP_C_BPGetGravityZScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.TickBattlecryAttack
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::TickBattlecryAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.TickBattlecryAttack");
		
		ADinopithecus_Character_BP_C_TickBattlecryAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.DoBattlecryAttack
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::DoBattlecryAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.DoBattlecryAttack");
		
		ADinopithecus_Character_BP_C_DoBattlecryAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPGetCrosshairColor
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	struct FLinearColor ADinopithecus_Character_BP_C::BPGetCrosshairColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPGetCrosshairColor");
		
		ADinopithecus_Character_BP_C_BPGetCrosshairColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPDoAttack
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::BPDoAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPDoAttack");
		
		ADinopithecus_Character_BP_C_BPDoAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.DoBattlecry
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::DoBattlecry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.DoBattlecry");
		
		ADinopithecus_Character_BP_C_DoBattlecry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.TickSetRotation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::TickSetRotation(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.TickSetRotation");
		
		ADinopithecus_Character_BP_C_TickSetRotation_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Has Latchable SurfaceWhileFalling
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               RetSucccess                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FUberpounceData                             RetResultUberpounceData                                    (Parm, OutParm)
	 */
	void ADinopithecus_Character_BP_C::HasLatchableSurfaceWhileFalling(bool* RetSucccess, struct FUberpounceData* RetResultUberpounceData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Has Latchable SurfaceWhileFalling");
		
		ADinopithecus_Character_BP_C_HasLatchableSurfaceWhileFalling_Params params {};
		
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
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.CheckForFallingLatchFn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               AutoJumpAfterLatch                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::CheckForFallingLatchFn(bool AutoJumpAfterLatch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.CheckForFallingLatchFn");
		
		ADinopithecus_Character_BP_C_CheckForFallingLatchFn_Params params {};
		params.AutoJumpAfterLatch = AutoJumpAfterLatch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.IsAllowedToThrowPoop
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	bool ADinopithecus_Character_BP_C::IsAllowedToThrowPoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.IsAllowedToThrowPoop");
		
		ADinopithecus_Character_BP_C_IsAllowedToThrowPoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnAmmoWheelSlotSelected
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::OnAmmoWheelSlotSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnAmmoWheelSlotSelected");
		
		ADinopithecus_Character_BP_C_OnAmmoWheelSlotSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.SetAmmoWheelVisibility
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewVisible                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bFromGamepad                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::SetAmmoWheelVisibility(bool bNewVisible, bool bFromGamepad)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.SetAmmoWheelVisibility");
		
		ADinopithecus_Character_BP_C_SetAmmoWheelVisibility_Params params {};
		params.bNewVisible = bNewVisible;
		params.bFromGamepad = bFromGamepad;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPOnDinoFiredProjectile
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterProjectile*                          Projectile                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::BPOnDinoFiredProjectile(class AShooterProjectile* Projectile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPOnDinoFiredProjectile");
		
		ADinopithecus_Character_BP_C_BPOnDinoFiredProjectile_Params params {};
		params.Projectile = Projectile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPSetInitialAimOffsetTargets
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     TargetRootLoc                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    TargetAimRot                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     OutTargetRootLoc                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    OutTargetAimRot                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::BPSetInitialAimOffsetTargets(const struct FVector& TargetRootLoc, const struct FRotator& TargetAimRot, struct FVector* OutTargetRootLoc, struct FRotator* OutTargetAimRot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPSetInitialAimOffsetTargets");
		
		ADinopithecus_Character_BP_C_BPSetInitialAimOffsetTargets_Params params {};
		params.TargetRootLoc = TargetRootLoc;
		params.TargetAimRot = TargetAimRot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutTargetRootLoc != nullptr)
			*OutTargetRootLoc = params.OutTargetRootLoc;
		if (OutTargetAimRot != nullptr)
			*OutTargetAimRot = params.OutTargetAimRot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetFallingLatchingAngles
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<float>                                      FallingLatchingAngles                                      (Parm, OutParm, ZeroConstructor)
	 */
	void ADinopithecus_Character_BP_C::GetFallingLatchingAngles(TArray<float>* FallingLatchingAngles)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetFallingLatchingAngles");
		
		ADinopithecus_Character_BP_C_GetFallingLatchingAngles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FallingLatchingAngles != nullptr)
			*FallingLatchingAngles = params.FallingLatchingAngles;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.IsValidUberpounceDataForLatching
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FUberpounceData                             Data                                                       (Parm)
	 * 		bool                                               ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::IsValidUberpounceDataForLatching(const struct FUberpounceData& Data, bool* ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.IsValidUberpounceDataForLatching");
		
		ADinopithecus_Character_BP_C_IsValidUberpounceDataForLatching_Params params {};
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
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.IsValidDirectionForLatchingSurfaceTrace
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ADinopithecus_Character_BP_C::IsValidDirectionForLatchingSurfaceTrace(const struct FVector& Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.IsValidDirectionForLatchingSurfaceTrace");
		
		ADinopithecus_Character_BP_C_IsValidDirectionForLatchingSurfaceTrace_Params params {};
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.On Move Left Pressed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::OnMoveLeftPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.On Move Left Pressed");
		
		ADinopithecus_Character_BP_C_OnMoveLeftPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.On Move Left Released
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::OnMoveLeftReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.On Move Left Released");
		
		ADinopithecus_Character_BP_C_OnMoveLeftReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.On Move Right Pressed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::OnMoveRightPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.On Move Right Pressed");
		
		ADinopithecus_Character_BP_C_OnMoveRightPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.On Move Right Released
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::OnMoveRightReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.On Move Right Released");
		
		ADinopithecus_Character_BP_C_OnMoveRightReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.On Move Backward Pressed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::OnMoveBackwardPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.On Move Backward Pressed");
		
		ADinopithecus_Character_BP_C_OnMoveBackwardPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.On Move Forward Pressed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::OnMoveForwardPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.On Move Forward Pressed");
		
		ADinopithecus_Character_BP_C_OnMoveForwardPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.On Move Backward Released
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::OnMoveBackwardReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.On Move Backward Released");
		
		ADinopithecus_Character_BP_C_OnMoveBackwardReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnMoveForwardReleased
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::OnMoveForwardReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnMoveForwardReleased");
		
		ADinopithecus_Character_BP_C_OnMoveForwardReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.InterceptInputEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      InputName                                                  (Parm, ZeroConstructor)
	 */
	void ADinopithecus_Character_BP_C::InterceptInputEvent(const class FString& InputName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.InterceptInputEvent");
		
		ADinopithecus_Character_BP_C_InterceptInputEvent_Params params {};
		params.InputName = InputName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Find Next Valid Uberpounce Location
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::FindNextValidUberpounceLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Find Next Valid Uberpounce Location");
		
		ADinopithecus_Character_BP_C_FindNextValidUberpounceLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimNotify*                                 AnimNotifyObject                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::BlueprintAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BlueprintAnimNotifyCustomEvent");
		
		ADinopithecus_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params {};
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
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPOnStartJump
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ADinopithecus_Character_BP_C::BPOnStartJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPOnStartJump");
		
		ADinopithecus_Character_BP_C_BPOnStartJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPTimerServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPTimerServer");
		
		ADinopithecus_Character_BP_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPTimerNonDedicated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::BPTimerNonDedicated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPTimerNonDedicated");
		
		ADinopithecus_Character_BP_C_BPTimerNonDedicated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.HasRequiredAmmoItems
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            TypeIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bFoundAllItems                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            OutQuantity                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::HasRequiredAmmoItems(int32_t TypeIndex, bool* bFoundAllItems, int32_t* OutQuantity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.HasRequiredAmmoItems");
		
		ADinopithecus_Character_BP_C_HasRequiredAmmoItems_Params params {};
		params.TypeIndex = TypeIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bFoundAllItems != nullptr)
			*bFoundAllItems = params.bFoundAllItems;
		if (OutQuantity != nullptr)
			*OutQuantity = params.OutQuantity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BlueprintCanRiderAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ADinopithecus_Character_BP_C::BlueprintCanRiderAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BlueprintCanRiderAttack");
		
		ADinopithecus_Character_BP_C_BlueprintCanRiderAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetBestPoopItem
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 BestPoop                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::GetBestPoopItem(class UPrimalItem** BestPoop)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetBestPoopItem");
		
		ADinopithecus_Character_BP_C_GetBestPoopItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BestPoop != nullptr)
			*BestPoop = params.BestPoop;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetAmmoItemsToConsume
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            TypeIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class UPrimalItem*>                         Items                                                      (Parm, OutParm, ZeroConstructor)
	 * 		bool                                               bFoundAllItems                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::GetAmmoItemsToConsume(int32_t TypeIndex, TArray<class UPrimalItem*>* Items, bool* bFoundAllItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetAmmoItemsToConsume");
		
		ADinopithecus_Character_BP_C_GetAmmoItemsToConsume_Params params {};
		params.TypeIndex = TypeIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Items != nullptr)
			*Items = params.Items;
		if (bFoundAllItems != nullptr)
			*bFoundAllItems = params.bFoundAllItems;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetMeshForProjectileType
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            SelectedIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UStaticMesh*                                 Mesh                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::GetMeshForProjectileType(int32_t SelectedIndex, class UStaticMesh** Mesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetMeshForProjectileType");
		
		ADinopithecus_Character_BP_C_GetMeshForProjectileType_Params params {};
		params.SelectedIndex = SelectedIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Mesh != nullptr)
			*Mesh = params.Mesh;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.WantsToRun
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::WantsToRun(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.WantsToRun");
		
		ADinopithecus_Character_BP_C_WantsToRun_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnNonInstanceJumpOffWallInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              HoldTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::OnNonInstanceJumpOffWallInput(float HoldTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnNonInstanceJumpOffWallInput");
		
		ADinopithecus_Character_BP_C_OnNonInstanceJumpOffWallInput_Params params {};
		params.HoldTime = HoldTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetLatchJumpSpeedThresholdForRotate
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::GetLatchJumpSpeedThresholdForRotate(float* Res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetLatchJumpSpeedThresholdForRotate");
		
		ADinopithecus_Character_BP_C_GetLatchJumpSpeedThresholdForRotate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Res != nullptr)
			*Res = params.Res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPHandleControllerInitiatedAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ADinopithecus_Character_BP_C::BPHandleControllerInitiatedAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPHandleControllerInitiatedAttack");
		
		ADinopithecus_Character_BP_C_BPHandleControllerInitiatedAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AdjustIKHalfLegLength
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Default                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::AdjustIKHalfLegLength(bool Default)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AdjustIKHalfLegLength");
		
		ADinopithecus_Character_BP_C_AdjustIKHalfLegLength_Params params {};
		params.Default = Default;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPCanCryo
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ADinopithecus_Character_BP_C::BPCanCryo(class AShooterPlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPCanCryo");
		
		ADinopithecus_Character_BP_C_BPCanCryo_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.CanSequentialJump
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::CanSequentialJump(bool* ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.CanSequentialJump");
		
		ADinopithecus_Character_BP_C_CanSequentialJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Throttled TickFn
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::ThrottledTickFn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Throttled TickFn");
		
		ADinopithecus_Character_BP_C_ThrottledTickFn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPAcknowledgeServerCorrection
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              TimeStamp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     NewLoc                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     NewVel                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         NewBase                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        NewBaseBoneName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bHasBase                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bBaseRelativePosition                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      ServerMovementMode                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ADinopithecus_Character_BP_C::BPAcknowledgeServerCorrection(float TimeStamp, const struct FVector& NewLoc, const struct FVector& NewVel, class UPrimitiveComponent* NewBase, const class FName& NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPAcknowledgeServerCorrection");
		
		ADinopithecus_Character_BP_C_BPAcknowledgeServerCorrection_Params params {};
		params.TimeStamp = TimeStamp;
		params.NewLoc = NewLoc;
		params.NewVel = NewVel;
		params.NewBase = NewBase;
		params.NewBaseBoneName = NewBaseBoneName;
		params.bHasBase = bHasBase;
		params.bBaseRelativePosition = bBaseRelativePosition;
		params.ServerMovementMode = ServerMovementMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ReplicateMovementToSimulatedClients
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ADinopithecus_Character_BP_C::ReplicateMovementToSimulatedClients()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ReplicateMovementToSimulatedClients");
		
		ADinopithecus_Character_BP_C_ReplicateMovementToSimulatedClients_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateBerzerk
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::UpdateBerzerk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateBerzerk");
		
		ADinopithecus_Character_BP_C_UpdateBerzerk_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetCameraInterpSpeed
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              InterpSpeed                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::GetCameraInterpSpeed(float* InterpSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetCameraInterpSpeed");
		
		ADinopithecus_Character_BP_C_GetCameraInterpSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InterpSpeed != nullptr)
			*InterpSpeed = params.InterpSpeed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnJumpFromGround
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              HoldTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::OnJumpFromGround(float HoldTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnJumpFromGround");
		
		ADinopithecus_Character_BP_C_OnJumpFromGround_Params params {};
		params.HoldTime = HoldTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetProjectileTypeForRockThrow
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UClass*                                      TypeName                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::GetProjectileTypeForRockThrow(class UClass** TypeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetProjectileTypeForRockThrow");
		
		ADinopithecus_Character_BP_C_GetProjectileTypeForRockThrow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TypeName != nullptr)
			*TypeName = params.TypeName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Get RockThrowAttack Anim Index from Idle Anim
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::GetRockThrowAttackAnimIndexfromIdleAnim(int32_t* ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Get RockThrowAttack Anim Index from Idle Anim");
		
		ADinopithecus_Character_BP_C_GetRockThrowAttackAnimIndexfromIdleAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GrabRock
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::GrabRock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GrabRock");
		
		ADinopithecus_Character_BP_C_GrabRock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.CanJumpInternal
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ADinopithecus_Character_BP_C::CanJumpInternal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.CanJumpInternal");
		
		ADinopithecus_Character_BP_C_CanJumpInternal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ThrowRock
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::ThrowRock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ThrowRock");
		
		ADinopithecus_Character_BP_C_ThrowRock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Is Super Uberpounce
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::IsSuperUberpounce(bool* ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Is Super Uberpounce");
		
		ADinopithecus_Character_BP_C_IsSuperUberpounce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetUberpounceInterpSpeed
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Speed                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::GetUberpounceInterpSpeed(float* Speed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetUberpounceInterpSpeed");
		
		ADinopithecus_Character_BP_C_GetUberpounceInterpSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Speed != nullptr)
			*Speed = params.Speed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetInitialAnimationForUberpounce
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               QuickUberpounce                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimMontage*                                OutAnim                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        RetStartSectionName                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::GetInitialAnimationForUberpounce(bool QuickUberpounce, class UAnimMontage** OutAnim, class FName* RetStartSectionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetInitialAnimationForUberpounce");
		
		ADinopithecus_Character_BP_C_GetInitialAnimationForUberpounce_Params params {};
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
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateIdleAnim
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EShapeshifterIdleAnimEnum                          newIdle                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::UpdateIdleAnim(EShapeshifterIdleAnimEnum newIdle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateIdleAnim");
		
		ADinopithecus_Character_BP_C_UpdateIdleAnim_Params params {};
		params.newIdle = newIdle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetUberpounceRangeBase
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::GetUberpounceRangeBase(float* ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetUberpounceRangeBase");
		
		ADinopithecus_Character_BP_C_GetUberpounceRangeBase_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetUberpounceMaxRange
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::GetUberpounceMaxRange(float* ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetUberpounceMaxRange");
		
		ADinopithecus_Character_BP_C_GetUberpounceMaxRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPGetCrosshairAlpha
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ADinopithecus_Character_BP_C::BPGetCrosshairAlpha()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPGetCrosshairAlpha");
		
		ADinopithecus_Character_BP_C_BPGetCrosshairAlpha_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetDamageResistancePercentFromAddiction
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::GetDamageResistancePercentFromAddiction(float* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetDamageResistancePercentFromAddiction");
		
		ADinopithecus_Character_BP_C_GetDamageResistancePercentFromAddiction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Get AnimSpeedBonus from Addiction
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::GetAnimSpeedBonusfromAddiction(float* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Get AnimSpeedBonus from Addiction");
		
		ADinopithecus_Character_BP_C_GetAnimSpeedBonusfromAddiction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetDamageMultiFromAddiction
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::GetDamageMultiFromAddiction(float* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetDamageMultiFromAddiction");
		
		ADinopithecus_Character_BP_C_GetDamageMultiFromAddiction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnUberpounceStateChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EUberpounceState                                   NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EUberpounceState                                   PrevState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::OnUberpounceStateChanged(EUberpounceState NewState, EUberpounceState PrevState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnUberpounceStateChanged");
		
		ADinopithecus_Character_BP_C_OnUberpounceStateChanged_Params params {};
		params.NewState = NewState;
		params.PrevState = PrevState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPDinoTooltipCustomTorpidityProgressBar
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               overrideTorpidityProgressBarIfActive                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              progressPercent                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Label                                                      (Parm, OutParm, ZeroConstructor)
	 */
	bool ADinopithecus_Character_BP_C::BPDinoTooltipCustomTorpidityProgressBar(bool* overrideTorpidityProgressBarIfActive, float* progressPercent, class FString* Label)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPDinoTooltipCustomTorpidityProgressBar");
		
		ADinopithecus_Character_BP_C_BPDinoTooltipCustomTorpidityProgressBar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (overrideTorpidityProgressBarIfActive != nullptr)
			*overrideTorpidityProgressBarIfActive = params.overrideTorpidityProgressBarIfActive;
		if (progressPercent != nullptr)
			*progressPercent = params.progressPercent;
		if (Label != nullptr)
			*Label = params.Label;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> ADinopithecus_Character_BP_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPGetMultiUseEntries");
		
		ADinopithecus_Character_BP_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AddBerzerkDamage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Dmg                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::AddBerzerkDamage(float Dmg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AddBerzerkDamage");
		
		ADinopithecus_Character_BP_C_AddBerzerkDamage_Params params {};
		params.Dmg = Dmg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnRep_LatchIdleAnimRep
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::OnRep_LatchIdleAnimRep()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnRep_LatchIdleAnimRep");
		
		ADinopithecus_Character_BP_C_OnRep_LatchIdleAnimRep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPOverrideTamingDescriptionLabel
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSlateColor                                 TextColor                                                  (Parm, OutParm, ReferenceParm)
	 */
	class FString ADinopithecus_Character_BP_C::BPOverrideTamingDescriptionLabel(struct FSlateColor* TextColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPOverrideTamingDescriptionLabel");
		
		ADinopithecus_Character_BP_C_BPOverrideTamingDescriptionLabel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TextColor != nullptr)
			*TextColor = params.TextColor;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AllowPlayMontage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                AnimMontage                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ADinopithecus_Character_BP_C::AllowPlayMontage(class UAnimMontage* AnimMontage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AllowPlayMontage");
		
		ADinopithecus_Character_BP_C_AllowPlayMontage_Params params {};
		params.AnimMontage = AnimMontage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.PrintHealth
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalCharacterStatusComponent*             Status                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::PrintHealth(class UPrimalCharacterStatusComponent* Status)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.PrintHealth");
		
		ADinopithecus_Character_BP_C_PrintHealth_Params params {};
		params.Status = Status;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.StartUberPounce
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FUberpounceData                             Data                                                       (Parm)
	 */
	void ADinopithecus_Character_BP_C::StartUberPounce(const struct FUberpounceData& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.StartUberPounce");
		
		ADinopithecus_Character_BP_C_StartUberPounce_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.K2_OnMovementModeChanged
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EMovementMode                                      NewMovementMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      PrevCustomMode                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      NewCustomMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::K2_OnMovementModeChanged(EMovementMode PrevMovementMode, EMovementMode NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.K2_OnMovementModeChanged");
		
		ADinopithecus_Character_BP_C_K2_OnMovementModeChanged_Params params {};
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
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnRep_LastUberpounceJumpTime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::OnRep_LastUberpounceJumpTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnRep_LastUberpounceJumpTime");
		
		ADinopithecus_Character_BP_C_OnRep_LastUberpounceJumpTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.LatchedJumpAttached
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::LatchedJumpAttached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.LatchedJumpAttached");
		
		ADinopithecus_Character_BP_C_LatchedJumpAttached_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.On Uberpounce AttachedToLocation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::OnUberpounceAttachedToLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.On Uberpounce AttachedToLocation");
		
		ADinopithecus_Character_BP_C_OnUberpounceAttachedToLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPDisplayTamedMessage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ADinopithecus_Character_BP_C::BPDisplayTamedMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPDisplayTamedMessage");
		
		ADinopithecus_Character_BP_C_BPDisplayTamedMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.PrintStats
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalCharacterStatusComponent*             StatusComp                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::PrintStats(class UPrimalCharacterStatusComponent* StatusComp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.PrintStats");
		
		ADinopithecus_Character_BP_C_PrintStats_Params params {};
		params.StatusComp = StatusComp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Get Pounce Latched Anim
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                Anim                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        StartSectionName                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::GetPounceLatchedAnim(class UAnimMontage** Anim, class FName* StartSectionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Get Pounce Latched Anim");
		
		ADinopithecus_Character_BP_C_GetPounceLatchedAnim_Params params {};
		
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
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ResetMeshRelativeLocation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::ResetMeshRelativeLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ResetMeshRelativeLocation");
		
		ADinopithecus_Character_BP_C_ResetMeshRelativeLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.RidingTick
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::RidingTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.RidingTick");
		
		ADinopithecus_Character_BP_C_RidingTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPOnAnimPlayedNotify
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                AnimMontage                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              InPlayRate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        StartSectionName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bReplicate                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bReplicateToOwner                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bForceTickPoseAndServerUpdateMesh                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bForceTickPoseOnServer                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::BPOnAnimPlayedNotify(class UAnimMontage* AnimMontage, float InPlayRate, const class FName& StartSectionName, bool bReplicate, bool bReplicateToOwner, bool bForceTickPoseAndServerUpdateMesh, bool bForceTickPoseOnServer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPOnAnimPlayedNotify");
		
		ADinopithecus_Character_BP_C_BPOnAnimPlayedNotify_Params params {};
		params.AnimMontage = AnimMontage;
		params.InPlayRate = InPlayRate;
		params.StartSectionName = StartSectionName;
		params.bReplicate = bReplicate;
		params.bReplicateToOwner = bReplicateToOwner;
		params.bForceTickPoseAndServerUpdateMesh = bForceTickPoseAndServerUpdateMesh;
		params.bForceTickPoseOnServer = bForceTickPoseOnServer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPDinoTooltipCustomTamingProgressBar
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               overrideTamingProgressBarIfActive                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              progressPercent                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Label                                                      (Parm, OutParm, ZeroConstructor)
	 */
	bool ADinopithecus_Character_BP_C::BPDinoTooltipCustomTamingProgressBar(bool* overrideTamingProgressBarIfActive, float* progressPercent, class FString* Label)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPDinoTooltipCustomTamingProgressBar");
		
		ADinopithecus_Character_BP_C_BPDinoTooltipCustomTamingProgressBar_Params params {};
		
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
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BlueprintCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ADinopithecus_Character_BP_C::BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BlueprintCanAttack");
		
		ADinopithecus_Character_BP_C_BlueprintCanAttack_Params params {};
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
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.CalculateDamageTakenRequiredForBerzerk
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::CalculateDamageTakenRequiredForBerzerk(float* ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.CalculateDamageTakenRequiredForBerzerk");
		
		ADinopithecus_Character_BP_C_CalculateDamageTakenRequiredForBerzerk_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              IncomingDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (Parm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  PointHitInfo                                               (Parm)
	 */
	float ADinopithecus_Character_BP_C::BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPAdjustDamage");
		
		ADinopithecus_Character_BP_C_BPAdjustDamage_Params params {};
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
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.CalculateTotalTimeTransformed
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::CalculateTotalTimeTransformed(float* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.CalculateTotalTimeTransformed");
		
		ADinopithecus_Character_BP_C_CalculateTotalTimeTransformed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.SetSmallsInstance
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        Instance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::SetSmallsInstance(class APrimalDinoCharacter* Instance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.SetSmallsInstance");
		
		ADinopithecus_Character_BP_C_SetSmallsInstance_Params params {};
		params.Instance = Instance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.SpawnSmalls
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::SpawnSmalls()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.SpawnSmalls");
		
		ADinopithecus_Character_BP_C_SpawnSmalls_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BP_InterceptMoveRight
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ADinopithecus_Character_BP_C::BP_InterceptMoveRight(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BP_InterceptMoveRight");
		
		ADinopithecus_Character_BP_C_BP_InterceptMoveRight_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnPinnedBuffEnded
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            BuffTarget                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::OnPinnedBuffEnded(class APrimalCharacter* BuffTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnPinnedBuffEnded");
		
		ADinopithecus_Character_BP_C_OnPinnedBuffEnded_Params params {};
		params.BuffTarget = BuffTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BP_InterceptMoveForward
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ADinopithecus_Character_BP_C::BP_InterceptMoveForward(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BP_InterceptMoveForward");
		
		ADinopithecus_Character_BP_C_BP_InterceptMoveForward_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetUberpounceRotationFromSocket
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        Socket                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    Rotation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::GetUberpounceRotationFromSocket(class APrimalCharacter* Target, const class FName& Socket, struct FRotator* Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetUberpounceRotationFromSocket");
		
		ADinopithecus_Character_BP_C_GetUberpounceRotationFromSocket_Params params {};
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
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.QueueSequential Jump
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::QueueSequentialJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.QueueSequential Jump");
		
		ADinopithecus_Character_BP_C_QueueSequentialJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BP_PreventMovementMode
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      NewMovementMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      NewCustomMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ADinopithecus_Character_BP_C::BP_PreventMovementMode(EMovementMode NewMovementMode, unsigned char NewCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BP_PreventMovementMode");
		
		ADinopithecus_Character_BP_C_BP_PreventMovementMode_Params params {};
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
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPOverrideGetAttackAnimationIndex
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class UAnimMontage*>                        AnimationArray                                             (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	int32_t ADinopithecus_Character_BP_C::BPOverrideGetAttackAnimationIndex(int32_t AttackIndex, TArray<class UAnimMontage*>* AnimationArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPOverrideGetAttackAnimationIndex");
		
		ADinopithecus_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params params {};
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
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPGetHUDElements
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FHUDElement>                         OutElements                                                (Parm, OutParm, ZeroConstructor)
	 */
	void ADinopithecus_Character_BP_C::BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPGetHUDElements");
		
		ADinopithecus_Character_BP_C_BPGetHUDElements_Params params {};
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
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.StartBerzerk
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::StartBerzerk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.StartBerzerk");
		
		ADinopithecus_Character_BP_C_StartBerzerk_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.IsBerzerk
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::IsBerzerk(bool* ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.IsBerzerk");
		
		ADinopithecus_Character_BP_C_IsBerzerk_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BP_OnJumpReleased
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::BP_OnJumpReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BP_OnJumpReleased");
		
		ADinopithecus_Character_BP_C_BP_OnJumpReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPUnstasis
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::BPUnstasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPUnstasis");
		
		ADinopithecus_Character_BP_C_BPUnstasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetDebugString
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Output                                                     (Parm, OutParm, ZeroConstructor)
	 */
	void ADinopithecus_Character_BP_C::GetDebugString(class FString* Output)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetDebugString");
		
		ADinopithecus_Character_BP_C_GetDebugString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Output != nullptr)
			*Output = params.Output;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateUberpounceFn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::UpdateUberpounceFn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdateUberpounceFn");
		
		ADinopithecus_Character_BP_C_UpdateUberpounceFn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetInitialAnimationForUberpouncePublic
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                AnimMontage                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::GetInitialAnimationForUberpouncePublic(class UAnimMontage** AnimMontage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.GetInitialAnimationForUberpouncePublic");
		
		ADinopithecus_Character_BP_C_GetInitialAnimationForUberpouncePublic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimMontage != nullptr)
			*AnimMontage = params.AnimMontage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnPounceStarted
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::OnPounceStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnPounceStarted");
		
		ADinopithecus_Character_BP_C_OnPounceStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdatePounceFn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::UpdatePounceFn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdatePounceFn");
		
		ADinopithecus_Character_BP_C_UpdatePounceFn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Compute Pounce Transform
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     CurrentLoc                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    CurrentRot                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     NewLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    NewRotation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UpdatedTransform                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::ComputePounceTransform(const struct FVector& CurrentLoc, const struct FRotator& CurrentRot, struct FVector* NewLocation, struct FRotator* NewRotation, bool* UpdatedTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Compute Pounce Transform");
		
		ADinopithecus_Character_BP_C_ComputePounceTransform_Params params {};
		params.CurrentLoc = CurrentLoc;
		params.CurrentRot = CurrentRot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewLocation != nullptr)
			*NewLocation = params.NewLocation;
		if (NewRotation != nullptr)
			*NewRotation = params.NewRotation;
		if (UpdatedTransform != nullptr)
			*UpdatedTransform = params.UpdatedTransform;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPPreventOrderAllowed
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            FromCharacter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EDinoTamedOrder                                    OrderType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bForce                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      enemyTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               orderNotExecuted                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ADinopithecus_Character_BP_C::BPPreventOrderAllowed(class APrimalCharacter* FromCharacter, EDinoTamedOrder OrderType, bool bForce, class AActor* enemyTarget, bool orderNotExecuted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPPreventOrderAllowed");
		
		ADinopithecus_Character_BP_C_BPPreventOrderAllowed_Params params {};
		params.FromCharacter = FromCharacter;
		params.OrderType = OrderType;
		params.bForce = bForce;
		params.enemyTarget = enemyTarget;
		params.orderNotExecuted = orderNotExecuted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Get Pounce Target
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Loc                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    Rot                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::GetPounceTarget(struct FVector* Loc, struct FRotator* Rot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Get Pounce Target");
		
		ADinopithecus_Character_BP_C_GetPounceTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Loc != nullptr)
			*Loc = params.Loc;
		if (Rot != nullptr)
			*Rot = params.Rot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPServerHandleNetExecCommand
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           FromPC                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        CommandName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (Parm, OutParm, ReferenceParm)
	 */
	bool ADinopithecus_Character_BP_C::BPServerHandleNetExecCommand(class APlayerController* FromPC, const class FName& CommandName, struct FBPNetExecParams* ExecParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPServerHandleNetExecCommand");
		
		ADinopithecus_Character_BP_C_BPServerHandleNetExecCommand_Params params {};
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
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.PounceAttachToCharacter
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::PounceAttachToCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.PounceAttachToCharacter");
		
		ADinopithecus_Character_BP_C_PounceAttachToCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnRep_PounceStateReplicated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::OnRep_PounceStateReplicated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnRep_PounceStateReplicated");
		
		ADinopithecus_Character_BP_C_OnRep_PounceStateReplicated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.SetPounceState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EShapeshifter_Large_PounceState                    NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::SetPounceState(EShapeshifter_Large_PounceState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.SetPounceState");
		
		ADinopithecus_Character_BP_C_SetPounceState_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.EndPounce
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::EndPounce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.EndPounce");
		
		ADinopithecus_Character_BP_C_EndPounce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.StartPounce
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::StartPounce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.StartPounce");
		
		ADinopithecus_Character_BP_C_StartPounce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.SetPounceTarget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::SetPounceTarget(class APrimalCharacter* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.SetPounceTarget");
		
		ADinopithecus_Character_BP_C_SetPounceTarget_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPNotifyClearRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderClearing                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::BPNotifyClearRider(class AShooterCharacter* RiderClearing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPNotifyClearRider");
		
		ADinopithecus_Character_BP_C_BPNotifyClearRider_Params params {};
		params.RiderClearing = RiderClearing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPNotifySetRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderSetting                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::BPNotifySetRider(class AShooterCharacter* RiderSetting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BPNotifySetRider");
		
		ADinopithecus_Character_BP_C_BPNotifySetRider_Params params {};
		params.RiderSetting = RiderSetting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnLanded
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (Parm, OutParm, ReferenceParm)
	 */
	void ADinopithecus_Character_BP_C::OnLanded(struct FHitResult* Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.OnLanded");
		
		ADinopithecus_Character_BP_C_OnLanded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Hit != nullptr)
			*Hit = params.Hit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.DrawDebugRotator
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Position                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Thickness                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::DrawDebugRotator(const struct FVector& Position, const struct FRotator& Rotation, float Duration, float Thickness, float Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.DrawDebugRotator");
		
		ADinopithecus_Character_BP_C_DrawDebugRotator_Params params {};
		params.Position = Position;
		params.Rotation = Rotation;
		params.Duration = Duration;
		params.Thickness = Thickness;
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ReceiveTick");
		
		ADinopithecus_Character_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ReceivePossessed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 NewController                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::ReceivePossessed(class AController* NewController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ReceivePossessed");
		
		ADinopithecus_Character_BP_C_ReceivePossessed_Params params {};
		params.NewController = NewController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ReceiveBeginPlay");
		
		ADinopithecus_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UserConstructionScript");
		
		ADinopithecus_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_256
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::InpActEvt_Crouch_K2Node_InputActionEvent_256()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_256");
		
		ADinopithecus_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_256_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.MultiOnLanded
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::MultiOnLanded(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.MultiOnLanded");
		
		ADinopithecus_Character_BP_C_MultiOnLanded_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerSetPounceTarget
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::ServerSetPounceTarget(class APrimalCharacter* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerSetPounceTarget");
		
		ADinopithecus_Character_BP_C_ServerSetPounceTarget_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerEndPounce
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::ServerEndPounce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerEndPounce");
		
		ADinopithecus_Character_BP_C_ServerEndPounce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.MultiEndPounce
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::MultiEndPounce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.MultiEndPounce");
		
		ADinopithecus_Character_BP_C_MultiEndPounce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdatePounce
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::UpdatePounce()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.UpdatePounce");
		
		ADinopithecus_Character_BP_C_UpdatePounce_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerStartJump
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::ServerStartJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerStartJump");
		
		ADinopithecus_Character_BP_C_ServerStartJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_DoJump
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::AnimNotify_DoJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_DoJump");
		
		ADinopithecus_Character_BP_C_AnimNotify_DoJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.QueueSequentialJumpEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::QueueSequentialJumpEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.QueueSequentialJumpEvent");
		
		ADinopithecus_Character_BP_C_QueueSequentialJumpEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerSetLastTimeReleaseJumpWhileFalling
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Time                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Velocity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     CameraDirection                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::ServerSetLastTimeReleaseJumpWhileFalling(double Time, const struct FVector& Velocity, const struct FVector& CameraDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerSetLastTimeReleaseJumpWhileFalling");
		
		ADinopithecus_Character_BP_C_ServerSetLastTimeReleaseJumpWhileFalling_Params params {};
		params.Time = Time;
		params.Velocity = Velocity;
		params.CameraDirection = CameraDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_SequentialJumpTakeOff
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::AnimNotify_SequentialJumpTakeOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_SequentialJumpTakeOff");
		
		ADinopithecus_Character_BP_C_AnimNotify_SequentialJumpTakeOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerForwardInputDuringSequentialJump
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Axis                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::ServerForwardInputDuringSequentialJump(float Axis)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerForwardInputDuringSequentialJump");
		
		ADinopithecus_Character_BP_C_ServerForwardInputDuringSequentialJump_Params params {};
		params.Axis = Axis;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.MultiUpdateVelocity
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     NewVelocity                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::MultiUpdateVelocity(const struct FVector& NewVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.MultiUpdateVelocity");
		
		ADinopithecus_Character_BP_C_MultiUpdateVelocity_Params params {};
		params.NewVelocity = NewVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_AOEGroundPound
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::AnimNotify_AOEGroundPound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_AOEGroundPound");
		
		ADinopithecus_Character_BP_C_AnimNotify_AOEGroundPound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_SwipeAttack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::AnimNotify_SwipeAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_SwipeAttack");
		
		ADinopithecus_Character_BP_C_AnimNotify_SwipeAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_ChargingMeleeStart
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::AnimNotify_ChargingMeleeStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_ChargingMeleeStart");
		
		ADinopithecus_Character_BP_C_AnimNotify_ChargingMeleeStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_ChargingMeleeEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::AnimNotify_ChargingMeleeEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_ChargingMeleeEnd");
		
		ADinopithecus_Character_BP_C_AnimNotify_ChargingMeleeEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ChargingMeleeTick
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::ChargingMeleeTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ChargingMeleeTick");
		
		ADinopithecus_Character_BP_C_ChargingMeleeTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_CameraShake
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::AnimNotify_CameraShake()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_CameraShake");
		
		ADinopithecus_Character_BP_C_AnimNotify_CameraShake_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerLeftRightInputDuringSequentialJump
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::ServerLeftRightInputDuringSequentialJump(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerLeftRightInputDuringSequentialJump");
		
		ADinopithecus_Character_BP_C_ServerLeftRightInputDuringSequentialJump_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_CameraShakeLight
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::AnimNotify_CameraShakeLight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_CameraShakeLight");
		
		ADinopithecus_Character_BP_C_AnimNotify_CameraShakeLight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.DeleteSmallsEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::DeleteSmallsEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.DeleteSmallsEvent");
		
		ADinopithecus_Character_BP_C_DeleteSmallsEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.StartBerzerkEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::StartBerzerkEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.StartBerzerkEvent");
		
		ADinopithecus_Character_BP_C_StartBerzerkEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_ResetAnimSpeed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::AnimNotify_ResetAnimSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_ResetAnimSpeed");
		
		ADinopithecus_Character_BP_C_AnimNotify_ResetAnimSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_ThrowRider
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::AnimNotify_ThrowRider()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_ThrowRider");
		
		ADinopithecus_Character_BP_C_AnimNotify_ThrowRider_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_StartRoar
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::AnimNotify_StartRoar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_StartRoar");
		
		ADinopithecus_Character_BP_C_AnimNotify_StartRoar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_StopRoar
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::AnimNotify_StopRoar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_StopRoar");
		
		ADinopithecus_Character_BP_C_AnimNotify_StopRoar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_ClearRider
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::AnimNotify_ClearRider()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_ClearRider");
		
		ADinopithecus_Character_BP_C_AnimNotify_ClearRider_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_CheckForFallingLatch
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::AnimNotify_CheckForFallingLatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_CheckForFallingLatch");
		
		ADinopithecus_Character_BP_C_AnimNotify_CheckForFallingLatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerRequestUberpounceJump
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Velocity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::ServerRequestUberpounceJump(const struct FVector& Velocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerRequestUberpounceJump");
		
		ADinopithecus_Character_BP_C_ServerRequestUberpounceJump_Params params {};
		params.Velocity = Velocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_DoUberpounceJump
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::AnimNotify_DoUberpounceJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_DoUberpounceJump");
		
		ADinopithecus_Character_BP_C_AnimNotify_DoUberpounceJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BackupDestroy
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::BackupDestroy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.BackupDestroy");
		
		ADinopithecus_Character_BP_C_BackupDestroy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_LatchedJumpAttached
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::AnimNotify_LatchedJumpAttached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_LatchedJumpAttached");
		
		ADinopithecus_Character_BP_C_AnimNotify_LatchedJumpAttached_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_QueuedRoar
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::AnimNotify_QueuedRoar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_QueuedRoar");
		
		ADinopithecus_Character_BP_C_AnimNotify_QueuedRoar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerSetPounceAnticipationIdle
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsAnticipIdle                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::ServerSetPounceAnticipationIdle(bool IsAnticipIdle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerSetPounceAnticipationIdle");
		
		ADinopithecus_Character_BP_C_ServerSetPounceAnticipationIdle_Params params {};
		params.IsAnticipIdle = IsAnticipIdle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerSetIsHoldingProne
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HoldingCrouch                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     CameraLocation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     CameraDirection                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bReset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::ServerSetIsHoldingProne(bool HoldingCrouch, const struct FVector& CameraLocation, const struct FVector& CameraDirection, bool bReset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerSetIsHoldingProne");
		
		ADinopithecus_Character_BP_C_ServerSetIsHoldingProne_Params params {};
		params.HoldingCrouch = HoldingCrouch;
		params.CameraLocation = CameraLocation;
		params.CameraDirection = CameraDirection;
		params.bReset = bReset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_GrabRock
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::AnimNotify_GrabRock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_GrabRock");
		
		ADinopithecus_Character_BP_C_AnimNotify_GrabRock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_ThrowRock
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::AnimNotify_ThrowRock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_ThrowRock");
		
		ADinopithecus_Character_BP_C_AnimNotify_ThrowRock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerRequestSequentialJump
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::ServerRequestSequentialJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerRequestSequentialJump");
		
		ADinopithecus_Character_BP_C_ServerRequestSequentialJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_AOEJumpStart
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::AnimNotify_AOEJumpStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_AOEJumpStart");
		
		ADinopithecus_Character_BP_C_AnimNotify_AOEJumpStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_AOEJumpEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::AnimNotify_AOEJumpEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_AOEJumpEnd");
		
		ADinopithecus_Character_BP_C_AnimNotify_AOEJumpEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_EnableIK
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::AnimNotify_EnableIK()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_EnableIK");
		
		ADinopithecus_Character_BP_C_AnimNotify_EnableIK_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_DisableIK
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::AnimNotify_DisableIK()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_DisableIK");
		
		ADinopithecus_Character_BP_C_AnimNotify_DisableIK_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_ShouldCancelLatch
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::AnimNotify_ShouldCancelLatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_ShouldCancelLatch");
		
		ADinopithecus_Character_BP_C_AnimNotify_ShouldCancelLatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerRequestJumpOffWallWithAnticipation
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::ServerRequestJumpOffWallWithAnticipation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerRequestJumpOffWallWithAnticipation");
		
		ADinopithecus_Character_BP_C_ServerRequestJumpOffWallWithAnticipation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_PushOffWall
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::AnimNotify_PushOffWall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.AnimNotify_PushOffWall");
		
		ADinopithecus_Character_BP_C_AnimNotify_PushOffWall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerSetLatchJumpType
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ELatchedJumpType                                   Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::ServerSetLatchJumpType(ELatchedJumpType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerSetLatchJumpType");
		
		ADinopithecus_Character_BP_C_ServerSetLatchJumpType_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.MultiExplodeProjectile
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::MultiExplodeProjectile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.MultiExplodeProjectile");
		
		ADinopithecus_Character_BP_C_MultiExplodeProjectile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerSetAmmoType
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewAmmoType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::ServerSetAmmoType(int32_t NewAmmoType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerSetAmmoType");
		
		ADinopithecus_Character_BP_C_ServerSetAmmoType_Params params {};
		params.NewAmmoType = NewAmmoType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerSetIsHoldingCrouch
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HoldingCrouch                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::ServerSetIsHoldingCrouch(bool HoldingCrouch, class AActor* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerSetIsHoldingCrouch");
		
		ADinopithecus_Character_BP_C_ServerSetIsHoldingCrouch_Params params {};
		params.HoldingCrouch = HoldingCrouch;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerSetLastJumpHoldTime
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              HoldTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::ServerSetLastJumpHoldTime(float HoldTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ServerSetLastJumpHoldTime");
		
		ADinopithecus_Character_BP_C_ServerSetLastJumpHoldTime_Params params {};
		params.HoldTime = HoldTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Multicast_BattlecryHitFX
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NrOfHits                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalCharacter*                            Char                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        Bone                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::Multicast_BattlecryHitFX(int32_t NrOfHits, class APrimalCharacter* Char, const class FName& Bone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Multicast_BattlecryHitFX");
		
		ADinopithecus_Character_BP_C_Multicast_BattlecryHitFX_Params params {};
		params.NrOfHits = NrOfHits;
		params.Char = Char;
		params.Bone = Bone;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ClearHUDReference
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::ClearHUDReference()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ClearHUDReference");
		
		ADinopithecus_Character_BP_C_ClearHUDReference_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Server_HideWeapon
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::Server_HideWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Server_HideWeapon");
		
		ADinopithecus_Character_BP_C_Server_HideWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Server_ShowWeapon
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::Server_ShowWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Server_ShowWeapon");
		
		ADinopithecus_Character_BP_C_Server_ShowWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.RunOnServer_UpdateInventory
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::RunOnServer_UpdateInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.RunOnServer_UpdateInventory");
		
		ADinopithecus_Character_BP_C_RunOnServer_UpdateInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Multi_ResetProjectileM esh
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::Multi_ResetProjectileMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Multi_ResetProjectileM esh");
		
		ADinopithecus_Character_BP_C_Multi_ResetProjectileMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ClientStartBabyRiding
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::ClientStartBabyRiding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ClientStartBabyRiding");
		
		ADinopithecus_Character_BP_C_ClientStartBabyRiding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Multi_GrabRock
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::Multi_GrabRock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.Multi_GrabRock");
		
		ADinopithecus_Character_BP_C_Multi_GrabRock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ClearUberpounceOnClearRider
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ADinopithecus_Character_BP_C::ClearUberpounceOnClearRider()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ClearUberpounceOnClearRider");
		
		ADinopithecus_Character_BP_C_ClearUberpounceOnClearRider_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ExecuteUbergraph_Dinopithecus_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ADinopithecus_Character_BP_C::ExecuteUbergraph_Dinopithecus_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Dinopithecus_Character_BP.Dinopithecus_Character_BP_C.ExecuteUbergraph_Dinopithecus_Character_BP");
		
		ADinopithecus_Character_BP_C_ExecuteUbergraph_Dinopithecus_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADinopithecus_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADinopithecus_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Dinopithecus_Character_BP.Dinopithecus_Character_BP_C");
		return ptr;
	}

}


