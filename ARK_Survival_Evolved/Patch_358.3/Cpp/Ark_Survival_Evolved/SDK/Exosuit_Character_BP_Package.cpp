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
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.GetHudData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bUsesChestBeam                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bCanUseChestBeam                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              ChestBeamEnergyPercent                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ChestBeamState                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimalInventoryComponent*                   InventoryComponent                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      FuelItem                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              EnergyPercent                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            CurrentMode                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPreparingJump                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_Character_BP_C::GetHudData(bool* bUsesChestBeam, bool* bCanUseChestBeam, float* ChestBeamEnergyPercent, int32_t* ChestBeamState, class UPrimalInventoryComponent** InventoryComponent, class UClass** FuelItem, float* EnergyPercent, int32_t* CurrentMode, bool* bIsPreparingJump)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.GetHudData");
		
		AExosuit_Character_BP_C_GetHudData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bUsesChestBeam != nullptr)
			*bUsesChestBeam = params.bUsesChestBeam;
		if (bCanUseChestBeam != nullptr)
			*bCanUseChestBeam = params.bCanUseChestBeam;
		if (ChestBeamEnergyPercent != nullptr)
			*ChestBeamEnergyPercent = params.ChestBeamEnergyPercent;
		if (ChestBeamState != nullptr)
			*ChestBeamState = params.ChestBeamState;
		if (InventoryComponent != nullptr)
			*InventoryComponent = params.InventoryComponent;
		if (FuelItem != nullptr)
			*FuelItem = params.FuelItem;
		if (EnergyPercent != nullptr)
			*EnergyPercent = params.EnergyPercent;
		if (CurrentMode != nullptr)
			*CurrentMode = params.CurrentMode;
		if (bIsPreparingJump != nullptr)
			*bIsPreparingJump = params.bIsPreparingJump;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.HasOfflineRider
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AExosuit_Character_BP_C::HasOfflineRider()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.HasOfflineRider");
		
		AExosuit_Character_BP_C_HasOfflineRider_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.BP_OnCryo
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_Character_BP_C::BP_OnCryo(class AShooterPlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BP_OnCryo");
		
		AExosuit_Character_BP_C_BP_OnCryo_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.GetFinalBeamTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      FinalTarget                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_Character_BP_C::GetFinalBeamTarget(class AActor** FinalTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.GetFinalBeamTarget");
		
		AExosuit_Character_BP_C_GetFinalBeamTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FinalTarget != nullptr)
			*FinalTarget = params.FinalTarget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPForceCameraStyle
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            ForViewTarget                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	ECameraStyle AExosuit_Character_BP_C::BPForceCameraStyle(class APrimalCharacter* ForViewTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPForceCameraStyle");
		
		AExosuit_Character_BP_C_BPForceCameraStyle_Params params {};
		params.ForViewTarget = ForViewTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPTimerNonDedicated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AExosuit_Character_BP_C::BPTimerNonDedicated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPTimerNonDedicated");
		
		AExosuit_Character_BP_C_BPTimerNonDedicated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.SetFPVMaterialParamter
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsFPV                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_Character_BP_C::SetFPVMaterialParamter(bool bIsFPV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.SetFPVMaterialParamter");
		
		AExosuit_Character_BP_C_SetFPVMaterialParamter_Params params {};
		params.bIsFPV = bIsFPV;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.OnChangedCameraMode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsFPV                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_Character_BP_C::OnChangedCameraMode(bool bIsFPV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.OnChangedCameraMode");
		
		AExosuit_Character_BP_C_OnChangedCameraMode_Params params {};
		params.bIsFPV = bIsFPV;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.OnJumped
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AExosuit_Character_BP_C::OnJumped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.OnJumped");
		
		AExosuit_Character_BP_C_OnJumped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.DisableExperienceAndLevelUps
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AExosuit_Character_BP_C::DisableExperienceAndLevelUps()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.DisableExperienceAndLevelUps");
		
		AExosuit_Character_BP_C_DisableExperienceAndLevelUps_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPSetupTamed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bWasJustTamed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_Character_BP_C::BPSetupTamed(bool bWasJustTamed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPSetupTamed");
		
		AExosuit_Character_BP_C_BPSetupTamed_Params params {};
		params.bWasJustTamed = bWasJustTamed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.DestroyExosuit
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AExosuit_Character_BP_C::DestroyExosuit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.DestroyExosuit");
		
		AExosuit_Character_BP_C_DestroyExosuit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.ShouldRequestStructuresPlacedOnFloor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APrimalStructure*                            Structure                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AExosuit_Character_BP_C::ShouldRequestStructuresPlacedOnFloor(class APrimalStructure* Structure)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.ShouldRequestStructuresPlacedOnFloor");
		
		AExosuit_Character_BP_C_ShouldRequestStructuresPlacedOnFloor_Params params {};
		params.Structure = Structure;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.ShouldKnockbackChar
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Char                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ShouldKnockback                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_Character_BP_C::ShouldKnockbackChar(class APrimalCharacter* Char, bool* ShouldKnockback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.ShouldKnockbackChar");
		
		AExosuit_Character_BP_C_ShouldKnockbackChar_Params params {};
		params.Char = Char;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldKnockback != nullptr)
			*ShouldKnockback = params.ShouldKnockback;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.RemovedAttachedStructure
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AExosuit_Character_BP_C::RemovedAttachedStructure()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.RemovedAttachedStructure");
		
		AExosuit_Character_BP_C_RemovedAttachedStructure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.SetupAttachedStructure
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AExosuit_Character_BP_C::SetupAttachedStructure()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.SetupAttachedStructure");
		
		AExosuit_Character_BP_C_SetupAttachedStructure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.ClientInitAttachedStructure
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AExosuit_Character_BP_C::ClientInitAttachedStructure()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.ClientInitAttachedStructure");
		
		AExosuit_Character_BP_C_ClientInitAttachedStructure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.OnRep_AttachedStructureID
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AExosuit_Character_BP_C::OnRep_AttachedStructureID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.OnRep_AttachedStructureID");
		
		AExosuit_Character_BP_C_OnRep_AttachedStructureID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPOverrideGetAttackAnimationIndex
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class UAnimMontage*>                        AnimationArray                                             (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	int32_t AExosuit_Character_BP_C::BPOverrideGetAttackAnimationIndex(int32_t AttackIndex, TArray<class UAnimMontage*>* AnimationArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPOverrideGetAttackAnimationIndex");
		
		AExosuit_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params params {};
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
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.BlueprintDrawFloatingHUD
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterHUD*                                 HUD                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterX                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterY                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DrawScale                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_Character_BP_C::BlueprintDrawFloatingHUD(class AShooterHUD* HUD, float CenterX, float CenterY, float DrawScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BlueprintDrawFloatingHUD");
		
		AExosuit_Character_BP_C_BlueprintDrawFloatingHUD_Params params {};
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
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              IncomingDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (Parm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  PointHitInfo                                               (Parm)
	 */
	float AExosuit_Character_BP_C::BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPAdjustDamage");
		
		AExosuit_Character_BP_C_BPAdjustDamage_Params params {};
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
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.IsAllowedToAutoRepair
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsAllowed                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              TimeRemaining                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_Character_BP_C::IsAllowedToAutoRepair(bool* IsAllowed, float* TimeRemaining)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.IsAllowedToAutoRepair");
		
		AExosuit_Character_BP_C_IsAllowedToAutoRepair_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsAllowed != nullptr)
			*IsAllowed = params.IsAllowed;
		if (TimeRemaining != nullptr)
			*TimeRemaining = params.TimeRemaining;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPTimerServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AExosuit_Character_BP_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPTimerServer");
		
		AExosuit_Character_BP_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AExosuit_Character_BP_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPTryMultiUse");
		
		AExosuit_Character_BP_C_BPTryMultiUse_Params params {};
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
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> AExosuit_Character_BP_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPGetMultiUseEntries");
		
		AExosuit_Character_BP_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.ModifyHudMultiUseLoc
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector2D                                   theVec                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		class APlayerController*                           PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_Character_BP_C::ModifyHudMultiUseLoc(struct FVector2D* theVec, class APlayerController* PC, int32_t index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.ModifyHudMultiUseLoc");
		
		AExosuit_Character_BP_C_ModifyHudMultiUseLoc_Params params {};
		params.PC = PC;
		params.index = index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (theVec != nullptr)
			*theVec = params.theVec;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.HasSavedMaterialForComponent
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USceneComponent*                             Component                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalStructure*                            Structure                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_Character_BP_C::HasSavedMaterialForComponent(class USceneComponent* Component, class APrimalStructure* Structure, int32_t* index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.HasSavedMaterialForComponent");
		
		AExosuit_Character_BP_C_HasSavedMaterialForComponent_Params params {};
		params.Component = Component;
		params.Structure = Structure;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (index != nullptr)
			*index = params.index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.BP_OnJumpPressed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AExosuit_Character_BP_C::BP_OnJumpPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BP_OnJumpPressed");
		
		AExosuit_Character_BP_C_BP_OnJumpPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPOverrideJumpZModifier
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              InJumpZModifier                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float AExosuit_Character_BP_C::BPOverrideJumpZModifier(float InJumpZModifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPOverrideJumpZModifier");
		
		AExosuit_Character_BP_C_BPOverrideJumpZModifier_Params params {};
		params.InJumpZModifier = InJumpZModifier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPAnimNotifyCustomState_End
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimNotifyState*                            AnimNotifyObject                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_Character_BP_C::BPAnimNotifyCustomState_End(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotifyState* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPAnimNotifyCustomState_End");
		
		AExosuit_Character_BP_C_BPAnimNotifyCustomState_End_Params params {};
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
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPAnimNotifyCustomState_Begin
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              TotalDuration                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimNotifyState*                            AnimNotifyObject                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_Character_BP_C::BPAnimNotifyCustomState_Begin(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, class UAnimNotifyState* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPAnimNotifyCustomState_Begin");
		
		AExosuit_Character_BP_C_BPAnimNotifyCustomState_Begin_Params params {};
		params.CustomEventName = CustomEventName;
		params.MeshComp = MeshComp;
		params.Animation = Animation;
		params.TotalDuration = TotalDuration;
		params.AnimNotifyObject = AnimNotifyObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.BP_InterceptMoveRight
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AExosuit_Character_BP_C::BP_InterceptMoveRight(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BP_InterceptMoveRight");
		
		AExosuit_Character_BP_C_BP_InterceptMoveRight_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.BlueprintPlayDying
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              KillingDamage                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                DamageEvent                                                (Parm, OutParm, ReferenceParm)
	 * 		class APawn*                                       InstigatingPawn                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_Character_BP_C::BlueprintPlayDying(float KillingDamage, struct FDamageEvent* DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BlueprintPlayDying");
		
		AExosuit_Character_BP_C_BlueprintPlayDying_Params params {};
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
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.UpdateFuel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ForceUpdateEnergyPercentRep                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_Character_BP_C::UpdateFuel(float DeltaTime, bool ForceUpdateEnergyPercentRep)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.UpdateFuel");
		
		AExosuit_Character_BP_C_UpdateFuel_Params params {};
		params.DeltaTime = DeltaTime;
		params.ForceUpdateEnergyPercentRep = ForceUpdateEnergyPercentRep;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPNotifyInventoryItemChange
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsItemAdd                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimalItem*                                 theItem                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bEquipItem                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_Character_BP_C::BPNotifyInventoryItemChange(bool bIsItemAdd, class UPrimalItem* theItem, bool bEquipItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPNotifyInventoryItemChange");
		
		AExosuit_Character_BP_C_BPNotifyInventoryItemChange_Params params {};
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
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.BP_OnSetRunning
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewIsRunning                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_Character_BP_C::BP_OnSetRunning(bool bNewIsRunning)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BP_OnSetRunning");
		
		AExosuit_Character_BP_C_BP_OnSetRunning_Params params {};
		params.bNewIsRunning = bNewIsRunning;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.BP_GetCustomModifier_MaxSpeed
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float AExosuit_Character_BP_C::BP_GetCustomModifier_MaxSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BP_GetCustomModifier_MaxSpeed");
		
		AExosuit_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPOverrideCharacterParticle
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticleSystem*                             ParticleIn                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class UParticleSystem* AExosuit_Character_BP_C::BPOverrideCharacterParticle(class UParticleSystem* ParticleIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPOverrideCharacterParticle");
		
		AExosuit_Character_BP_C_BPOverrideCharacterParticle_Params params {};
		params.ParticleIn = ParticleIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPGetRiderUnboardLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            RidingCharacter                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector AExosuit_Character_BP_C::BPGetRiderUnboardLocation(class APrimalCharacter* RidingCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPGetRiderUnboardLocation");
		
		AExosuit_Character_BP_C_BPGetRiderUnboardLocation_Params params {};
		params.RidingCharacter = RidingCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPGetRiderUnboardDirection
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            RidingCharacter                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector AExosuit_Character_BP_C::BPGetRiderUnboardDirection(class APrimalCharacter* RidingCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPGetRiderUnboardDirection");
		
		AExosuit_Character_BP_C_BPGetRiderUnboardDirection_Params params {};
		params.RidingCharacter = RidingCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AExosuit_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.ReceiveBeginPlay");
		
		AExosuit_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPOnMovementModeChangedNotify
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      PreviousCustomMode                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_Character_BP_C::BPOnMovementModeChangedNotify(EMovementMode PrevMovementMode, unsigned char PreviousCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPOnMovementModeChangedNotify");
		
		AExosuit_Character_BP_C_BPOnMovementModeChangedNotify_Params params {};
		params.PrevMovementMode = PrevMovementMode;
		params.PreviousCustomMode = PreviousCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPNotifyToggleHUD
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bHudHidden                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_Character_BP_C::BPNotifyToggleHUD(bool bHudHidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPNotifyToggleHUD");
		
		AExosuit_Character_BP_C_BPNotifyToggleHUD_Params params {};
		params.bHudHidden = bHudHidden;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.SetupAimedStructure
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            InStructure                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_Character_BP_C::SetupAimedStructure(class APrimalStructure* InStructure)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.SetupAimedStructure");
		
		AExosuit_Character_BP_C_SetupAimedStructure_Params params {};
		params.InStructure = InStructure;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.AttachHandBeams
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AExosuit_Character_BP_C::AttachHandBeams()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.AttachHandBeams");
		
		AExosuit_Character_BP_C_AttachHandBeams_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPAdjustAttackIndex
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	int32_t AExosuit_Character_BP_C::BPAdjustAttackIndex(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPAdjustAttackIndex");
		
		AExosuit_Character_BP_C_BPAdjustAttackIndex_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.FillEnergy
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AExosuit_Character_BP_C::FillEnergy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.FillEnergy");
		
		AExosuit_Character_BP_C_FillEnergy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPPostLoadedFromSaveGame
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AExosuit_Character_BP_C::BPPostLoadedFromSaveGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPPostLoadedFromSaveGame");
		
		AExosuit_Character_BP_C_BPPostLoadedFromSaveGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPGetOverrideCameraInterpSpeed
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DefaultTPVCameraSpeedInterpolationMultiplier               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DefaultTPVOffsetInterpSpeed                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              TPVCameraSpeedInterpolationMultiplier                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              TPVOffsetInterpSpeed                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_Character_BP_C::BPGetOverrideCameraInterpSpeed(float DefaultTPVCameraSpeedInterpolationMultiplier, float DefaultTPVOffsetInterpSpeed, float* TPVCameraSpeedInterpolationMultiplier, float* TPVOffsetInterpSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPGetOverrideCameraInterpSpeed");
		
		AExosuit_Character_BP_C_BPGetOverrideCameraInterpSpeed_Params params {};
		params.DefaultTPVCameraSpeedInterpolationMultiplier = DefaultTPVCameraSpeedInterpolationMultiplier;
		params.DefaultTPVOffsetInterpSpeed = DefaultTPVOffsetInterpSpeed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TPVCameraSpeedInterpolationMultiplier != nullptr)
			*TPVCameraSpeedInterpolationMultiplier = params.TPVCameraSpeedInterpolationMultiplier;
		if (TPVOffsetInterpSpeed != nullptr)
			*TPVOffsetInterpSpeed = params.TPVOffsetInterpSpeed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPPreventRiding
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           ByPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bDontCheckDistance                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AExosuit_Character_BP_C::BPPreventRiding(class AShooterCharacter* ByPawn, bool bDontCheckDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPPreventRiding");
		
		AExosuit_Character_BP_C_BPPreventRiding_Params params {};
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
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.GetChestBeamEnergy
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              RemainingEnergy                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_Character_BP_C::GetChestBeamEnergy(float* RemainingEnergy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.GetChestBeamEnergy");
		
		AExosuit_Character_BP_C_GetChestBeamEnergy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RemainingEnergy != nullptr)
			*RemainingEnergy = params.RemainingEnergy;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPGetCrosshairColor
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	struct FLinearColor AExosuit_Character_BP_C::BPGetCrosshairColor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPGetCrosshairColor");
		
		AExosuit_Character_BP_C_BPGetCrosshairColor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.Cycle Mode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AExosuit_Character_BP_C::CycleMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.Cycle Mode");
		
		AExosuit_Character_BP_C_CycleMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.SyncHUD
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AExosuit_Character_BP_C::SyncHUD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.SyncHUD");
		
		AExosuit_Character_BP_C_SyncHUD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.DestroyHudWidget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               DestroyNow                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_Character_BP_C::DestroyHudWidget(bool DestroyNow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.DestroyHudWidget");
		
		AExosuit_Character_BP_C_DestroyHudWidget_Params params {};
		params.DestroyNow = DestroyNow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.SetupHUDWidget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           PC                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_Character_BP_C::SetupHUDWidget(class APlayerController* PC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.SetupHUDWidget");
		
		AExosuit_Character_BP_C_SetupHUDWidget_Params params {};
		params.PC = PC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.IsModeAllowed
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewMode                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsAllowed                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_Character_BP_C::IsModeAllowed(int32_t NewMode, bool* bIsAllowed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.IsModeAllowed");
		
		AExosuit_Character_BP_C_IsModeAllowed_Params params {};
		params.NewMode = NewMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsAllowed != nullptr)
			*bIsAllowed = params.bIsAllowed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.SetCurrentMode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewMode                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_Character_BP_C::SetCurrentMode(int32_t NewMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.SetCurrentMode");
		
		AExosuit_Character_BP_C_SetCurrentMode_Params params {};
		params.NewMode = NewMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AExosuit_Character_BP_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.ReceiveDestroyed");
		
		AExosuit_Character_BP_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.InterceptInputEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      InputName                                                  (Parm, ZeroConstructor)
	 */
	void AExosuit_Character_BP_C::InterceptInputEvent(const class FString& InputName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.InterceptInputEvent");
		
		AExosuit_Character_BP_C_InterceptInputEvent_Params params {};
		params.InputName = InputName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.BP_OnJumpReleased
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AExosuit_Character_BP_C::BP_OnJumpReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BP_OnJumpReleased");
		
		AExosuit_Character_BP_C_BP_OnJumpReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPGetGravityZScale
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float AExosuit_Character_BP_C::BPGetGravityZScale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPGetGravityZScale");
		
		AExosuit_Character_BP_C_BPGetGravityZScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimNotify*                                 AnimNotifyObject                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_Character_BP_C::BlueprintAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BlueprintAnimNotifyCustomEvent");
		
		AExosuit_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params {};
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
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.GetJumpVelocity
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     StartLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     EndLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bForPreview                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector2D                                   Velocity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bFoundValidTrajectory                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Gravity                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     AdjustedEndLocation                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_Character_BP_C::GetJumpVelocity(const struct FVector& StartLocation, const struct FVector& EndLocation, bool bForPreview, struct FVector2D* Velocity, bool* bFoundValidTrajectory, float* Gravity, struct FVector* AdjustedEndLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.GetJumpVelocity");
		
		AExosuit_Character_BP_C_GetJumpVelocity_Params params {};
		params.StartLocation = StartLocation;
		params.EndLocation = EndLocation;
		params.bForPreview = bForPreview;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Velocity != nullptr)
			*Velocity = params.Velocity;
		if (bFoundValidTrajectory != nullptr)
			*bFoundValidTrajectory = params.bFoundValidTrajectory;
		if (Gravity != nullptr)
			*Gravity = params.Gravity;
		if (AdjustedEndLocation != nullptr)
			*AdjustedEndLocation = params.AdjustedEndLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.OnLanded
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (Parm, OutParm, ReferenceParm)
	 */
	void AExosuit_Character_BP_C::OnLanded(struct FHitResult* Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.OnLanded");
		
		AExosuit_Character_BP_C_OnLanded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Hit != nullptr)
			*Hit = params.Hit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPAdjustImpulseFromDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     DesiredImpulse                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DamageTaken                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (Parm)
	 * 		class APawn*                                       PawnInstigator                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  PointHitInfo                                               (Parm)
	 */
	struct FVector AExosuit_Character_BP_C::BPAdjustImpulseFromDamage(const struct FVector& DesiredImpulse, float DamageTaken, const struct FDamageEvent& TheDamageEvent, class APawn* PawnInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPAdjustImpulseFromDamage");
		
		AExosuit_Character_BP_C_BPAdjustImpulseFromDamage_Params params {};
		params.DesiredImpulse = DesiredImpulse;
		params.DamageTaken = DamageTaken;
		params.TheDamageEvent = TheDamageEvent;
		params.PawnInstigator = PawnInstigator;
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
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPOverrideHurtAnim
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
	class UAnimMontage* AExosuit_Character_BP_C::BPOverrideHurtAnim(float DamageTaken, struct FDamageEvent* DamageEvent, class APawn* PawnInstigator, class AActor* DamageCauser, bool bIsLocalPath, bool bIsPointDamage, const struct FVector& PointDamageLocation, const struct FVector& PointDamageHitNormal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPOverrideHurtAnim");
		
		AExosuit_Character_BP_C_BPOverrideHurtAnim_Params params {};
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
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.BP_OnSetDeath
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AExosuit_Character_BP_C::BP_OnSetDeath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BP_OnSetDeath");
		
		AExosuit_Character_BP_C_BP_OnSetDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.OnRep_OfflineRider
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AExosuit_Character_BP_C::OnRep_OfflineRider()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.OnRep_OfflineRider");
		
		AExosuit_Character_BP_C_OnRep_OfflineRider_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.SetJumpPreviewVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewVisibility                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_Character_BP_C::SetJumpPreviewVisibility(bool NewVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.SetJumpPreviewVisibility");
		
		AExosuit_Character_BP_C_SetJumpPreviewVisibility_Params params {};
		params.NewVisibility = NewVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.UpdateJumpPreview
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AExosuit_Character_BP_C::UpdateJumpPreview()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.UpdateJumpPreview");
		
		AExosuit_Character_BP_C_UpdateJumpPreview_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPLimitPlayerRotation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            viewingCharacter                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    InViewRotation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FRotator AExosuit_Character_BP_C::BPLimitPlayerRotation(class APrimalCharacter* viewingCharacter, const struct FRotator& InViewRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPLimitPlayerRotation");
		
		AExosuit_Character_BP_C_BPLimitPlayerRotation_Params params {};
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
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.SetChestBeamState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ReplicateToOwner                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_Character_BP_C::SetChestBeamState(int32_t NewState, bool ReplicateToOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.SetChestBeamState");
		
		AExosuit_Character_BP_C_SetChestBeamState_Params params {};
		params.NewState = NewState;
		params.ReplicateToOwner = ReplicateToOwner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.OnRep_ChestBeamState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AExosuit_Character_BP_C::OnRep_ChestBeamState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.OnRep_ChestBeamState");
		
		AExosuit_Character_BP_C_OnRep_ChestBeamState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPGetCrosshairAlpha
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float AExosuit_Character_BP_C::BPGetCrosshairAlpha()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPGetCrosshairAlpha");
		
		AExosuit_Character_BP_C_BPGetCrosshairAlpha_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.CanUseChestBeam
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ShouldDeplete                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AExosuit_Character_BP_C::CanUseChestBeam(bool* ShouldDeplete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.CanUseChestBeam");
		
		AExosuit_Character_BP_C_CanUseChestBeam_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldDeplete != nullptr)
			*ShouldDeplete = params.ShouldDeplete;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPOnStopJump
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AExosuit_Character_BP_C::BPOnStopJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPOnStopJump");
		
		AExosuit_Character_BP_C_BPOnStopJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPOnStartJump
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AExosuit_Character_BP_C::BPOnStartJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPOnStartJump");
		
		AExosuit_Character_BP_C_BPOnStartJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.LocalClientUpdateChestBeamLocation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AExosuit_Character_BP_C::LocalClientUpdateChestBeamLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.LocalClientUpdateChestBeamLocation");
		
		AExosuit_Character_BP_C_LocalClientUpdateChestBeamLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.EnableChestBeamFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsEnabled                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_Character_BP_C::EnableChestBeamFX(bool bIsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.EnableChestBeamFX");
		
		AExosuit_Character_BP_C_EnableChestBeamFX_Params params {};
		params.bIsEnabled = bIsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPHandleOnStopTargeting
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AExosuit_Character_BP_C::BPHandleOnStopTargeting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPHandleOnStopTargeting");
		
		AExosuit_Character_BP_C_BPHandleOnStopTargeting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.CanJumpInternal
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AExosuit_Character_BP_C::CanJumpInternal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.CanJumpInternal");
		
		AExosuit_Character_BP_C_CanJumpInternal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPGetAddForwardVelocityOnJump
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float AExosuit_Character_BP_C::BPGetAddForwardVelocityOnJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPGetAddForwardVelocityOnJump");
		
		AExosuit_Character_BP_C_BPGetAddForwardVelocityOnJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPGetTargetingDesirability
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Attacker                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float AExosuit_Character_BP_C::BPGetTargetingDesirability(class AActor* Attacker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPGetTargetingDesirability");
		
		AExosuit_Character_BP_C_BPGetTargetingDesirability_Params params {};
		params.Attacker = Attacker;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.SetHighlightColor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            ForStructure                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_Character_BP_C::SetHighlightColor(class APrimalStructure* ForStructure, const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.SetHighlightColor");
		
		AExosuit_Character_BP_C_SetHighlightColor_Params params {};
		params.ForStructure = ForStructure;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPNotifySetRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderSetting                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_Character_BP_C::BPNotifySetRider(class AShooterCharacter* RiderSetting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPNotifySetRider");
		
		AExosuit_Character_BP_C_BPNotifySetRider_Params params {};
		params.RiderSetting = RiderSetting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.SetStructureHighlighted
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            Structure                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bNewHighlighted                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FLinearColor                                Color                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_Character_BP_C::SetStructureHighlighted(class APrimalStructure* Structure, bool bNewHighlighted, const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.SetStructureHighlighted");
		
		AExosuit_Character_BP_C_SetStructureHighlighted_Params params {};
		params.Structure = Structure;
		params.bNewHighlighted = bNewHighlighted;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.StoreStructure
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            StructureToGrab                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bShowNotifications                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_Character_BP_C::StoreStructure(class APrimalStructure* StructureToGrab, bool bShowNotifications)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.StoreStructure");
		
		AExosuit_Character_BP_C_StoreStructure_Params params {};
		params.StructureToGrab = StructureToGrab;
		params.bShowNotifications = bShowNotifications;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.GetStructurePlacer
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APrimalStructurePlacer*                      OutStructurePlacer                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_Character_BP_C::GetStructurePlacer(class APrimalStructurePlacer** OutStructurePlacer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.GetStructurePlacer");
		
		AExosuit_Character_BP_C_GetStructurePlacer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutStructurePlacer != nullptr)
			*OutStructurePlacer = params.OutStructurePlacer;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPNotifyClearRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderClearing                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_Character_BP_C::BPNotifyClearRider(class AShooterCharacter* RiderClearing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPNotifyClearRider");
		
		AExosuit_Character_BP_C_BPNotifyClearRider_Params params {};
		params.RiderClearing = RiderClearing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPDrawToRiderHUD
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterHUD*                                 HUD                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_Character_BP_C::BPDrawToRiderHUD(class AShooterHUD* HUD)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPDrawToRiderHUD");
		
		AExosuit_Character_BP_C_BPDrawToRiderHUD_Params params {};
		params.HUD = HUD;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.CanAttachStructure
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            PrimalStructure                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bCanGrab                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_Character_BP_C::CanAttachStructure(class APrimalStructure* PrimalStructure, bool* bCanGrab)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.CanAttachStructure");
		
		AExosuit_Character_BP_C_CanAttachStructure_Params params {};
		params.PrimalStructure = PrimalStructure;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bCanGrab != nullptr)
			*bCanGrab = params.bCanGrab;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.UpdateAimedStructure
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AExosuit_Character_BP_C::UpdateAimedStructure()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.UpdateAimedStructure");
		
		AExosuit_Character_BP_C_UpdateAimedStructure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.Set Last Aimed Structure
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            LastAimedStructure                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_Character_BP_C::SetLastAimedStructure(class APrimalStructure* LastAimedStructure)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.Set Last Aimed Structure");
		
		AExosuit_Character_BP_C_SetLastAimedStructure_Params params {};
		params.LastAimedStructure = LastAimedStructure;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.ResetLastAimedStructure
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AExosuit_Character_BP_C::ResetLastAimedStructure()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.ResetLastAimedStructure");
		
		AExosuit_Character_BP_C_ResetLastAimedStructure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.SpawnPreviewStructure
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AExosuit_Character_BP_C::SpawnPreviewStructure()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.SpawnPreviewStructure");
		
		AExosuit_Character_BP_C_SpawnPreviewStructure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.RidingTick
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_Character_BP_C::RidingTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.RidingTick");
		
		AExosuit_Character_BP_C_RidingTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.GetAimedStructure
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            OutStructure                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_Character_BP_C::GetAimedStructure(class APrimalStructure** OutStructure)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.GetAimedStructure");
		
		AExosuit_Character_BP_C_GetAimedStructure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutStructure != nullptr)
			*OutStructure = params.OutStructure;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPHandleControllerInitiatedAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AExosuit_Character_BP_C::BPHandleControllerInitiatedAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BPHandleControllerInitiatedAttack");
		
		AExosuit_Character_BP_C_BPHandleControllerInitiatedAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AExosuit_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.UserConstructionScript");
		
		AExosuit_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_RequestPlacement
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    ViewRotation                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_Character_BP_C::Server_RequestPlacement(const struct FVector& Location, const struct FRotator& Rotation, const struct FRotator& ViewRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_RequestPlacement");
		
		AExosuit_Character_BP_C_Server_RequestPlacement_Params params {};
		params.Location = Location;
		params.Rotation = Rotation;
		params.ViewRotation = ViewRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_RequestAttachStructure
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            StructureToGrab                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_Character_BP_C::Server_RequestAttachStructure(class APrimalStructure* StructureToGrab)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_RequestAttachStructure");
		
		AExosuit_Character_BP_C_Server_RequestAttachStructure_Params params {};
		params.StructureToGrab = StructureToGrab;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_RequestStoreStructure
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            StructureToGrab                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_Character_BP_C::Server_RequestStoreStructure(class APrimalStructure* StructureToGrab)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_RequestStoreStructure");
		
		AExosuit_Character_BP_C_Server_RequestStoreStructure_Params params {};
		params.StructureToGrab = StructureToGrab;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.BindReceivedStructuresDelegate
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    ShooterPC                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_Character_BP_C::BindReceivedStructuresDelegate(class AShooterPlayerController* ShooterPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.BindReceivedStructuresDelegate");
		
		AExosuit_Character_BP_C_BindReceivedStructuresDelegate_Params params {};
		params.ShooterPC = ShooterPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.OnClientReceiveStructuresPlacedOnFloor_Event
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            Structure                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class APrimalStructure*>                    StructuresPlacedOnFloor                                    (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void AExosuit_Character_BP_C::OnClientReceiveStructuresPlacedOnFloor_Event(class APrimalStructure* Structure, TArray<class APrimalStructure*>* StructuresPlacedOnFloor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.OnClientReceiveStructuresPlacedOnFloor_Event");
		
		AExosuit_Character_BP_C_OnClientReceiveStructuresPlacedOnFloor_Event_Params params {};
		params.Structure = Structure;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StructuresPlacedOnFloor != nullptr)
			*StructuresPlacedOnFloor = params.StructuresPlacedOnFloor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_RequestJump
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              HeldTime                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bWasBlockingHIt                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     HitNormal                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_Character_BP_C::Server_RequestJump(const struct FVector& Location, float HeldTime, bool bWasBlockingHIt, const struct FVector& HitNormal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_RequestJump");
		
		AExosuit_Character_BP_C_Server_RequestJump_Params params {};
		params.Location = Location;
		params.HeldTime = HeldTime;
		params.bWasBlockingHIt = bWasBlockingHIt;
		params.HitNormal = HitNormal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_SetBeamEndLocation
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bWasHit                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_Character_BP_C::Server_SetBeamEndLocation(const struct FVector& Location, bool bWasHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_SetBeamEndLocation");
		
		AExosuit_Character_BP_C_Server_SetBeamEndLocation_Params params {};
		params.Location = Location;
		params.bWasHit = bWasHit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.Multicast_SetBeamEndLocation
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bWasHit                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_Character_BP_C::Multicast_SetBeamEndLocation(const struct FVector& Location, bool bWasHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.Multicast_SetBeamEndLocation");
		
		AExosuit_Character_BP_C_Multicast_SetBeamEndLocation_Params params {};
		params.Location = Location;
		params.bWasHit = bWasHit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_RequestChestBeamState
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_Character_BP_C::Server_RequestChestBeamState(int32_t NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_RequestChestBeamState");
		
		AExosuit_Character_BP_C_Server_RequestChestBeamState_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.AttachOfflineRider
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AExosuit_Character_BP_C::AttachOfflineRider()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.AttachOfflineRider");
		
		AExosuit_Character_BP_C_AttachOfflineRider_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.DoKnockback
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AExosuit_Character_BP_C::DoKnockback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.DoKnockback");
		
		AExosuit_Character_BP_C_DoKnockback_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.Multicast_KnockbackFX
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AExosuit_Character_BP_C::Multicast_KnockbackFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.Multicast_KnockbackFX");
		
		AExosuit_Character_BP_C_Multicast_KnockbackFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.Multicast_SpawnLandedFX
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AExosuit_Character_BP_C::Multicast_SpawnLandedFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.Multicast_SpawnLandedFX");
		
		AExosuit_Character_BP_C_Multicast_SpawnLandedFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.SpawnLandedFX
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AExosuit_Character_BP_C::SpawnLandedFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.SpawnLandedFX");
		
		AExosuit_Character_BP_C_SpawnLandedFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_SetPreparingJump
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NewIsPreparingJump                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_Character_BP_C::Server_SetPreparingJump(bool NewIsPreparingJump)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_SetPreparingJump");
		
		AExosuit_Character_BP_C_Server_SetPreparingJump_Params params {};
		params.NewIsPreparingJump = NewIsPreparingJump;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.DoAttachStructure
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AExosuit_Character_BP_C::DoAttachStructure()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.DoAttachStructure");
		
		AExosuit_Character_BP_C_DoAttachStructure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.DoPlacement
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AExosuit_Character_BP_C::DoPlacement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.DoPlacement");
		
		AExosuit_Character_BP_C_DoPlacement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.Multicast_DoPlacment
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_Character_BP_C::Multicast_DoPlacment(const struct FVector& Location, const struct FRotator& Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.Multicast_DoPlacment");
		
		AExosuit_Character_BP_C_Multicast_DoPlacment_Params params {};
		params.Location = Location;
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_SetCurrentMode
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewMode                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_Character_BP_C::Server_SetCurrentMode(int32_t NewMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_SetCurrentMode");
		
		AExosuit_Character_BP_C_Server_SetCurrentMode_Params params {};
		params.NewMode = NewMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.ServerRestart
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AExosuit_Character_BP_C::ServerRestart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.ServerRestart");
		
		AExosuit_Character_BP_C_ServerRestart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.Multicast_HideAttachedStructure
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AExosuit_Character_BP_C::Multicast_HideAttachedStructure()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.Multicast_HideAttachedStructure");
		
		AExosuit_Character_BP_C_Multicast_HideAttachedStructure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.Multicast_ShowAttachedStructure
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AExosuit_Character_BP_C::Multicast_ShowAttachedStructure()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.Multicast_ShowAttachedStructure");
		
		AExosuit_Character_BP_C_Multicast_ShowAttachedStructure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.Multicast_ResetPendingAttachedStructure
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void AExosuit_Character_BP_C::Multicast_ResetPendingAttachedStructure()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.Multicast_ResetPendingAttachedStructure");
		
		AExosuit_Character_BP_C_Multicast_ResetPendingAttachedStructure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.OnChangedPhysicsVolume
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APhysicsVolume*                              NewVolume                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_Character_BP_C::OnChangedPhysicsVolume(class APhysicsVolume* NewVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.OnChangedPhysicsVolume");
		
		AExosuit_Character_BP_C_OnChangedPhysicsVolume_Params params {};
		params.NewVolume = NewVolume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_SetStartedRunning
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Time                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_Character_BP_C::Server_SetStartedRunning(double Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_SetStartedRunning");
		
		AExosuit_Character_BP_C_Server_SetStartedRunning_Params params {};
		params.Time = Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_KnockbackChars
	 * 		Flags  -> (Net, NetReliable, NetServer, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class APrimalCharacter*>                    Chars                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		TArray<struct FVector>                             Impulses                                                   (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void AExosuit_Character_BP_C::Server_KnockbackChars(TArray<class APrimalCharacter*>* Chars, TArray<struct FVector>* Impulses)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_KnockbackChars");
		
		AExosuit_Character_BP_C_Server_KnockbackChars_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Chars != nullptr)
			*Chars = params.Chars;
		if (Impulses != nullptr)
			*Impulses = params.Impulses;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.ClearMoveIgnoredActors
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AExosuit_Character_BP_C::ClearMoveIgnoredActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.ClearMoveIgnoredActors");
		
		AExosuit_Character_BP_C_ClearMoveIgnoredActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.ClearHUDReference
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AExosuit_Character_BP_C::ClearHUDReference()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.ClearHUDReference");
		
		AExosuit_Character_BP_C_ClearHUDReference_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.Multicast_StoredStructureFX
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bForceOnOwningClient                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_Character_BP_C::Multicast_StoredStructureFX(bool bForceOnOwningClient)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.Multicast_StoredStructureFX");
		
		AExosuit_Character_BP_C_Multicast_StoredStructureFX_Params params {};
		params.bForceOnOwningClient = bForceOnOwningClient;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.ClearRiderIgnoreExosuitCollision
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AExosuit_Character_BP_C::ClearRiderIgnoreExosuitCollision()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.ClearRiderIgnoreExosuitCollision");
		
		AExosuit_Character_BP_C_ClearRiderIgnoreExosuitCollision_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.DelayedRequestStoreStructure
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AExosuit_Character_BP_C::DelayedRequestStoreStructure()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.DelayedRequestStoreStructure");
		
		AExosuit_Character_BP_C_DelayedRequestStoreStructure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_RequestStoreAttachedStructure
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void AExosuit_Character_BP_C::Server_RequestStoreAttachedStructure()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.Server_RequestStoreAttachedStructure");
		
		AExosuit_Character_BP_C_Server_RequestStoreAttachedStructure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Exosuit_Character_BP.Exosuit_Character_BP_C.ExecuteUbergraph_Exosuit_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AExosuit_Character_BP_C::ExecuteUbergraph_Exosuit_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Exosuit_Character_BP.Exosuit_Character_BP_C.ExecuteUbergraph_Exosuit_Character_BP");
		
		AExosuit_Character_BP_C_ExecuteUbergraph_Exosuit_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AExosuit_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AExosuit_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Exosuit_Character_BP.Exosuit_Character_BP_C");
		return ptr;
	}

}


