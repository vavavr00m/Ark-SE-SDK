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
	 * 		Name   -> Function RockGolem_Character_BP.RockGolem_Character_BP_C.BPIsHidden
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ARockGolem_Character_BP_C::BPIsHidden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockGolem_Character_BP.RockGolem_Character_BP_C.BPIsHidden");
		
		ARockGolem_Character_BP_C_BPIsHidden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function RockGolem_Character_BP.RockGolem_Character_BP_C.BPPreventRiding
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           ByPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bDontCheckDistance                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ARockGolem_Character_BP_C::BPPreventRiding(class AShooterCharacter* ByPawn, bool bDontCheckDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockGolem_Character_BP.RockGolem_Character_BP_C.BPPreventRiding");
		
		ARockGolem_Character_BP_C_BPPreventRiding_Params params {};
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
	 * 		Name   -> Function RockGolem_Character_BP.RockGolem_Character_BP_C.BPAddedAttachmentsForItem
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimalItem*                                 anItem                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockGolem_Character_BP_C::BPAddedAttachmentsForItem(class UPrimalItem* anItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockGolem_Character_BP.RockGolem_Character_BP_C.BPAddedAttachmentsForItem");
		
		ARockGolem_Character_BP_C_BPAddedAttachmentsForItem_Params params {};
		params.anItem = anItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function RockGolem_Character_BP.RockGolem_Character_BP_C.BPUnstasis
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockGolem_Character_BP_C::BPUnstasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockGolem_Character_BP.RockGolem_Character_BP_C.BPUnstasis");
		
		ARockGolem_Character_BP_C_BPUnstasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function RockGolem_Character_BP.RockGolem_Character_BP_C.BlueprintOverrideWantsToRun
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bInputWantsToRun                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ARockGolem_Character_BP_C::BlueprintOverrideWantsToRun(bool bInputWantsToRun)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockGolem_Character_BP.RockGolem_Character_BP_C.BlueprintOverrideWantsToRun");
		
		ARockGolem_Character_BP_C_BlueprintOverrideWantsToRun_Params params {};
		params.bInputWantsToRun = bInputWantsToRun;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function RockGolem_Character_BP.RockGolem_Character_BP_C.SetupDisguise
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockGolem_Character_BP_C::SetupDisguise()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockGolem_Character_BP.RockGolem_Character_BP_C.SetupDisguise");
		
		ARockGolem_Character_BP_C_SetupDisguise_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function RockGolem_Character_BP.RockGolem_Character_BP_C.BPAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              IncomingDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (Parm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  PointHitInfo                                               (Parm)
	 */
	float ARockGolem_Character_BP_C::BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockGolem_Character_BP.RockGolem_Character_BP_C.BPAdjustDamage");
		
		ARockGolem_Character_BP_C_BPAdjustDamage_Params params {};
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
	 * 		Name   -> Function RockGolem_Character_BP.RockGolem_Character_BP_C.IsPlayerNearFeet
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Yes                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockGolem_Character_BP_C::IsPlayerNearFeet(bool* Yes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockGolem_Character_BP.RockGolem_Character_BP_C.IsPlayerNearFeet");
		
		ARockGolem_Character_BP_C_IsPlayerNearFeet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Yes != nullptr)
			*Yes = params.Yes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function RockGolem_Character_BP.RockGolem_Character_BP_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockGolem_Character_BP_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockGolem_Character_BP.RockGolem_Character_BP_C.ReceiveDestroyed");
		
		ARockGolem_Character_BP_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function RockGolem_Character_BP.RockGolem_Character_BP_C.OnRep_bIsDisguised
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARockGolem_Character_BP_C::OnRep_bIsDisguised()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockGolem_Character_BP.RockGolem_Character_BP_C.OnRep_bIsDisguised");
		
		ARockGolem_Character_BP_C_OnRep_bIsDisguised_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function RockGolem_Character_BP.RockGolem_Character_BP_C.BPTimerServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockGolem_Character_BP_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockGolem_Character_BP.RockGolem_Character_BP_C.BPTimerServer");
		
		ARockGolem_Character_BP_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function RockGolem_Character_BP.RockGolem_Character_BP_C.HasDirectOrder
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               hasOrder                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockGolem_Character_BP_C::HasDirectOrder(bool* hasOrder)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockGolem_Character_BP.RockGolem_Character_BP_C.HasDirectOrder");
		
		ARockGolem_Character_BP_C_HasDirectOrder_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (hasOrder != nullptr)
			*hasOrder = params.hasOrder;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function RockGolem_Character_BP.RockGolem_Character_BP_C.BPTryMultiUse
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            UseIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ARockGolem_Character_BP_C::BPTryMultiUse(class APlayerController* ForPC, int32_t UseIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockGolem_Character_BP.RockGolem_Character_BP_C.BPTryMultiUse");
		
		ARockGolem_Character_BP_C_BPTryMultiUse_Params params {};
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
	 * 		Name   -> Function RockGolem_Character_BP.RockGolem_Character_BP_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> ARockGolem_Character_BP_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockGolem_Character_BP.RockGolem_Character_BP_C.BPGetMultiUseEntries");
		
		ARockGolem_Character_BP_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function RockGolem_Character_BP.RockGolem_Character_BP_C.ArePlayersNearby
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockGolem_Character_BP_C::ArePlayersNearby(float Distance, bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockGolem_Character_BP.RockGolem_Character_BP_C.ArePlayersNearby");
		
		ARockGolem_Character_BP_C_ArePlayersNearby_Params params {};
		params.Distance = Distance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function RockGolem_Character_BP.RockGolem_Character_BP_C.CanDisguise
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsAllowed                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockGolem_Character_BP_C::CanDisguise(bool* IsAllowed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockGolem_Character_BP.RockGolem_Character_BP_C.CanDisguise");
		
		ARockGolem_Character_BP_C_CanDisguise_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsAllowed != nullptr)
			*IsAllowed = params.IsAllowed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function RockGolem_Character_BP.RockGolem_Character_BP_C.CheckDisguiseCondition
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockGolem_Character_BP_C::CheckDisguiseCondition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockGolem_Character_BP.RockGolem_Character_BP_C.CheckDisguiseCondition");
		
		ARockGolem_Character_BP_C_CheckDisguiseCondition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function RockGolem_Character_BP.RockGolem_Character_BP_C.BlueprintCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ARockGolem_Character_BP_C::BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockGolem_Character_BP.RockGolem_Character_BP_C.BlueprintCanAttack");
		
		ARockGolem_Character_BP_C_BlueprintCanAttack_Params params {};
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
	 * 		Name   -> Function RockGolem_Character_BP.RockGolem_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockGolem_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockGolem_Character_BP.RockGolem_Character_BP_C.UserConstructionScript");
		
		ARockGolem_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function RockGolem_Character_BP.RockGolem_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimNotify*                                 AnimNotifyObject                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockGolem_Character_BP_C::BlueprintAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockGolem_Character_BP.RockGolem_Character_BP_C.BlueprintAnimNotifyCustomEvent");
		
		ARockGolem_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params {};
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
	 * 		Name   -> Function RockGolem_Character_BP.RockGolem_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ARockGolem_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockGolem_Character_BP.RockGolem_Character_BP_C.ReceiveBeginPlay");
		
		ARockGolem_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function RockGolem_Character_BP.RockGolem_Character_BP_C.StartDisguise
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARockGolem_Character_BP_C::StartDisguise()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockGolem_Character_BP.RockGolem_Character_BP_C.StartDisguise");
		
		ARockGolem_Character_BP_C_StartDisguise_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function RockGolem_Character_BP.RockGolem_Character_BP_C.StopDisguise
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARockGolem_Character_BP_C::StopDisguise()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockGolem_Character_BP.RockGolem_Character_BP_C.StopDisguise");
		
		ARockGolem_Character_BP_C_StopDisguise_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function RockGolem_Character_BP.RockGolem_Character_BP_C.AnimNotify_Golem_Bury
	 * 		Flags  -> (NetReliable, BlueprintCallable, BlueprintEvent)
	 */
	void ARockGolem_Character_BP_C::AnimNotify_Golem_Bury()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockGolem_Character_BP.RockGolem_Character_BP_C.AnimNotify_Golem_Bury");
		
		ARockGolem_Character_BP_C_AnimNotify_Golem_Bury_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function RockGolem_Character_BP.RockGolem_Character_BP_C.AnimNotify_Golem_Getup
	 * 		Flags  -> (NetReliable, BlueprintCallable, BlueprintEvent)
	 */
	void ARockGolem_Character_BP_C::AnimNotify_Golem_Getup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockGolem_Character_BP.RockGolem_Character_BP_C.AnimNotify_Golem_Getup");
		
		ARockGolem_Character_BP_C_AnimNotify_Golem_Getup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function RockGolem_Character_BP.RockGolem_Character_BP_C.ClearTorporHit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARockGolem_Character_BP_C::ClearTorporHit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockGolem_Character_BP.RockGolem_Character_BP_C.ClearTorporHit");
		
		ARockGolem_Character_BP_C_ClearTorporHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function RockGolem_Character_BP.RockGolem_Character_BP_C.TorporHit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARockGolem_Character_BP_C::TorporHit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockGolem_Character_BP.RockGolem_Character_BP_C.TorporHit");
		
		ARockGolem_Character_BP_C_TorporHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function RockGolem_Character_BP.RockGolem_Character_BP_C.AnimNotify_PlayGolemBurySound
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARockGolem_Character_BP_C::AnimNotify_PlayGolemBurySound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockGolem_Character_BP.RockGolem_Character_BP_C.AnimNotify_PlayGolemBurySound");
		
		ARockGolem_Character_BP_C_AnimNotify_PlayGolemBurySound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function RockGolem_Character_BP.RockGolem_Character_BP_C.ForceHideMeshes
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ARockGolem_Character_BP_C::ForceHideMeshes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockGolem_Character_BP.RockGolem_Character_BP_C.ForceHideMeshes");
		
		ARockGolem_Character_BP_C_ForceHideMeshes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function RockGolem_Character_BP.RockGolem_Character_BP_C.ExecuteUbergraph_RockGolem_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ARockGolem_Character_BP_C::ExecuteUbergraph_RockGolem_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RockGolem_Character_BP.RockGolem_Character_BP_C.ExecuteUbergraph_RockGolem_Character_BP");
		
		ARockGolem_Character_BP_C_ExecuteUbergraph_RockGolem_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARockGolem_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARockGolem_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass RockGolem_Character_BP.RockGolem_Character_BP_C");
		return ptr;
	}

}


