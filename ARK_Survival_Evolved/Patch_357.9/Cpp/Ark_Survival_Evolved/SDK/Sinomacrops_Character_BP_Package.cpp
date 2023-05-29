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
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ReceiveAnyDamage
	 * 		Flags  -> (BlueprintAuthorityOnly, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UDamageType*                                 DamageType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AController*                                 InstigatedBy                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASinomacrops_Character_BP_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ReceiveAnyDamage");
		
		ASinomacrops_Character_BP_C_ReceiveAnyDamage_Params params {};
		params.Damage = Damage;
		params.DamageType = DamageType;
		params.InstigatedBy = InstigatedBy;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPNotifyStructurePlacedNearby
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalStructure*                            NewStructure                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASinomacrops_Character_BP_C::BPNotifyStructurePlacedNearby(class APrimalStructure* NewStructure)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPNotifyStructurePlacedNearby");
		
		ASinomacrops_Character_BP_C_BPNotifyStructurePlacedNearby_Params params {};
		params.NewStructure = NewStructure;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ScreamStaminaCheck
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HasStamToScream                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASinomacrops_Character_BP_C::ScreamStaminaCheck(bool* HasStamToScream)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ScreamStaminaCheck");
		
		ASinomacrops_Character_BP_C_ScreamStaminaCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasStamToScream != nullptr)
			*HasStamToScream = params.HasStamToScream;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ClearPreventInventoryAccess
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASinomacrops_Character_BP_C::ClearPreventInventoryAccess()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ClearPreventInventoryAccess");
		
		ASinomacrops_Character_BP_C_ClearPreventInventoryAccess_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.MountedImmobilizationCheck
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASinomacrops_Character_BP_C::MountedImmobilizationCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.MountedImmobilizationCheck");
		
		ASinomacrops_Character_BP_C_MountedImmobilizationCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BlueprintDrawFloatingHUD
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterHUD*                                 HUD                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterX                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CenterY                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DrawScale                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASinomacrops_Character_BP_C::BlueprintDrawFloatingHUD(class AShooterHUD* HUD, float CenterX, float CenterY, float DrawScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BlueprintDrawFloatingHUD");
		
		ASinomacrops_Character_BP_C_BlueprintDrawFloatingHUD_Params params {};
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.TamingTrapCheck
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CheckPlayer                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsTrapped                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASinomacrops_Character_BP_C::TamingTrapCheck(bool CheckPlayer, bool* IsTrapped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.TamingTrapCheck");
		
		ASinomacrops_Character_BP_C_TamingTrapCheck_Params params {};
		params.CheckPlayer = CheckPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsTrapped != nullptr)
			*IsTrapped = params.IsTrapped;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPNotifyLevelUp
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ExtraCharacterLevel                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASinomacrops_Character_BP_C::BPNotifyLevelUp(int32_t ExtraCharacterLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPNotifyLevelUp");
		
		ASinomacrops_Character_BP_C_BPNotifyLevelUp_Params params {};
		params.ExtraCharacterLevel = ExtraCharacterLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.AllowPlayMontage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                AnimMontage                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ASinomacrops_Character_BP_C::AllowPlayMontage(class UAnimMontage* AnimMontage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.AllowPlayMontage");
		
		ASinomacrops_Character_BP_C_AllowPlayMontage_Params params {};
		params.AnimMontage = AnimMontage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPOverrideGetAttackAnimationIndex
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class UAnimMontage*>                        AnimationArray                                             (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	int32_t ASinomacrops_Character_BP_C::BPOverrideGetAttackAnimationIndex(int32_t AttackIndex, TArray<class UAnimMontage*>* AnimationArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPOverrideGetAttackAnimationIndex");
		
		ASinomacrops_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params params {};
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
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.LaunchToBuddyChar
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ASinomacrops_Character_BP_C::LaunchToBuddyChar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.LaunchToBuddyChar");
		
		ASinomacrops_Character_BP_C_LaunchToBuddyChar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPGetGravityZScale
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ASinomacrops_Character_BP_C::BPGetGravityZScale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPGetGravityZScale");
		
		ASinomacrops_Character_BP_C_BPGetGravityZScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPTamedConsumeFoodItem
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 foodItem                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASinomacrops_Character_BP_C::BPTamedConsumeFoodItem(class UPrimalItem* foodItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPTamedConsumeFoodItem");
		
		ASinomacrops_Character_BP_C_BPTamedConsumeFoodItem_Params params {};
		params.foodItem = foodItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.OnRep_MountSocketIndex
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASinomacrops_Character_BP_C::OnRep_MountSocketIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.OnRep_MountSocketIndex");
		
		ASinomacrops_Character_BP_C_OnRep_MountSocketIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.SpawnMountedFlapVFX
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsWings                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASinomacrops_Character_BP_C::SpawnMountedFlapVFX(bool IsWings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.SpawnMountedFlapVFX");
		
		ASinomacrops_Character_BP_C_SpawnMountedFlapVFX_Params params {};
		params.IsWings = IsWings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.UpdateEyeWingMat
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              val                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASinomacrops_Character_BP_C::UpdateEyeWingMat(float val)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.UpdateEyeWingMat");
		
		ASinomacrops_Character_BP_C_UpdateEyeWingMat_Params params {};
		params.val = val;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ClearLastThrowAvoidActors
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASinomacrops_Character_BP_C::ClearLastThrowAvoidActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ClearLastThrowAvoidActors");
		
		ASinomacrops_Character_BP_C_ClearLastThrowAvoidActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPClientHandleNetExecCommand
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CommandName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (Parm, OutParm, ReferenceParm)
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ASinomacrops_Character_BP_C::BPClientHandleNetExecCommand(const class FName& CommandName, struct FBPNetExecParams* ExecParams, class APlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPClientHandleNetExecCommand");
		
		ASinomacrops_Character_BP_C_BPClientHandleNetExecCommand_Params params {};
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.OnScreamStart
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASinomacrops_Character_BP_C::OnScreamStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.OnScreamStart");
		
		ASinomacrops_Character_BP_C_OnScreamStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ASinomacrops_Character_BP_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPTryMultiUse");
		
		ASinomacrops_Character_BP_C_BPTryMultiUse_Params params {};
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
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> ASinomacrops_Character_BP_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPGetMultiUseEntries");
		
		ASinomacrops_Character_BP_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPOnClearMountedDino
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASinomacrops_Character_BP_C::BPOnClearMountedDino()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPOnClearMountedDino");
		
		ASinomacrops_Character_BP_C_BPOnClearMountedDino_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.AnimNotifyMountedDino
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASinomacrops_Character_BP_C::AnimNotifyMountedDino()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.AnimNotifyMountedDino");
		
		ASinomacrops_Character_BP_C_AnimNotifyMountedDino_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.RefreshSinoMountType
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASinomacrops_Character_BP_C::RefreshSinoMountType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.RefreshSinoMountType");
		
		ASinomacrops_Character_BP_C_RefreshSinoMountType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.GetCanBeMountedGlider
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanBeMountedGlider                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASinomacrops_Character_BP_C::GetCanBeMountedGlider(bool* CanBeMountedGlider)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.GetCanBeMountedGlider");
		
		ASinomacrops_Character_BP_C_GetCanBeMountedGlider_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanBeMountedGlider != nullptr)
			*CanBeMountedGlider = params.CanBeMountedGlider;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.FlyAfterTamingFeed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASinomacrops_Character_BP_C::FlyAfterTamingFeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.FlyAfterTamingFeed");
		
		ASinomacrops_Character_BP_C_FlyAfterTamingFeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BlueprintOverrideWantsToRun
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bInputWantsToRun                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ASinomacrops_Character_BP_C::BlueprintOverrideWantsToRun(bool bInputWantsToRun)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BlueprintOverrideWantsToRun");
		
		ASinomacrops_Character_BP_C_BlueprintOverrideWantsToRun_Params params {};
		params.bInputWantsToRun = bInputWantsToRun;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ResetChanceToFlyLand
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASinomacrops_Character_BP_C::ResetChanceToFlyLand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ResetChanceToFlyLand");
		
		ASinomacrops_Character_BP_C_ResetChanceToFlyLand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.AllowWakingTame
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ASinomacrops_Character_BP_C::AllowWakingTame(class APlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.AllowWakingTame");
		
		ASinomacrops_Character_BP_C_AllowWakingTame_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.UpdateChanceToFlyLand
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsFly                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Chance                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsDefault                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASinomacrops_Character_BP_C::UpdateChanceToFlyLand(bool IsFly, float Chance, bool IsDefault)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.UpdateChanceToFlyLand");
		
		ASinomacrops_Character_BP_C_UpdateChanceToFlyLand_Params params {};
		params.IsFly = IsFly;
		params.Chance = Chance;
		params.IsDefault = IsDefault;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.OverrideRandomWanderLocation
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     originalDestination                                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     inVec                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASinomacrops_Character_BP_C::OverrideRandomWanderLocation(struct FVector* originalDestination, struct FVector* inVec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.OverrideRandomWanderLocation");
		
		ASinomacrops_Character_BP_C_OverrideRandomWanderLocation_Params params {};
		
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPFedWakingTameEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASinomacrops_Character_BP_C::BPFedWakingTameEvent(class APlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPFedWakingTameEvent");
		
		ASinomacrops_Character_BP_C_BPFedWakingTameEvent_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BP_CanFly
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ASinomacrops_Character_BP_C::BP_CanFly()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BP_CanFly");
		
		ASinomacrops_Character_BP_C_BP_CanFly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.RefreshWildFollowPlayer
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ASinomacrops_Character_BP_C::RefreshWildFollowPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.RefreshWildFollowPlayer");
		
		ASinomacrops_Character_BP_C_RefreshWildFollowPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ClearWildFollowPlayer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASinomacrops_Character_BP_C::ClearWildFollowPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ClearWildFollowPlayer");
		
		ASinomacrops_Character_BP_C_ClearWildFollowPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.SetWildFollowPlayer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           ShooterChar                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASinomacrops_Character_BP_C::SetWildFollowPlayer(class AShooterCharacter* ShooterChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.SetWildFollowPlayer");
		
		ASinomacrops_Character_BP_C_SetWildFollowPlayer_Params params {};
		params.ShooterChar = ShooterChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.GetWildShouldFollowPlayer
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           ShooterChar                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               SetOnSuccess                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ShouldFollow                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASinomacrops_Character_BP_C::GetWildShouldFollowPlayer(class AShooterCharacter* ShooterChar, bool SetOnSuccess, bool* ShouldFollow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.GetWildShouldFollowPlayer");
		
		ASinomacrops_Character_BP_C_GetWildShouldFollowPlayer_Params params {};
		params.ShooterChar = ShooterChar;
		params.SetOnSuccess = SetOnSuccess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldFollow != nullptr)
			*ShouldFollow = params.ShouldFollow;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ClearBuddyChar
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASinomacrops_Character_BP_C::ClearBuddyChar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ClearBuddyChar");
		
		ASinomacrops_Character_BP_C_ClearBuddyChar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ArriveAtBuddyCheck
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASinomacrops_Character_BP_C::ArriveAtBuddyCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ArriveAtBuddyCheck");
		
		ASinomacrops_Character_BP_C_ArriveAtBuddyCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.DinoShoulderMountedLaunch
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     launchDir                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterCharacter*                           throwingCharacter                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASinomacrops_Character_BP_C::DinoShoulderMountedLaunch(const struct FVector& launchDir, class AShooterCharacter* throwingCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.DinoShoulderMountedLaunch");
		
		ASinomacrops_Character_BP_C_DinoShoulderMountedLaunch_Params params {};
		params.launchDir = launchDir;
		params.throwingCharacter = throwingCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.GetShouldScream
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsAI                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ShouldScream                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASinomacrops_Character_BP_C::GetShouldScream(bool IsAI, bool* ShouldScream)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.GetShouldScream");
		
		ASinomacrops_Character_BP_C_GetShouldScream_Params params {};
		params.IsAI = IsAI;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldScream != nullptr)
			*ShouldScream = params.ShouldScream;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Scream
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASinomacrops_Character_BP_C::Scream()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Scream");
		
		ASinomacrops_Character_BP_C_Scream_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPTimerServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASinomacrops_Character_BP_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPTimerServer");
		
		ASinomacrops_Character_BP_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BlueprintAdjustOutputDamage
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OriginalDamageAmount                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      HitActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      OutDamageType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OutDamageImpulse                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ASinomacrops_Character_BP_C::BlueprintAdjustOutputDamage(int32_t AttackIndex, float OriginalDamageAmount, class AActor* HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BlueprintAdjustOutputDamage");
		
		ASinomacrops_Character_BP_C_BlueprintAdjustOutputDamage_Params params {};
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
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.GetShouldAttackActor
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ShouldAttack                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASinomacrops_Character_BP_C::GetShouldAttackActor(class AActor* Actor, bool* ShouldAttack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.GetShouldAttackActor");
		
		ASinomacrops_Character_BP_C_GetShouldAttackActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ShouldAttack != nullptr)
			*ShouldAttack = params.ShouldAttack;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPShouldForceFlee
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ASinomacrops_Character_BP_C::BPShouldForceFlee()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPShouldForceFlee");
		
		ASinomacrops_Character_BP_C_BPShouldForceFlee_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPSetupTamed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bWasJustTamed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASinomacrops_Character_BP_C::BPSetupTamed(bool bWasJustTamed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPSetupTamed");
		
		ASinomacrops_Character_BP_C_BPSetupTamed_Params params {};
		params.bWasJustTamed = bWasJustTamed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BlueprintCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ASinomacrops_Character_BP_C::BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BlueprintCanAttack");
		
		ASinomacrops_Character_BP_C_BlueprintCanAttack_Params params {};
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
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.InitSino
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASinomacrops_Character_BP_C::InitSino()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.InitSino");
		
		ASinomacrops_Character_BP_C_InitSino_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.SinoMovementStamDrainTick
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASinomacrops_Character_BP_C::SinoMovementStamDrainTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.SinoMovementStamDrainTick");
		
		ASinomacrops_Character_BP_C_SinoMovementStamDrainTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPServerHandleNetExecCommand
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           FromPC                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        CommandName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (Parm, OutParm, ReferenceParm)
	 */
	bool ASinomacrops_Character_BP_C::BPServerHandleNetExecCommand(class APlayerController* FromPC, const class FName& CommandName, struct FBPNetExecParams* ExecParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPServerHandleNetExecCommand");
		
		ASinomacrops_Character_BP_C_BPServerHandleNetExecCommand_Params params {};
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPOnSetMountedDino
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASinomacrops_Character_BP_C::BPOnSetMountedDino()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BPOnSetMountedDino");
		
		ASinomacrops_Character_BP_C_BPOnSetMountedDino_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASinomacrops_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.UserConstructionScript");
		
		ASinomacrops_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Timeline_LerpMountSocket__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ASinomacrops_Character_BP_C::Timeline_LerpMountSocket__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Timeline_LerpMountSocket__FinishedFunc");
		
		ASinomacrops_Character_BP_C_Timeline_LerpMountSocket__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Timeline_LerpMountSocket__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ASinomacrops_Character_BP_C::Timeline_LerpMountSocket__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Timeline_LerpMountSocket__UpdateFunc");
		
		ASinomacrops_Character_BP_C_Timeline_LerpMountSocket__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Timeline_ScreamEyeWing__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ASinomacrops_Character_BP_C::Timeline_ScreamEyeWing__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Timeline_ScreamEyeWing__FinishedFunc");
		
		ASinomacrops_Character_BP_C_Timeline_ScreamEyeWing__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Timeline_ScreamEyeWing__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ASinomacrops_Character_BP_C::Timeline_ScreamEyeWing__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Timeline_ScreamEyeWing__UpdateFunc");
		
		ASinomacrops_Character_BP_C_Timeline_ScreamEyeWing__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASinomacrops_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ReceiveBeginPlay");
		
		ASinomacrops_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimNotify*                                 AnimNotifyObject                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASinomacrops_Character_BP_C::BlueprintAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.BlueprintAnimNotifyCustomEvent");
		
		ASinomacrops_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params {};
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
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Multi_SpawnTamingVFX
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           ForPlayer                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASinomacrops_Character_BP_C::Multi_SpawnTamingVFX(class AShooterCharacter* ForPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Multi_SpawnTamingVFX");
		
		ASinomacrops_Character_BP_C_Multi_SpawnTamingVFX_Params params {};
		params.ForPlayer = ForPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Multi_PlayGliderMontage
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              PlayRate                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASinomacrops_Character_BP_C::Multi_PlayGliderMontage(int32_t index, float PlayRate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Multi_PlayGliderMontage");
		
		ASinomacrops_Character_BP_C_Multi_PlayGliderMontage_Params params {};
		params.index = index;
		params.PlayRate = PlayRate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Multi_LerpMountSockets
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ToIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASinomacrops_Character_BP_C::Multi_LerpMountSockets(int32_t ToIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Multi_LerpMountSockets");
		
		ASinomacrops_Character_BP_C_Multi_LerpMountSockets_Params params {};
		params.ToIndex = ToIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.StopLerpMountSockets
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASinomacrops_Character_BP_C::StopLerpMountSockets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.StopLerpMountSockets");
		
		ASinomacrops_Character_BP_C_StopLerpMountSockets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ScreamUpdateEyeWing
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ASinomacrops_Character_BP_C::ScreamUpdateEyeWing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ScreamUpdateEyeWing");
		
		ASinomacrops_Character_BP_C_ScreamUpdateEyeWing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Multi_ThrowToBuddy
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct UObject_FTransform                          Rot                                                        (Parm, IsPlainOldData, NoDestructor)
	 */
	void ASinomacrops_Character_BP_C::Multi_ThrowToBuddy(const struct UObject_FTransform& Rot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Multi_ThrowToBuddy");
		
		ASinomacrops_Character_BP_C_Multi_ThrowToBuddy_Params params {};
		params.Rot = Rot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Multi_PostImmobilizeRemount
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ASinomacrops_Character_BP_C::Multi_PostImmobilizeRemount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.Multi_PostImmobilizeRemount");
		
		ASinomacrops_Character_BP_C_Multi_PostImmobilizeRemount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ExecuteUbergraph_Sinomacrops_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ASinomacrops_Character_BP_C::ExecuteUbergraph_Sinomacrops_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Sinomacrops_Character_BP.Sinomacrops_Character_BP_C.ExecuteUbergraph_Sinomacrops_Character_BP");
		
		ASinomacrops_Character_BP_C_ExecuteUbergraph_Sinomacrops_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASinomacrops_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASinomacrops_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Sinomacrops_Character_BP.Sinomacrops_Character_BP_C");
		return ptr;
	}

}


