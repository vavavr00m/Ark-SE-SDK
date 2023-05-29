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
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.GetIngoreActorsForExplosion
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Oirgin                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class AActor*>                              Array                                                      (Parm, OutParm, ZeroConstructor)
	 */
	void ATekCruiseMissile_Character_BP_C::GetIngoreActorsForExplosion(const struct FVector& Oirgin, float Radius, TArray<class AActor*>* Array)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.GetIngoreActorsForExplosion");
		
		ATekCruiseMissile_Character_BP_C_GetIngoreActorsForExplosion_Params params {};
		params.Oirgin = Oirgin;
		params.Radius = Radius;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Array != nullptr)
			*Array = params.Array;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.validate proper impact location
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	struct FVector ATekCruiseMissile_Character_BP_C::validateproperimpactlocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.validate proper impact location");
		
		ATekCruiseMissile_Character_BP_C_validateproperimpactlocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.has missile exceeded allowed distance
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ATekCruiseMissile_Character_BP_C::hasmissileexceededalloweddistance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.has missile exceeded allowed distance");
		
		ATekCruiseMissile_Character_BP_C_hasmissileexceededalloweddistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Finished Arming
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekCruiseMissile_Character_BP_C::FinishedArming()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Finished Arming");
		
		ATekCruiseMissile_Character_BP_C_FinishedArming_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.manual explode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekCruiseMissile_Character_BP_C::manualexplode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.manual explode");
		
		ATekCruiseMissile_Character_BP_C_manualexplode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPNotifyClearPassenger
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            PassengerChar                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SeatIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekCruiseMissile_Character_BP_C::BPNotifyClearPassenger(class APrimalCharacter* PassengerChar, int32_t SeatIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPNotifyClearPassenger");
		
		ATekCruiseMissile_Character_BP_C_BPNotifyClearPassenger_Params params {};
		params.PassengerChar = PassengerChar;
		params.SeatIndex = SeatIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.FuelTime
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekCruiseMissile_Character_BP_C::FuelTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.FuelTime");
		
		ATekCruiseMissile_Character_BP_C_FuelTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPNotifyAddPassenger
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            PassengerChar                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SeatIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekCruiseMissile_Character_BP_C::BPNotifyAddPassenger(class APrimalCharacter* PassengerChar, int32_t SeatIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPNotifyAddPassenger");
		
		ATekCruiseMissile_Character_BP_C_BPNotifyAddPassenger_Params params {};
		params.PassengerChar = PassengerChar;
		params.SeatIndex = SeatIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Is Missile Locally Controlled
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Local                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekCruiseMissile_Character_BP_C::IsMissileLocallyControlled(bool* Local)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Is Missile Locally Controlled");
		
		ATekCruiseMissile_Character_BP_C_IsMissileLocallyControlled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Local != nullptr)
			*Local = params.Local;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPServerHandleNetExecCommand
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           FromPC                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        CommandName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (Parm, OutParm, ReferenceParm)
	 */
	bool ATekCruiseMissile_Character_BP_C::BPServerHandleNetExecCommand(class APlayerController* FromPC, const class FName& CommandName, struct FBPNetExecParams* ExecParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPServerHandleNetExecCommand");
		
		ATekCruiseMissile_Character_BP_C_BPServerHandleNetExecCommand_Params params {};
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
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BP_OnJumpPressed
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATekCruiseMissile_Character_BP_C::BP_OnJumpPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BP_OnJumpPressed");
		
		ATekCruiseMissile_Character_BP_C_BP_OnJumpPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              IncomingDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (Parm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  PointHitInfo                                               (Parm)
	 */
	float ATekCruiseMissile_Character_BP_C::BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPAdjustDamage");
		
		ATekCruiseMissile_Character_BP_C_BPAdjustDamage_Params params {};
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
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ReceiveActorBeginOverlap
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekCruiseMissile_Character_BP_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ReceiveActorBeginOverlap");
		
		ATekCruiseMissile_Character_BP_C_ReceiveActorBeginOverlap_Params params {};
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPCanBeBaseForCharacter
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATekCruiseMissile_Character_BP_C::BPCanBeBaseForCharacter(class APawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPCanBeBaseForCharacter");
		
		ATekCruiseMissile_Character_BP_C_BPCanBeBaseForCharacter_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPGetOverrideCameraInterpSpeed
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DefaultTPVCameraSpeedInterpolationMultiplier               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DefaultTPVOffsetInterpSpeed                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              TPVCameraSpeedInterpolationMultiplier                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              TPVOffsetInterpSpeed                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekCruiseMissile_Character_BP_C::BPGetOverrideCameraInterpSpeed(float DefaultTPVCameraSpeedInterpolationMultiplier, float DefaultTPVOffsetInterpSpeed, float* TPVCameraSpeedInterpolationMultiplier, float* TPVOffsetInterpSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPGetOverrideCameraInterpSpeed");
		
		ATekCruiseMissile_Character_BP_C_BPGetOverrideCameraInterpSpeed_Params params {};
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Give Player Vision Buff
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekCruiseMissile_Character_BP_C::GivePlayerVisionBuff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Give Player Vision Buff");
		
		ATekCruiseMissile_Character_BP_C_GivePlayerVisionBuff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPModifyDesiredRotation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    InDesiredRotation                                          (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    OutDesiredRotation                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATekCruiseMissile_Character_BP_C::BPModifyDesiredRotation(float DeltaTime, struct FRotator* InDesiredRotation, struct FRotator* OutDesiredRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPModifyDesiredRotation");
		
		ATekCruiseMissile_Character_BP_C_BPModifyDesiredRotation_Params params {};
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BP_InterceptMoveRight
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATekCruiseMissile_Character_BP_C::BP_InterceptMoveRight(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BP_InterceptMoveRight");
		
		ATekCruiseMissile_Character_BP_C_BP_InterceptMoveRight_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPGetMultiUseEntries
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FMultiUseEntry>                      MultiUseEntries                                            (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	TArray<struct FMultiUseEntry> ATekCruiseMissile_Character_BP_C::BPGetMultiUseEntries(class APlayerController* ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPGetMultiUseEntries");
		
		ATekCruiseMissile_Character_BP_C_BPGetMultiUseEntries_Params params {};
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
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Damage Actors By Explosion Radius
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OverrideDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      damagetype                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               reallydamage                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekCruiseMissile_Character_BP_C::DamageActorsByExplosionRadius(class AActor* Actor, float OverrideDamage, class UClass* damagetype, bool reallydamage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Damage Actors By Explosion Radius");
		
		ATekCruiseMissile_Character_BP_C_DamageActorsByExplosionRadius_Params params {};
		params.Actor = Actor;
		params.OverrideDamage = OverrideDamage;
		params.damagetype = damagetype;
		params.reallydamage = reallydamage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BP_InterceptMoveForward
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATekCruiseMissile_Character_BP_C::BP_InterceptMoveForward(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BP_InterceptMoveForward");
		
		ATekCruiseMissile_Character_BP_C_BP_InterceptMoveForward_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPCanCryo
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATekCruiseMissile_Character_BP_C::BPCanCryo(class AShooterPlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPCanCryo");
		
		ATekCruiseMissile_Character_BP_C_BPCanCryo_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BP_PreventMovementMode
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      NewMovementMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      NewCustomMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATekCruiseMissile_Character_BP_C::BP_PreventMovementMode(EMovementMode NewMovementMode, unsigned char NewCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BP_PreventMovementMode");
		
		ATekCruiseMissile_Character_BP_C_BP_PreventMovementMode_Params params {};
		params.NewMovementMode = NewMovementMode;
		params.NewCustomMode = NewCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ServerIsFiringItemInInventory
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Retval                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekCruiseMissile_Character_BP_C::ServerIsFiringItemInInventory(bool* Retval)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ServerIsFiringItemInInventory");
		
		ATekCruiseMissile_Character_BP_C_ServerIsFiringItemInInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Retval != nullptr)
			*Retval = params.Retval;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BP_InterceptTurnInput
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATekCruiseMissile_Character_BP_C::BP_InterceptTurnInput(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BP_InterceptTurnInput");
		
		ATekCruiseMissile_Character_BP_C_BP_InterceptTurnInput_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.SetupScoutDisconnect
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DelayTimeSeconds                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekCruiseMissile_Character_BP_C::SetupScoutDisconnect(float DelayTimeSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.SetupScoutDisconnect");
		
		ATekCruiseMissile_Character_BP_C_SetupScoutDisconnect_Params params {};
		params.DelayTimeSeconds = DelayTimeSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.DestroyScout
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekCruiseMissile_Character_BP_C::DestroyScout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.DestroyScout");
		
		ATekCruiseMissile_Character_BP_C_DestroyScout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPModifyAimOffsetTargetLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     AimTargetLocation                                          (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	struct FVector ATekCruiseMissile_Character_BP_C::BPModifyAimOffsetTargetLocation(struct FVector* AimTargetLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPModifyAimOffsetTargetLocation");
		
		ATekCruiseMissile_Character_BP_C_BPModifyAimOffsetTargetLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AimTargetLocation != nullptr)
			*AimTargetLocation = params.AimTargetLocation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Is Dino Fleeing
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        Dino                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsFleeing                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekCruiseMissile_Character_BP_C::IsDinoFleeing(class APrimalDinoCharacter* Dino, bool* IsFleeing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Is Dino Fleeing");
		
		ATekCruiseMissile_Character_BP_C_IsDinoFleeing_Params params {};
		params.Dino = Dino;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsFleeing != nullptr)
			*IsFleeing = params.IsFleeing;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPOverrideStencilAllianceForTarget
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            TargetDino                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimitiveComponent*                         Component                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	EStencilAlliance ATekCruiseMissile_Character_BP_C::BPOverrideStencilAllianceForTarget(class APrimalCharacter* TargetDino, class UPrimitiveComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPOverrideStencilAllianceForTarget");
		
		ATekCruiseMissile_Character_BP_C_BPOverrideStencilAllianceForTarget_Params params {};
		params.TargetDino = TargetDino;
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPShouldCancelDoAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATekCruiseMissile_Character_BP_C::BPShouldCancelDoAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPShouldCancelDoAttack");
		
		ATekCruiseMissile_Character_BP_C_BPShouldCancelDoAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.OnRep_LowStamina
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekCruiseMissile_Character_BP_C::OnRep_LowStamina()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.OnRep_LowStamina");
		
		ATekCruiseMissile_Character_BP_C_OnRep_LowStamina_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.IsDashing
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekCruiseMissile_Character_BP_C::IsDashing(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.IsDashing");
		
		ATekCruiseMissile_Character_BP_C_IsDashing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPGetHUDElements
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FHUDElement>                         OutElements                                                (Parm, OutParm, ZeroConstructor)
	 */
	void ATekCruiseMissile_Character_BP_C::BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPGetHUDElements");
		
		ATekCruiseMissile_Character_BP_C_BPGetHUDElements_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutElements != nullptr)
			*OutElements = params.OutElements;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ReceiveTick
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekCruiseMissile_Character_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ReceiveTick");
		
		ATekCruiseMissile_Character_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ScoutIsFirstPerson
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Retval                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekCruiseMissile_Character_BP_C::ScoutIsFirstPerson(bool* Retval)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ScoutIsFirstPerson");
		
		ATekCruiseMissile_Character_BP_C_ScoutIsFirstPerson_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Retval != nullptr)
			*Retval = params.Retval;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.SetTargetImpactMaterial
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              ImpactDistance                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekCruiseMissile_Character_BP_C::SetTargetImpactMaterial(float ImpactDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.SetTargetImpactMaterial");
		
		ATekCruiseMissile_Character_BP_C_SetTargetImpactMaterial_Params params {};
		params.ImpactDistance = ImpactDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPPreventStasis
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ATekCruiseMissile_Character_BP_C::BPPreventStasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPPreventStasis");
		
		ATekCruiseMissile_Character_BP_C_BPPreventStasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPHandleUseButtonPress
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    RiderController                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATekCruiseMissile_Character_BP_C::BPHandleUseButtonPress(class AShooterPlayerController* RiderController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPHandleUseButtonPress");
		
		ATekCruiseMissile_Character_BP_C_BPHandleUseButtonPress_Params params {};
		params.RiderController = RiderController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.IsScoutFirst Person
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               IsFirstPerson                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekCruiseMissile_Character_BP_C::IsScoutFirstPerson(bool* IsFirstPerson)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.IsScoutFirst Person");
		
		ATekCruiseMissile_Character_BP_C_IsScoutFirstPerson_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsFirstPerson != nullptr)
			*IsFirstPerson = params.IsFirstPerson;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.SetFirstPersonMaterial
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsFirstPerson                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekCruiseMissile_Character_BP_C::SetFirstPersonMaterial(bool IsFirstPerson)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.SetFirstPersonMaterial");
		
		ATekCruiseMissile_Character_BP_C_SetFirstPersonMaterial_Params params {};
		params.IsFirstPerson = IsFirstPerson;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.IsServerOrSinglePlayer
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekCruiseMissile_Character_BP_C::IsServerOrSinglePlayer(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.IsServerOrSinglePlayer");
		
		ATekCruiseMissile_Character_BP_C_IsServerOrSinglePlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.IsClientOrSinglePlayer
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekCruiseMissile_Character_BP_C::IsClientOrSinglePlayer(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.IsClientOrSinglePlayer");
		
		ATekCruiseMissile_Character_BP_C_IsClientOrSinglePlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Update Scout Vision
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekCruiseMissile_Character_BP_C::UpdateScoutVision()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Update Scout Vision");
		
		ATekCruiseMissile_Character_BP_C_UpdateScoutVision_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPOverrideFPVViewLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            viewingCharacter                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATekCruiseMissile_Character_BP_C::BPOverrideFPVViewLocation(class APrimalCharacter* viewingCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPOverrideFPVViewLocation");
		
		ATekCruiseMissile_Character_BP_C_BPOverrideFPVViewLocation_Params params {};
		params.viewingCharacter = viewingCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPGetFPVViewLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            viewingCharacter                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector ATekCruiseMissile_Character_BP_C::BPGetFPVViewLocation(class APrimalCharacter* viewingCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPGetFPVViewLocation");
		
		ATekCruiseMissile_Character_BP_C_BPGetFPVViewLocation_Params params {};
		params.viewingCharacter = viewingCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Dash
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Impulse                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekCruiseMissile_Character_BP_C::Dash(const struct FVector& Direction, float Impulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Dash");
		
		ATekCruiseMissile_Character_BP_C_Dash_Params params {};
		params.Direction = Direction;
		params.Impulse = Impulse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BP_GetCustomModifier_RotationRate
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ATekCruiseMissile_Character_BP_C::BP_GetCustomModifier_RotationRate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BP_GetCustomModifier_RotationRate");
		
		ATekCruiseMissile_Character_BP_C_BP_GetCustomModifier_RotationRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BP_GetCustomModifier_MaxSpeed
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ATekCruiseMissile_Character_BP_C::BP_GetCustomModifier_MaxSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BP_GetCustomModifier_MaxSpeed");
		
		ATekCruiseMissile_Character_BP_C_BP_GetCustomModifier_MaxSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BlueprintCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATekCruiseMissile_Character_BP_C::BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BlueprintCanAttack");
		
		ATekCruiseMissile_Character_BP_C_BlueprintCanAttack_Params params {};
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
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BP_OnSetDeath
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 */
	void ATekCruiseMissile_Character_BP_C::BP_OnSetDeath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BP_OnSetDeath");
		
		ATekCruiseMissile_Character_BP_C_BP_OnSetDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Release Possessing Survivor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               destroyed                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekCruiseMissile_Character_BP_C::ReleasePossessingSurvivor(bool destroyed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Release Possessing Survivor");
		
		ATekCruiseMissile_Character_BP_C_ReleasePossessingSurvivor_Params params {};
		params.destroyed = destroyed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.GetPossessedByPlayer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekCruiseMissile_Character_BP_C::GetPossessedByPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.GetPossessedByPlayer");
		
		ATekCruiseMissile_Character_BP_C_GetPossessedByPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Spawned From Projectile
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    ShooterPlayerController                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              PossessDelay                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimalItem*                                 FiringItem                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekCruiseMissile_Character_BP_C::SpawnedFromProjectile(class AShooterPlayerController* ShooterPlayerController, float PossessDelay, class UPrimalItem* FiringItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Spawned From Projectile");
		
		ATekCruiseMissile_Character_BP_C_SpawnedFromProjectile_Params params {};
		params.ShooterPlayerController = ShooterPlayerController;
		params.PossessDelay = PossessDelay;
		params.FiringItem = FiringItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPIsValidUnStasisCaster
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ATekCruiseMissile_Character_BP_C::BPIsValidUnStasisCaster()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.BPIsValidUnStasisCaster");
		
		ATekCruiseMissile_Character_BP_C_BPIsValidUnStasisCaster_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekCruiseMissile_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.UserConstructionScript");
		
		ATekCruiseMissile_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.StopPossessingPlayerMovement
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekCruiseMissile_Character_BP_C::StopPossessingPlayerMovement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.StopPossessingPlayerMovement");
		
		ATekCruiseMissile_Character_BP_C_StopPossessingPlayerMovement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ReceiveHit
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
	void ATekCruiseMissile_Character_BP_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult* Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ReceiveHit");
		
		ATekCruiseMissile_Character_BP_C_ReceiveHit_Params params {};
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ReplicateInputVector
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     InputVector                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekCruiseMissile_Character_BP_C::ReplicateInputVector(const struct FVector& InputVector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ReplicateInputVector");
		
		ATekCruiseMissile_Character_BP_C_ReplicateInputVector_Params params {};
		params.InputVector = InputVector;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.on hit something
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      otheractor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     hitnormal                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekCruiseMissile_Character_BP_C::onhitsomething(class AActor* otheractor, const struct FVector& hitnormal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.on hit something");
		
		ATekCruiseMissile_Character_BP_C_onhitsomething_Params params {};
		params.otheractor = otheractor;
		params.hitnormal = hitnormal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ReleasePossessingSurvivorAndDestroy
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ATekCruiseMissile_Character_BP_C::ReleasePossessingSurvivorAndDestroy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ReleasePossessingSurvivorAndDestroy");
		
		ATekCruiseMissile_Character_BP_C_ReleasePossessingSurvivorAndDestroy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.RechargeShield
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATekCruiseMissile_Character_BP_C::RechargeShield()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.RechargeShield");
		
		ATekCruiseMissile_Character_BP_C_RechargeShield_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientScoutDamaged
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  HitResult                                                  (Parm)
	 */
	void ATekCruiseMissile_Character_BP_C::ClientScoutDamaged(const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientScoutDamaged");
		
		ATekCruiseMissile_Character_BP_C_ClientScoutDamaged_Params params {};
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientTickShieldDamageVFX
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekCruiseMissile_Character_BP_C::ClientTickShieldDamageVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientTickShieldDamageVFX");
		
		ATekCruiseMissile_Character_BP_C_ClientTickShieldDamageVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientRechargeShield
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATekCruiseMissile_Character_BP_C::ClientRechargeShield()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientRechargeShield");
		
		ATekCruiseMissile_Character_BP_C_ClientRechargeShield_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATekCruiseMissile_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ReceiveBeginPlay");
		
		ATekCruiseMissile_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.SpawnEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekCruiseMissile_Character_BP_C::SpawnEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.SpawnEnd");
		
		ATekCruiseMissile_Character_BP_C_SpawnEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekCruiseMissile_Character_BP_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ReceiveEndPlay");
		
		ATekCruiseMissile_Character_BP_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.TriggerDisconnectFX
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATekCruiseMissile_Character_BP_C::TriggerDisconnectFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.TriggerDisconnectFX");
		
		ATekCruiseMissile_Character_BP_C_TriggerDisconnectFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ScoutDied
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATekCruiseMissile_Character_BP_C::ScoutDied()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ScoutDied");
		
		ATekCruiseMissile_Character_BP_C_ScoutDied_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.PossessedByPlayer
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATekCruiseMissile_Character_BP_C::PossessedByPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.PossessedByPlayer");
		
		ATekCruiseMissile_Character_BP_C_PossessedByPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.MULTI_ReleasePossessingSurvivor
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATekCruiseMissile_Character_BP_C::MULTI_ReleasePossessingSurvivor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.MULTI_ReleasePossessingSurvivor");
		
		ATekCruiseMissile_Character_BP_C_MULTI_ReleasePossessingSurvivor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ServerDashAttack
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ATekCruiseMissile_Character_BP_C::ServerDashAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ServerDashAttack");
		
		ATekCruiseMissile_Character_BP_C_ServerDashAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.VerifyPossessingSurvivor
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekCruiseMissile_Character_BP_C::VerifyPossessingSurvivor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.VerifyPossessingSurvivor");
		
		ATekCruiseMissile_Character_BP_C_VerifyPossessingSurvivor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ReleasePossessingSurvivorAndDelayedDestroy
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ATekCruiseMissile_Character_BP_C::ReleasePossessingSurvivorAndDelayedDestroy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ReleasePossessingSurvivorAndDelayedDestroy");
		
		ATekCruiseMissile_Character_BP_C_ReleasePossessingSurvivorAndDelayedDestroy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.DelayedDestroyActor
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekCruiseMissile_Character_BP_C::DelayedDestroyActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.DelayedDestroyActor");
		
		ATekCruiseMissile_Character_BP_C_DelayedDestroyActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.CheckConsumeResource
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekCruiseMissile_Character_BP_C::CheckConsumeResource()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.CheckConsumeResource");
		
		ATekCruiseMissile_Character_BP_C_CheckConsumeResource_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientConsumeResource
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void ATekCruiseMissile_Character_BP_C::ClientConsumeResource()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientConsumeResource");
		
		ATekCruiseMissile_Character_BP_C_ClientConsumeResource_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.TickThrusterVFX
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATekCruiseMissile_Character_BP_C::TickThrusterVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.TickThrusterVFX");
		
		ATekCruiseMissile_Character_BP_C_TickThrusterVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientRanOutOfStamina
	 * 		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void ATekCruiseMissile_Character_BP_C::ClientRanOutOfStamina()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientRanOutOfStamina");
		
		ATekCruiseMissile_Character_BP_C_ClientRanOutOfStamina_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientScoutRangeCheck
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekCruiseMissile_Character_BP_C::ClientScoutRangeCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientScoutRangeCheck");
		
		ATekCruiseMissile_Character_BP_C_ClientScoutRangeCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.CheckSubmerged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekCruiseMissile_Character_BP_C::CheckSubmerged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.CheckSubmerged");
		
		ATekCruiseMissile_Character_BP_C_CheckSubmerged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientDashTick
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATekCruiseMissile_Character_BP_C::ClientDashTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientDashTick");
		
		ATekCruiseMissile_Character_BP_C_ClientDashTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientDashEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekCruiseMissile_Character_BP_C::ClientDashEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientDashEnd");
		
		ATekCruiseMissile_Character_BP_C_ClientDashEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.StartImpactVFX
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekCruiseMissile_Character_BP_C::StartImpactVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.StartImpactVFX");
		
		ATekCruiseMissile_Character_BP_C_StartImpactVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ServerHandleOnStopFire
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ATekCruiseMissile_Character_BP_C::ServerHandleOnStopFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ServerHandleOnStopFire");
		
		ATekCruiseMissile_Character_BP_C_ServerHandleOnStopFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ApplyStaminaCost
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekCruiseMissile_Character_BP_C::ApplyStaminaCost(float amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ApplyStaminaCost");
		
		ATekCruiseMissile_Character_BP_C_ApplyStaminaCost_Params params {};
		params.amount = amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.StaminaDrain
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ATekCruiseMissile_Character_BP_C::StaminaDrain()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.StaminaDrain");
		
		ATekCruiseMissile_Character_BP_C_StaminaDrain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientLowStamina
	 * 		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void ATekCruiseMissile_Character_BP_C::ClientLowStamina()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientLowStamina");
		
		ATekCruiseMissile_Character_BP_C_ClientLowStamina_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ReleasePossessingSurvivorAndLongDelayedDestroy
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekCruiseMissile_Character_BP_C::ReleasePossessingSurvivorAndLongDelayedDestroy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ReleasePossessingSurvivorAndLongDelayedDestroy");
		
		ATekCruiseMissile_Character_BP_C_ReleasePossessingSurvivorAndLongDelayedDestroy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.TickStaminaMeter
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekCruiseMissile_Character_BP_C::TickStaminaMeter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.TickStaminaMeter");
		
		ATekCruiseMissile_Character_BP_C_TickStaminaMeter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.DisableAI
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekCruiseMissile_Character_BP_C::DisableAI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.DisableAI");
		
		ATekCruiseMissile_Character_BP_C_DisableAI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.MULTI_SpawnedFromProjectile
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void ATekCruiseMissile_Character_BP_C::MULTI_SpawnedFromProjectile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.MULTI_SpawnedFromProjectile");
		
		ATekCruiseMissile_Character_BP_C_MULTI_SpawnedFromProjectile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.DelayedReleasePossessingSurvivorAndDelayedDestroy
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekCruiseMissile_Character_BP_C::DelayedReleasePossessingSurvivorAndDelayedDestroy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.DelayedReleasePossessingSurvivorAndDelayedDestroy");
		
		ATekCruiseMissile_Character_BP_C_DelayedReleasePossessingSurvivorAndDelayedDestroy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.UpdateScoutVisionBuff
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekCruiseMissile_Character_BP_C::UpdateScoutVisionBuff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.UpdateScoutVisionBuff");
		
		ATekCruiseMissile_Character_BP_C_UpdateScoutVisionBuff_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.RequestRecallScout
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekCruiseMissile_Character_BP_C::RequestRecallScout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.RequestRecallScout");
		
		ATekCruiseMissile_Character_BP_C_RequestRecallScout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Set rocket message
	 * 		Flags  -> (NetReliable, BlueprintCallable, BlueprintEvent)
	 */
	void ATekCruiseMissile_Character_BP_C::Setrocketmessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Set rocket message");
		
		ATekCruiseMissile_Character_BP_C_Setrocketmessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.CustomEvent_2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekCruiseMissile_Character_BP_C::CustomEvent_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.CustomEvent_2");
		
		ATekCruiseMissile_Character_BP_C_CustomEvent_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientCheckClearExpiredDinoData
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekCruiseMissile_Character_BP_C::ClientCheckClearExpiredDinoData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ClientCheckClearExpiredDinoData");
		
		ATekCruiseMissile_Character_BP_C_ClientCheckClearExpiredDinoData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.set falling
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekCruiseMissile_Character_BP_C::setfalling()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.set falling");
		
		ATekCruiseMissile_Character_BP_C_setfalling_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.warn time almost up
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATekCruiseMissile_Character_BP_C::warntimealmostup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.warn time almost up");
		
		ATekCruiseMissile_Character_BP_C_warntimealmostup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Explode
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     hitnormal                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekCruiseMissile_Character_BP_C::Explode(const struct FVector& hitnormal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.Explode");
		
		ATekCruiseMissile_Character_BP_C_Explode_Params params {};
		params.hitnormal = hitnormal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ExecuteUbergraph_TekCruiseMissile_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATekCruiseMissile_Character_BP_C::ExecuteUbergraph_TekCruiseMissile_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C.ExecuteUbergraph_TekCruiseMissile_Character_BP");
		
		ATekCruiseMissile_Character_BP_C_ExecuteUbergraph_TekCruiseMissile_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATekCruiseMissile_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATekCruiseMissile_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TekCruiseMissile_Character_BP.TekCruiseMissile_Character_BP_C");
		return ptr;
	}

}


