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
	 * 		Name   -> Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPInterceptUseAction
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABuff_BrainSlug_HumanControl_C::BPInterceptUseAction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPInterceptUseAction");
		
		ABuff_BrainSlug_HumanControl_C_BPInterceptUseAction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPPreventTekArmorBuffs
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	TArray<class FName> ABuff_BrainSlug_HumanControl_C::BPPreventTekArmorBuffs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPPreventTekArmorBuffs");
		
		ABuff_BrainSlug_HumanControl_C_BPPreventTekArmorBuffs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.InterceptInstigatorPlayerEmoteAnim
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                EmoteAnim                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_BrainSlug_HumanControl_C::InterceptInstigatorPlayerEmoteAnim(class UAnimMontage* EmoteAnim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.InterceptInstigatorPlayerEmoteAnim");
		
		ABuff_BrainSlug_HumanControl_C_InterceptInstigatorPlayerEmoteAnim_Params params {};
		params.EmoteAnim = EmoteAnim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPInstigatorSleeped
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsSleeped                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BrainSlug_HumanControl_C::BPInstigatorSleeped(bool bIsSleeped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPInstigatorSleeped");
		
		ABuff_BrainSlug_HumanControl_C_BPInstigatorSleeped_Params params {};
		params.bIsSleeped = bIsSleeped;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.DrawBuffFloatingHUD
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            BuffIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterHUD*                                 HUD                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterX                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterY                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DrawScale                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BrainSlug_HumanControl_C::DrawBuffFloatingHUD(int32_t BuffIndex, class AShooterHUD* HUD, float CenterX, float CenterY, float DrawScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.DrawBuffFloatingHUD");
		
		ABuff_BrainSlug_HumanControl_C_DrawBuffFloatingHUD_Params params {};
		params.BuffIndex = BuffIndex;
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
	 * 		Name   -> Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.GetForcedBuffAimOverride
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsWeaponAim                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FRotator ABuff_BrainSlug_HumanControl_C::GetForcedBuffAimOverride(bool bIsWeaponAim)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.GetForcedBuffAimOverride");
		
		ABuff_BrainSlug_HumanControl_C_GetForcedBuffAimOverride_Params params {};
		params.bIsWeaponAim = bIsWeaponAim;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_BrainSlug_HumanControl_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPTryMultiUse");
		
		ABuff_BrainSlug_HumanControl_C_BPTryMultiUse_Params params {};
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
	 * 		Name   -> Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> ABuff_BrainSlug_HumanControl_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPGetMultiUseEntries");
		
		ABuff_BrainSlug_HumanControl_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.UpdatePuppetteerStatus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BrainSlug_HumanControl_C::UpdatePuppetteerStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.UpdatePuppetteerStatus");
		
		ABuff_BrainSlug_HumanControl_C_UpdatePuppetteerStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BP_OverrideCharacterWalkingVelocity
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     InitialVelocity                                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              Friction                                                   (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector ABuff_BrainSlug_HumanControl_C::BP_OverrideCharacterWalkingVelocity(struct FVector* InitialVelocity, float* Friction, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BP_OverrideCharacterWalkingVelocity");
		
		ABuff_BrainSlug_HumanControl_C_BP_OverrideCharacterWalkingVelocity_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InitialVelocity != nullptr)
			*InitialVelocity = params.InitialVelocity;
		if (Friction != nullptr)
			*Friction = params.Friction;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPPreventFirstPerson
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABuff_BrainSlug_HumanControl_C::BPPreventFirstPerson()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPPreventFirstPerson");
		
		ABuff_BrainSlug_HumanControl_C_BPPreventFirstPerson_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BP_OverrideMoveForwardInput
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              CurrentInput                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ABuff_BrainSlug_HumanControl_C::BP_OverrideMoveForwardInput(float CurrentInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BP_OverrideMoveForwardInput");
		
		ABuff_BrainSlug_HumanControl_C_BP_OverrideMoveForwardInput_Params params {};
		params.CurrentInput = CurrentInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BP_OverrideMoveRightInput
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              CurrentInput                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ABuff_BrainSlug_HumanControl_C::BP_OverrideMoveRightInput(float CurrentInput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BP_OverrideMoveRightInput");
		
		ABuff_BrainSlug_HumanControl_C_BP_OverrideMoveRightInput_Params params {};
		params.CurrentInput = CurrentInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPOverrideCameraViewTarget
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
	void ABuff_BrainSlug_HumanControl_C::BPOverrideCameraViewTarget(const class FName& CurrentCameraMode, const struct FVector& DesiredCameraLocation, const struct FRotator& DesiredCameraRotation, float DesiredFOV, bool* bOverrideCameraLocation, struct FVector* CameraLocation, bool* bOverrideCameraRotation, struct FRotator* CameraRotation, bool* bOverrideCameraFOV, float* CameraFOV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPOverrideCameraViewTarget");
		
		ABuff_BrainSlug_HumanControl_C_BPOverrideCameraViewTarget_Params params {};
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
	 * 		Name   -> Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.GetBestAggressionTarget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BrainSlug_HumanControl_C::GetBestAggressionTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.GetBestAggressionTarget");
		
		ABuff_BrainSlug_HumanControl_C_GetBestAggressionTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPCheckPreventInput
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPrimalCharacterInputType                          inputType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ABuff_BrainSlug_HumanControl_C::BPCheckPreventInput(EPrimalCharacterInputType inputType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPCheckPreventInput");
		
		ABuff_BrainSlug_HumanControl_C_BPCheckPreventInput_Params params {};
		params.inputType = inputType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPPreSetupForInstigator
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BrainSlug_HumanControl_C::BPPreSetupForInstigator(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPPreSetupForInstigator");
		
		ABuff_BrainSlug_HumanControl_C_BPPreSetupForInstigator_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BrainSlug_HumanControl_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.ReceiveDestroyed");
		
		ABuff_BrainSlug_HumanControl_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPDeactivated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BrainSlug_HumanControl_C::BPDeactivated(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPDeactivated");
		
		ABuff_BrainSlug_HumanControl_C_BPDeactivated_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPSetupForInstigator
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ForInstigator                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BrainSlug_HumanControl_C::BPSetupForInstigator(class AActor* ForInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BPSetupForInstigator");
		
		ABuff_BrainSlug_HumanControl_C_BPSetupForInstigator_Params params {};
		params.ForInstigator = ForInstigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BrainSlug_HumanControl_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.UserConstructionScript");
		
		ABuff_BrainSlug_HumanControl_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.LaunchClearOfAttachment
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BrainSlug_HumanControl_C::LaunchClearOfAttachment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.LaunchClearOfAttachment");
		
		ABuff_BrainSlug_HumanControl_C_LaunchClearOfAttachment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BrainSlug_HumanControl_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.ReceiveBeginPlay");
		
		ABuff_BrainSlug_HumanControl_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.GenerateRandomWalk
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BrainSlug_HumanControl_C::GenerateRandomWalk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.GenerateRandomWalk");
		
		ABuff_BrainSlug_HumanControl_C_GenerateRandomWalk_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.DisableLookAndMove
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BrainSlug_HumanControl_C::DisableLookAndMove()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.DisableLookAndMove");
		
		ABuff_BrainSlug_HumanControl_C_DisableLookAndMove_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BuffTickClient
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BrainSlug_HumanControl_C::BuffTickClient(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BuffTickClient");
		
		ABuff_BrainSlug_HumanControl_C_BuffTickClient_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BuffTickServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BrainSlug_HumanControl_C::BuffTickServer(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BuffTickServer");
		
		ABuff_BrainSlug_HumanControl_C_BuffTickServer_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.Multi_UpdateRotation
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               SetsRotation                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    newRot                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BrainSlug_HumanControl_C::Multi_UpdateRotation(bool SetsRotation, const struct FRotator& newRot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.Multi_UpdateRotation");
		
		ABuff_BrainSlug_HumanControl_C_Multi_UpdateRotation_Params params {};
		params.SetsRotation = SetsRotation;
		params.newRot = newRot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.Multi_SetBrainCameraOverrides
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    newRot                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     NewLoc                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     NewAimDir                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BrainSlug_HumanControl_C::Multi_SetBrainCameraOverrides(const struct FRotator& newRot, const struct FVector& NewLoc, const struct FVector& NewAimDir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.Multi_SetBrainCameraOverrides");
		
		ABuff_BrainSlug_HumanControl_C_Multi_SetBrainCameraOverrides_Params params {};
		params.newRot = newRot;
		params.NewLoc = NewLoc;
		params.NewAimDir = NewAimDir;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.ServerFireWeapon
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BrainSlug_HumanControl_C::ServerFireWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.ServerFireWeapon");
		
		ABuff_BrainSlug_HumanControl_C_ServerFireWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.ForceFireWeapon
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BrainSlug_HumanControl_C::ForceFireWeapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.ForceFireWeapon");
		
		ABuff_BrainSlug_HumanControl_C_ForceFireWeapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.TryFire
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BrainSlug_HumanControl_C::TryFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.TryFire");
		
		ABuff_BrainSlug_HumanControl_C_TryFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.DealDamageTick
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BrainSlug_HumanControl_C::DealDamageTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.DealDamageTick");
		
		ABuff_BrainSlug_HumanControl_C_DealDamageTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.Multi_AddMoveInput
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BrainSlug_HumanControl_C::Multi_AddMoveInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.Multi_AddMoveInput");
		
		ABuff_BrainSlug_HumanControl_C_Multi_AddMoveInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.ServerJump
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bStartJump                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BrainSlug_HumanControl_C::ServerJump(bool bStartJump)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.ServerJump");
		
		ABuff_BrainSlug_HumanControl_C_ServerJump_Params params {};
		params.bStartJump = bStartJump;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.MultiJump
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bStartJump                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BrainSlug_HumanControl_C::MultiJump(bool bStartJump)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.MultiJump");
		
		ABuff_BrainSlug_HumanControl_C_MultiJump_Params params {};
		params.bStartJump = bStartJump;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.ServerTryRepossesion
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    NewController                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BrainSlug_HumanControl_C::ServerTryRepossesion(class AShooterPlayerController* NewController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.ServerTryRepossesion");
		
		ABuff_BrainSlug_HumanControl_C_ServerTryRepossesion_Params params {};
		params.NewController = NewController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.Multi_EnablePossession
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    NewPossessingPC                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BrainSlug_HumanControl_C::Multi_EnablePossession(class AShooterPlayerController* NewPossessingPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.Multi_EnablePossession");
		
		ABuff_BrainSlug_HumanControl_C_Multi_EnablePossession_Params params {};
		params.NewPossessingPC = NewPossessingPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BeginPossessionResponse
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BrainSlug_HumanControl_C::BeginPossessionResponse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.BeginPossessionResponse");
		
		ABuff_BrainSlug_HumanControl_C_BeginPossessionResponse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.RespondToPlayerDeath
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            DiedCharacter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BrainSlug_HumanControl_C::RespondToPlayerDeath(class APrimalCharacter* DiedCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.RespondToPlayerDeath");
		
		ABuff_BrainSlug_HumanControl_C_RespondToPlayerDeath_Params params {};
		params.DiedCharacter = DiedCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.RespondToPlayerSleep
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            forCharacter                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsSleeping                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BrainSlug_HumanControl_C::RespondToPlayerSleep(class APrimalCharacter* forCharacter, bool bIsSleeping)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.RespondToPlayerSleep");
		
		ABuff_BrainSlug_HumanControl_C_RespondToPlayerSleep_Params params {};
		params.forCharacter = forCharacter;
		params.bIsSleeping = bIsSleeping;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.DoMultiUseAccessInventory
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABuff_BrainSlug_HumanControl_C::DoMultiUseAccessInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.DoMultiUseAccessInventory");
		
		ABuff_BrainSlug_HumanControl_C_DoMultiUseAccessInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.ExecuteUbergraph_Buff_BrainSlug_HumanControl
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABuff_BrainSlug_HumanControl_C::ExecuteUbergraph_Buff_BrainSlug_HumanControl(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C.ExecuteUbergraph_Buff_BrainSlug_HumanControl");
		
		ABuff_BrainSlug_HumanControl_C_ExecuteUbergraph_Buff_BrainSlug_HumanControl_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuff_BrainSlug_HumanControl_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuff_BrainSlug_HumanControl_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Buff_BrainSlug_HumanControl.Buff_BrainSlug_HumanControl_C");
		return ptr;
	}

}


