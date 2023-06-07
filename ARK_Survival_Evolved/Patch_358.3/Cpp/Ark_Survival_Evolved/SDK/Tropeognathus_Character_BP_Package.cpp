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
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.GetHudData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HasSaddle                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UPrimalInventoryComponent*                   InventoryComponent                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      SaddleFuelItem                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      FlakCannonAmmoItem                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsUsingSuperFlight                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsUsingSuperFlightBoost                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              FuelPercent                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CannonCooldownPercent                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              SpeedPercent                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATropeognathus_Character_BP_C::GetHudData(bool* HasSaddle, class UPrimalInventoryComponent** InventoryComponent, class UClass** SaddleFuelItem, class UClass** FlakCannonAmmoItem, bool* IsUsingSuperFlight, bool* IsUsingSuperFlightBoost, float* FuelPercent, float* CannonCooldownPercent, float* SpeedPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.GetHudData");
		
		ATropeognathus_Character_BP_C_GetHudData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasSaddle != nullptr)
			*HasSaddle = params.HasSaddle;
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
		if (SpeedPercent != nullptr)
			*SpeedPercent = params.SpeedPercent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPGetHUDElements
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FHUDElement>                         OutElements                                                (Parm, OutParm, ZeroConstructor)
	 */
	void ATropeognathus_Character_BP_C::BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPGetHUDElements");
		
		ATropeognathus_Character_BP_C_BPGetHUDElements_Params params {};
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
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ReceiveBeginPlay");
		
		ATropeognathus_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsUsingWindGust
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             StartTime                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATropeognathus_Character_BP_C::IsUsingWindGust(bool* ret, double* StartTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsUsingWindGust");
		
		ATropeognathus_Character_BP_C_IsUsingWindGust_Params params {};
		
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
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsUsingForwardInput
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATropeognathus_Character_BP_C::IsUsingForwardInput(bool* ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsUsingForwardInput");
		
		ATropeognathus_Character_BP_C_IsUsingForwardInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPUnsetupDinoTameable
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::BPUnsetupDinoTameable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPUnsetupDinoTameable");
		
		ATropeognathus_Character_BP_C_BPUnsetupDinoTameable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BSetupDinoTameable
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::BSetupDinoTameable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BSetupDinoTameable");
		
		ATropeognathus_Character_BP_C_BSetupDinoTameable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateRiderSocket
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::UpdateRiderSocket()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateRiderSocket");
		
		ATropeognathus_Character_BP_C_UpdateRiderSocket_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.GetOverrideSocket
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        From                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class FName ATropeognathus_Character_BP_C::GetOverrideSocket(const class FName& From)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.GetOverrideSocket");
		
		ATropeognathus_Character_BP_C_GetOverrideSocket_Params params {};
		params.From = From;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.AllowWakingTame
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATropeognathus_Character_BP_C::AllowWakingTame(class APlayerController* ForPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.AllowWakingTame");
		
		ATropeognathus_Character_BP_C_AllowWakingTame_Params params {};
		params.ForPC = ForPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.OwningClientTryFlakCannonFire
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::OwningClientTryFlakCannonFire()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.OwningClientTryFlakCannonFire");
		
		ATropeognathus_Character_BP_C_OwningClientTryFlakCannonFire_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InterceptInputEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      InputName                                                  (Parm, ZeroConstructor)
	 */
	void ATropeognathus_Character_BP_C::InterceptInputEvent(const class FString& InputName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InterceptInputEvent");
		
		ATropeognathus_Character_BP_C_InterceptInputEvent_Params params {};
		params.InputName = InputName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.AllowPlayMontage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                AnimMontage                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATropeognathus_Character_BP_C::AllowPlayMontage(class UAnimMontage* AnimMontage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.AllowPlayMontage");
		
		ATropeognathus_Character_BP_C_AllowPlayMontage_Params params {};
		params.AnimMontage = AnimMontage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.GetDinoLevelUpAnimation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class UAnimMontage* ATropeognathus_Character_BP_C::GetDinoLevelUpAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.GetDinoLevelUpAnimation");
		
		ATropeognathus_Character_BP_C_GetDinoLevelUpAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateTaming
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::UpdateTaming()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateTaming");
		
		ATropeognathus_Character_BP_C_UpdateTaming_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPShowTamingPanel
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               currentVisibility                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATropeognathus_Character_BP_C::BPShowTamingPanel(bool currentVisibility)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPShowTamingPanel");
		
		ATropeognathus_Character_BP_C_BPShowTamingPanel_Params params {};
		params.currentVisibility = currentVisibility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.GetTamingBuff
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class APrimalBuff*                                 Buff                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATropeognathus_Character_BP_C::GetTamingBuff(bool* IsValid, class APrimalBuff** Buff)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.GetTamingBuff");
		
		ATropeognathus_Character_BP_C_GetTamingBuff_Params params {};
		
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
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPOverrideTamingDescriptionLabel
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FSlateColor                                 TextColor                                                  (Parm, OutParm, ReferenceParm)
	 */
	class FString ATropeognathus_Character_BP_C::BPOverrideTamingDescriptionLabel(struct FSlateColor* TextColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPOverrideTamingDescriptionLabel");
		
		ATropeognathus_Character_BP_C_BPOverrideTamingDescriptionLabel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TextColor != nullptr)
			*TextColor = params.TextColor;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BlueprintCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATropeognathus_Character_BP_C::BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BlueprintCanAttack");
		
		ATropeognathus_Character_BP_C_BlueprintCanAttack_Params params {};
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
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              IncomingDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (Parm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  PointHitInfo                                               (Parm)
	 */
	float ATropeognathus_Character_BP_C::BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPAdjustDamage");
		
		ATropeognathus_Character_BP_C_BPAdjustDamage_Params params {};
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
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Get Replicated Control Rotation Public
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	struct FRotator ATropeognathus_Character_BP_C::GetReplicatedControlRotationPublic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Get Replicated Control Rotation Public");
		
		ATropeognathus_Character_BP_C_GetReplicatedControlRotationPublic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsPlayingBlockingAnim
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               ReturnVal                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATropeognathus_Character_BP_C::IsPlayingBlockingAnim(bool* ReturnVal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsPlayingBlockingAnim");
		
		ATropeognathus_Character_BP_C_IsPlayingBlockingAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnVal != nullptr)
			*ReturnVal = params.ReturnVal;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Is Using Drafting Public
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               DraftAcked                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATropeognathus_Character_BP_C::IsUsingDraftingPublic(bool* DraftAcked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Is Using Drafting Public");
		
		ATropeognathus_Character_BP_C_IsUsingDraftingPublic_Params params {};
		
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
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsUsingDrafting
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               DraftAcked                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATropeognathus_Character_BP_C::IsUsingDrafting(bool* DraftAcked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsUsingDrafting");
		
		ATropeognathus_Character_BP_C_IsUsingDrafting_Params params {};
		
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
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPGetRiderSocket
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class FName ATropeognathus_Character_BP_C::BPGetRiderSocket()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPGetRiderSocket");
		
		ATropeognathus_Character_BP_C_BPGetRiderSocket_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsJumpHeld
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool ATropeognathus_Character_BP_C::IsJumpHeld()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsJumpHeld");
		
		ATropeognathus_Character_BP_C_IsJumpHeld_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPOnDinoCheat
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CheatName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bSetValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATropeognathus_Character_BP_C::BPOnDinoCheat(const class FName& CheatName, bool bSetValue, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPOnDinoCheat");
		
		ATropeognathus_Character_BP_C_BPOnDinoCheat_Params params {};
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
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.GetReplicatedControlRotation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FRotator ATropeognathus_Character_BP_C::GetReplicatedControlRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.GetReplicatedControlRotation");
		
		ATropeognathus_Character_BP_C_GetReplicatedControlRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATropeognathus_Character_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ReceiveTick");
		
		ATropeognathus_Character_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPDoAttack
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATropeognathus_Character_BP_C::BPDoAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPDoAttack");
		
		ATropeognathus_Character_BP_C_BPDoAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPGetCrosshairAlpha
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ATropeognathus_Character_BP_C::BPGetCrosshairAlpha()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPGetCrosshairAlpha");
		
		ATropeognathus_Character_BP_C_BPGetCrosshairAlpha_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsFlakCannonOnCooldown
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool ATropeognathus_Character_BP_C::IsFlakCannonOnCooldown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsFlakCannonOnCooldown");
		
		ATropeognathus_Character_BP_C_IsFlakCannonOnCooldown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPGetCrosshairLocation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              CanvasClipX                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CanvasClipY                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OutX                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OutY                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATropeognathus_Character_BP_C::BPGetCrosshairLocation(float CanvasClipX, float CanvasClipY, float* OutX, float* OutY)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPGetCrosshairLocation");
		
		ATropeognathus_Character_BP_C_BPGetCrosshairLocation_Params params {};
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
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ConsumeItem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATropeognathus_Character_BP_C::ConsumeItem(class UClass* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ConsumeItem");
		
		ATropeognathus_Character_BP_C_ConsumeItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.HasAmmo
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Quantity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATropeognathus_Character_BP_C::HasAmmo(int32_t* Quantity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.HasAmmo");
		
		ATropeognathus_Character_BP_C_HasAmmo_Params params {};
		
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
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPOnStopJump
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ATropeognathus_Character_BP_C::BPOnStopJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPOnStopJump");
		
		ATropeognathus_Character_BP_C_BPOnStopJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Fire Flak Cannon
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Dir                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Loc                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATropeognathus_Character_BP_C::FireFlakCannon(const struct FVector& Dir, const struct FVector& Loc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Fire Flak Cannon");
		
		ATropeognathus_Character_BP_C_FireFlakCannon_Params params {};
		params.Dir = Dir;
		params.Loc = Loc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Has Saddle Public
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               RetIsSuperSaddle                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATropeognathus_Character_BP_C::HasSaddlePublic(bool* ret, bool* RetIsSuperSaddle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Has Saddle Public");
		
		ATropeognathus_Character_BP_C_HasSaddlePublic_Params params {};
		
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
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.OnInventoryItemGrind
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::OnInventoryItemGrind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.OnInventoryItemGrind");
		
		ATropeognathus_Character_BP_C_OnInventoryItemGrind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateWindGustCooldownVFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::UpdateWindGustCooldownVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateWindGustCooldownVFX");
		
		ATropeognathus_Character_BP_C_UpdateWindGustCooldownVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPOverrideGetAttackAnimationIndex
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class UAnimMontage*>                        AnimationArray                                             (Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	int32_t ATropeognathus_Character_BP_C::BPOverrideGetAttackAnimationIndex(int32_t AttackIndex, TArray<class UAnimMontage*>* AnimationArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPOverrideGetAttackAnimationIndex");
		
		ATropeognathus_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params params {};
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
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.TryInterruptLanding
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      Selection                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATropeognathus_Character_BP_C::TryInterruptLanding(EMovementMode Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.TryInterruptLanding");
		
		ATropeognathus_Character_BP_C_TryInterruptLanding_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.OnRep_SuperFlight
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::OnRep_SuperFlight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.OnRep_SuperFlight");
		
		ATropeognathus_Character_BP_C_OnRep_SuperFlight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.SetSuperFlight
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               TriggerVFX                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATropeognathus_Character_BP_C::SetSuperFlight(bool Value, bool TriggerVFX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.SetSuperFlight");
		
		ATropeognathus_Character_BP_C_SetSuperFlight_Params params {};
		params.Value = Value;
		params.TriggerVFX = TriggerVFX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Get Current Percent Of Max Fly Speed Public
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	float ATropeognathus_Character_BP_C::GetCurrentPercentOfMaxFlySpeedPublic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Get Current Percent Of Max Fly Speed Public");
		
		ATropeognathus_Character_BP_C_GetCurrentPercentOfMaxFlySpeedPublic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Is Using Super Flight Public
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             StartedEndingTime                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATropeognathus_Character_BP_C::IsUsingSuperFlightPublic(bool* ret, double* StartedEndingTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Is Using Super Flight Public");
		
		ATropeognathus_Character_BP_C_IsUsingSuperFlightPublic_Params params {};
		
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
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsUsingSuperFlight
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             StartedEndingTime                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATropeognathus_Character_BP_C::IsUsingSuperFlight(bool* ret, double* StartedEndingTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsUsingSuperFlight");
		
		ATropeognathus_Character_BP_C_IsUsingSuperFlight_Params params {};
		
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
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateSuperFlightBoost
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::UpdateSuperFlightBoost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateSuperFlightBoost");
		
		ATropeognathus_Character_BP_C_UpdateSuperFlightBoost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Is Using Super Flight Boost Public
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ATropeognathus_Character_BP_C::IsUsingSuperFlightBoostPublic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Is Using Super Flight Boost Public");
		
		ATropeognathus_Character_BP_C_IsUsingSuperFlightBoostPublic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsUsingSuperFlightBoost
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             StartTime                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATropeognathus_Character_BP_C::IsUsingSuperFlightBoost(double* StartTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsUsingSuperFlightBoost");
		
		ATropeognathus_Character_BP_C_IsUsingSuperFlightBoost_Params params {};
		
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
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPGetDragSocketName
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            DraggingChar                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class FName ATropeognathus_Character_BP_C::BPGetDragSocketName(class APrimalCharacter* DraggingChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPGetDragSocketName");
		
		ATropeognathus_Character_BP_C_BPGetDragSocketName_Params params {};
		params.DraggingChar = DraggingChar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.OnCarriedStruggle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::OnCarriedStruggle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.OnCarriedStruggle");
		
		ATropeognathus_Character_BP_C_OnCarriedStruggle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsUsingWingGust
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool ATropeognathus_Character_BP_C::IsUsingWingGust()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsUsingWingGust");
		
		ATropeognathus_Character_BP_C_IsUsingWingGust_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Update Jet FX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::UpdateJetFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Update Jet FX");
		
		ATropeognathus_Character_BP_C_UpdateJetFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.HasFuel
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Quantity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATropeognathus_Character_BP_C::HasFuel(int32_t* Quantity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.HasFuel");
		
		ATropeognathus_Character_BP_C_HasFuel_Params params {};
		
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
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateFuel
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::UpdateFuel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateFuel");
		
		ATropeognathus_Character_BP_C_UpdateFuel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPDidSetCarriedCharacter
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            PreviousCarriedCharacter                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATropeognathus_Character_BP_C::BPDidSetCarriedCharacter(class APrimalCharacter* PreviousCarriedCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPDidSetCarriedCharacter");
		
		ATropeognathus_Character_BP_C_BPDidSetCarriedCharacter_Params params {};
		params.PreviousCarriedCharacter = PreviousCarriedCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.HasSaddle
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               RetIsSuperSaddle                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATropeognathus_Character_BP_C::HasSaddle(bool* ret, bool* RetIsSuperSaddle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.HasSaddle");
		
		ATropeognathus_Character_BP_C_HasSaddle_Params params {};
		
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
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateDrafting
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::UpdateDrafting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateDrafting");
		
		ATropeognathus_Character_BP_C_UpdateDrafting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPGetDragSocketDinoName
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalDinoCharacter*                        aGrabbedDino                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class FName ATropeognathus_Character_BP_C::BPGetDragSocketDinoName(class APrimalDinoCharacter* aGrabbedDino)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPGetDragSocketDinoName");
		
		ATropeognathus_Character_BP_C_BPGetDragSocketDinoName_Params params {};
		params.aGrabbedDino = aGrabbedDino;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateSuperFlightStateData
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::UpdateSuperFlightStateData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateSuperFlightStateData");
		
		ATropeognathus_Character_BP_C_UpdateSuperFlightStateData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateAcceleration
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::UpdateAcceleration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateAcceleration");
		
		ATropeognathus_Character_BP_C_UpdateAcceleration_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateRotationRate
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::UpdateRotationRate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateRotationRate");
		
		ATropeognathus_Character_BP_C_UpdateRotationRate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateAllyAOE
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::UpdateAllyAOE()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateAllyAOE");
		
		ATropeognathus_Character_BP_C_UpdateAllyAOE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.GetWindGustEpicenter
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FVector ATropeognathus_Character_BP_C::GetWindGustEpicenter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.GetWindGustEpicenter");
		
		ATropeognathus_Character_BP_C_GetWindGustEpicenter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.DoWing GustAOE
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::DoWingGustAOE()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.DoWing GustAOE");
		
		ATropeognathus_Character_BP_C_DoWingGustAOE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Is Diving Public
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             TimeDiveStart                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATropeognathus_Character_BP_C::IsDivingPublic(bool* ret, double* TimeDiveStart)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Is Diving Public");
		
		ATropeognathus_Character_BP_C_IsDivingPublic_Params params {};
		
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
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPNotifySetRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderSetting                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATropeognathus_Character_BP_C::BPNotifySetRider(class AShooterCharacter* RiderSetting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPNotifySetRider");
		
		ATropeognathus_Character_BP_C_BPNotifySetRider_Params params {};
		params.RiderSetting = RiderSetting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateTPVOffset
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::UpdateTPVOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateTPVOffset");
		
		ATropeognathus_Character_BP_C_UpdateTPVOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateCheckQuickTurn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::UpdateCheckQuickTurn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateCheckQuickTurn");
		
		ATropeognathus_Character_BP_C_UpdateCheckQuickTurn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateSpeed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::UpdateSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateSpeed");
		
		ATropeognathus_Character_BP_C_UpdateSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateDiving
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::UpdateDiving()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateDiving");
		
		ATropeognathus_Character_BP_C_UpdateDiving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsDiving
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             TimeDiveStart                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		double                                             TimeStoppedDiving                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATropeognathus_Character_BP_C::IsDiving(bool* ret, double* TimeDiveStart, double* TimeStoppedDiving)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.IsDiving");
		
		ATropeognathus_Character_BP_C_IsDiving_Params params {};
		
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
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.GetAnimBP
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UTropeognathus_AnimBP_C*                     ret                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATropeognathus_Character_BP_C::GetAnimBP(class UTropeognathus_AnimBP_C** ret)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.GetAnimBP");
		
		ATropeognathus_Character_BP_C_GetAnimBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ret != nullptr)
			*ret = params.ret;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.GetCurrentPercentOfMaxFlySpeed
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	float ATropeognathus_Character_BP_C::GetCurrentPercentOfMaxFlySpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.GetCurrentPercentOfMaxFlySpeed");
		
		ATropeognathus_Character_BP_C_GetCurrentPercentOfMaxFlySpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.GetCDO
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class ATropeognathus_Character_BP_C*               AsTropeognathus_Character_BP_C                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATropeognathus_Character_BP_C::GetCDO(class ATropeognathus_Character_BP_C** AsTropeognathus_Character_BP_C)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.GetCDO");
		
		ATropeognathus_Character_BP_C_GetCDO_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsTropeognathus_Character_BP_C != nullptr)
			*AsTropeognathus_Character_BP_C = params.AsTropeognathus_Character_BP_C;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Is Quick Turning
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	bool ATropeognathus_Character_BP_C::IsQuickTurning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Is Quick Turning");
		
		ATropeognathus_Character_BP_C_IsQuickTurning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.EndQuickTurn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::EndQuickTurn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.EndQuickTurn");
		
		ATropeognathus_Character_BP_C_EndQuickTurn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.StartSuperFlightQuickTurn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::StartSuperFlightQuickTurn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.StartSuperFlightQuickTurn");
		
		ATropeognathus_Character_BP_C_StartSuperFlightQuickTurn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.OnRep_LastSuperFlightQuickTurn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::OnRep_LastSuperFlightQuickTurn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.OnRep_LastSuperFlightQuickTurn");
		
		ATropeognathus_Character_BP_C_OnRep_LastSuperFlightQuickTurn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateSuperFlightRoll
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::UpdateSuperFlightRoll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateSuperFlightRoll");
		
		ATropeognathus_Character_BP_C_UpdateSuperFlightRoll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BP_InterceptMoveRight
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATropeognathus_Character_BP_C::BP_InterceptMoveRight(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BP_InterceptMoveRight");
		
		ATropeognathus_Character_BP_C_BP_InterceptMoveRight_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateTrails
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::UpdateTrails()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateTrails");
		
		ATropeognathus_Character_BP_C_UpdateTrails_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ActivateTrails
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::ActivateTrails()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ActivateTrails");
		
		ATropeognathus_Character_BP_C_ActivateTrails_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.DeactivateTrails
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::DeactivateTrails()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.DeactivateTrails");
		
		ATropeognathus_Character_BP_C_DeactivateTrails_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.RidingTick
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATropeognathus_Character_BP_C::RidingTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.RidingTick");
		
		ATropeognathus_Character_BP_C_RidingTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BP_OnStartLandingNotify
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::BP_OnStartLandingNotify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BP_OnStartLandingNotify");
		
		ATropeognathus_Character_BP_C_BP_OnStartLandingNotify_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPOverrideFlyingVelocity
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     InitialVelocity                                            (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Gravity                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	struct FVector ATropeognathus_Character_BP_C::BPOverrideFlyingVelocity(struct FVector* InitialVelocity, struct FVector* Gravity, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPOverrideFlyingVelocity");
		
		ATropeognathus_Character_BP_C_BPOverrideFlyingVelocity_Params params {};
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
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.K2_OnMovementModeChanged
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EMovementMode                                      NewMovementMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      PrevCustomMode                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		unsigned char                                      NewCustomMode                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATropeognathus_Character_BP_C::K2_OnMovementModeChanged(EMovementMode PrevMovementMode, EMovementMode NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.K2_OnMovementModeChanged");
		
		ATropeognathus_Character_BP_C_K2_OnMovementModeChanged_Params params {};
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
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BP_InterceptMoveForward
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATropeognathus_Character_BP_C::BP_InterceptMoveForward(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BP_InterceptMoveForward");
		
		ATropeognathus_Character_BP_C_BP_InterceptMoveForward_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPOverrideCameraViewTarget
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
	void ATropeognathus_Character_BP_C::BPOverrideCameraViewTarget(const class FName& CurrentCameraMode, const struct FVector& DesiredCameraLocation, const struct FRotator& DesiredCameraRotation, float DesiredFOV, bool* bOverrideCameraLocation, struct FVector* CameraLocation, bool* bOverrideCameraRotation, struct FRotator* CameraRotation, bool* bOverrideCameraFOV, float* CameraFOV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPOverrideCameraViewTarget");
		
		ATropeognathus_Character_BP_C_BPOverrideCameraViewTarget_Params params {};
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
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BP_OnSetRunning
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewIsRunning                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATropeognathus_Character_BP_C::BP_OnSetRunning(bool bNewIsRunning)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BP_OnSetRunning");
		
		ATropeognathus_Character_BP_C_BP_OnSetRunning_Params params {};
		params.bNewIsRunning = bNewIsRunning;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPNotifyClearRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderClearing                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATropeognathus_Character_BP_C::BPNotifyClearRider(class AShooterCharacter* RiderClearing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPNotifyClearRider");
		
		ATropeognathus_Character_BP_C_BPNotifyClearRider_Params params {};
		params.RiderClearing = RiderClearing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPHandleOnStopTargeting
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ATropeognathus_Character_BP_C::BPHandleOnStopTargeting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPHandleOnStopTargeting");
		
		ATropeognathus_Character_BP_C_BPHandleOnStopTargeting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPHandleControllerInitiatedAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATropeognathus_Character_BP_C::BPHandleControllerInitiatedAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPHandleControllerInitiatedAttack");
		
		ATropeognathus_Character_BP_C_BPHandleControllerInitiatedAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPModifyDesiredRotation
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    InDesiredRotation                                          (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    OutDesiredRotation                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATropeognathus_Character_BP_C::BPModifyDesiredRotation(float DeltaTime, struct FRotator* InDesiredRotation, struct FRotator* OutDesiredRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPModifyDesiredRotation");
		
		ATropeognathus_Character_BP_C_BPModifyDesiredRotation_Params params {};
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
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPSetupTamed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bWasJustTamed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATropeognathus_Character_BP_C::BPSetupTamed(bool bWasJustTamed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPSetupTamed");
		
		ATropeognathus_Character_BP_C_BPSetupTamed_Params params {};
		params.bWasJustTamed = bWasJustTamed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPOnStartJump
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ATropeognathus_Character_BP_C::BPOnStartJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPOnStartJump");
		
		ATropeognathus_Character_BP_C_BPOnStartJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPHandleUseButtonPress
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterPlayerController*                    RiderController                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool ATropeognathus_Character_BP_C::BPHandleUseButtonPress(class AShooterPlayerController* RiderController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BPHandleUseButtonPress");
		
		ATropeognathus_Character_BP_C_BPHandleUseButtonPress_Params params {};
		params.RiderController = RiderController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.DisableCameraInterpolation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::DisableCameraInterpolation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.DisableCameraInterpolation");
		
		ATropeognathus_Character_BP_C_DisableCameraInterpolation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.OnRep_LatchingSurfaceNormal
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::OnRep_LatchingSurfaceNormal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.OnRep_LatchingSurfaceNormal");
		
		ATropeognathus_Character_BP_C_OnRep_LatchingSurfaceNormal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateLatchedDinoCamera
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::UpdateLatchedDinoCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateLatchedDinoCamera");
		
		ATropeognathus_Character_BP_C_UpdateLatchedDinoCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Controller Follow ActorRotation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATropeognathus_Character_BP_C::ControllerFollowActorRotation(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Controller Follow ActorRotation");
		
		ATropeognathus_Character_BP_C_ControllerFollowActorRotation_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ReferenceLatchingObjects
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::ReferenceLatchingObjects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ReferenceLatchingObjects");
		
		ATropeognathus_Character_BP_C_ReferenceLatchingObjects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.LineTrace
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
	void ATropeognathus_Character_BP_C::LineTrace(class UMeshComponent* Mesh, const class FName& SocketName, class AActor* Actor, const struct FVector& Offset, bool BackwardLatching, bool* HitSomthing, struct FVector* Location, struct FVector* Normal, class AActor** HitActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.LineTrace");
		
		ATropeognathus_Character_BP_C_LineTrace_Params params {};
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
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InterruptLatching
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::InterruptLatching()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InterruptLatching");
		
		ATropeognathus_Character_BP_C_InterruptLatching_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ProcessLatching
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATropeognathus_Character_BP_C::ProcessLatching(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ProcessLatching");
		
		ATropeognathus_Character_BP_C_ProcessLatching_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.TryLatch
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Offset                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               backwardsLatching                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATropeognathus_Character_BP_C::TryLatch(const struct FVector& Offset, bool backwardsLatching)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.TryLatch");
		
		ATropeognathus_Character_BP_C_TryLatch_Params params {};
		params.Offset = Offset;
		params.backwardsLatching = backwardsLatching;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UserConstructionScript");
		
		ATropeognathus_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_AltFire_K2Node_InputActionEvent_223
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::InpActEvt_AltFire_K2Node_InputActionEvent_223()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_AltFire_K2Node_InputActionEvent_223");
		
		ATropeognathus_Character_BP_C_InpActEvt_AltFire_K2Node_InputActionEvent_223_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_BrakeDino_K2Node_InputActionEvent_222
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::InpActEvt_BrakeDino_K2Node_InputActionEvent_222()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_BrakeDino_K2Node_InputActionEvent_222");
		
		ATropeognathus_Character_BP_C_InpActEvt_BrakeDino_K2Node_InputActionEvent_222_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_BrakeDino_K2Node_InputActionEvent_221
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::InpActEvt_BrakeDino_K2Node_InputActionEvent_221()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_BrakeDino_K2Node_InputActionEvent_221");
		
		ATropeognathus_Character_BP_C_InpActEvt_BrakeDino_K2Node_InputActionEvent_221_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_220
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::InpActEvt_Crouch_K2Node_InputActionEvent_220()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_220");
		
		ATropeognathus_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_220_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_219
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::InpActEvt_Prone_K2Node_InputActionEvent_219()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_Prone_K2Node_InputActionEvent_219");
		
		ATropeognathus_Character_BP_C_InpActEvt_Prone_K2Node_InputActionEvent_219_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_Gamepad_LeftStick_Down_K2Node_InputKeyEvent_64
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::InpActEvt_Gamepad_LeftStick_Down_K2Node_InputKeyEvent_64()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_Gamepad_LeftStick_Down_K2Node_InputKeyEvent_64");
		
		ATropeognathus_Character_BP_C_InpActEvt_Gamepad_LeftStick_Down_K2Node_InputKeyEvent_64_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_218
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_218()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_218");
		
		ATropeognathus_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_218_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_217
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_217()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_217");
		
		ATropeognathus_Character_BP_C_InpActEvt_GamepadRightThumbstick_K2Node_InputActionEvent_217_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_63
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_63()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_63");
		
		ATropeognathus_Character_BP_C_InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_63_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_62
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_62()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_62");
		
		ATropeognathus_Character_BP_C_InpActEvt_Gamepad_LeftTrigger_K2Node_InputKeyEvent_62_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Latch
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               backwardsLatching                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATropeognathus_Character_BP_C::Latch(bool backwardsLatching)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.Latch");
		
		ATropeognathus_Character_BP_C_Latch_Params params {};
		params.backwardsLatching = backwardsLatching;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.LatchStartAnimation
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::LatchStartAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.LatchStartAnimation");
		
		ATropeognathus_Character_BP_C_LatchStartAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UnLatch
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               LatchingInterrupted                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATropeognathus_Character_BP_C::UnLatch(bool LatchingInterrupted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UnLatch");
		
		ATropeognathus_Character_BP_C_UnLatch_Params params {};
		params.LatchingInterrupted = LatchingInterrupted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UnLatchStartAnimation
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::UnLatchStartAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UnLatchStartAnimation");
		
		ATropeognathus_Character_BP_C_UnLatchStartAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimNotify*                                 AnimNotifyObject                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATropeognathus_Character_BP_C::BlueprintAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.BlueprintAnimNotifyCustomEvent");
		
		ATropeognathus_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params {};
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
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.MoveToUsingDirection
	 * 		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATropeognathus_Character_BP_C::MoveToUsingDirection(float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.MoveToUsingDirection");
		
		ATropeognathus_Character_BP_C_MoveToUsingDirection_Params params {};
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UnLatchMoveAndRotate
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::UnLatchMoveAndRotate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UnLatchMoveAndRotate");
		
		ATropeognathus_Character_BP_C_UnLatchMoveAndRotate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.LatchingStartEvent
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::LatchingStartEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.LatchingStartEvent");
		
		ATropeognathus_Character_BP_C_LatchingStartEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.LatchingEndEvent
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::LatchingEndEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.LatchingEndEvent");
		
		ATropeognathus_Character_BP_C_LatchingEndEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.StopMovement
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATropeognathus_Character_BP_C::StopMovement(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.StopMovement");
		
		ATropeognathus_Character_BP_C_StopMovement_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.DisableFaceLatchingObjectRotation
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::DisableFaceLatchingObjectRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.DisableFaceLatchingObjectRotation");
		
		ATropeognathus_Character_BP_C_DisableFaceLatchingObjectRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.SetPassengersSurfaceCamera
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Yaw                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Pitch                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Roll                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATropeognathus_Character_BP_C::SetPassengersSurfaceCamera(float Yaw, float Pitch, float Roll)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.SetPassengersSurfaceCamera");
		
		ATropeognathus_Character_BP_C_SetPassengersSurfaceCamera_Params params {};
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
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.LocalFaceLatchingObject
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATropeognathus_Character_BP_C::LocalFaceLatchingObject(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.LocalFaceLatchingObject");
		
		ATropeognathus_Character_BP_C_LocalFaceLatchingObject_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.StartedJump
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::StartedJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.StartedJump");
		
		ATropeognathus_Character_BP_C_StartedJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerToggleSuperFlight
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::ServerToggleSuperFlight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerToggleSuperFlight");
		
		ATropeognathus_Character_BP_C_ServerToggleSuperFlight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerSuperFightRightInput
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATropeognathus_Character_BP_C::ServerSuperFightRightInput(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerSuperFightRightInput");
		
		ATropeognathus_Character_BP_C_ServerSuperFightRightInput_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerRequestSuperFlightQuickTurn
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::ServerRequestSuperFlightQuickTurn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerRequestSuperFlightQuickTurn");
		
		ATropeognathus_Character_BP_C_ServerRequestSuperFlightQuickTurn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateQuickTurn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::UpdateQuickTurn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.UpdateQuickTurn");
		
		ATropeognathus_Character_BP_C_UpdateQuickTurn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerRequestWindGust
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::ServerRequestWindGust()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerRequestWindGust");
		
		ATropeognathus_Character_BP_C_ServerRequestWindGust_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.AnimNotify_WindGust
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::AnimNotify_WindGust()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.AnimNotify_WindGust");
		
		ATropeognathus_Character_BP_C_AnimNotify_WindGust_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ClientWindGust
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Epicenter                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATropeognathus_Character_BP_C::ClientWindGust(const struct FVector& Epicenter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ClientWindGust");
		
		ATropeognathus_Character_BP_C_ClientWindGust_Params params {};
		params.Epicenter = Epicenter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.AnimNotify_WindGustVFX
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::AnimNotify_WindGustVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.AnimNotify_WindGustVFX");
		
		ATropeognathus_Character_BP_C_AnimNotify_WindGustVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerRequestFireFlakCannon
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Dir                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Loc                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATropeognathus_Character_BP_C::ServerRequestFireFlakCannon(const struct FVector& Dir, const struct FVector& Loc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerRequestFireFlakCannon");
		
		ATropeognathus_Character_BP_C_ServerRequestFireFlakCannon_Params params {};
		params.Dir = Dir;
		params.Loc = Loc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              AxisValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATropeognathus_Character_BP_C::InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181");
		
		ATropeognathus_Character_BP_C_InpAxisEvt_MoveUp_K2Node_InputAxisEvent_181_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerUpdateLastForwardInputTime
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::ServerUpdateLastForwardInputTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerUpdateLastForwardInputTime");
		
		ATropeognathus_Character_BP_C_ServerUpdateLastForwardInputTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.DelayedSuperFlightEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::DelayedSuperFlightEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.DelayedSuperFlightEnd");
		
		ATropeognathus_Character_BP_C_DelayedSuperFlightEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.MultiSuperFlightEnd
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::MultiSuperFlightEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.MultiSuperFlightEnd");
		
		ATropeognathus_Character_BP_C_MultiSuperFlightEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ClientTagDraftee
	 * 		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APrimalCharacter*                            Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATropeognathus_Character_BP_C::ClientTagDraftee(class APrimalCharacter* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ClientTagDraftee");
		
		ATropeognathus_Character_BP_C_ClientTagDraftee_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.WindGust180End
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::WindGust180End()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.WindGust180End");
		
		ATropeognathus_Character_BP_C_WindGust180End_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.WindGust180Tick
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::WindGust180Tick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.WindGust180Tick");
		
		ATropeognathus_Character_BP_C_WindGust180Tick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.AnimNotify_WindGustCheckFor180
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::AnimNotify_WindGustCheckFor180()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.AnimNotify_WindGustCheckFor180");
		
		ATropeognathus_Character_BP_C_AnimNotify_WindGustCheckFor180_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.AnimNotify_WindGustBoost
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::AnimNotify_WindGustBoost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.AnimNotify_WindGustBoost");
		
		ATropeognathus_Character_BP_C_AnimNotify_WindGustBoost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerRequest180
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::ServerRequest180()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerRequest180");
		
		ATropeognathus_Character_BP_C_ServerRequest180_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.GamepadRightStickPressed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::GamepadRightStickPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.GamepadRightStickPressed");
		
		ATropeognathus_Character_BP_C_GamepadRightStickPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerSetLastTimePressedJump
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::ServerSetLastTimePressedJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerSetLastTimePressedJump");
		
		ATropeognathus_Character_BP_C_ServerSetLastTimePressedJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerSetLastTimeReleasedJump
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::ServerSetLastTimeReleasedJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerSetLastTimeReleasedJump");
		
		ATropeognathus_Character_BP_C_ServerSetLastTimeReleasedJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.QueueLanding
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::QueueLanding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.QueueLanding");
		
		ATropeognathus_Character_BP_C_QueueLanding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerRequestLanding
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::ServerRequestLanding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerRequestLanding");
		
		ATropeognathus_Character_BP_C_ServerRequestLanding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.OnBola
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::OnBola()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.OnBola");
		
		ATropeognathus_Character_BP_C_OnBola_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerUpdateRunningStartTime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::ServerUpdateRunningStartTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerUpdateRunningStartTime");
		
		ATropeognathus_Character_BP_C_ServerUpdateRunningStartTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerUpdateRunningStopTime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::ServerUpdateRunningStopTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ServerUpdateRunningStopTime");
		
		ATropeognathus_Character_BP_C_ServerUpdateRunningStopTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.MultiOnRunStarted
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::MultiOnRunStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.MultiOnRunStarted");
		
		ATropeognathus_Character_BP_C_MultiOnRunStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.MultiOnRunStopped
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::MultiOnRunStopped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.MultiOnRunStopped");
		
		ATropeognathus_Character_BP_C_MultiOnRunStopped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.MultiOnSuperFlightStart
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::MultiOnSuperFlightStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.MultiOnSuperFlightStart");
		
		ATropeognathus_Character_BP_C_MultiOnSuperFlightStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.QueueGrabAttack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::QueueGrabAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.QueueGrabAttack");
		
		ATropeognathus_Character_BP_C_QueueGrabAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.MultiThrusterVFXBoost
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ATropeognathus_Character_BP_C::MultiThrusterVFXBoost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.MultiThrusterVFXBoost");
		
		ATropeognathus_Character_BP_C_MultiThrusterVFXBoost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ExecuteUbergraph_Tropeognathus_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATropeognathus_Character_BP_C::ExecuteUbergraph_Tropeognathus_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Tropeognathus_Character_BP.Tropeognathus_Character_BP_C.ExecuteUbergraph_Tropeognathus_Character_BP");
		
		ATropeognathus_Character_BP_C_ExecuteUbergraph_Tropeognathus_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATropeognathus_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATropeognathus_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Tropeognathus_Character_BP.Tropeognathus_Character_BP_C");
		return ptr;
	}

}


