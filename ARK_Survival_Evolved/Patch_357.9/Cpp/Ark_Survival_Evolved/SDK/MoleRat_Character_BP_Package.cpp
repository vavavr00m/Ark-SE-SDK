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
	 * 		Name   -> Function MoleRat_Character_BP.MoleRat_Character_BP_C.ChargeEndedAlterRotation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AMoleRat_Character_BP_C::ChargeEndedAlterRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.ChargeEndedAlterRotation");
		
		AMoleRat_Character_BP_C_ChargeEndedAlterRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MoleRat_Character_BP.MoleRat_Character_BP_C.BPAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              IncomingDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (Parm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  PointHitInfo                                               (Parm)
	 */
	float AMoleRat_Character_BP_C::BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.BPAdjustDamage");
		
		AMoleRat_Character_BP_C_BPAdjustDamage_Params params {};
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
	 * 		Name   -> Function MoleRat_Character_BP.MoleRat_Character_BP_C.ResetTaming
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMoleRat_Character_BP_C::ResetTaming()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.ResetTaming");
		
		AMoleRat_Character_BP_C_ResetTaming_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MoleRat_Character_BP.MoleRat_Character_BP_C.BPHandleOnStopTargeting
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AMoleRat_Character_BP_C::BPHandleOnStopTargeting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.BPHandleOnStopTargeting");
		
		AMoleRat_Character_BP_C_BPHandleOnStopTargeting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MoleRat_Character_BP.MoleRat_Character_BP_C.BP_InterceptMoveForward
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AMoleRat_Character_BP_C::BP_InterceptMoveForward(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.BP_InterceptMoveForward");
		
		AMoleRat_Character_BP_C_BP_InterceptMoveForward_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MoleRat_Character_BP.MoleRat_Character_BP_C.BP_InterceptMoveRight
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AMoleRat_Character_BP_C::BP_InterceptMoveRight(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.BP_InterceptMoveRight");
		
		AMoleRat_Character_BP_C_BP_InterceptMoveRight_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MoleRat_Character_BP.MoleRat_Character_BP_C.BPOnEndCharging
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMoleRat_Character_BP_C::BPOnEndCharging()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.BPOnEndCharging");
		
		AMoleRat_Character_BP_C_BPOnEndCharging_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MoleRat_Character_BP.MoleRat_Character_BP_C.GiveAffinity
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            tamer                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               WasTamed                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMoleRat_Character_BP_C::GiveAffinity(class APrimalCharacter* tamer, bool* WasTamed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.GiveAffinity");
		
		AMoleRat_Character_BP_C_GiveAffinity_Params params {};
		params.tamer = tamer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WasTamed != nullptr)
			*WasTamed = params.WasTamed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MoleRat_Character_BP.MoleRat_Character_BP_C.SlidingUpdate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMoleRat_Character_BP_C::SlidingUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.SlidingUpdate");
		
		AMoleRat_Character_BP_C_SlidingUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MoleRat_Character_BP.MoleRat_Character_BP_C.BlueprintCanRiderAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AMoleRat_Character_BP_C::BlueprintCanRiderAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.BlueprintCanRiderAttack");
		
		AMoleRat_Character_BP_C_BlueprintCanRiderAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MoleRat_Character_BP.MoleRat_Character_BP_C.BPNotifyDroppedItemPickedUp
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADroppedItem*                                itemPickedUp                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalCharacter*                            PickedUpBy                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMoleRat_Character_BP_C::BPNotifyDroppedItemPickedUp(class ADroppedItem* itemPickedUp, class APrimalCharacter* PickedUpBy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.BPNotifyDroppedItemPickedUp");
		
		AMoleRat_Character_BP_C_BPNotifyDroppedItemPickedUp_Params params {};
		params.itemPickedUp = itemPickedUp;
		params.PickedUpBy = PickedUpBy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MoleRat_Character_BP.MoleRat_Character_BP_C.CanDamageActor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               TargetCanBeDamage                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMoleRat_Character_BP_C::CanDamageActor(class AActor* Target, bool* TargetCanBeDamage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.CanDamageActor");
		
		AMoleRat_Character_BP_C_CanDamageActor_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TargetCanBeDamage != nullptr)
			*TargetCanBeDamage = params.TargetCanBeDamage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MoleRat_Character_BP.MoleRat_Character_BP_C.Handle Hit Pawns
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FHitResult>                          HitTargets                                                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMoleRat_Character_BP_C::HandleHitPawns(TArray<struct FHitResult>* HitTargets, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.Handle Hit Pawns");
		
		AMoleRat_Character_BP_C_HandleHitPawns_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HitTargets != nullptr)
			*HitTargets = params.HitTargets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MoleRat_Character_BP.MoleRat_Character_BP_C.HandleHitStatic
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FHitResult>                          HitTargets                                                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMoleRat_Character_BP_C::HandleHitStatic(TArray<struct FHitResult>* HitTargets, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.HandleHitStatic");
		
		AMoleRat_Character_BP_C_HandleHitStatic_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HitTargets != nullptr)
			*HitTargets = params.HitTargets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MoleRat_Character_BP.MoleRat_Character_BP_C.HandleChargingCollisions
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMoleRat_Character_BP_C::HandleChargingCollisions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.HandleChargingCollisions");
		
		AMoleRat_Character_BP_C_HandleChargingCollisions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MoleRat_Character_BP.MoleRat_Character_BP_C.BPNotifyClearRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderClearing                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMoleRat_Character_BP_C::BPNotifyClearRider(class AShooterCharacter* RiderClearing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.BPNotifyClearRider");
		
		AMoleRat_Character_BP_C_BPNotifyClearRider_Params params {};
		params.RiderClearing = RiderClearing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MoleRat_Character_BP.MoleRat_Character_BP_C.BPNotifyClearPassenger
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            PassengerChar                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SeatIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMoleRat_Character_BP_C::BPNotifyClearPassenger(class APrimalCharacter* PassengerChar, int32_t SeatIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.BPNotifyClearPassenger");
		
		AMoleRat_Character_BP_C_BPNotifyClearPassenger_Params params {};
		params.PassengerChar = PassengerChar;
		params.SeatIndex = SeatIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MoleRat_Character_BP.MoleRat_Character_BP_C.NotifyPassengersIsCharging
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsCharging                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMoleRat_Character_BP_C::NotifyPassengersIsCharging(bool IsCharging)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.NotifyPassengersIsCharging");
		
		AMoleRat_Character_BP_C_NotifyPassengersIsCharging_Params params {};
		params.IsCharging = IsCharging;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MoleRat_Character_BP.MoleRat_Character_BP_C.CanUseGemAttack
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CanUseGemAttack                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMoleRat_Character_BP_C::CanUseGemAttack(bool* CanUseGemAttack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.CanUseGemAttack");
		
		AMoleRat_Character_BP_C_CanUseGemAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CanUseGemAttack != nullptr)
			*CanUseGemAttack = params.CanUseGemAttack;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MoleRat_Character_BP.MoleRat_Character_BP_C.GetChargeValueScaled
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              CurrentValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              MinValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              MaxValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              velocityAlpha                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              scaledValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMoleRat_Character_BP_C::GetChargeValueScaled(float CurrentValue, float MinValue, float MaxValue, float velocityAlpha, float* scaledValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.GetChargeValueScaled");
		
		AMoleRat_Character_BP_C_GetChargeValueScaled_Params params {};
		params.CurrentValue = CurrentValue;
		params.MinValue = MinValue;
		params.MaxValue = MaxValue;
		params.velocityAlpha = velocityAlpha;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (scaledValue != nullptr)
			*scaledValue = params.scaledValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MoleRat_Character_BP.MoleRat_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimNotify*                                 AnimNotifyObject                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMoleRat_Character_BP_C::BlueprintAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.BlueprintAnimNotifyCustomEvent");
		
		AMoleRat_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params {};
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
	 * 		Name   -> Function MoleRat_Character_BP.MoleRat_Character_BP_C.OnJumped
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMoleRat_Character_BP_C::OnJumped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.OnJumped");
		
		AMoleRat_Character_BP_C_OnJumped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MoleRat_Character_BP.MoleRat_Character_BP_C.CanJumpInternal
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AMoleRat_Character_BP_C::CanJumpInternal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.CanJumpInternal");
		
		AMoleRat_Character_BP_C_CanJumpInternal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MoleRat_Character_BP.MoleRat_Character_BP_C.DebugFunction
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMoleRat_Character_BP_C::DebugFunction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.DebugFunction");
		
		AMoleRat_Character_BP_C_DebugFunction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MoleRat_Character_BP.MoleRat_Character_BP_C.SpeedGainFormula
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              alphaInput                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              alphaOutput                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMoleRat_Character_BP_C::SpeedGainFormula(float alphaInput, float* alphaOutput)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.SpeedGainFormula");
		
		AMoleRat_Character_BP_C_SpeedGainFormula_Params params {};
		params.alphaInput = alphaInput;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (alphaOutput != nullptr)
			*alphaOutput = params.alphaOutput;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MoleRat_Character_BP.MoleRat_Character_BP_C.OnChargingTimer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMoleRat_Character_BP_C::OnChargingTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.OnChargingTimer");
		
		AMoleRat_Character_BP_C_OnChargingTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MoleRat_Character_BP.MoleRat_Character_BP_C.BPTimerServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMoleRat_Character_BP_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.BPTimerServer");
		
		AMoleRat_Character_BP_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MoleRat_Character_BP.MoleRat_Character_BP_C.BPOnRepIsCharging
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMoleRat_Character_BP_C::BPOnRepIsCharging()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.BPOnRepIsCharging");
		
		AMoleRat_Character_BP_C_BPOnRepIsCharging_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MoleRat_Character_BP.MoleRat_Character_BP_C.OnStopCharging
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMoleRat_Character_BP_C::OnStopCharging()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.OnStopCharging");
		
		AMoleRat_Character_BP_C_OnStopCharging_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MoleRat_Character_BP.MoleRat_Character_BP_C.Scale All Charge Values
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMoleRat_Character_BP_C::ScaleAllChargeValues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.Scale All Charge Values");
		
		AMoleRat_Character_BP_C_ScaleAllChargeValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MoleRat_Character_BP.MoleRat_Character_BP_C.On StartCharging
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMoleRat_Character_BP_C::OnStartCharging()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.On StartCharging");
		
		AMoleRat_Character_BP_C_OnStartCharging_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MoleRat_Character_BP.MoleRat_Character_BP_C.BPChargingModifyInputAcceleration
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     inputAcceleration                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector AMoleRat_Character_BP_C::BPChargingModifyInputAcceleration(const struct FVector& inputAcceleration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.BPChargingModifyInputAcceleration");
		
		AMoleRat_Character_BP_C_BPChargingModifyInputAcceleration_Params params {};
		params.inputAcceleration = inputAcceleration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MoleRat_Character_BP.MoleRat_Character_BP_C.IsPassengerInFirstPersonMode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	void AMoleRat_Character_BP_C::IsPassengerInFirstPersonMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.IsPassengerInFirstPersonMode");
		
		AMoleRat_Character_BP_C_IsPassengerInFirstPersonMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MoleRat_Character_BP.MoleRat_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMoleRat_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.ReceiveBeginPlay");
		
		AMoleRat_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MoleRat_Character_BP.MoleRat_Character_BP_C.ResetFPVSocket
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMoleRat_Character_BP_C::ResetFPVSocket()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.ResetFPVSocket");
		
		AMoleRat_Character_BP_C_ResetFPVSocket_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MoleRat_Character_BP.MoleRat_Character_BP_C.UpdateFPVSocketOnCharge
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMoleRat_Character_BP_C::UpdateFPVSocketOnCharge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.UpdateFPVSocketOnCharge");
		
		AMoleRat_Character_BP_C_UpdateFPVSocketOnCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MoleRat_Character_BP.MoleRat_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMoleRat_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.UserConstructionScript");
		
		AMoleRat_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MoleRat_Character_BP.MoleRat_Character_BP_C.EndChargeRotation__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMoleRat_Character_BP_C::EndChargeRotation__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.EndChargeRotation__FinishedFunc");
		
		AMoleRat_Character_BP_C_EndChargeRotation__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MoleRat_Character_BP.MoleRat_Character_BP_C.EndChargeRotation__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AMoleRat_Character_BP_C::EndChargeRotation__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.EndChargeRotation__UpdateFunc");
		
		AMoleRat_Character_BP_C_EndChargeRotation__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MoleRat_Character_BP.MoleRat_Character_BP_C.SetTPVOffsetForRoll
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMoleRat_Character_BP_C::SetTPVOffsetForRoll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.SetTPVOffsetForRoll");
		
		AMoleRat_Character_BP_C_SetTPVOffsetForRoll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MoleRat_Character_BP.MoleRat_Character_BP_C.SetNormalTPVOffset
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMoleRat_Character_BP_C::SetNormalTPVOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.SetNormalTPVOffset");
		
		AMoleRat_Character_BP_C_SetNormalTPVOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MoleRat_Character_BP.MoleRat_Character_BP_C.StartCameraOffsetMovement
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               rollOffset                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMoleRat_Character_BP_C::StartCameraOffsetMovement(bool rollOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.StartCameraOffsetMovement");
		
		AMoleRat_Character_BP_C_StartCameraOffsetMovement_Params params {};
		params.rollOffset = rollOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MoleRat_Character_BP.MoleRat_Character_BP_C.DebugSphere
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     NewParam                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMoleRat_Character_BP_C::DebugSphere(const struct FVector& NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.DebugSphere");
		
		AMoleRat_Character_BP_C_DebugSphere_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MoleRat_Character_BP.MoleRat_Character_BP_C.SwitchToRollingAnims
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMoleRat_Character_BP_C::SwitchToRollingAnims()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.SwitchToRollingAnims");
		
		AMoleRat_Character_BP_C_SwitchToRollingAnims_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MoleRat_Character_BP.MoleRat_Character_BP_C.UpdateForwardValue_Server
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              newForwardValue                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMoleRat_Character_BP_C::UpdateForwardValue_Server(float newForwardValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.UpdateForwardValue_Server");
		
		AMoleRat_Character_BP_C_UpdateForwardValue_Server_Params params {};
		params.newForwardValue = newForwardValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MoleRat_Character_BP.MoleRat_Character_BP_C.ChargeActions
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMoleRat_Character_BP_C::ChargeActions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.ChargeActions");
		
		AMoleRat_Character_BP_C_ChargeActions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MoleRat_Character_BP.MoleRat_Character_BP_C.RequestStopCharging_Server
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void AMoleRat_Character_BP_C::RequestStopCharging_Server()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.RequestStopCharging_Server");
		
		AMoleRat_Character_BP_C_RequestStopCharging_Server_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MoleRat_Character_BP.MoleRat_Character_BP_C.AnimNotify_SpawnDebris
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMoleRat_Character_BP_C::AnimNotify_SpawnDebris()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.AnimNotify_SpawnDebris");
		
		AMoleRat_Character_BP_C_AnimNotify_SpawnDebris_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MoleRat_Character_BP.MoleRat_Character_BP_C.AnimNotify_TrySpawnGem
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMoleRat_Character_BP_C::AnimNotify_TrySpawnGem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.AnimNotify_TrySpawnGem");
		
		AMoleRat_Character_BP_C_AnimNotify_TrySpawnGem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MoleRat_Character_BP.MoleRat_Character_BP_C.EnableIKAfterDelay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMoleRat_Character_BP_C::EnableIKAfterDelay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.EnableIKAfterDelay");
		
		AMoleRat_Character_BP_C_EnableIKAfterDelay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MoleRat_Character_BP.MoleRat_Character_BP_C.MulticastResetPassengerPos
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Passenger                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        SocketName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMoleRat_Character_BP_C::MulticastResetPassengerPos(class APrimalCharacter* Passenger, const class FName& SocketName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.MulticastResetPassengerPos");
		
		AMoleRat_Character_BP_C_MulticastResetPassengerPos_Params params {};
		params.Passenger = Passenger;
		params.SocketName = SocketName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MoleRat_Character_BP.MoleRat_Character_BP_C.MulticastSetPassengerInsideCenter
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Passenger                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        SocketName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMoleRat_Character_BP_C::MulticastSetPassengerInsideCenter(class APrimalCharacter* Passenger, const class FName& SocketName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.MulticastSetPassengerInsideCenter");
		
		AMoleRat_Character_BP_C_MulticastSetPassengerInsideCenter_Params params {};
		params.Passenger = Passenger;
		params.SocketName = SocketName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MoleRat_Character_BP.MoleRat_Character_BP_C.MultiSpawnHoneyConsumedParticle
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Loc                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMoleRat_Character_BP_C::MultiSpawnHoneyConsumedParticle(const struct FVector& Loc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.MultiSpawnHoneyConsumedParticle");
		
		AMoleRat_Character_BP_C_MultiSpawnHoneyConsumedParticle_Params params {};
		params.Loc = Loc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MoleRat_Character_BP.MoleRat_Character_BP_C.AnimNotify_LookForTameDrops
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMoleRat_Character_BP_C::AnimNotify_LookForTameDrops()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.AnimNotify_LookForTameDrops");
		
		AMoleRat_Character_BP_C_AnimNotify_LookForTameDrops_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MoleRat_Character_BP.MoleRat_Character_BP_C.MultiSimulateVelocitySliding
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     VelocityToMaintain                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMoleRat_Character_BP_C::MultiSimulateVelocitySliding(const struct FVector& VelocityToMaintain)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.MultiSimulateVelocitySliding");
		
		AMoleRat_Character_BP_C_MultiSimulateVelocitySliding_Params params {};
		params.VelocityToMaintain = VelocityToMaintain;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MoleRat_Character_BP.MoleRat_Character_BP_C.RequestServer_EndCharging
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void AMoleRat_Character_BP_C::RequestServer_EndCharging()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.RequestServer_EndCharging");
		
		AMoleRat_Character_BP_C_RequestServer_EndCharging_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MoleRat_Character_BP.MoleRat_Character_BP_C.MultiRotateTo
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    TargetRotation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              RotationTime                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    StartingRotation                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMoleRat_Character_BP_C::MultiRotateTo(const struct FRotator& TargetRotation, float RotationTime, const struct FRotator& StartingRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.MultiRotateTo");
		
		AMoleRat_Character_BP_C_MultiRotateTo_Params params {};
		params.TargetRotation = TargetRotation;
		params.RotationTime = RotationTime;
		params.StartingRotation = StartingRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function MoleRat_Character_BP.MoleRat_Character_BP_C.ExecuteUbergraph_MoleRat_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMoleRat_Character_BP_C::ExecuteUbergraph_MoleRat_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MoleRat_Character_BP.MoleRat_Character_BP_C.ExecuteUbergraph_MoleRat_Character_BP");
		
		AMoleRat_Character_BP_C_ExecuteUbergraph_MoleRat_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMoleRat_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMoleRat_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass MoleRat_Character_BP.MoleRat_Character_BP_C");
		return ptr;
	}

}


