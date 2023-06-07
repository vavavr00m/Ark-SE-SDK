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
	 * 		Name   -> Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BP_OverrideDinoName
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      CurrentDinoName                                            (Parm, ZeroConstructor)
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class FString ACrystalWyvern_Character_BP_Base_C::BP_OverrideDinoName(const class FString& CurrentDinoName, class APlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BP_OverrideDinoName");
		
		ACrystalWyvern_Character_BP_Base_C_BP_OverrideDinoName_Params params {};
		params.CurrentDinoName = CurrentDinoName;
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.OnRep_bIsAggressiveOverride
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ACrystalWyvern_Character_BP_Base_C::OnRep_bIsAggressiveOverride()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.OnRep_bIsAggressiveOverride");
		
		ACrystalWyvern_Character_BP_Base_C_OnRep_bIsAggressiveOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.UpdateAggressiveOverride
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACrystalWyvern_Character_BP_Base_C::UpdateAggressiveOverride()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.UpdateAggressiveOverride");
		
		ACrystalWyvern_Character_BP_Base_C_UpdateAggressiveOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.AllowGrappling
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ACrystalWyvern_Character_BP_Base_C::AllowGrappling()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.AllowGrappling");
		
		ACrystalWyvern_Character_BP_Base_C_AllowGrappling_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.TamingBasedCharsCheck
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACrystalWyvern_Character_BP_Base_C::TamingBasedCharsCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.TamingBasedCharsCheck");
		
		ACrystalWyvern_Character_BP_Base_C_TamingBasedCharsCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.DelayClearIsTamingFlyingHigh
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACrystalWyvern_Character_BP_Base_C::DelayClearIsTamingFlyingHigh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.DelayClearIsTamingFlyingHigh");
		
		ACrystalWyvern_Character_BP_Base_C_DelayClearIsTamingFlyingHigh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.SetIsTamingFlyingHigh
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsTamingFlyingHigh                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACrystalWyvern_Character_BP_Base_C::SetIsTamingFlyingHigh(bool IsTamingFlyingHigh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.SetIsTamingFlyingHigh");
		
		ACrystalWyvern_Character_BP_Base_C_SetIsTamingFlyingHigh_Params params {};
		params.IsTamingFlyingHigh = IsTamingFlyingHigh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPRemoveCharacterSnapshot
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      From                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACrystalWyvern_Character_BP_Base_C::BPRemoveCharacterSnapshot(class UPrimalItem* Item, class AActor* From)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPRemoveCharacterSnapshot");
		
		ACrystalWyvern_Character_BP_Base_C_BPRemoveCharacterSnapshot_Params params {};
		params.Item = Item;
		params.From = From;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPApplyCharacterSnapshot
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      To                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              MaxExtent                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            Pose                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bCollisionOn                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACrystalWyvern_Character_BP_Base_C::BPApplyCharacterSnapshot(class UPrimalItem* Item, class AActor* To, const struct FVector& Offset, float MaxExtent, int32_t Pose, bool bCollisionOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPApplyCharacterSnapshot");
		
		ACrystalWyvern_Character_BP_Base_C_BPApplyCharacterSnapshot_Params params {};
		params.Item = Item;
		params.To = To;
		params.Offset = Offset;
		params.MaxExtent = MaxExtent;
		params.Pose = Pose;
		params.bCollisionOn = bCollisionOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPUntamedConsumeFoodItem
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 foodItem                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACrystalWyvern_Character_BP_Base_C::BPUntamedConsumeFoodItem(class UPrimalItem* foodItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPUntamedConsumeFoodItem");
		
		ACrystalWyvern_Character_BP_Base_C_BPUntamedConsumeFoodItem_Params params {};
		params.foodItem = foodItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPFedWakingTameEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACrystalWyvern_Character_BP_Base_C::BPFedWakingTameEvent(class APlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPFedWakingTameEvent");
		
		ACrystalWyvern_Character_BP_Base_C_BPFedWakingTameEvent_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.GetCrystalMeshes
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UStaticMeshComponent*>                CrystalMeshComps                                           (Parm, OutParm, ZeroConstructor)
	 */
	void ACrystalWyvern_Character_BP_Base_C::GetCrystalMeshes(TArray<class UStaticMeshComponent*>* CrystalMeshComps)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.GetCrystalMeshes");
		
		ACrystalWyvern_Character_BP_Base_C_GetCrystalMeshes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CrystalMeshComps != nullptr)
			*CrystalMeshComps = params.CrystalMeshComps;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.DelayDissolveCrystalMesh
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACrystalWyvern_Character_BP_Base_C::DelayDissolveCrystalMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.DelayDissolveCrystalMesh");
		
		ACrystalWyvern_Character_BP_Base_C_DelayDissolveCrystalMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.ExtraFlameFXSetup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UParticleSystemComponent*                    ParticleSystem                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACrystalWyvern_Character_BP_Base_C::ExtraFlameFXSetup(class UParticleSystemComponent* ParticleSystem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.ExtraFlameFXSetup");
		
		ACrystalWyvern_Character_BP_Base_C_ExtraFlameFXSetup_Params params {};
		params.ParticleSystem = ParticleSystem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPClientDoMultiUse
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ClientUseIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACrystalWyvern_Character_BP_Base_C::BPClientDoMultiUse(class APlayerController* ForPC, int32_t ClientUseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPClientDoMultiUse");
		
		ACrystalWyvern_Character_BP_Base_C_BPClientDoMultiUse_Params params {};
		params.ForPC = ForPC;
		params.ClientUseIndex = ClientUseIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.DelayAggroToMilkingChar
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACrystalWyvern_Character_BP_Base_C::DelayAggroToMilkingChar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.DelayAggroToMilkingChar");
		
		ACrystalWyvern_Character_BP_Base_C_DelayAggroToMilkingChar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ACrystalWyvern_Character_BP_Base_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPTryMultiUse");
		
		ACrystalWyvern_Character_BP_Base_C_BPTryMultiUse_Params params {};
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
	 * 		Name   -> Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> ACrystalWyvern_Character_BP_Base_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPGetMultiUseEntries");
		
		ACrystalWyvern_Character_BP_Base_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BP_OnSetDeath
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 */
	void ACrystalWyvern_Character_BP_Base_C::BP_OnSetDeath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BP_OnSetDeath");
		
		ACrystalWyvern_Character_BP_Base_C_BP_OnSetDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPTimerNonDedicated
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACrystalWyvern_Character_BP_Base_C::BPTimerNonDedicated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPTimerNonDedicated");
		
		ACrystalWyvern_Character_BP_Base_C_BPTimerNonDedicated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPModifyAimOffsetTargetLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     AimTargetLocation                                          (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	struct FVector ACrystalWyvern_Character_BP_Base_C::BPModifyAimOffsetTargetLocation(struct FVector* AimTargetLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPModifyAimOffsetTargetLocation");
		
		ACrystalWyvern_Character_BP_Base_C_BPModifyAimOffsetTargetLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AimTargetLocation != nullptr)
			*AimTargetLocation = params.AimTargetLocation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPDinoPostBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACrystalWyvern_Character_BP_Base_C::BPDinoPostBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPDinoPostBeginPlay");
		
		ACrystalWyvern_Character_BP_Base_C_BPDinoPostBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.UpdateCrystalsAndParticles
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACrystalWyvern_Character_BP_Base_C::UpdateCrystalsAndParticles()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.UpdateCrystalsAndParticles");
		
		ACrystalWyvern_Character_BP_Base_C_UpdateCrystalsAndParticles_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.UpdateAnimBP
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACrystalWyvern_Character_BP_Base_C::UpdateAnimBP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.UpdateAnimBP");
		
		ACrystalWyvern_Character_BP_Base_C_UpdateAnimBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPSetupTamed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bWasJustTamed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACrystalWyvern_Character_BP_Base_C::BPSetupTamed(bool bWasJustTamed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPSetupTamed");
		
		ACrystalWyvern_Character_BP_Base_C_BPSetupTamed_Params params {};
		params.bWasJustTamed = bWasJustTamed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.SpawnNestEgg
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ACrystalWyvern_Character_BP_Base_C::SpawnNestEgg()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.SpawnNestEgg");
		
		ACrystalWyvern_Character_BP_Base_C_SpawnNestEgg_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPCharacterUnsleeped
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACrystalWyvern_Character_BP_Base_C::BPCharacterUnsleeped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPCharacterUnsleeped");
		
		ACrystalWyvern_Character_BP_Base_C_BPCharacterUnsleeped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPBecomeAdult
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACrystalWyvern_Character_BP_Base_C::BPBecomeAdult()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPBecomeAdult");
		
		ACrystalWyvern_Character_BP_Base_C_BPBecomeAdult_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPBecomeBaby
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACrystalWyvern_Character_BP_Base_C::BPBecomeBaby()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPBecomeBaby");
		
		ACrystalWyvern_Character_BP_Base_C_BPBecomeBaby_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACrystalWyvern_Character_BP_Base_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.UserConstructionScript");
		
		ACrystalWyvern_Character_BP_Base_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.Timeline_ManualDissolve__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ACrystalWyvern_Character_BP_Base_C::Timeline_ManualDissolve__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.Timeline_ManualDissolve__FinishedFunc");
		
		ACrystalWyvern_Character_BP_Base_C_Timeline_ManualDissolve__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.Timeline_ManualDissolve__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ACrystalWyvern_Character_BP_Base_C::Timeline_ManualDissolve__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.Timeline_ManualDissolve__UpdateFunc");
		
		ACrystalWyvern_Character_BP_Base_C_Timeline_ManualDissolve__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.Timeline_DissolveSkull__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ACrystalWyvern_Character_BP_Base_C::Timeline_DissolveSkull__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.Timeline_DissolveSkull__FinishedFunc");
		
		ACrystalWyvern_Character_BP_Base_C_Timeline_DissolveSkull__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.Timeline_DissolveSkull__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ACrystalWyvern_Character_BP_Base_C::Timeline_DissolveSkull__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.Timeline_DissolveSkull__UpdateFunc");
		
		ACrystalWyvern_Character_BP_Base_C_Timeline_DissolveSkull__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPUnstasis
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACrystalWyvern_Character_BP_Base_C::BPUnstasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPUnstasis");
		
		ACrystalWyvern_Character_BP_Base_C_BPUnstasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.AnimNotify_FlameFXStart
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ACrystalWyvern_Character_BP_Base_C::AnimNotify_FlameFXStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.AnimNotify_FlameFXStart");
		
		ACrystalWyvern_Character_BP_Base_C_AnimNotify_FlameFXStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.AnimNotify_FXTakeOff
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ACrystalWyvern_Character_BP_Base_C::AnimNotify_FXTakeOff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.AnimNotify_FXTakeOff");
		
		ACrystalWyvern_Character_BP_Base_C_AnimNotify_FXTakeOff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.ManualDissolve
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ACrystalWyvern_Character_BP_Base_C::ManualDissolve()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.ManualDissolve");
		
		ACrystalWyvern_Character_BP_Base_C_ManualDissolve_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACrystalWyvern_Character_BP_Base_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.ReceiveBeginPlay");
		
		ACrystalWyvern_Character_BP_Base_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.DissolveSkull
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ACrystalWyvern_Character_BP_Base_C::DissolveSkull()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.DissolveSkull");
		
		ACrystalWyvern_Character_BP_Base_C_DissolveSkull_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPTimerServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACrystalWyvern_Character_BP_Base_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.BPTimerServer");
		
		ACrystalWyvern_Character_BP_Base_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.ExecuteUbergraph_CrystalWyvern_Character_BP_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ACrystalWyvern_Character_BP_Base_C::ExecuteUbergraph_CrystalWyvern_Character_BP_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C.ExecuteUbergraph_CrystalWyvern_Character_BP_Base");
		
		ACrystalWyvern_Character_BP_Base_C_ExecuteUbergraph_CrystalWyvern_Character_BP_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACrystalWyvern_Character_BP_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACrystalWyvern_Character_BP_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CrystalWyvern_Character_BP_Base.CrystalWyvern_Character_BP_Base_C");
		return ptr;
	}

}


