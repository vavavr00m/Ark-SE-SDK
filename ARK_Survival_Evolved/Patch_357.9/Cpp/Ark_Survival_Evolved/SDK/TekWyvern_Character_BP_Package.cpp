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
	 * 		Name   -> Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPUnsetupDinoTameable
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekWyvern_Character_BP_C::BPUnsetupDinoTameable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPUnsetupDinoTameable");
		
		ATekWyvern_Character_BP_C_BPUnsetupDinoTameable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPGetRiderSocket
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class FName ATekWyvern_Character_BP_C::BPGetRiderSocket()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPGetRiderSocket");
		
		ATekWyvern_Character_BP_C_BPGetRiderSocket_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPPreventRiding
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           ByPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bDontCheckDistance                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATekWyvern_Character_BP_C::BPPreventRiding(class AShooterCharacter* ByPawn, bool bDontCheckDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPPreventRiding");
		
		ATekWyvern_Character_BP_C_BPPreventRiding_Params params {};
		params.ByPawn = ByPawn;
		params.bDontCheckDistance = bDontCheckDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.DoneRolling
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekWyvern_Character_BP_C::DoneRolling()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.DoneRolling");
		
		ATekWyvern_Character_BP_C_DoneRolling_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.DoTamingRandomAttack
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekWyvern_Character_BP_C::DoTamingRandomAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.DoTamingRandomAttack");
		
		ATekWyvern_Character_BP_C_DoTamingRandomAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BlueprintAdjustOutputDamage
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OriginalDamageAmount                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      HitActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      OutDamageType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OutDamageImpulse                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float ATekWyvern_Character_BP_C::BlueprintAdjustOutputDamage(int32_t AttackIndex, float OriginalDamageAmount, class AActor* HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BlueprintAdjustOutputDamage");
		
		ATekWyvern_Character_BP_C_BlueprintAdjustOutputDamage_Params params {};
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
	 * 		Name   -> Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.IsInSpaceBiome
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               InSpaceBiome                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekWyvern_Character_BP_C::IsInSpaceBiome(bool* InSpaceBiome)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.IsInSpaceBiome");
		
		ATekWyvern_Character_BP_C_IsInSpaceBiome_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InSpaceBiome != nullptr)
			*InSpaceBiome = params.InSpaceBiome;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.OnRep_DismountTimesDuringTaming
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekWyvern_Character_BP_C::OnRep_DismountTimesDuringTaming()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.OnRep_DismountTimesDuringTaming");
		
		ATekWyvern_Character_BP_C_OnRep_DismountTimesDuringTaming_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.ClearLastTamingProcess
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekWyvern_Character_BP_C::ClearLastTamingProcess()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.ClearLastTamingProcess");
		
		ATekWyvern_Character_BP_C_ClearLastTamingProcess_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.Get Extra Taming EffectivenessModifier
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              ExtraTameEffectivenessModifier                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekWyvern_Character_BP_C::GetExtraTamingEffectivenessModifier(float* ExtraTameEffectivenessModifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.Get Extra Taming EffectivenessModifier");
		
		ATekWyvern_Character_BP_C_GetExtraTamingEffectivenessModifier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ExtraTameEffectivenessModifier != nullptr)
			*ExtraTameEffectivenessModifier = params.ExtraTameEffectivenessModifier;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.ToggleAllowTameRiding
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekWyvern_Character_BP_C::ToggleAllowTameRiding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.ToggleAllowTameRiding");
		
		ATekWyvern_Character_BP_C_ToggleAllowTameRiding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BadTimingFeed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekWyvern_Character_BP_C::BadTimingFeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BadTimingFeed");
		
		ATekWyvern_Character_BP_C_BadTimingFeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPOverrideGetAttackAnimationIndex
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class UAnimMontage*>                        AnimationArray                                             (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	int32_t ATekWyvern_Character_BP_C::BPOverrideGetAttackAnimationIndex(int32_t AttackIndex, TArray<class UAnimMontage*>* AnimationArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPOverrideGetAttackAnimationIndex");
		
		ATekWyvern_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params params {};
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
	 * 		Name   -> Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.CheckDoneRoar
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekWyvern_Character_BP_C::CheckDoneRoar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.CheckDoneRoar");
		
		ATekWyvern_Character_BP_C_CheckDoneRoar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.TickStaminaCost
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               CanBreath                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekWyvern_Character_BP_C::TickStaminaCost(float DeltaSeconds, bool* CanBreath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.TickStaminaCost");
		
		ATekWyvern_Character_BP_C_TickStaminaCost_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanBreath != nullptr)
			*CanBreath = params.CanBreath;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.TickLowHealthStopMoving
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekWyvern_Character_BP_C::TickLowHealthStopMoving()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.TickLowHealthStopMoving");
		
		ATekWyvern_Character_BP_C_TickLowHealthStopMoving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.OverrideFinalWanderLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     outVec                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATekWyvern_Character_BP_C::OverrideFinalWanderLocation(struct FVector* outVec)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.OverrideFinalWanderLocation");
		
		ATekWyvern_Character_BP_C_OverrideFinalWanderLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (outVec != nullptr)
			*outVec = params.outVec;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> ATekWyvern_Character_BP_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPGetMultiUseEntries");
		
		ATekWyvern_Character_BP_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.UpdateTamingTextOverlay
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATekWyvern_Character_BP_C::UpdateTamingTextOverlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.UpdateTamingTextOverlay");
		
		ATekWyvern_Character_BP_C_UpdateTamingTextOverlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPNotifyClearRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderClearing                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekWyvern_Character_BP_C::BPNotifyClearRider(class AShooterCharacter* RiderClearing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPNotifyClearRider");
		
		ATekWyvern_Character_BP_C_BPNotifyClearRider_Params params {};
		params.RiderClearing = RiderClearing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.TryAddAffinityAfter Rolling
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekWyvern_Character_BP_C::TryAddAffinityAfterRolling()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.TryAddAffinityAfter Rolling");
		
		ATekWyvern_Character_BP_C_TryAddAffinityAfterRolling_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.TickBeam
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekWyvern_Character_BP_C::TickBeam(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.TickBeam");
		
		ATekWyvern_Character_BP_C_TickBeam_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.OnRep_bBeamActivated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekWyvern_Character_BP_C::OnRep_bBeamActivated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.OnRep_bBeamActivated");
		
		ATekWyvern_Character_BP_C_OnRep_bBeamActivated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BlueprintCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATekWyvern_Character_BP_C::BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BlueprintCanAttack");
		
		ATekWyvern_Character_BP_C_BlueprintCanAttack_Params params {};
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
	 * 		Name   -> Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPHandleOnStopTargeting
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ATekWyvern_Character_BP_C::BPHandleOnStopTargeting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPHandleOnStopTargeting");
		
		ATekWyvern_Character_BP_C_BPHandleOnStopTargeting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPHandleControllerInitiatedAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATekWyvern_Character_BP_C::BPHandleControllerInitiatedAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPHandleControllerInitiatedAttack");
		
		ATekWyvern_Character_BP_C_BPHandleControllerInitiatedAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPSetupTamed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bWasJustTamed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekWyvern_Character_BP_C::BPSetupTamed(bool bWasJustTamed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPSetupTamed");
		
		ATekWyvern_Character_BP_C_BPSetupTamed_Params params {};
		params.bWasJustTamed = bWasJustTamed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.Check Random Destination
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekWyvern_Character_BP_C::CheckRandomDestination()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.Check Random Destination");
		
		ATekWyvern_Character_BP_C_CheckRandomDestination_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.Increase Taming Affinity
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekWyvern_Character_BP_C::IncreaseTamingAffinity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.Increase Taming Affinity");
		
		ATekWyvern_Character_BP_C_IncreaseTamingAffinity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.Consume FoodItem
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               DidConsumeFood                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              EffectivenessMultiplier                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekWyvern_Character_BP_C::ConsumeFoodItem(bool* DidConsumeFood, float* EffectivenessMultiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.Consume FoodItem");
		
		ATekWyvern_Character_BP_C_ConsumeFoodItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DidConsumeFood != nullptr)
			*DidConsumeFood = params.DidConsumeFood;
		if (EffectivenessMultiplier != nullptr)
			*EffectivenessMultiplier = params.EffectivenessMultiplier;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPDoAttack
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekWyvern_Character_BP_C::BPDoAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPDoAttack");
		
		ATekWyvern_Character_BP_C_BPDoAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.CheckDoneLanding
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekWyvern_Character_BP_C::CheckDoneLanding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.CheckDoneLanding");
		
		ATekWyvern_Character_BP_C_CheckDoneLanding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.StartTame
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           TamerPlayer                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekWyvern_Character_BP_C::StartTame(class AShooterCharacter* TamerPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.StartTame");
		
		ATekWyvern_Character_BP_C_StartTame_Params params {};
		params.TamerPlayer = TamerPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              IncomingDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (Parm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  PointHitInfo                                               (Parm)
	 */
	float ATekWyvern_Character_BP_C::BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPAdjustDamage");
		
		ATekWyvern_Character_BP_C_BPAdjustDamage_Params params {};
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPPreventInputType
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPrimalCharacterInputType                          inputType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATekWyvern_Character_BP_C::BPPreventInputType(EPrimalCharacterInputType inputType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPPreventInputType");
		
		ATekWyvern_Character_BP_C_BPPreventInputType_Params params {};
		params.inputType = inputType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPUntamedConsumeFoodItem
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 foodItem                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekWyvern_Character_BP_C::BPUntamedConsumeFoodItem(class UPrimalItem* foodItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPUntamedConsumeFoodItem");
		
		ATekWyvern_Character_BP_C_BPUntamedConsumeFoodItem_Params params {};
		params.foodItem = foodItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPNotifySetRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderSetting                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekWyvern_Character_BP_C::BPNotifySetRider(class AShooterCharacter* RiderSetting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BPNotifySetRider");
		
		ATekWyvern_Character_BP_C_BPNotifySetRider_Params params {};
		params.RiderSetting = RiderSetting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimNotify*                                 AnimNotifyObject                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekWyvern_Character_BP_C::BlueprintAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.BlueprintAnimNotifyCustomEvent");
		
		ATekWyvern_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params {};
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
	 * 		Name   -> Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekWyvern_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.UserConstructionScript");
		
		ATekWyvern_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.Rolling__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATekWyvern_Character_BP_C::Rolling__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.Rolling__FinishedFunc");
		
		ATekWyvern_Character_BP_C_Rolling__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.Rolling__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATekWyvern_Character_BP_C::Rolling__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.Rolling__UpdateFunc");
		
		ATekWyvern_Character_BP_C_Rolling__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekWyvern_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.ReceiveBeginPlay");
		
		ATekWyvern_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.RidingTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekWyvern_Character_BP_C::RidingTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.RidingTick");
		
		ATekWyvern_Character_BP_C_RidingTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.SetAllowRiding
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Allow                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekWyvern_Character_BP_C::SetAllowRiding(bool Allow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.SetAllowRiding");
		
		ATekWyvern_Character_BP_C_SetAllowRiding_Params params {};
		params.Allow = Allow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.StartRolling
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATekWyvern_Character_BP_C::StartRolling()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.StartRolling");
		
		ATekWyvern_Character_BP_C_StartRolling_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.Multi_TryStartBreathAttack
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATekWyvern_Character_BP_C::Multi_TryStartBreathAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.Multi_TryStartBreathAttack");
		
		ATekWyvern_Character_BP_C_Multi_TryStartBreathAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.Server_StopBreathAttack
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ATekWyvern_Character_BP_C::Server_StopBreathAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.Server_StopBreathAttack");
		
		ATekWyvern_Character_BP_C_Server_StopBreathAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.Multi_StopBreathAttack
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATekWyvern_Character_BP_C::Multi_StopBreathAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.Multi_StopBreathAttack");
		
		ATekWyvern_Character_BP_C_Multi_StopBreathAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekWyvern_Character_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.ReceiveTick");
		
		ATekWyvern_Character_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.ExecuteUbergraph_TekWyvern_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekWyvern_Character_BP_C::ExecuteUbergraph_TekWyvern_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekWyvern_Character_BP.TekWyvern_Character_BP_C.ExecuteUbergraph_TekWyvern_Character_BP");
		
		ATekWyvern_Character_BP_C_ExecuteUbergraph_TekWyvern_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATekWyvern_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATekWyvern_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TekWyvern_Character_BP.TekWyvern_Character_BP_C");
		return ptr;
	}

}


