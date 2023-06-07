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
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetHudData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HasSaddle                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               isFPV                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               HideHUDinFPV                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            LaserLevel                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            MaxLaserLevel                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              LaserDowngradeTime                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              LaserDowngradeTimerRemaining                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsLaserDowngradeTimerActive                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             LastLaserLevelChangedTime                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimalInventoryComponent*                   InventoryComponent                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      SaddleFuelItem                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      FlakCannonAmmoItem                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsUsingSuperFlight                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsUsingSuperFlightBoost                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              FuelPercent                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CannonCooldownPercent                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              EchoOrChaffCooldownPercent                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsSubmerged                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::GetHudData(bool* HasSaddle, bool* isFPV, bool* HideHUDinFPV, int32_t* LaserLevel, int32_t* MaxLaserLevel, float* LaserDowngradeTime, float* LaserDowngradeTimerRemaining, bool* IsLaserDowngradeTimerActive, double* LastLaserLevelChangedTime, class UPrimalInventoryComponent** InventoryComponent, class UClass** SaddleFuelItem, class UClass** FlakCannonAmmoItem, bool* IsUsingSuperFlight, bool* IsUsingSuperFlightBoost, float* FuelPercent, float* CannonCooldownPercent, float* EchoOrChaffCooldownPercent, bool* IsSubmerged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetHudData");
		
		ASpaceDolphin_Character_BP_C_GetHudData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasSaddle != nullptr)
			*HasSaddle = params.HasSaddle;
		if (isFPV != nullptr)
			*isFPV = params.isFPV;
		if (HideHUDinFPV != nullptr)
			*HideHUDinFPV = params.HideHUDinFPV;
		if (LaserLevel != nullptr)
			*LaserLevel = params.LaserLevel;
		if (MaxLaserLevel != nullptr)
			*MaxLaserLevel = params.MaxLaserLevel;
		if (LaserDowngradeTime != nullptr)
			*LaserDowngradeTime = params.LaserDowngradeTime;
		if (LaserDowngradeTimerRemaining != nullptr)
			*LaserDowngradeTimerRemaining = params.LaserDowngradeTimerRemaining;
		if (IsLaserDowngradeTimerActive != nullptr)
			*IsLaserDowngradeTimerActive = params.IsLaserDowngradeTimerActive;
		if (LastLaserLevelChangedTime != nullptr)
			*LastLaserLevelChangedTime = params.LastLaserLevelChangedTime;
		if (InventoryComponent != nullptr)
			*InventoryComponent = params.InventoryComponent;
		if (SaddleFuelItem != nullptr)
			*SaddleFuelItem = params.SaddleFuelItem;
		if (FlakCannonAmmoItem != nullptr)
			*FlakCannonAmmoItem = params.FlakCannonAmmoItem;
		if (IsUsingSuperFlight != nullptr)
			*IsUsingSuperFlight = params.IsUsingSuperFlight;
		if (IsUsingSuperFlightBoost != nullptr)
			*IsUsingSuperFlightBoost = params.IsUsingSuperFlightBoost;
		if (FuelPercent != nullptr)
			*FuelPercent = params.FuelPercent;
		if (CannonCooldownPercent != nullptr)
			*CannonCooldownPercent = params.CannonCooldownPercent;
		if (EchoOrChaffCooldownPercent != nullptr)
			*EchoOrChaffCooldownPercent = params.EchoOrChaffCooldownPercent;
		if (IsSubmerged != nullptr)
			*IsSubmerged = params.IsSubmerged;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPClientHandleNetExecCommand
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CommandName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (Parm, OutParm, ReferenceParm)
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ASpaceDolphin_Character_BP_C::BPClientHandleNetExecCommand(const class FName& CommandName, struct FBPNetExecParams* ExecParams, class APlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPClientHandleNetExecCommand");
		
		ASpaceDolphin_Character_BP_C_BPClientHandleNetExecCommand_Params params {};
		params.CommandName = CommandName;
		params.ForPC = ForPC;
		
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
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.CheckVelocityError
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::CheckVelocityError(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.CheckVelocityError");
		
		ASpaceDolphin_Character_BP_C_CheckVelocityError_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPForceCameraStyle
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            ForViewTarget                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	ECameraStyle ASpaceDolphin_Character_BP_C::BPForceCameraStyle(class APrimalCharacter* ForViewTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPForceCameraStyle");
		
		ASpaceDolphin_Character_BP_C_BPForceCameraStyle_Params params {};
		params.ForViewTarget = ForViewTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateLocalSounds
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::UpdateLocalSounds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateLocalSounds");
		
		ASpaceDolphin_Character_BP_C_UpdateLocalSounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is Star Fox Mode Public
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AMissionSpline*                              CurrentSpline                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             RetRiderSetTime                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               RetIsRiderWarmup                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ASpaceDolphin_Character_BP_C::IsStarFoxModePublic(class AMissionSpline** CurrentSpline, double* RetRiderSetTime, bool* RetIsRiderWarmup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is Star Fox Mode Public");
		
		ASpaceDolphin_Character_BP_C_IsStarFoxModePublic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentSpline != nullptr)
			*CurrentSpline = params.CurrentSpline;
		if (RetRiderSetTime != nullptr)
			*RetRiderSetTime = params.RetRiderSetTime;
		if (RetIsRiderWarmup != nullptr)
			*RetIsRiderWarmup = params.RetIsRiderWarmup;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateMouseCursor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::UpdateMouseCursor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateMouseCursor");
		
		ASpaceDolphin_Character_BP_C_UpdateMouseCursor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.TurnOffMouseCursor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::TurnOffMouseCursor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.TurnOffMouseCursor");
		
		ASpaceDolphin_Character_BP_C_TurnOffMouseCursor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPHandlePoop
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ASpaceDolphin_Character_BP_C::BPHandlePoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPHandlePoop");
		
		ASpaceDolphin_Character_BP_C_BPHandlePoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsSilenced
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool ASpaceDolphin_Character_BP_C::IsSilenced()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsSilenced");
		
		ASpaceDolphin_Character_BP_C_IsSilenced_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Server Request Fire Lasers Fn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     CameraHitLocation                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::ServerRequestFireLasersFn(const struct FVector& CameraHitLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Server Request Fire Lasers Fn");
		
		ASpaceDolphin_Character_BP_C_ServerRequestFireLasersFn_Params params {};
		params.CameraHitLocation = CameraHitLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ShouldPreventLockOnMe
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsPrevented                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::ShouldPreventLockOnMe(bool* IsPrevented)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ShouldPreventLockOnMe");
		
		ASpaceDolphin_Character_BP_C_ShouldPreventLockOnMe_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsPrevented != nullptr)
			*IsPrevented = params.IsPrevented;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsCurrentlyInStarFoxModeWithGamepad
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::IsCurrentlyInStarFoxModeWithGamepad(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsCurrentlyInStarFoxModeWithGamepad");
		
		ASpaceDolphin_Character_BP_C_IsCurrentlyInStarFoxModeWithGamepad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPSetSimulatedInterpRollOverride
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ASpaceDolphin_Character_BP_C::BPSetSimulatedInterpRollOverride()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPSetSimulatedInterpRollOverride");
		
		ASpaceDolphin_Character_BP_C_BPSetSimulatedInterpRollOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsGamePadActive
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::IsGamePadActive(bool* ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsGamePadActive");
		
		ASpaceDolphin_Character_BP_C_IsGamePadActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPUnstasis
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::BPUnstasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPUnstasis");
		
		ASpaceDolphin_Character_BP_C_BPUnstasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.TryStartImmelmann
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::TryStartImmelmann()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.TryStartImmelmann");
		
		ASpaceDolphin_Character_BP_C_TryStartImmelmann_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.TryStartLoop
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::TryStartLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.TryStartLoop");
		
		ASpaceDolphin_Character_BP_C_TryStartLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateFPVMeshes
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::UpdateFPVMeshes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateFPVMeshes");
		
		ASpaceDolphin_Character_BP_C_UpdateFPVMeshes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Get Desired Rotation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FRotator ASpaceDolphin_Character_BP_C::GetDesiredRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Get Desired Rotation");
		
		ASpaceDolphin_Character_BP_C_GetDesiredRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetCameraHitLocationForProjectiles
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FVector ASpaceDolphin_Character_BP_C::GetCameraHitLocationForProjectiles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetCameraHitLocationForProjectiles");
		
		ASpaceDolphin_Character_BP_C_GetCameraHitLocationForProjectiles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Get Screen Mouse Position as MatParam
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FLinearColor ASpaceDolphin_Character_BP_C::GetScreenMousePositionasMatParam()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Get Screen Mouse Position as MatParam");
		
		ASpaceDolphin_Character_BP_C_GetScreenMousePositionasMatParam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPOnClearMountedDino
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::BPOnClearMountedDino()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPOnClearMountedDino");
		
		ASpaceDolphin_Character_BP_C_BPOnClearMountedDino_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Update Saddle Shield Material
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::UpdateSaddleShieldMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Update Saddle Shield Material");
		
		ASpaceDolphin_Character_BP_C_UpdateSaddleShieldMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetPercentTamed
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              Percemt                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              RequiredAmount                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::GetPercentTamed(float* Percemt, float* RequiredAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetPercentTamed");
		
		ASpaceDolphin_Character_BP_C_GetPercentTamed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Percemt != nullptr)
			*Percemt = params.Percemt;
		if (RequiredAmount != nullptr)
			*RequiredAmount = params.RequiredAmount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPDinoTooltipCustomTamingProgressBar
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               overrideTamingProgressBarIfActive                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              progressPercent                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Label                                                      (Parm, OutParm, ZeroConstructor)
	 */
	bool ASpaceDolphin_Character_BP_C::BPDinoTooltipCustomTamingProgressBar(bool* overrideTamingProgressBarIfActive, float* progressPercent, class FString* Label)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPDinoTooltipCustomTamingProgressBar");
		
		ASpaceDolphin_Character_BP_C_BPDinoTooltipCustomTamingProgressBar_Params params {};
		
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
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPNotifyInventoryItemChange
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsItemAdd                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimalItem*                                 theItem                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bEquipItem                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::BPNotifyInventoryItemChange(bool bIsItemAdd, class UPrimalItem* theItem, bool bEquipItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPNotifyInventoryItemChange");
		
		ASpaceDolphin_Character_BP_C_BPNotifyInventoryItemChange_Params params {};
		params.bIsItemAdd = bIsItemAdd;
		params.theItem = theItem;
		params.bEquipItem = bEquipItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AddSaddleActivationText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::AddSaddleActivationText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AddSaddleActivationText");
		
		ASpaceDolphin_Character_BP_C_AddSaddleActivationText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ClearSaddleActivationText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::ClearSaddleActivationText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ClearSaddleActivationText");
		
		ASpaceDolphin_Character_BP_C_ClearSaddleActivationText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPBecomeAdult
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::BPBecomeAdult()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPBecomeAdult");
		
		ASpaceDolphin_Character_BP_C_BPBecomeAdult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPBecomeBaby
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::BPBecomeBaby()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPBecomeBaby");
		
		ASpaceDolphin_Character_BP_C_BPBecomeBaby_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateStarFoxCameraForGamepad
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::UpdateStarFoxCameraForGamepad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateStarFoxCameraForGamepad");
		
		ASpaceDolphin_Character_BP_C_UpdateStarFoxCameraForGamepad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BP_InterceptTurnInput
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ASpaceDolphin_Character_BP_C::BP_InterceptTurnInput(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BP_InterceptTurnInput");
		
		ASpaceDolphin_Character_BP_C_BP_InterceptTurnInput_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OnConsumeFood
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::OnConsumeFood()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OnConsumeFood");
		
		ASpaceDolphin_Character_BP_C_OnConsumeFood_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPUntamedConsumeFoodItem
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 foodItem                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::BPUntamedConsumeFoodItem(class UPrimalItem* foodItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPUntamedConsumeFoodItem");
		
		ASpaceDolphin_Character_BP_C_BPUntamedConsumeFoodItem_Params params {};
		params.foodItem = foodItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPTamedConsumeFoodItem
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 foodItem                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::BPTamedConsumeFoodItem(class UPrimalItem* foodItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPTamedConsumeFoodItem");
		
		ASpaceDolphin_Character_BP_C_BPTamedConsumeFoodItem_Params params {};
		params.foodItem = foodItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPModifyControlRotation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    ControlRotation                                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    outControlRotation                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ASpaceDolphin_Character_BP_C::BPModifyControlRotation(struct FRotator* ControlRotation, struct FRotator* outControlRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPModifyControlRotation");
		
		ASpaceDolphin_Character_BP_C_BPModifyControlRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ControlRotation != nullptr)
			*ControlRotation = params.ControlRotation;
		if (outControlRotation != nullptr)
			*outControlRotation = params.outControlRotation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.SetLastTimeChargedLaserHit
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             val                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::SetLastTimeChargedLaserHit(double val)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.SetLastTimeChargedLaserHit");
		
		ASpaceDolphin_Character_BP_C_SetLastTimeChargedLaserHit_Params params {};
		params.val = val;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Update Materials
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UMaterialInterface*                          Material                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::UpdateMaterials(class UMaterialInterface* Material)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Update Materials");
		
		ASpaceDolphin_Character_BP_C_UpdateMaterials_Params params {};
		params.Material = Material;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is FPV Public
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               retVal                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::IsFPVPublic(bool* retVal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is FPV Public");
		
		ASpaceDolphin_Character_BP_C_IsFPVPublic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (retVal != nullptr)
			*retVal = params.retVal;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.isFPV
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               retVal                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     CameraLoc                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::isFPV(bool* retVal, struct FVector* CameraLoc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.isFPV");
		
		ASpaceDolphin_Character_BP_C_isFPV_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (retVal != nullptr)
			*retVal = params.retVal;
		if (CameraLoc != nullptr)
			*CameraLoc = params.CameraLoc;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ReceiveEndPlay");
		
		ASpaceDolphin_Character_BP_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPNotifyLevelUp
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ExtraCharacterLevel                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::BPNotifyLevelUp(int32_t ExtraCharacterLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPNotifyLevelUp");
		
		ASpaceDolphin_Character_BP_C_BPNotifyLevelUp_Params params {};
		params.ExtraCharacterLevel = ExtraCharacterLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsSpinningPublic
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Right                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ASpaceDolphin_Character_BP_C::IsSpinningPublic(bool* Right)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsSpinningPublic");
		
		ASpaceDolphin_Character_BP_C_IsSpinningPublic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Right != nullptr)
			*Right = params.Right;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateBarrelRoll
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::UpdateBarrelRoll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateBarrelRoll");
		
		ASpaceDolphin_Character_BP_C_UpdateBarrelRoll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetLaserDamage
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      HitActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ASpaceDolphin_Character_BP_C::GetLaserDamage(class AActor* HitActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetLaserDamage");
		
		ASpaceDolphin_Character_BP_C_GetLaserDamage_Params params {};
		params.HitActor = HitActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetDamageReductionPercentFromLaserLevel
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::GetDamageReductionPercentFromLaserLevel(float* ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetDamageReductionPercentFromLaserLevel");
		
		ASpaceDolphin_Character_BP_C_GetDamageReductionPercentFromLaserLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetTamedWalkingSpeedModifierForLaserLevel
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              TamedWalkingSpeedModifier                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::GetTamedWalkingSpeedModifierForLaserLevel(float* TamedWalkingSpeedModifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetTamedWalkingSpeedModifierForLaserLevel");
		
		ASpaceDolphin_Character_BP_C_GetTamedWalkingSpeedModifierForLaserLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TamedWalkingSpeedModifier != nullptr)
			*TamedWalkingSpeedModifier = params.TamedWalkingSpeedModifier;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetLaserLevelDowngradeTime
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              LaserLevelDowngradeTime                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::GetLaserLevelDowngradeTime(float* LaserLevelDowngradeTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetLaserLevelDowngradeTime");
		
		ASpaceDolphin_Character_BP_C_GetLaserLevelDowngradeTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LaserLevelDowngradeTime != nullptr)
			*LaserLevelDowngradeTime = params.LaserLevelDowngradeTime;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetChargedLaserProj
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UClass*                                      ChargedLaserProjectile                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::GetChargedLaserProj(class UClass** ChargedLaserProjectile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetChargedLaserProj");
		
		ASpaceDolphin_Character_BP_C_GetChargedLaserProj_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ChargedLaserProjectile != nullptr)
			*ChargedLaserProjectile = params.ChargedLaserProjectile;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetLaserPFX
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            LaserLevel                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class UParticleSystem* ASpaceDolphin_Character_BP_C::GetLaserPFX(int32_t* LaserLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetLaserPFX");
		
		ASpaceDolphin_Character_BP_C_GetLaserPFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LaserLevel != nullptr)
			*LaserLevel = params.LaserLevel;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetTargetingDesirability
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Attacker                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ASpaceDolphin_Character_BP_C::BPGetTargetingDesirability(class AActor* Attacker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetTargetingDesirability");
		
		ASpaceDolphin_Character_BP_C_BPGetTargetingDesirability_Params params {};
		params.Attacker = Attacker;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetChanceToSpawnSpaceWhale
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	float ASpaceDolphin_Character_BP_C::GetChanceToSpawnSpaceWhale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetChanceToSpawnSpaceWhale");
		
		ASpaceDolphin_Character_BP_C_GetChanceToSpawnSpaceWhale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.SpawnSpaceWhale
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::SpawnSpaceWhale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.SpawnSpaceWhale");
		
		ASpaceDolphin_Character_BP_C_SpawnSpaceWhale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Try Spawn Space Whale
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::TrySpawnSpaceWhale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Try Spawn Space Whale");
		
		ASpaceDolphin_Character_BP_C_TrySpawnSpaceWhale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateWildDemands
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ResetWildDemand                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::UpdateWildDemands(bool ResetWildDemand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateWildDemands");
		
		ASpaceDolphin_Character_BP_C_UpdateWildDemands_Params params {};
		params.ResetWildDemand = ResetWildDemand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.HasWildDemands
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               HasDemands                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            NumPets                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            NumFood                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::HasWildDemands(bool* HasDemands, int32_t* NumPets, int32_t* NumFood)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.HasWildDemands");
		
		ASpaceDolphin_Character_BP_C_HasWildDemands_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasDemands != nullptr)
			*HasDemands = params.HasDemands;
		if (NumPets != nullptr)
			*NumPets = params.NumPets;
		if (NumFood != nullptr)
			*NumFood = params.NumFood;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.TriggerWildAngerFn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::TriggerWildAngerFn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.TriggerWildAngerFn");
		
		ASpaceDolphin_Character_BP_C_TriggerWildAngerFn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsAngryWildDino
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              DistanceSq                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ASpaceDolphin_Character_BP_C::IsAngryWildDino(float* DistanceSq)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsAngryWildDino");
		
		ASpaceDolphin_Character_BP_C_IsAngryWildDino_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DistanceSq != nullptr)
			*DistanceSq = params.DistanceSq;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.NearbyAngryDolphin
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ASpaceDolphin_Character_BP_C*                AngryDolphin                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterCharacter*                           Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::NearbyAngryDolphin(class ASpaceDolphin_Character_BP_C* AngryDolphin, class AShooterCharacter* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.NearbyAngryDolphin");
		
		ASpaceDolphin_Character_BP_C_NearbyAngryDolphin_Params params {};
		params.AngryDolphin = AngryDolphin;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPShouldForceFlee
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ASpaceDolphin_Character_BP_C::BPShouldForceFlee()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPShouldForceFlee");
		
		ASpaceDolphin_Character_BP_C_BPShouldForceFlee_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateWild
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::UpdateWild()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateWild");
		
		ASpaceDolphin_Character_BP_C_UpdateWild_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ASpaceDolphin_Character_BP_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPTryMultiUse");
		
		ASpaceDolphin_Character_BP_C_BPTryMultiUse_Params params {};
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
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> ASpaceDolphin_Character_BP_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetMultiUseEntries");
		
		ASpaceDolphin_Character_BP_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BlueprintAdjustOutputDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OriginalDamageAmount                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      HitActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      OutDamageType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OutDamageImpulse                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ASpaceDolphin_Character_BP_C::BlueprintAdjustOutputDamage(int32_t AttackIndex, float OriginalDamageAmount, class AActor* HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BlueprintAdjustOutputDamage");
		
		ASpaceDolphin_Character_BP_C_BlueprintAdjustOutputDamage_Params params {};
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
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.FireChaff
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::FireChaff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.FireChaff");
		
		ASpaceDolphin_Character_BP_C_FireChaff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.EchoLocation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::EchoLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.EchoLocation");
		
		ASpaceDolphin_Character_BP_C_EchoLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateGroundFX
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::UpdateGroundFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateGroundFX");
		
		ASpaceDolphin_Character_BP_C_UpdateGroundFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.DoLaserTraceAndDamage
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     RetStart                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     RetEnd                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ImpactCharacterOrStructure                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::DoLaserTraceAndDamage(const struct FVector& Start, const struct FVector& End, struct FVector* RetStart, struct FVector* RetEnd, bool* ret, bool* ImpactCharacterOrStructure)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.DoLaserTraceAndDamage");
		
		ASpaceDolphin_Character_BP_C_DoLaserTraceAndDamage_Params params {};
		params.Start = Start;
		params.End = End;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RetStart != nullptr)
			*RetStart = params.RetStart;
		if (RetEnd != nullptr)
			*RetEnd = params.RetEnd;
		if (ret != nullptr)
			*ret = params.ret;
		if (ImpactCharacterOrStructure != nullptr)
			*ImpactCharacterOrStructure = params.ImpactCharacterOrStructure;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateStarFoxCollision
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::UpdateStarFoxCollision()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateStarFoxCollision");
		
		ASpaceDolphin_Character_BP_C_UpdateStarFoxCollision_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpateBarrelRollFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::UpateBarrelRollFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpateBarrelRollFX");
		
		ASpaceDolphin_Character_BP_C_UpateBarrelRollFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateRotatingComponent
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::UpdateRotatingComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateRotatingComponent");
		
		ASpaceDolphin_Character_BP_C_UpdateRotatingComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OnRep_LastLaserLevelUpTime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::OnRep_LastLaserLevelUpTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OnRep_LastLaserLevelUpTime");
		
		ASpaceDolphin_Character_BP_C_OnRep_LastLaserLevelUpTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Downgrade Laser Level
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::DowngradeLaserLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Downgrade Laser Level");
		
		ASpaceDolphin_Character_BP_C_DowngradeLaserLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is Drifting Public
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               DriftingInput                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Right                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             DriftEndTime                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ASpaceDolphin_Character_BP_C::IsDriftingPublic(bool* DriftingInput, bool* Right, double* DriftEndTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is Drifting Public");
		
		ASpaceDolphin_Character_BP_C_IsDriftingPublic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DriftingInput != nullptr)
			*DriftingInput = params.DriftingInput;
		if (Right != nullptr)
			*Right = params.Right;
		if (DriftEndTime != nullptr)
			*DriftEndTime = params.DriftEndTime;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.DeactiveDriftJets
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::DeactiveDriftJets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.DeactiveDriftJets");
		
		ASpaceDolphin_Character_BP_C_DeactiveDriftJets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsDrifting
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               DriftingInput                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Right                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             DriftEndTime                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsFinishingDrift                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ASpaceDolphin_Character_BP_C::IsDrifting(bool* DriftingInput, bool* Right, double* DriftEndTime, bool* IsFinishingDrift)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsDrifting");
		
		ASpaceDolphin_Character_BP_C_IsDrifting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DriftingInput != nullptr)
			*DriftingInput = params.DriftingInput;
		if (Right != nullptr)
			*Right = params.Right;
		if (DriftEndTime != nullptr)
			*DriftEndTime = params.DriftEndTime;
		if (IsFinishingDrift != nullptr)
			*IsFinishingDrift = params.IsFinishingDrift;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetDriftInputStrength
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              ReturnValueBase                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ASpaceDolphin_Character_BP_C::GetDriftInputStrength(float* ReturnValueBase)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetDriftInputStrength");
		
		ASpaceDolphin_Character_BP_C_GetDriftInputStrength_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValueBase != nullptr)
			*ReturnValueBase = params.ReturnValueBase;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateDrifting
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::UpdateDrifting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateDrifting");
		
		ASpaceDolphin_Character_BP_C_UpdateDrifting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateSaddle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::UpdateSaddle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateSaddle");
		
		ASpaceDolphin_Character_BP_C_UpdateSaddle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.TryDoStarFoxModeCollisionDamage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::TryDoStarFoxModeCollisionDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.TryDoStarFoxModeCollisionDamage");
		
		ASpaceDolphin_Character_BP_C_TryDoStarFoxModeCollisionDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ReceiveActorBeginOverlap
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ReceiveActorBeginOverlap");
		
		ASpaceDolphin_Character_BP_C_ReceiveActorBeginOverlap_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ReceiveActorEndOverlap
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::ReceiveActorEndOverlap(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ReceiveActorEndOverlap");
		
		ASpaceDolphin_Character_BP_C_ReceiveActorEndOverlap_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Get Camera YScalar
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              StarFoxModeCameraXOffsetScalar                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::GetCameraYScalar(float* StarFoxModeCameraXOffsetScalar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Get Camera YScalar");
		
		ASpaceDolphin_Character_BP_C_GetCameraYScalar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StarFoxModeCameraXOffsetScalar != nullptr)
			*StarFoxModeCameraXOffsetScalar = params.StarFoxModeCameraXOffsetScalar;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OnRep_CurrentSpline
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::OnRep_CurrentSpline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OnRep_CurrentSpline");
		
		ASpaceDolphin_Character_BP_C_OnRep_CurrentSpline_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BP_PreventMovementMode
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      NewMovementMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      NewCustomMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ASpaceDolphin_Character_BP_C::BP_PreventMovementMode(EMovementMode NewMovementMode, unsigned char NewCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BP_PreventMovementMode");
		
		ASpaceDolphin_Character_BP_C_BP_PreventMovementMode_Params params {};
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
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.CanBarrelRoll
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::CanBarrelRoll(bool* Res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.CanBarrelRoll");
		
		ASpaceDolphin_Character_BP_C_CanBarrelRoll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Res != nullptr)
			*Res = params.Res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsDoingBarrelRoll
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimMontage*                                Anim                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             LastBarrelRollStartTime                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::IsDoingBarrelRoll(bool* ret, class UAnimMontage** Anim, double* LastBarrelRollStartTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsDoingBarrelRoll");
		
		ASpaceDolphin_Character_BP_C_IsDoingBarrelRoll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
		if (Anim != nullptr)
			*Anim = params.Anim;
		if (LastBarrelRollStartTime != nullptr)
			*LastBarrelRollStartTime = params.LastBarrelRollStartTime;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BarrelRoll
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     CameraDirection                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::BarrelRoll(int32_t Direction, const struct FVector& CameraDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BarrelRoll");
		
		ASpaceDolphin_Character_BP_C_BarrelRoll_Params params {};
		params.Direction = Direction;
		params.CameraDirection = CameraDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is Braking Public
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsBraking                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             TimeStartedBraking                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::IsBrakingPublic(bool* IsBraking, double* TimeStartedBraking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is Braking Public");
		
		ASpaceDolphin_Character_BP_C_IsBrakingPublic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsBraking != nullptr)
			*IsBraking = params.IsBraking;
		if (TimeStartedBraking != nullptr)
			*TimeStartedBraking = params.TimeStartedBraking;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is Braking
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               IsBraking                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             TimeStartedBraking                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::IsBraking(bool* IsBraking, double* TimeStartedBraking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is Braking");
		
		ASpaceDolphin_Character_BP_C_IsBraking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsBraking != nullptr)
			*IsBraking = params.IsBraking;
		if (TimeStartedBraking != nullptr)
			*TimeStartedBraking = params.TimeStartedBraking;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateBraking
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::UpdateBraking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateBraking");
		
		ASpaceDolphin_Character_BP_C_UpdateBraking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPDrawToRiderHUD
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterHUD*                                 HUD                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::BPDrawToRiderHUD(class AShooterHUD* HUD)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPDrawToRiderHUD");
		
		ASpaceDolphin_Character_BP_C_BPDrawToRiderHUD_Params params {};
		params.HUD = HUD;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateSpinning
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::UpdateSpinning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateSpinning");
		
		ASpaceDolphin_Character_BP_C_UpdateSpinning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsSpinning
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Right                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ASpaceDolphin_Character_BP_C::IsSpinning(bool* Right)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsSpinning");
		
		ASpaceDolphin_Character_BP_C_IsSpinning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Right != nullptr)
			*Right = params.Right;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.DestroyProjectile
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::DestroyProjectile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.DestroyProjectile");
		
		ASpaceDolphin_Character_BP_C_DestroyProjectile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Get Flak Cannon Parameters
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterProjectile*                          Projectile                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::GetFlakCannonParameters(class AShooterProjectile* Projectile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Get Flak Cannon Parameters");
		
		ASpaceDolphin_Character_BP_C_GetFlakCannonParameters_Params params {};
		params.Projectile = Projectile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsStarFoxMode
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AMissionSpline*                              CurrentSpline                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             RetRiderSetTime                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               RetIsRiderWarmup                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ASpaceDolphin_Character_BP_C::IsStarFoxMode(class AMissionSpline** CurrentSpline, double* RetRiderSetTime, bool* RetIsRiderWarmup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsStarFoxMode");
		
		ASpaceDolphin_Character_BP_C_IsStarFoxMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurrentSpline != nullptr)
			*CurrentSpline = params.CurrentSpline;
		if (RetRiderSetTime != nullptr)
			*RetRiderSetTime = params.RetRiderSetTime;
		if (RetIsRiderWarmup != nullptr)
			*RetIsRiderWarmup = params.RetIsRiderWarmup;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ValidateSpline
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AMissionSpline*                              Spline                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ASpaceDolphin_Character_BP_C::ValidateSpline(class AMissionSpline* Spline)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ValidateSpline");
		
		ASpaceDolphin_Character_BP_C_ValidateSpline_Params params {};
		params.Spline = Spline;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateSpline
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::UpdateSpline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateSpline");
		
		ASpaceDolphin_Character_BP_C_UpdateSpline_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPServerHandleNetExecCommand
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           FromPC                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        CommandName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (Parm, OutParm, ReferenceParm)
	 */
	bool ASpaceDolphin_Character_BP_C::BPServerHandleNetExecCommand(class APlayerController* FromPC, const class FName& CommandName, struct FBPNetExecParams* ExecParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPServerHandleNetExecCommand");
		
		ASpaceDolphin_Character_BP_C_BPServerHandleNetExecCommand_Params params {};
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
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPKilledSomethingEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            killedTarget                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::BPKilledSomethingEvent(class APrimalCharacter* killedTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPKilledSomethingEvent");
		
		ASpaceDolphin_Character_BP_C_BPKilledSomethingEvent_Params params {};
		params.killedTarget = killedTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsDualLasers
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               DualLasers                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::IsDualLasers(bool* DualLasers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsDualLasers");
		
		ASpaceDolphin_Character_BP_C_IsDualLasers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DualLasers != nullptr)
			*DualLasers = params.DualLasers;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.CanLoop
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool ASpaceDolphin_Character_BP_C::CanLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.CanLoop");
		
		ASpaceDolphin_Character_BP_C_CanLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsChargingLaser
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool ASpaceDolphin_Character_BP_C::IsChargingLaser()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsChargingLaser");
		
		ASpaceDolphin_Character_BP_C_IsChargingLaser_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetCrosshairSpread
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ASpaceDolphin_Character_BP_C::BPGetCrosshairSpread()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetCrosshairSpread");
		
		ASpaceDolphin_Character_BP_C_BPGetCrosshairSpread_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateLoop
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::UpdateLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateLoop");
		
		ASpaceDolphin_Character_BP_C_UpdateLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPAcknowledgeServerCorrection
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
	bool ASpaceDolphin_Character_BP_C::BPAcknowledgeServerCorrection(float TimeStamp, const struct FVector& NewLoc, const struct FVector& NewVel, class UPrimitiveComponent* NewBase, const class FName& NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPAcknowledgeServerCorrection");
		
		ASpaceDolphin_Character_BP_C_BPAcknowledgeServerCorrection_Params params {};
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
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.EndLoop
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::EndLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.EndLoop");
		
		ASpaceDolphin_Character_BP_C_EndLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.StartLoop
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Immelmann                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::StartLoop(bool Immelmann)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.StartLoop");
		
		ASpaceDolphin_Character_BP_C_StartLoop_Params params {};
		params.Immelmann = Immelmann;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetCrosshairColor
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	struct FLinearColor ASpaceDolphin_Character_BP_C::BPGetCrosshairColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetCrosshairColor");
		
		ASpaceDolphin_Character_BP_C_BPGetCrosshairColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Try Get ChargedLaserTarget
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::TryGetChargedLaserTarget(class AActor** ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Try Get ChargedLaserTarget");
		
		ASpaceDolphin_Character_BP_C_TryGetChargedLaserTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OwningClientTryFireChargedLaser
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::OwningClientTryFireChargedLaser()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OwningClientTryFireChargedLaser");
		
		ASpaceDolphin_Character_BP_C_OwningClientTryFireChargedLaser_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetChargedLaserParameters
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterProjectile*                          Projectile                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ChargeTime                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      Target                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::GetChargedLaserParameters(class AShooterProjectile* Projectile, float* ChargeTime, class AActor** Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetChargedLaserParameters");
		
		ASpaceDolphin_Character_BP_C_GetChargedLaserParameters_Params params {};
		params.Projectile = Projectile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ChargeTime != nullptr)
			*ChargeTime = params.ChargeTime;
		if (Target != nullptr)
			*Target = params.Target;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.FireChargedLaser
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Dir                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Loc                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ChargeTime                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::FireChargedLaser(const struct FVector& Dir, const struct FVector& Loc, class AActor* Target, float ChargeTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.FireChargedLaser");
		
		ASpaceDolphin_Character_BP_C_FireChargedLaser_Params params {};
		params.Dir = Dir;
		params.Loc = Loc;
		params.Target = Target;
		params.ChargeTime = ChargeTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Owning Client Try FireLasers
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::OwningClientTryFireLasers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Owning Client Try FireLasers");
		
		ASpaceDolphin_Character_BP_C_OwningClientTryFireLasers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.FireLasers
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Dir                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Loc                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        Socket                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::FireLasers(const struct FVector& Dir, const struct FVector& Loc, const class FName& Socket, const struct FVector& Start)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.FireLasers");
		
		ASpaceDolphin_Character_BP_C_FireLasers_Params params {};
		params.Dir = Dir;
		params.Loc = Loc;
		params.Socket = Socket;
		params.Start = Start;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetSaddleColor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Region                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::GetSaddleColor(int32_t Region, struct FLinearColor* ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetSaddleColor");
		
		ASpaceDolphin_Character_BP_C_GetSaddleColor_Params params {};
		params.Region = Region;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsUsingWindGust
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             StartTime                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::IsUsingWindGust(bool* ret, double* StartTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsUsingWindGust");
		
		ASpaceDolphin_Character_BP_C_IsUsingWindGust_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
		if (StartTime != nullptr)
			*StartTime = params.StartTime;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsUsingForwardInput
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::IsUsingForwardInput(bool* ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsUsingForwardInput");
		
		ASpaceDolphin_Character_BP_C_IsUsingForwardInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPUnsetupDinoTameable
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::BPUnsetupDinoTameable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPUnsetupDinoTameable");
		
		ASpaceDolphin_Character_BP_C_BPUnsetupDinoTameable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BSetupDinoTameable
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::BSetupDinoTameable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BSetupDinoTameable");
		
		ASpaceDolphin_Character_BP_C_BSetupDinoTameable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateRiderSocket
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::UpdateRiderSocket()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateRiderSocket");
		
		ASpaceDolphin_Character_BP_C_UpdateRiderSocket_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetOverrideSocket
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        From                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class FName ASpaceDolphin_Character_BP_C::GetOverrideSocket(const class FName& From)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetOverrideSocket");
		
		ASpaceDolphin_Character_BP_C_GetOverrideSocket_Params params {};
		params.From = From;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AllowWakingTame
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ASpaceDolphin_Character_BP_C::AllowWakingTame(class APlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AllowWakingTame");
		
		ASpaceDolphin_Character_BP_C_AllowWakingTame_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OwningClientTryFlakCannonFire
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::OwningClientTryFlakCannonFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OwningClientTryFlakCannonFire");
		
		ASpaceDolphin_Character_BP_C_OwningClientTryFlakCannonFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InterceptInputEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      InputName                                                  (Parm, ZeroConstructor)
	 */
	void ASpaceDolphin_Character_BP_C::InterceptInputEvent(const class FString& InputName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InterceptInputEvent");
		
		ASpaceDolphin_Character_BP_C_InterceptInputEvent_Params params {};
		params.InputName = InputName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AllowPlayMontage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                AnimMontage                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ASpaceDolphin_Character_BP_C::AllowPlayMontage(class UAnimMontage* AnimMontage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AllowPlayMontage");
		
		ASpaceDolphin_Character_BP_C_AllowPlayMontage_Params params {};
		params.AnimMontage = AnimMontage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetDinoLevelUpAnimation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class UAnimMontage* ASpaceDolphin_Character_BP_C::GetDinoLevelUpAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetDinoLevelUpAnimation");
		
		ASpaceDolphin_Character_BP_C_GetDinoLevelUpAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateTaming
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::UpdateTaming()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateTaming");
		
		ASpaceDolphin_Character_BP_C_UpdateTaming_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPShowTamingPanel
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               currentVisibility                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ASpaceDolphin_Character_BP_C::BPShowTamingPanel(bool currentVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPShowTamingPanel");
		
		ASpaceDolphin_Character_BP_C_BPShowTamingPanel_Params params {};
		params.currentVisibility = currentVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetTamingBuff
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalBuff*                                 Buff                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::GetTamingBuff(bool* IsValid, class APrimalBuff** Buff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetTamingBuff");
		
		ASpaceDolphin_Character_BP_C_GetTamingBuff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
		if (Buff != nullptr)
			*Buff = params.Buff;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BlueprintCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ASpaceDolphin_Character_BP_C::BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BlueprintCanAttack");
		
		ASpaceDolphin_Character_BP_C_BlueprintCanAttack_Params params {};
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
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              IncomingDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (Parm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  PointHitInfo                                               (Parm)
	 */
	float ASpaceDolphin_Character_BP_C::BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPAdjustDamage");
		
		ASpaceDolphin_Character_BP_C_BPAdjustDamage_Params params {};
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
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Get Replicated Control Rotation Public
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	struct FRotator ASpaceDolphin_Character_BP_C::GetReplicatedControlRotationPublic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Get Replicated Control Rotation Public");
		
		ASpaceDolphin_Character_BP_C_GetReplicatedControlRotationPublic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsPlayingBlockingAnim
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               ReturnVal                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::IsPlayingBlockingAnim(bool* ReturnVal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsPlayingBlockingAnim");
		
		ASpaceDolphin_Character_BP_C_IsPlayingBlockingAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnVal != nullptr)
			*ReturnVal = params.ReturnVal;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is Using Drafting Public
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               DraftAcked                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ASpaceDolphin_Character_BP_C::IsUsingDraftingPublic(bool* DraftAcked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is Using Drafting Public");
		
		ASpaceDolphin_Character_BP_C_IsUsingDraftingPublic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DraftAcked != nullptr)
			*DraftAcked = params.DraftAcked;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsUsingDrafting
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               DraftAcked                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ASpaceDolphin_Character_BP_C::IsUsingDrafting(bool* DraftAcked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsUsingDrafting");
		
		ASpaceDolphin_Character_BP_C_IsUsingDrafting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DraftAcked != nullptr)
			*DraftAcked = params.DraftAcked;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetRiderSocket
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class FName ASpaceDolphin_Character_BP_C::BPGetRiderSocket()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetRiderSocket");
		
		ASpaceDolphin_Character_BP_C_BPGetRiderSocket_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsJumpHeld
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool ASpaceDolphin_Character_BP_C::IsJumpHeld()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsJumpHeld");
		
		ASpaceDolphin_Character_BP_C_IsJumpHeld_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPOnDinoCheat
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CheatName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bSetValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::BPOnDinoCheat(const class FName& CheatName, bool bSetValue, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPOnDinoCheat");
		
		ASpaceDolphin_Character_BP_C_BPOnDinoCheat_Params params {};
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
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetReplicatedControlRotation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FRotator ASpaceDolphin_Character_BP_C::GetReplicatedControlRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetReplicatedControlRotation");
		
		ASpaceDolphin_Character_BP_C_GetReplicatedControlRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ReceiveTick");
		
		ASpaceDolphin_Character_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPDoAttack
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::BPDoAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPDoAttack");
		
		ASpaceDolphin_Character_BP_C_BPDoAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetCrosshairAlpha
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ASpaceDolphin_Character_BP_C::BPGetCrosshairAlpha()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetCrosshairAlpha");
		
		ASpaceDolphin_Character_BP_C_BPGetCrosshairAlpha_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsFlakCannonOnCooldown
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool ASpaceDolphin_Character_BP_C::IsFlakCannonOnCooldown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsFlakCannonOnCooldown");
		
		ASpaceDolphin_Character_BP_C_IsFlakCannonOnCooldown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetCrosshairLocation
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              CanvasClipX                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CanvasClipY                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OutX                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OutY                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::BPGetCrosshairLocation(float CanvasClipX, float CanvasClipY, float* OutX, float* OutY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetCrosshairLocation");
		
		ASpaceDolphin_Character_BP_C_BPGetCrosshairLocation_Params params {};
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
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ConsumeItem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::ConsumeItem(class UClass* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ConsumeItem");
		
		ASpaceDolphin_Character_BP_C_ConsumeItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.HasAmmo
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Quantity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ASpaceDolphin_Character_BP_C::HasAmmo(int32_t* Quantity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.HasAmmo");
		
		ASpaceDolphin_Character_BP_C_HasAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Quantity != nullptr)
			*Quantity = params.Quantity;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPOnStopJump
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ASpaceDolphin_Character_BP_C::BPOnStopJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPOnStopJump");
		
		ASpaceDolphin_Character_BP_C_BPOnStopJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Fire Flak Cannon
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Dir                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Loc                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::FireFlakCannon(const struct FVector& Dir, const struct FVector& Loc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Fire Flak Cannon");
		
		ASpaceDolphin_Character_BP_C_FireFlakCannon_Params params {};
		params.Dir = Dir;
		params.Loc = Loc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Has Saddle Public
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               RetIsSuperSaddle                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::HasSaddlePublic(bool* ret, bool* RetIsSuperSaddle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Has Saddle Public");
		
		ASpaceDolphin_Character_BP_C_HasSaddlePublic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
		if (RetIsSuperSaddle != nullptr)
			*RetIsSuperSaddle = params.RetIsSuperSaddle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OnInventoryItemGrind
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::OnInventoryItemGrind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OnInventoryItemGrind");
		
		ASpaceDolphin_Character_BP_C_OnInventoryItemGrind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateWindGustCooldownVFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::UpdateWindGustCooldownVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateWindGustCooldownVFX");
		
		ASpaceDolphin_Character_BP_C_UpdateWindGustCooldownVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPOverrideGetAttackAnimationIndex
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class UAnimMontage*>                        AnimationArray                                             (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	int32_t ASpaceDolphin_Character_BP_C::BPOverrideGetAttackAnimationIndex(int32_t AttackIndex, TArray<class UAnimMontage*>* AnimationArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPOverrideGetAttackAnimationIndex");
		
		ASpaceDolphin_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params params {};
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
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.TryInterruptLanding
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      Selection                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::TryInterruptLanding(EMovementMode Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.TryInterruptLanding");
		
		ASpaceDolphin_Character_BP_C_TryInterruptLanding_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OnRep_SuperFlight
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::OnRep_SuperFlight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OnRep_SuperFlight");
		
		ASpaceDolphin_Character_BP_C_OnRep_SuperFlight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.SetSuperFlight
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               TriggerVFX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::SetSuperFlight(bool Value, bool TriggerVFX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.SetSuperFlight");
		
		ASpaceDolphin_Character_BP_C_SetSuperFlight_Params params {};
		params.Value = Value;
		params.TriggerVFX = TriggerVFX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Get Current Percent Of Max Fly Speed Public
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ASpaceDolphin_Character_BP_C::GetCurrentPercentOfMaxFlySpeedPublic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Get Current Percent Of Max Fly Speed Public");
		
		ASpaceDolphin_Character_BP_C_GetCurrentPercentOfMaxFlySpeedPublic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is Using Super Flight Public
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             StartedEndingTime                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::IsUsingSuperFlightPublic(bool* ret, double* StartedEndingTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is Using Super Flight Public");
		
		ASpaceDolphin_Character_BP_C_IsUsingSuperFlightPublic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
		if (StartedEndingTime != nullptr)
			*StartedEndingTime = params.StartedEndingTime;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsUsingSuperFlight
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             StartedEndingTime                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::IsUsingSuperFlight(bool* ret, double* StartedEndingTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsUsingSuperFlight");
		
		ASpaceDolphin_Character_BP_C_IsUsingSuperFlight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
		if (StartedEndingTime != nullptr)
			*StartedEndingTime = params.StartedEndingTime;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateSuperFlightBoost
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::UpdateSuperFlightBoost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateSuperFlightBoost");
		
		ASpaceDolphin_Character_BP_C_UpdateSuperFlightBoost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is Using Super Flight Boost Public
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ASpaceDolphin_Character_BP_C::IsUsingSuperFlightBoostPublic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is Using Super Flight Boost Public");
		
		ASpaceDolphin_Character_BP_C_IsUsingSuperFlightBoostPublic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsUsingSuperFlightBoost
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             StartTime                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ASpaceDolphin_Character_BP_C::IsUsingSuperFlightBoost(double* StartTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsUsingSuperFlightBoost");
		
		ASpaceDolphin_Character_BP_C_IsUsingSuperFlightBoost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StartTime != nullptr)
			*StartTime = params.StartTime;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetDragSocketName
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            DraggingChar                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class FName ASpaceDolphin_Character_BP_C::BPGetDragSocketName(class APrimalCharacter* DraggingChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetDragSocketName");
		
		ASpaceDolphin_Character_BP_C_BPGetDragSocketName_Params params {};
		params.DraggingChar = DraggingChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OnCarriedStruggle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::OnCarriedStruggle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OnCarriedStruggle");
		
		ASpaceDolphin_Character_BP_C_OnCarriedStruggle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsUsingWingGust
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool ASpaceDolphin_Character_BP_C::IsUsingWingGust()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsUsingWingGust");
		
		ASpaceDolphin_Character_BP_C_IsUsingWingGust_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Update Jet FX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::UpdateJetFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Update Jet FX");
		
		ASpaceDolphin_Character_BP_C_UpdateJetFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.HasFuel
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Quantity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ASpaceDolphin_Character_BP_C::HasFuel(int32_t* Quantity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.HasFuel");
		
		ASpaceDolphin_Character_BP_C_HasFuel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Quantity != nullptr)
			*Quantity = params.Quantity;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateFuel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::UpdateFuel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateFuel");
		
		ASpaceDolphin_Character_BP_C_UpdateFuel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPDidSetCarriedCharacter
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            PreviousCarriedCharacter                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::BPDidSetCarriedCharacter(class APrimalCharacter* PreviousCarriedCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPDidSetCarriedCharacter");
		
		ASpaceDolphin_Character_BP_C_BPDidSetCarriedCharacter_Params params {};
		params.PreviousCarriedCharacter = PreviousCarriedCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.HasSaddle
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               RetIsSuperSaddle                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::HasSaddle(bool* ret, bool* RetIsSuperSaddle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.HasSaddle");
		
		ASpaceDolphin_Character_BP_C_HasSaddle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
		if (RetIsSuperSaddle != nullptr)
			*RetIsSuperSaddle = params.RetIsSuperSaddle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateDrafting
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::UpdateDrafting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateDrafting");
		
		ASpaceDolphin_Character_BP_C_UpdateDrafting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetDragSocketDinoName
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        aGrabbedDino                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class FName ASpaceDolphin_Character_BP_C::BPGetDragSocketDinoName(class APrimalDinoCharacter* aGrabbedDino)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetDragSocketDinoName");
		
		ASpaceDolphin_Character_BP_C_BPGetDragSocketDinoName_Params params {};
		params.aGrabbedDino = aGrabbedDino;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateSuperFlightStateData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::UpdateSuperFlightStateData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateSuperFlightStateData");
		
		ASpaceDolphin_Character_BP_C_UpdateSuperFlightStateData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateAcceleration
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::UpdateAcceleration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateAcceleration");
		
		ASpaceDolphin_Character_BP_C_UpdateAcceleration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateRotationRate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::UpdateRotationRate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateRotationRate");
		
		ASpaceDolphin_Character_BP_C_UpdateRotationRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateAllyAOE
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::UpdateAllyAOE()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateAllyAOE");
		
		ASpaceDolphin_Character_BP_C_UpdateAllyAOE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetWindGustEpicenter
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FVector ASpaceDolphin_Character_BP_C::GetWindGustEpicenter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetWindGustEpicenter");
		
		ASpaceDolphin_Character_BP_C_GetWindGustEpicenter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.DoWing GustAOE
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::DoWingGustAOE()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.DoWing GustAOE");
		
		ASpaceDolphin_Character_BP_C_DoWingGustAOE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is Diving Public
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             TimeDiveStart                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::IsDivingPublic(bool* ret, double* TimeDiveStart)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is Diving Public");
		
		ASpaceDolphin_Character_BP_C_IsDivingPublic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
		if (TimeDiveStart != nullptr)
			*TimeDiveStart = params.TimeDiveStart;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPNotifySetRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderSetting                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::BPNotifySetRider(class AShooterCharacter* RiderSetting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPNotifySetRider");
		
		ASpaceDolphin_Character_BP_C_BPNotifySetRider_Params params {};
		params.RiderSetting = RiderSetting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateTPVOffset
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::UpdateTPVOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateTPVOffset");
		
		ASpaceDolphin_Character_BP_C_UpdateTPVOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateCheckQuickTurn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::UpdateCheckQuickTurn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateCheckQuickTurn");
		
		ASpaceDolphin_Character_BP_C_UpdateCheckQuickTurn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateSpeed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::UpdateSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateSpeed");
		
		ASpaceDolphin_Character_BP_C_UpdateSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateDiving
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::UpdateDiving()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateDiving");
		
		ASpaceDolphin_Character_BP_C_UpdateDiving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsDiving
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             TimeDiveStart                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             TimeStoppedDiving                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::IsDiving(bool* ret, double* TimeDiveStart, double* TimeStoppedDiving)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.IsDiving");
		
		ASpaceDolphin_Character_BP_C_IsDiving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
		if (TimeDiveStart != nullptr)
			*TimeDiveStart = params.TimeDiveStart;
		if (TimeStoppedDiving != nullptr)
			*TimeStoppedDiving = params.TimeStoppedDiving;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetAnimBP
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class USpaceDolphin_AnimationBP_C*                 ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::GetAnimBP(class USpaceDolphin_AnimationBP_C** ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetAnimBP");
		
		ASpaceDolphin_Character_BP_C_GetAnimBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetCurrentPercentOfMaxFlySpeed
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	float ASpaceDolphin_Character_BP_C::GetCurrentPercentOfMaxFlySpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetCurrentPercentOfMaxFlySpeed");
		
		ASpaceDolphin_Character_BP_C_GetCurrentPercentOfMaxFlySpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetCDO
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class ASpaceDolphin_Character_BP_C*                ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::GetCDO(class ASpaceDolphin_Character_BP_C** ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GetCDO");
		
		ASpaceDolphin_Character_BP_C_GetCDO_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is Quick Turning
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool ASpaceDolphin_Character_BP_C::IsQuickTurning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Is Quick Turning");
		
		ASpaceDolphin_Character_BP_C_IsQuickTurning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.EndQuickTurn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::EndQuickTurn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.EndQuickTurn");
		
		ASpaceDolphin_Character_BP_C_EndQuickTurn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.StartSuperFlightQuickTurn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::StartSuperFlightQuickTurn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.StartSuperFlightQuickTurn");
		
		ASpaceDolphin_Character_BP_C_StartSuperFlightQuickTurn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OnRep_LastSuperFlightQuickTurn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::OnRep_LastSuperFlightQuickTurn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OnRep_LastSuperFlightQuickTurn");
		
		ASpaceDolphin_Character_BP_C_OnRep_LastSuperFlightQuickTurn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateSuperFlightRoll
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::UpdateSuperFlightRoll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateSuperFlightRoll");
		
		ASpaceDolphin_Character_BP_C_UpdateSuperFlightRoll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BP_InterceptMoveRight
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ASpaceDolphin_Character_BP_C::BP_InterceptMoveRight(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BP_InterceptMoveRight");
		
		ASpaceDolphin_Character_BP_C_BP_InterceptMoveRight_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateTrails
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::UpdateTrails()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateTrails");
		
		ASpaceDolphin_Character_BP_C_UpdateTrails_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ActivateTrails
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::ActivateTrails()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ActivateTrails");
		
		ASpaceDolphin_Character_BP_C_ActivateTrails_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.DeactivateTrails
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::DeactivateTrails()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.DeactivateTrails");
		
		ASpaceDolphin_Character_BP_C_DeactivateTrails_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.RidingTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::RidingTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.RidingTick");
		
		ASpaceDolphin_Character_BP_C_RidingTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BP_OnStartLandingNotify
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::BP_OnStartLandingNotify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BP_OnStartLandingNotify");
		
		ASpaceDolphin_Character_BP_C_BP_OnStartLandingNotify_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPOverrideFlyingVelocity
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     InitialVelocity                                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Gravity                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector ASpaceDolphin_Character_BP_C::BPOverrideFlyingVelocity(struct FVector* InitialVelocity, struct FVector* Gravity, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPOverrideFlyingVelocity");
		
		ASpaceDolphin_Character_BP_C_BPOverrideFlyingVelocity_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InitialVelocity != nullptr)
			*InitialVelocity = params.InitialVelocity;
		if (Gravity != nullptr)
			*Gravity = params.Gravity;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.K2_OnMovementModeChanged
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EMovementMode                                      NewMovementMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      PrevCustomMode                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      NewCustomMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::K2_OnMovementModeChanged(EMovementMode PrevMovementMode, EMovementMode NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.K2_OnMovementModeChanged");
		
		ASpaceDolphin_Character_BP_C_K2_OnMovementModeChanged_Params params {};
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
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BP_InterceptMoveForward
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ASpaceDolphin_Character_BP_C::BP_InterceptMoveForward(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BP_InterceptMoveForward");
		
		ASpaceDolphin_Character_BP_C_BP_InterceptMoveForward_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetHUDElements
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FHUDElement>                         OutElements                                                (Parm, OutParm, ZeroConstructor)
	 */
	void ASpaceDolphin_Character_BP_C::BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPGetHUDElements");
		
		ASpaceDolphin_Character_BP_C_BPGetHUDElements_Params params {};
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
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPOverrideCameraViewTarget
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
	void ASpaceDolphin_Character_BP_C::BPOverrideCameraViewTarget(const class FName& CurrentCameraMode, const struct FVector& DesiredCameraLocation, const struct FRotator& DesiredCameraRotation, float DesiredFOV, bool* bOverrideCameraLocation, struct FVector* CameraLocation, bool* bOverrideCameraRotation, struct FRotator* CameraRotation, bool* bOverrideCameraFOV, float* CameraFOV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPOverrideCameraViewTarget");
		
		ASpaceDolphin_Character_BP_C_BPOverrideCameraViewTarget_Params params {};
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
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BP_OnSetRunning
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewIsRunning                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::BP_OnSetRunning(bool bNewIsRunning)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BP_OnSetRunning");
		
		ASpaceDolphin_Character_BP_C_BP_OnSetRunning_Params params {};
		params.bNewIsRunning = bNewIsRunning;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPNotifyClearRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderClearing                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::BPNotifyClearRider(class AShooterCharacter* RiderClearing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPNotifyClearRider");
		
		ASpaceDolphin_Character_BP_C_BPNotifyClearRider_Params params {};
		params.RiderClearing = RiderClearing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPHandleOnStopTargeting
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ASpaceDolphin_Character_BP_C::BPHandleOnStopTargeting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPHandleOnStopTargeting");
		
		ASpaceDolphin_Character_BP_C_BPHandleOnStopTargeting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPHandleControllerInitiatedAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ASpaceDolphin_Character_BP_C::BPHandleControllerInitiatedAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPHandleControllerInitiatedAttack");
		
		ASpaceDolphin_Character_BP_C_BPHandleControllerInitiatedAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPModifyDesiredRotation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    InDesiredRotation                                          (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    OutDesiredRotation                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ASpaceDolphin_Character_BP_C::BPModifyDesiredRotation(float DeltaTime, struct FRotator* InDesiredRotation, struct FRotator* OutDesiredRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPModifyDesiredRotation");
		
		ASpaceDolphin_Character_BP_C_BPModifyDesiredRotation_Params params {};
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
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPSetupTamed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bWasJustTamed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::BPSetupTamed(bool bWasJustTamed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPSetupTamed");
		
		ASpaceDolphin_Character_BP_C_BPSetupTamed_Params params {};
		params.bWasJustTamed = bWasJustTamed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPOnStartJump
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ASpaceDolphin_Character_BP_C::BPOnStartJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPOnStartJump");
		
		ASpaceDolphin_Character_BP_C_BPOnStartJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPHandleUseButtonPress
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    RiderController                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ASpaceDolphin_Character_BP_C::BPHandleUseButtonPress(class AShooterPlayerController* RiderController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BPHandleUseButtonPress");
		
		ASpaceDolphin_Character_BP_C_BPHandleUseButtonPress_Params params {};
		params.RiderController = RiderController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.DisableCameraInterpolation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::DisableCameraInterpolation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.DisableCameraInterpolation");
		
		ASpaceDolphin_Character_BP_C_DisableCameraInterpolation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OnRep_LatchingSurfaceNormal
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::OnRep_LatchingSurfaceNormal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OnRep_LatchingSurfaceNormal");
		
		ASpaceDolphin_Character_BP_C_OnRep_LatchingSurfaceNormal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateLatchedDinoCamera
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::UpdateLatchedDinoCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateLatchedDinoCamera");
		
		ASpaceDolphin_Character_BP_C_UpdateLatchedDinoCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Controller Follow ActorRotation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::ControllerFollowActorRotation(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Controller Follow ActorRotation");
		
		ASpaceDolphin_Character_BP_C_ControllerFollowActorRotation_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ReferenceLatchingObjects
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::ReferenceLatchingObjects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ReferenceLatchingObjects");
		
		ASpaceDolphin_Character_BP_C_ReferenceLatchingObjects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.LineTrace
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
	void ASpaceDolphin_Character_BP_C::LineTrace(class UMeshComponent* Mesh, const class FName& SocketName, class AActor* Actor, const struct FVector& Offset, bool BackwardLatching, bool* HitSomthing, struct FVector* Location, struct FVector* Normal, class AActor** HitActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.LineTrace");
		
		ASpaceDolphin_Character_BP_C_LineTrace_Params params {};
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
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InterruptLatching
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::InterruptLatching()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InterruptLatching");
		
		ASpaceDolphin_Character_BP_C_InterruptLatching_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ProcessLatching
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::ProcessLatching(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ProcessLatching");
		
		ASpaceDolphin_Character_BP_C_ProcessLatching_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.TryLatch
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               backwardsLatching                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::TryLatch(const struct FVector& Offset, bool backwardsLatching)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.TryLatch");
		
		ASpaceDolphin_Character_BP_C_TryLatch_Params params {};
		params.Offset = Offset;
		params.backwardsLatching = backwardsLatching;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UserConstructionScript");
		
		ASpaceDolphin_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_AltFire_K2Node_InputActionEvent_232
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::InpActEvt_AltFire_K2Node_InputActionEvent_232()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_AltFire_K2Node_InputActionEvent_232");
		
		ASpaceDolphin_Character_BP_C_InpActEvt_AltFire_K2Node_InputActionEvent_232_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_BrakeDino_K2Node_InputActionEvent_231
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::InpActEvt_BrakeDino_K2Node_InputActionEvent_231()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_BrakeDino_K2Node_InputActionEvent_231");
		
		ASpaceDolphin_Character_BP_C_InpActEvt_BrakeDino_K2Node_InputActionEvent_231_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_BrakeDino_K2Node_InputActionEvent_230
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::InpActEvt_BrakeDino_K2Node_InputActionEvent_230()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_BrakeDino_K2Node_InputActionEvent_230");
		
		ASpaceDolphin_Character_BP_C_InpActEvt_BrakeDino_K2Node_InputActionEvent_230_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_229
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::InpActEvt_Crouch_K2Node_InputActionEvent_229()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_229");
		
		ASpaceDolphin_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_229_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_228
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::InpActEvt_Prone_K2Node_InputActionEvent_228()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_228");
		
		ASpaceDolphin_Character_BP_C_InpActEvt_Prone_K2Node_InputActionEvent_228_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_227
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_227()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_227");
		
		ASpaceDolphin_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_227_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_226
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_226()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_226");
		
		ASpaceDolphin_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_226_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_66
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_66()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_66");
		
		ASpaceDolphin_Character_BP_C_InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_66_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_65
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_65()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_65");
		
		ASpaceDolphin_Character_BP_C_InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_65_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_OrbitCam_K2Node_InputActionEvent_225
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::InpActEvt_OrbitCam_K2Node_InputActionEvent_225()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_OrbitCam_K2Node_InputActionEvent_225");
		
		ASpaceDolphin_Character_BP_C_InpActEvt_OrbitCam_K2Node_InputActionEvent_225_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_OrbitCamToggle_K2Node_InputActionEvent_224
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::InpActEvt_OrbitCamToggle_K2Node_InputActionEvent_224()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpActEvt_OrbitCamToggle_K2Node_InputActionEvent_224");
		
		ASpaceDolphin_Character_BP_C_InpActEvt_OrbitCamToggle_K2Node_InputActionEvent_224_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Latch
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               backwardsLatching                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::Latch(bool backwardsLatching)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.Latch");
		
		ASpaceDolphin_Character_BP_C_Latch_Params params {};
		params.backwardsLatching = backwardsLatching;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.LatchStartAnimation
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::LatchStartAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.LatchStartAnimation");
		
		ASpaceDolphin_Character_BP_C_LatchStartAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UnLatch
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               LatchingInterrupted                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::UnLatch(bool LatchingInterrupted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UnLatch");
		
		ASpaceDolphin_Character_BP_C_UnLatch_Params params {};
		params.LatchingInterrupted = LatchingInterrupted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UnLatchStartAnimation
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::UnLatchStartAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UnLatchStartAnimation");
		
		ASpaceDolphin_Character_BP_C_UnLatchStartAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimNotify*                                 AnimNotifyObject                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::BlueprintAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.BlueprintAnimNotifyCustomEvent");
		
		ASpaceDolphin_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params {};
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
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MoveToUsingDirection
	 * 		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::MoveToUsingDirection(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MoveToUsingDirection");
		
		ASpaceDolphin_Character_BP_C_MoveToUsingDirection_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UnLatchMoveAndRotate
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::UnLatchMoveAndRotate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UnLatchMoveAndRotate");
		
		ASpaceDolphin_Character_BP_C_UnLatchMoveAndRotate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.LatchingStartEvent
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::LatchingStartEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.LatchingStartEvent");
		
		ASpaceDolphin_Character_BP_C_LatchingStartEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.LatchingEndEvent
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::LatchingEndEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.LatchingEndEvent");
		
		ASpaceDolphin_Character_BP_C_LatchingEndEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.StopMovement
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::StopMovement(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.StopMovement");
		
		ASpaceDolphin_Character_BP_C_StopMovement_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.DisableFaceLatchingObjectRotation
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::DisableFaceLatchingObjectRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.DisableFaceLatchingObjectRotation");
		
		ASpaceDolphin_Character_BP_C_DisableFaceLatchingObjectRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.SetPassengersSurfaceCamera
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Yaw                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Pitch                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Roll                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::SetPassengersSurfaceCamera(float Yaw, float Pitch, float Roll)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.SetPassengersSurfaceCamera");
		
		ASpaceDolphin_Character_BP_C_SetPassengersSurfaceCamera_Params params {};
		params.Yaw = Yaw;
		params.Pitch = Pitch;
		params.Roll = Roll;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.LocalFaceLatchingObject
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::LocalFaceLatchingObject(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.LocalFaceLatchingObject");
		
		ASpaceDolphin_Character_BP_C_LocalFaceLatchingObject_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.StartedJump
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::StartedJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.StartedJump");
		
		ASpaceDolphin_Character_BP_C_StartedJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerToggleSuperFlight
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::ServerToggleSuperFlight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerToggleSuperFlight");
		
		ASpaceDolphin_Character_BP_C_ServerToggleSuperFlight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerSuperFightRightInput
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::ServerSuperFightRightInput(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerSuperFightRightInput");
		
		ASpaceDolphin_Character_BP_C_ServerSuperFightRightInput_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerRequestSuperFlightQuickTurn
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::ServerRequestSuperFlightQuickTurn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerRequestSuperFlightQuickTurn");
		
		ASpaceDolphin_Character_BP_C_ServerRequestSuperFlightQuickTurn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateQuickTurn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::UpdateQuickTurn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateQuickTurn");
		
		ASpaceDolphin_Character_BP_C_UpdateQuickTurn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerRequestWindGust
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::ServerRequestWindGust()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerRequestWindGust");
		
		ASpaceDolphin_Character_BP_C_ServerRequestWindGust_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotify_WindGust
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::AnimNotify_WindGust()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotify_WindGust");
		
		ASpaceDolphin_Character_BP_C_AnimNotify_WindGust_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ClientWindGust
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Epicenter                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::ClientWindGust(const struct FVector& Epicenter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ClientWindGust");
		
		ASpaceDolphin_Character_BP_C_ClientWindGust_Params params {};
		params.Epicenter = Epicenter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotify_WindGustVFX
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::AnimNotify_WindGustVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotify_WindGustVFX");
		
		ASpaceDolphin_Character_BP_C_AnimNotify_WindGustVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerRequestFireFlakCannon
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Dir                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Loc                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::ServerRequestFireFlakCannon(const struct FVector& Dir, const struct FVector& Loc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerRequestFireFlakCannon");
		
		ASpaceDolphin_Character_BP_C_ServerRequestFireFlakCannon_Params params {};
		params.Dir = Dir;
		params.Loc = Loc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181");
		
		ASpaceDolphin_Character_BP_C_InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerUpdateLastForwardInputTime
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::ServerUpdateLastForwardInputTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerUpdateLastForwardInputTime");
		
		ASpaceDolphin_Character_BP_C_ServerUpdateLastForwardInputTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.DelayedSuperFlightEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::DelayedSuperFlightEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.DelayedSuperFlightEnd");
		
		ASpaceDolphin_Character_BP_C_DelayedSuperFlightEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiSuperFlightEnd
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::MultiSuperFlightEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiSuperFlightEnd");
		
		ASpaceDolphin_Character_BP_C_MultiSuperFlightEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ClientTagDraftee
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::ClientTagDraftee(class APrimalCharacter* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ClientTagDraftee");
		
		ASpaceDolphin_Character_BP_C_ClientTagDraftee_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.WindGust180End
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::WindGust180End()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.WindGust180End");
		
		ASpaceDolphin_Character_BP_C_WindGust180End_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.WindGust180Tick
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::WindGust180Tick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.WindGust180Tick");
		
		ASpaceDolphin_Character_BP_C_WindGust180Tick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotify_WindGustCheckFor180
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::AnimNotify_WindGustCheckFor180()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotify_WindGustCheckFor180");
		
		ASpaceDolphin_Character_BP_C_AnimNotify_WindGustCheckFor180_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotify_WindGustBoost
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::AnimNotify_WindGustBoost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotify_WindGustBoost");
		
		ASpaceDolphin_Character_BP_C_AnimNotify_WindGustBoost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerRequest180
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::ServerRequest180()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerRequest180");
		
		ASpaceDolphin_Character_BP_C_ServerRequest180_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GamepadRightStickPressed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::GamepadRightStickPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.GamepadRightStickPressed");
		
		ASpaceDolphin_Character_BP_C_GamepadRightStickPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerSetLastTimePressedJump
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::ServerSetLastTimePressedJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerSetLastTimePressedJump");
		
		ASpaceDolphin_Character_BP_C_ServerSetLastTimePressedJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerSetLastTimeReleasedJump
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::ServerSetLastTimeReleasedJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerSetLastTimeReleasedJump");
		
		ASpaceDolphin_Character_BP_C_ServerSetLastTimeReleasedJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.QueueLanding
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::QueueLanding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.QueueLanding");
		
		ASpaceDolphin_Character_BP_C_QueueLanding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerRequestLanding
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::ServerRequestLanding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerRequestLanding");
		
		ASpaceDolphin_Character_BP_C_ServerRequestLanding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OnBola
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::OnBola()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.OnBola");
		
		ASpaceDolphin_Character_BP_C_OnBola_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerUpdateRunningStartTime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::ServerUpdateRunningStartTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerUpdateRunningStartTime");
		
		ASpaceDolphin_Character_BP_C_ServerUpdateRunningStartTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerUpdateRunningStopTime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::ServerUpdateRunningStopTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerUpdateRunningStopTime");
		
		ASpaceDolphin_Character_BP_C_ServerUpdateRunningStopTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiOnRunStarted
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::MultiOnRunStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiOnRunStarted");
		
		ASpaceDolphin_Character_BP_C_MultiOnRunStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiOnRunStopped
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::MultiOnRunStopped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiOnRunStopped");
		
		ASpaceDolphin_Character_BP_C_MultiOnRunStopped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiOnSuperFlightStart
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::MultiOnSuperFlightStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiOnSuperFlightStart");
		
		ASpaceDolphin_Character_BP_C_MultiOnSuperFlightStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.QueueGrabAttack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::QueueGrabAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.QueueGrabAttack");
		
		ASpaceDolphin_Character_BP_C_QueueGrabAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiThrusterVFXBoost
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::MultiThrusterVFXBoost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiThrusterVFXBoost");
		
		ASpaceDolphin_Character_BP_C_MultiThrusterVFXBoost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerRequestFireLasers
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     CameraHitLoc                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CustomTimeDilation                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::ServerRequestFireLasers(const struct FVector& CameraHitLoc, float CustomTimeDilation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerRequestFireLasers");
		
		ASpaceDolphin_Character_BP_C_ServerRequestFireLasers_Params params {};
		params.CameraHitLoc = CameraHitLoc;
		params.CustomTimeDilation = CustomTimeDilation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ClientSpawnLaserFireFX
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               PlayImpactFX                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               HitCharacterOrStructure                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        Socket                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::ClientSpawnLaserFireFX(const struct FVector& Start, const struct FVector& End, bool PlayImpactFX, bool HitCharacterOrStructure, const class FName& Socket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ClientSpawnLaserFireFX");
		
		ASpaceDolphin_Character_BP_C_ClientSpawnLaserFireFX_Params params {};
		params.Start = Start;
		params.End = End;
		params.PlayImpactFX = PlayImpactFX;
		params.HitCharacterOrStructure = HitCharacterOrStructure;
		params.Socket = Socket;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerPressedFire
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::ServerPressedFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerPressedFire");
		
		ASpaceDolphin_Character_BP_C_ServerPressedFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerFireChargedLaser
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Dir                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Loc                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CustomTimeDilation                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::ServerFireChargedLaser(const struct FVector& Dir, const struct FVector& Loc, class AActor* Target, float CustomTimeDilation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerFireChargedLaser");
		
		ASpaceDolphin_Character_BP_C_ServerFireChargedLaser_Params params {};
		params.Dir = Dir;
		params.Loc = Loc;
		params.Target = Target;
		params.CustomTimeDilation = CustomTimeDilation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.TickChargedLaserFX
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::TickChargedLaserFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.TickChargedLaserFX");
		
		ASpaceDolphin_Character_BP_C_TickChargedLaserFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ClearNumPressedFwdCount
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::ClearNumPressedFwdCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ClearNumPressedFwdCount");
		
		ASpaceDolphin_Character_BP_C_ClearNumPressedFwdCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerRequestStartLoop
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Immelmann                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::ServerRequestStartLoop(bool Immelmann)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerRequestStartLoop");
		
		ASpaceDolphin_Character_BP_C_ServerRequestStartLoop_Params params {};
		params.Immelmann = Immelmann;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiStartLoop
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Immelmann                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::MultiStartLoop(bool Immelmann)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiStartLoop");
		
		ASpaceDolphin_Character_BP_C_MultiStartLoop_Params params {};
		params.Immelmann = Immelmann;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ReceiveHit
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         MyComp                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      Other                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bSelfMoved                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     HitLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     HitNormal                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     NormalImpulse                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  Hit                                                        (Parm, OutParm, ReferenceParm)
	 */
	void ASpaceDolphin_Character_BP_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult* Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ReceiveHit");
		
		ASpaceDolphin_Character_BP_C_ReceiveHit_Params params {};
		params.MyComp = MyComp;
		params.Other = Other;
		params.OtherComp = OtherComp;
		params.bSelfMoved = bSelfMoved;
		params.HitLocation = HitLocation;
		params.HitNormal = HitNormal;
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
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiImpactedTerrain
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::MultiImpactedTerrain()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiImpactedTerrain");
		
		ASpaceDolphin_Character_BP_C_MultiImpactedTerrain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ClientPickupUpgrade
	 * 		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     PickupLocation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::ClientPickupUpgrade(const struct FVector& PickupLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ClientPickupUpgrade");
		
		ASpaceDolphin_Character_BP_C_ClientPickupUpgrade_Params params {};
		params.PickupLocation = PickupLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerRequestDestroyProjectile
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::ServerRequestDestroyProjectile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerRequestDestroyProjectile");
		
		ASpaceDolphin_Character_BP_C_ServerRequestDestroyProjectile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiDestroyPorjectile
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::MultiDestroyPorjectile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiDestroyPorjectile");
		
		ASpaceDolphin_Character_BP_C_MultiDestroyPorjectile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerSuperFightIsBraking
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::ServerSuperFightIsBraking(bool AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerSuperFightIsBraking");
		
		ASpaceDolphin_Character_BP_C_ServerSuperFightIsBraking_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerRequestBarrelRoll
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     CamDir                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::ServerRequestBarrelRoll(int32_t Direction, const struct FVector& CamDir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerRequestBarrelRoll");
		
		ASpaceDolphin_Character_BP_C_ServerRequestBarrelRoll_Params params {};
		params.Direction = Direction;
		params.CamDir = CamDir;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiBarrelRoll
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     CameraDir                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::MultiBarrelRoll(int32_t Direction, const struct FVector& CameraDir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiBarrelRoll");
		
		ASpaceDolphin_Character_BP_C_MultiBarrelRoll_Params params {};
		params.Direction = Direction;
		params.CameraDir = CameraDir;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiReflectProjectile
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterProjectile*                          Projectile                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::MultiReflectProjectile(class AShooterProjectile* Projectile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiReflectProjectile");
		
		ASpaceDolphin_Character_BP_C_MultiReflectProjectile_Params params {};
		params.Projectile = Projectile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ClientDamagedByTerrain
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::ClientDamagedByTerrain()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ClientDamagedByTerrain");
		
		ASpaceDolphin_Character_BP_C_ClientDamagedByTerrain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiDriftingBoost
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Speed                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::MultiDriftingBoost(float Speed, const struct FVector& Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiDriftingBoost");
		
		ASpaceDolphin_Character_BP_C_MultiDriftingBoost_Params params {};
		params.Speed = Speed;
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotifty_BarrelRollLeft
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::AnimNotifty_BarrelRollLeft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotifty_BarrelRollLeft");
		
		ASpaceDolphin_Character_BP_C_AnimNotifty_BarrelRollLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotifty_BarrelRollRight
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::AnimNotifty_BarrelRollRight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotifty_BarrelRollRight");
		
		ASpaceDolphin_Character_BP_C_AnimNotifty_BarrelRollRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerStartJump
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::ServerStartJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerStartJump");
		
		ASpaceDolphin_Character_BP_C_ServerStartJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.StarFoxServerRequestFireLasers
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::StarFoxServerRequestFireLasers(const struct FVector& Start, const struct FVector& End)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.StarFoxServerRequestFireLasers");
		
		ASpaceDolphin_Character_BP_C_StarFoxServerRequestFireLasers_Params params {};
		params.Start = Start;
		params.End = End;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotify_Echo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::AnimNotify_Echo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotify_Echo");
		
		ASpaceDolphin_Character_BP_C_AnimNotify_Echo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ClientEchoLocations
	 * 		Flags  -> (Net, NetReliable, HasOutParms, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FVector>                             Locations                                                  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void ASpaceDolphin_Character_BP_C::ClientEchoLocations(TArray<struct FVector>* Locations)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ClientEchoLocations");
		
		ASpaceDolphin_Character_BP_C_ClientEchoLocations_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Locations != nullptr)
			*Locations = params.Locations;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotify_FireChaff
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::AnimNotify_FireChaff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotify_FireChaff");
		
		ASpaceDolphin_Character_BP_C_AnimNotify_FireChaff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiSpawnChaffs
	 * 		Flags  -> (Net, NetReliable, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FVector>                             Locations                                                  (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void ASpaceDolphin_Character_BP_C::MultiSpawnChaffs(TArray<struct FVector>* Locations)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiSpawnChaffs");
		
		ASpaceDolphin_Character_BP_C_MultiSpawnChaffs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Locations != nullptr)
			*Locations = params.Locations;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotify_Nudge
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::AnimNotify_Nudge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotify_Nudge");
		
		ASpaceDolphin_Character_BP_C_AnimNotify_Nudge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.StopWildFlee
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::StopWildFlee()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.StopWildFlee");
		
		ASpaceDolphin_Character_BP_C_StopWildFlee_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.TriggerWildAnger
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::TriggerWildAnger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.TriggerWildAnger");
		
		ASpaceDolphin_Character_BP_C_TriggerWildAnger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotify_BlowHole
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::AnimNotify_BlowHole()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotify_BlowHole");
		
		ASpaceDolphin_Character_BP_C_AnimNotify_BlowHole_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ExpireAngryDinoTarget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::ExpireAngryDinoTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ExpireAngryDinoTarget");
		
		ASpaceDolphin_Character_BP_C_ExpireAngryDinoTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiAngryBlowHole
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::MultiAngryBlowHole()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiAngryBlowHole");
		
		ASpaceDolphin_Character_BP_C_MultiAngryBlowHole_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.SpaceWhaleIntroEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::SpaceWhaleIntroEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.SpaceWhaleIntroEnd");
		
		ASpaceDolphin_Character_BP_C_SpaceWhaleIntroEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ExpireAnger
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::ExpireAnger()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ExpireAnger");
		
		ASpaceDolphin_Character_BP_C_ExpireAnger_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerUpdateLastElevateTime
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::ServerUpdateLastElevateTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerUpdateLastElevateTime");
		
		ASpaceDolphin_Character_BP_C_ServerUpdateLastElevateTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerUpdateLastLowerTime
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::ServerUpdateLastLowerTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerUpdateLastLowerTime");
		
		ASpaceDolphin_Character_BP_C_ServerUpdateLastLowerTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotify_ToggleSuperFlight
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::AnimNotify_ToggleSuperFlight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.AnimNotify_ToggleSuperFlight");
		
		ASpaceDolphin_Character_BP_C_AnimNotify_ToggleSuperFlight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerForceClearRider
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::ServerForceClearRider()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ServerForceClearRider");
		
		ASpaceDolphin_Character_BP_C_ServerForceClearRider_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.CenterMouse
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::CenterMouse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.CenterMouse");
		
		ASpaceDolphin_Character_BP_C_CenterMouse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ReceiveBeginPlay");
		
		ASpaceDolphin_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiSaddleActivationText
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::MultiSaddleActivationText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.MultiSaddleActivationText");
		
		ASpaceDolphin_Character_BP_C_MultiSaddleActivationText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateLoopingEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::UpdateLoopingEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.UpdateLoopingEvent");
		
		ASpaceDolphin_Character_BP_C_UpdateLoopingEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.StopMovementImmediately
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::StopMovementImmediately()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.StopMovementImmediately");
		
		ASpaceDolphin_Character_BP_C_StopMovementImmediately_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ExecuteUbergraph_SpaceDolphin_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASpaceDolphin_Character_BP_C::ExecuteUbergraph_SpaceDolphin_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.ExecuteUbergraph_SpaceDolphin_Character_BP");
		
		ASpaceDolphin_Character_BP_C_ExecuteUbergraph_SpaceDolphin_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.NewEventDispatcher0__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::NewEventDispatcher0__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.NewEventDispatcher0__DelegateSignature");
		
		ASpaceDolphin_Character_BP_C_NewEventDispatcher0__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.NewEventDispatcher__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ASpaceDolphin_Character_BP_C::NewEventDispatcher__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C.NewEventDispatcher__DelegateSignature");
		
		ASpaceDolphin_Character_BP_C_NewEventDispatcher__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASpaceDolphin_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASpaceDolphin_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SpaceDolphin_Character_BP.SpaceDolphin_Character_BP_C");
		return ptr;
	}

}


