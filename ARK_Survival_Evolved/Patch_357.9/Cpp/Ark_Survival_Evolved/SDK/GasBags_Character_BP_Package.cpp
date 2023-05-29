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
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.ModifyInflationValue
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delta                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               DeltaIsPercent                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Subtract                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              NewInflationPercent                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGasBags_Character_BP_C::ModifyInflationValue(float Delta, bool DeltaIsPercent, bool Subtract, float* NewInflationPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.ModifyInflationValue");
		
		AGasBags_Character_BP_C_ModifyInflationValue_Params params {};
		params.Delta = Delta;
		params.DeltaIsPercent = DeltaIsPercent;
		params.Subtract = Subtract;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewInflationPercent != nullptr)
			*NewInflationPercent = params.NewInflationPercent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.GetInflationValue
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Percent                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGasBags_Character_BP_C::GetInflationValue(float* Value, float* Percent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.GetInflationValue");
		
		AGasBags_Character_BP_C_GetInflationValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
		if (Percent != nullptr)
			*Percent = params.Percent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.BPCharacterUnsleeped
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGasBags_Character_BP_C::BPCharacterUnsleeped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.BPCharacterUnsleeped");
		
		AGasBags_Character_BP_C_BPCharacterUnsleeped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.BP_ForceAllowMountedWeapon
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      WeaponTemplate                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AGasBags_Character_BP_C::BP_ForceAllowMountedWeapon(class UClass* WeaponTemplate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.BP_ForceAllowMountedWeapon");
		
		AGasBags_Character_BP_C_BP_ForceAllowMountedWeapon_Params params {};
		params.WeaponTemplate = WeaponTemplate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.BPOnLethalDamage
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              KillingDamage                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                DamageEvent                                                (Parm, OutParm, ReferenceParm)
	 * 		class AController*                                 Killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bPreventDeath                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGasBags_Character_BP_C::BPOnLethalDamage(float KillingDamage, struct FDamageEvent* DamageEvent, class AController* Killer, class AActor* DamageCauser, bool* bPreventDeath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.BPOnLethalDamage");
		
		AGasBags_Character_BP_C_BPOnLethalDamage_Params params {};
		params.KillingDamage = KillingDamage;
		params.Killer = Killer;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DamageEvent != nullptr)
			*DamageEvent = params.DamageEvent;
		if (bPreventDeath != nullptr)
			*bPreventDeath = params.bPreventDeath;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.BPCharacterSleeped
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGasBags_Character_BP_C::BPCharacterSleeped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.BPCharacterSleeped");
		
		AGasBags_Character_BP_C_BPCharacterSleeped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.GetCurrentFloatingForceDirection
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Dir                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGasBags_Character_BP_C::GetCurrentFloatingForceDirection(struct FVector* Dir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.GetCurrentFloatingForceDirection");
		
		AGasBags_Character_BP_C_GetCurrentFloatingForceDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Dir != nullptr)
			*Dir = params.Dir;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.IsInhaleSocketUnderwater
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AGasBags_Character_BP_C::IsInhaleSocketUnderwater()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.IsInhaleSocketUnderwater");
		
		AGasBags_Character_BP_C_IsInhaleSocketUnderwater_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.OnJumped
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGasBags_Character_BP_C::OnJumped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.OnJumped");
		
		AGasBags_Character_BP_C_OnJumped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.BPOverrideGetAttackAnimationIndex
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class UAnimMontage*>                        AnimationArray                                             (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	int32_t AGasBags_Character_BP_C::BPOverrideGetAttackAnimationIndex(int32_t AttackIndex, TArray<class UAnimMontage*>* AnimationArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.BPOverrideGetAttackAnimationIndex");
		
		AGasBags_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params params {};
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
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.GetDmgDirectionHelper
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      DmgCauser                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsPointDmg                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     DamageDir                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Dir                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGasBags_Character_BP_C::GetDmgDirectionHelper(class AActor* DmgCauser, bool IsPointDmg, const struct FVector& DamageDir, struct FVector* Dir)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.GetDmgDirectionHelper");
		
		AGasBags_Character_BP_C_GetDmgDirectionHelper_Params params {};
		params.DmgCauser = DmgCauser;
		params.IsPointDmg = IsPointDmg;
		params.DamageDir = DamageDir;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Dir != nullptr)
			*Dir = params.Dir;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.BPNotifySetRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderSetting                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGasBags_Character_BP_C::BPNotifySetRider(class AShooterCharacter* RiderSetting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.BPNotifySetRider");
		
		AGasBags_Character_BP_C_BPNotifySetRider_Params params {};
		params.RiderSetting = RiderSetting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.BPOverrideHurtAnim
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
	class UAnimMontage* AGasBags_Character_BP_C::BPOverrideHurtAnim(float DamageTaken, struct FDamageEvent* DamageEvent, class APawn* PawnInstigator, class AActor* DamageCauser, bool bIsLocalPath, bool bIsPointDamage, const struct FVector& PointDamageLocation, const struct FVector& PointDamageHitNormal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.BPOverrideHurtAnim");
		
		AGasBags_Character_BP_C_BPOverrideHurtAnim_Params params {};
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
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.AllowedToInflate
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AGasBags_Character_BP_C::AllowedToInflate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.AllowedToInflate");
		
		AGasBags_Character_BP_C_AllowedToInflate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.TrySubtractStamina
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               FailIfNotEnough                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              RemainingStamina                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGasBags_Character_BP_C::TrySubtractStamina(float amount, bool FailIfNotEnough, bool* Success, float* RemainingStamina)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.TrySubtractStamina");
		
		AGasBags_Character_BP_C_TrySubtractStamina_Params params {};
		params.amount = amount;
		params.FailIfNotEnough = FailIfNotEnough;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
		if (RemainingStamina != nullptr)
			*RemainingStamina = params.RemainingStamina;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.GetCurrentExhaleStaminaCost
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	float AGasBags_Character_BP_C::GetCurrentExhaleStaminaCost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.GetCurrentExhaleStaminaCost");
		
		AGasBags_Character_BP_C_GetCurrentExhaleStaminaCost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.RawDamageToInflationDamage
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              RawDamageAmount                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsFallDamage                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              HealthDamage                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              InflationDamage                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGasBags_Character_BP_C::RawDamageToInflationDamage(float RawDamageAmount, bool IsFallDamage, float* HealthDamage, float* InflationDamage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.RawDamageToInflationDamage");
		
		AGasBags_Character_BP_C_RawDamageToInflationDamage_Params params {};
		params.RawDamageAmount = RawDamageAmount;
		params.IsFallDamage = IsFallDamage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HealthDamage != nullptr)
			*HealthDamage = params.HealthDamage;
		if (InflationDamage != nullptr)
			*InflationDamage = params.InflationDamage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.GetFloatingVFX
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        SocketName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UParticleSystemComponent*                    Comp                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGasBags_Character_BP_C::GetFloatingVFX(const class FName& SocketName, class UParticleSystemComponent** Comp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.GetFloatingVFX");
		
		AGasBags_Character_BP_C_GetFloatingVFX_Params params {};
		params.SocketName = SocketName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Comp != nullptr)
			*Comp = params.Comp;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.NonDediTickFloatingVFX
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGasBags_Character_BP_C::NonDediTickFloatingVFX(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.NonDediTickFloatingVFX");
		
		AGasBags_Character_BP_C_NonDediTickFloatingVFX_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.OnRep_IsFloating
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGasBags_Character_BP_C::OnRep_IsFloating()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.OnRep_IsFloating");
		
		AGasBags_Character_BP_C_OnRep_IsFloating_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.ServerTickRandomImpulses
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsActive                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Impulse                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGasBags_Character_BP_C::ServerTickRandomImpulses(bool* IsActive, struct FVector* Impulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.ServerTickRandomImpulses");
		
		AGasBags_Character_BP_C_ServerTickRandomImpulses_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsActive != nullptr)
			*IsActive = params.IsActive;
		if (Impulse != nullptr)
			*Impulse = params.Impulse;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.BPGrabDebugSnapshot
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	TArray<struct FBlueprintVisualLogEntry> AGasBags_Character_BP_C::BPGrabDebugSnapshot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.BPGrabDebugSnapshot");
		
		AGasBags_Character_BP_C_BPGrabDebugSnapshot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.BPOnDinoCheat
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CheatName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bSetValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGasBags_Character_BP_C::BPOnDinoCheat(const class FName& CheatName, bool bSetValue, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.BPOnDinoCheat");
		
		AGasBags_Character_BP_C_BPOnDinoCheat_Params params {};
		params.CheatName = CheatName;
		params.bSetValue = bSetValue;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.BPCheckJumpInput
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bUseCustomErrorMessage                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      ErrorMessageToDisplay                                      (Parm, OutParm, ZeroConstructor)
	 */
	void AGasBags_Character_BP_C::BPCheckJumpInput(bool* bUseCustomErrorMessage, class FString* ErrorMessageToDisplay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.BPCheckJumpInput");
		
		AGasBags_Character_BP_C_BPCheckJumpInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bUseCustomErrorMessage != nullptr)
			*bUseCustomErrorMessage = params.bUseCustomErrorMessage;
		if (ErrorMessageToDisplay != nullptr)
			*ErrorMessageToDisplay = params.ErrorMessageToDisplay;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.CanJumpInternal
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AGasBags_Character_BP_C::CanJumpInternal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.CanJumpInternal");
		
		AGasBags_Character_BP_C_CanJumpInternal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.ClampFloatingVelocity
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     DesiredVelocity                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     ClampedVelocity                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGasBags_Character_BP_C::ClampFloatingVelocity(const struct FVector& DesiredVelocity, struct FVector* ClampedVelocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.ClampFloatingVelocity");
		
		AGasBags_Character_BP_C_ClampFloatingVelocity_Params params {};
		params.DesiredVelocity = DesiredVelocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClampedVelocity != nullptr)
			*ClampedVelocity = params.ClampedVelocity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.BPTimerServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGasBags_Character_BP_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.BPTimerServer");
		
		AGasBags_Character_BP_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.GetEnvironmentData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Temperature                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGasBags_Character_BP_C::GetEnvironmentData(float* Temperature)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.GetEnvironmentData");
		
		AGasBags_Character_BP_C_GetEnvironmentData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Temperature != nullptr)
			*Temperature = params.Temperature;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.BPPreventStasis
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AGasBags_Character_BP_C::BPPreventStasis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.BPPreventStasis");
		
		AGasBags_Character_BP_C_BPPreventStasis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.GetExhaleCooldown
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             Clock                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Duration                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGasBags_Character_BP_C::GetExhaleCooldown(double* Clock, float* Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.GetExhaleCooldown");
		
		AGasBags_Character_BP_C_GetExhaleCooldown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Clock != nullptr)
			*Clock = params.Clock;
		if (Duration != nullptr)
			*Duration = params.Duration;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.BPPreventFallDamage
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  HitResult                                                  (Parm, OutParm, ReferenceParm)
	 * 		float                                              FallDamageAmount                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AGasBags_Character_BP_C::BPPreventFallDamage(struct FHitResult* HitResult, float FallDamageAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.BPPreventFallDamage");
		
		AGasBags_Character_BP_C_BPPreventFallDamage_Params params {};
		params.FallDamageAmount = FallDamageAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HitResult != nullptr)
			*HitResult = params.HitResult;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.BlueprintCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AGasBags_Character_BP_C::BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.BlueprintCanAttack");
		
		AGasBags_Character_BP_C_BlueprintCanAttack_Params params {};
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
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.GetMaxInflation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               GetBaseValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              MaxInflationAmount                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGasBags_Character_BP_C::GetMaxInflation(bool GetBaseValue, float* MaxInflationAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.GetMaxInflation");
		
		AGasBags_Character_BP_C_GetMaxInflation_Params params {};
		params.GetBaseValue = GetBaseValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MaxInflationAmount != nullptr)
			*MaxInflationAmount = params.MaxInflationAmount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.BPGetOverrideCameraInterpSpeed
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DefaultTPVCameraSpeedInterpolationMultiplier               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DefaultTPVOffsetInterpSpeed                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              TPVCameraSpeedInterpolationMultiplier                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              TPVOffsetInterpSpeed                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGasBags_Character_BP_C::BPGetOverrideCameraInterpSpeed(float DefaultTPVCameraSpeedInterpolationMultiplier, float DefaultTPVOffsetInterpSpeed, float* TPVCameraSpeedInterpolationMultiplier, float* TPVOffsetInterpSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.BPGetOverrideCameraInterpSpeed");
		
		AGasBags_Character_BP_C_BPGetOverrideCameraInterpSpeed_Params params {};
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
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.GetFloatingForceDirection
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Direction                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGasBags_Character_BP_C::GetFloatingForceDirection(struct FVector* Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.GetFloatingForceDirection");
		
		AGasBags_Character_BP_C_GetFloatingForceDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Direction != nullptr)
			*Direction = params.Direction;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGasBags_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.ReceiveBeginPlay");
		
		AGasBags_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.BPOnMovementModeChangedNotify
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      PreviousCustomMode                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGasBags_Character_BP_C::BPOnMovementModeChangedNotify(EMovementMode PrevMovementMode, unsigned char PreviousCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.BPOnMovementModeChangedNotify");
		
		AGasBags_Character_BP_C_BPOnMovementModeChangedNotify_Params params {};
		params.PrevMovementMode = PrevMovementMode;
		params.PreviousCustomMode = PreviousCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.LaunchAbilityFinish
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGasBags_Character_BP_C::LaunchAbilityFinish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.LaunchAbilityFinish");
		
		AGasBags_Character_BP_C_LaunchAbilityFinish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.DoLaunchAbility
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGasBags_Character_BP_C::DoLaunchAbility(const struct FVector& Direction, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.DoLaunchAbility");
		
		AGasBags_Character_BP_C_DoLaunchAbility_Params params {};
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.BPGetGravityZScale
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float AGasBags_Character_BP_C::BPGetGravityZScale()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.BPGetGravityZScale");
		
		AGasBags_Character_BP_C_BPGetGravityZScale_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.ExhaleAttackFinish
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGasBags_Character_BP_C::ExhaleAttackFinish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.ExhaleAttackFinish");
		
		AGasBags_Character_BP_C_ExhaleAttackFinish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.Get Current Aim Direction
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              VerticalAngleOffset                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     AimDirection                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGasBags_Character_BP_C::GetCurrentAimDirection(float VerticalAngleOffset, struct FVector* AimDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.Get Current Aim Direction");
		
		AGasBags_Character_BP_C_GetCurrentAimDirection_Params params {};
		params.VerticalAngleOffset = VerticalAngleOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AimDirection != nullptr)
			*AimDirection = params.AimDirection;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.DoExhaleAttack
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGasBags_Character_BP_C::DoExhaleAttack(const struct FVector& Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.DoExhaleAttack");
		
		AGasBags_Character_BP_C_DoExhaleAttack_Params params {};
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.BPHandleControllerInitiatedAttack
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AGasBags_Character_BP_C::BPHandleControllerInitiatedAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.BPHandleControllerInitiatedAttack");
		
		AGasBags_Character_BP_C_BPHandleControllerInitiatedAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.BPHandleOnStopTargeting
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AGasBags_Character_BP_C::BPHandleOnStopTargeting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.BPHandleOnStopTargeting");
		
		AGasBags_Character_BP_C_BPHandleOnStopTargeting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.StopInflating
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGasBags_Character_BP_C::StopInflating()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.StopInflating");
		
		AGasBags_Character_BP_C_StopInflating_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.StartInflating
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGasBags_Character_BP_C::StartInflating()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.StartInflating");
		
		AGasBags_Character_BP_C_StartInflating_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.OnRep_IsInflating
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGasBags_Character_BP_C::OnRep_IsInflating()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.OnRep_IsInflating");
		
		AGasBags_Character_BP_C_OnRep_IsInflating_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.BlueprintCanRiderAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AGasBags_Character_BP_C::BlueprintCanRiderAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.BlueprintCanRiderAttack");
		
		AGasBags_Character_BP_C_BlueprintCanRiderAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.BPGetHUDElements
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FHUDElement>                         OutElements                                                (Parm, OutParm, ZeroConstructor)
	 */
	void AGasBags_Character_BP_C::BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.BPGetHUDElements");
		
		AGasBags_Character_BP_C_BPGetHUDElements_Params params {};
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
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.BPAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              IncomingDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (Parm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  PointHitInfo                                               (Parm)
	 */
	float AGasBags_Character_BP_C::BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.BPAdjustDamage");
		
		AGasBags_Character_BP_C_BPAdjustDamage_Params params {};
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
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.Get Inflation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               SmoothedValues                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Percent                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGasBags_Character_BP_C::GetInflation(bool SmoothedValues, float* Value, float* Percent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.Get Inflation");
		
		AGasBags_Character_BP_C_GetInflation_Params params {};
		params.SmoothedValues = SmoothedValues;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
		if (Percent != nullptr)
			*Percent = params.Percent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGasBags_Character_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.ReceiveTick");
		
		AGasBags_Character_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGasBags_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.UserConstructionScript");
		
		AGasBags_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.ServerRequestStopInflating
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void AGasBags_Character_BP_C::ServerRequestStopInflating()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.ServerRequestStopInflating");
		
		AGasBags_Character_BP_C_ServerRequestStopInflating_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.ServerRequestStartInflating
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void AGasBags_Character_BP_C::ServerRequestStartInflating()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.ServerRequestStartInflating");
		
		AGasBags_Character_BP_C_ServerRequestStartInflating_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.ServerUpdateFloatDirection
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGasBags_Character_BP_C::ServerUpdateFloatDirection(const struct FVector& Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.ServerUpdateFloatDirection");
		
		AGasBags_Character_BP_C_ServerUpdateFloatDirection_Params params {};
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.MultiUpdateFloatingDirection
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGasBags_Character_BP_C::MultiUpdateFloatingDirection(const struct FVector& Direction, float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.MultiUpdateFloatingDirection");
		
		AGasBags_Character_BP_C_MultiUpdateFloatingDirection_Params params {};
		params.Direction = Direction;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.MultiUpdateVelocity
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     vel                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGasBags_Character_BP_C::MultiUpdateVelocity(const struct FVector& vel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.MultiUpdateVelocity");
		
		AGasBags_Character_BP_C_MultiUpdateVelocity_Params params {};
		params.vel = vel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.ServerRequestAttachment
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void AGasBags_Character_BP_C::ServerRequestAttachment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.ServerRequestAttachment");
		
		AGasBags_Character_BP_C_ServerRequestAttachment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.MultiUpdateAttachState
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Attached                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGasBags_Character_BP_C::MultiUpdateAttachState(bool Attached, const struct FVector& Location, const struct FRotator& Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.MultiUpdateAttachState");
		
		AGasBags_Character_BP_C_MultiUpdateAttachState_Params params {};
		params.Attached = Attached;
		params.Location = Location;
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.ServerRequestDetach
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void AGasBags_Character_BP_C::ServerRequestDetach()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.ServerRequestDetach");
		
		AGasBags_Character_BP_C_ServerRequestDetach_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.ClientUpdateFloatingAirControlValue
	 * 		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              val                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGasBags_Character_BP_C::ClientUpdateFloatingAirControlValue(float val)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.ClientUpdateFloatingAirControlValue");
		
		AGasBags_Character_BP_C_ClientUpdateFloatingAirControlValue_Params params {};
		params.val = val;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.ClientUpdateInflationMultiplier
	 * 		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              val                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGasBags_Character_BP_C::ClientUpdateInflationMultiplier(float val)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.ClientUpdateInflationMultiplier");
		
		AGasBags_Character_BP_C_ClientUpdateInflationMultiplier_Params params {};
		params.val = val;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.MultiOnHardLanding
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              LandingForcePercent                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGasBags_Character_BP_C::MultiOnHardLanding(float LandingForcePercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.MultiOnHardLanding");
		
		AGasBags_Character_BP_C_MultiOnHardLanding_Params params {};
		params.LandingForcePercent = LandingForcePercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.ClientShowErrorMessage
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		unsigned char                                      MessageType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              DisplayTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsSingleton                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGasBags_Character_BP_C::ClientShowErrorMessage(unsigned char MessageType, float DisplayTime, bool IsSingleton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.ClientShowErrorMessage");
		
		AGasBags_Character_BP_C_ClientShowErrorMessage_Params params {};
		params.MessageType = MessageType;
		params.DisplayTime = DisplayTime;
		params.IsSingleton = IsSingleton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.MultiNotifyRandomImpulse
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     RandomImpulse                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGasBags_Character_BP_C::MultiNotifyRandomImpulse(const struct FVector& RandomImpulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.MultiNotifyRandomImpulse");
		
		AGasBags_Character_BP_C_MultiNotifyRandomImpulse_Params params {};
		params.RandomImpulse = RandomImpulse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.MultiOnLaunched
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AGasBags_Character_BP_C::MultiOnLaunched()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.MultiOnLaunched");
		
		AGasBags_Character_BP_C_MultiOnLaunched_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.MultiExhaleImpulse
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Velocity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGasBags_Character_BP_C::MultiExhaleImpulse(const struct FVector& Velocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.MultiExhaleImpulse");
		
		AGasBags_Character_BP_C_MultiExhaleImpulse_Params params {};
		params.Velocity = Velocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.MultiNotifyInflationDamage
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              InflationDamage                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsPointDamage                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     PointDamageNormal                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGasBags_Character_BP_C::MultiNotifyInflationDamage(float InflationDamage, class AActor* DamageCauser, bool IsPointDamage, const struct FVector& PointDamageNormal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.MultiNotifyInflationDamage");
		
		AGasBags_Character_BP_C_MultiNotifyInflationDamage_Params params {};
		params.InflationDamage = InflationDamage;
		params.DamageCauser = DamageCauser;
		params.IsPointDamage = IsPointDamage;
		params.PointDamageNormal = PointDamageNormal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x022073A0
	 * 		Name   -> Function GasBags_Character_BP.GasBags_Character_BP_C.ExecuteUbergraph_GasBags_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGasBags_Character_BP_C::ExecuteUbergraph_GasBags_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GasBags_Character_BP.GasBags_Character_BP_C.ExecuteUbergraph_GasBags_Character_BP");
		
		AGasBags_Character_BP_C_ExecuteUbergraph_GasBags_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGasBags_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGasBags_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GasBags_Character_BP.GasBags_Character_BP_C");
		return ptr;
	}

}


