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
	 * 		Name   -> Function Fenrir_Character_BP.Fenrir_Character_BP_C.AllowPlayMontage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UAnimMontage*                                AnimMontage                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AFenrir_Character_BP_C::AllowPlayMontage(class UAnimMontage* AnimMontage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.AllowPlayMontage");
		
		AFenrir_Character_BP_C_AllowPlayMontage_Params params {};
		params.AnimMontage = AnimMontage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPTimerServer
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFenrir_Character_BP_C::BPTimerServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPTimerServer");
		
		AFenrir_Character_BP_C_BPTimerServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fenrir_Character_BP.Fenrir_Character_BP_C.BoostNearbyDirewolves
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFenrir_Character_BP_C::BoostNearbyDirewolves()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.BoostNearbyDirewolves");
		
		AFenrir_Character_BP_C_BoostNearbyDirewolves_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPDinoPostBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFenrir_Character_BP_C::BPDinoPostBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPDinoPostBeginPlay");
		
		AFenrir_Character_BP_C_BPDinoPostBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPSetupTamed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bWasJustTamed                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFenrir_Character_BP_C::BPSetupTamed(bool bWasJustTamed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPSetupTamed");
		
		AFenrir_Character_BP_C_BPSetupTamed_Params params {};
		params.bWasJustTamed = bWasJustTamed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fenrir_Character_BP.Fenrir_Character_BP_C.UpdateNaturalArmor
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AFenrir_Character_BP_C::UpdateNaturalArmor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.UpdateNaturalArmor");
		
		AFenrir_Character_BP_C_UpdateNaturalArmor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPServerHandleNetExecCommand
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           FromPC                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FName                                        CommandName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FBPNetExecParams                            ExecParams                                                 (Parm, OutParm, ReferenceParm)
	 */
	bool AFenrir_Character_BP_C::BPServerHandleNetExecCommand(class APlayerController* FromPC, const class FName& CommandName, struct FBPNetExecParams* ExecParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPServerHandleNetExecCommand");
		
		AFenrir_Character_BP_C_BPServerHandleNetExecCommand_Params params {};
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
	 * 		Name   -> Function Fenrir_Character_BP.Fenrir_Character_BP_C.UpdateRiderBuff
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               remove                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AShooterCharacter*                           Rider                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFenrir_Character_BP_C::UpdateRiderBuff(bool remove, class AShooterCharacter* Rider)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.UpdateRiderBuff");
		
		AFenrir_Character_BP_C_UpdateRiderBuff_Params params {};
		params.remove = remove;
		params.Rider = Rider;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPAdjustDamage
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              IncomingDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FDamageEvent                                TheDamageEvent                                             (Parm)
	 * 		class AController*                                 EventInstigator                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsPointDamage                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  PointHitInfo                                               (Parm)
	 */
	float AFenrir_Character_BP_C::BPAdjustDamage(float IncomingDamage, const struct FDamageEvent& TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, bool bIsPointDamage, const struct FHitResult& PointHitInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPAdjustDamage");
		
		AFenrir_Character_BP_C_BPAdjustDamage_Params params {};
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
	 * 		Name   -> Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPGetHUDElements
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           ForPC                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FHUDElement>                         OutElements                                                (Parm, OutParm, ZeroConstructor)
	 */
	void AFenrir_Character_BP_C::BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPGetHUDElements");
		
		AFenrir_Character_BP_C_BPGetHUDElements_Params params {};
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
	 * 		Name   -> Function Fenrir_Character_BP.Fenrir_Character_BP_C.SpawnIceBiteVFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFenrir_Character_BP_C::SpawnIceBiteVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.SpawnIceBiteVFX");
		
		AFenrir_Character_BP_C_SpawnIceBiteVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fenrir_Character_BP.Fenrir_Character_BP_C.BP_OnSetDeath
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 */
	void AFenrir_Character_BP_C::BP_OnSetDeath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.BP_OnSetDeath");
		
		AFenrir_Character_BP_C_BP_OnSetDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fenrir_Character_BP.Fenrir_Character_BP_C.SetupSpineMats
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFenrir_Character_BP_C::SetupSpineMats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.SetupSpineMats");
		
		AFenrir_Character_BP_C_SetupSpineMats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPNotifyClearRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderClearing                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFenrir_Character_BP_C::BPNotifyClearRider(class AShooterCharacter* RiderClearing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPNotifyClearRider");
		
		AFenrir_Character_BP_C_BPNotifyClearRider_Params params {};
		params.RiderClearing = RiderClearing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fenrir_Character_BP.Fenrir_Character_BP_C.CanJumpInternal
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool AFenrir_Character_BP_C::CanJumpInternal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.CanJumpInternal");
		
		AFenrir_Character_BP_C_CanJumpInternal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPNotifySetRider
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AShooterCharacter*                           RiderSetting                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFenrir_Character_BP_C::BPNotifySetRider(class AShooterCharacter* RiderSetting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPNotifySetRider");
		
		AFenrir_Character_BP_C_BPNotifySetRider_Params params {};
		params.RiderSetting = RiderSetting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPTriggerStasisEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFenrir_Character_BP_C::BPTriggerStasisEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPTriggerStasisEvent");
		
		AFenrir_Character_BP_C_BPTriggerStasisEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPDoAttack
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFenrir_Character_BP_C::BPDoAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPDoAttack");
		
		AFenrir_Character_BP_C_BPDoAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fenrir_Character_BP.Fenrir_Character_BP_C.BlueprintAdjustOutputDamage
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OriginalDamageAmount                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      HitActor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UClass*                                      OutDamageType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              OutDamageImpulse                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	float AFenrir_Character_BP_C::BlueprintAdjustOutputDamage(int32_t AttackIndex, float OriginalDamageAmount, class AActor* HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.BlueprintAdjustOutputDamage");
		
		AFenrir_Character_BP_C_BlueprintAdjustOutputDamage_Params params {};
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
	 * 		Name   -> Function Fenrir_Character_BP.Fenrir_Character_BP_C.UnriddenEndIceState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFenrir_Character_BP_C::UnriddenEndIceState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.UnriddenEndIceState");
		
		AFenrir_Character_BP_C_UnriddenEndIceState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPOnStaminaDrained
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFenrir_Character_BP_C::BPOnStaminaDrained()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPOnStaminaDrained");
		
		AFenrir_Character_BP_C_BPOnStaminaDrained_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fenrir_Character_BP.Fenrir_Character_BP_C.BlueprintCanAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              attackRangeOffset                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      OtherTarget                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AFenrir_Character_BP_C::BlueprintCanAttack(int32_t AttackIndex, float Distance, float attackRangeOffset, class AActor* OtherTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.BlueprintCanAttack");
		
		AFenrir_Character_BP_C_BlueprintCanAttack_Params params {};
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
	 * 		Name   -> Function Fenrir_Character_BP.Fenrir_Character_BP_C.BlueprintCanRiderAttack
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AttackIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool AFenrir_Character_BP_C::BlueprintCanRiderAttack(int32_t AttackIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.BlueprintCanRiderAttack");
		
		AFenrir_Character_BP_C_BlueprintCanRiderAttack_Params params {};
		params.AttackIndex = AttackIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fenrir_Character_BP.Fenrir_Character_BP_C.Does Fenrir Have Enough Stamina
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              needsStamina                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFenrir_Character_BP_C::DoesFenrirHaveEnoughStamina(float needsStamina, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.Does Fenrir Have Enough Stamina");
		
		AFenrir_Character_BP_C_DoesFenrirHaveEnoughStamina_Params params {};
		params.needsStamina = needsStamina;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fenrir_Character_BP.Fenrir_Character_BP_C.Does Fenrir Have Enough Stamina Pure
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              needsStamina                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFenrir_Character_BP_C::DoesFenrirHaveEnoughStaminaPure(float needsStamina, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.Does Fenrir Have Enough Stamina Pure");
		
		AFenrir_Character_BP_C_DoesFenrirHaveEnoughStaminaPure_Params params {};
		params.needsStamina = needsStamina;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fenrir_Character_BP.Fenrir_Character_BP_C.CanUseIceState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isForStart                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFenrir_Character_BP_C::CanUseIceState(bool isForStart, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.CanUseIceState");
		
		AFenrir_Character_BP_C_CanUseIceState_Params params {};
		params.isForStart = isForStart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fenrir_Character_BP.Fenrir_Character_BP_C.NetSetUseSpines
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               newUse                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFenrir_Character_BP_C::NetSetUseSpines(bool newUse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.NetSetUseSpines");
		
		AFenrir_Character_BP_C_NetSetUseSpines_Params params {};
		params.newUse = newUse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fenrir_Character_BP.Fenrir_Character_BP_C.OnRep_IsIcey
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFenrir_Character_BP_C::OnRep_IsIcey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.OnRep_IsIcey");
		
		AFenrir_Character_BP_C_OnRep_IsIcey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fenrir_Character_BP.Fenrir_Character_BP_C.InitFenrir
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFenrir_Character_BP_C::InitFenrir()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.InitFenrir");
		
		AFenrir_Character_BP_C_InitFenrir_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fenrir_Character_BP.Fenrir_Character_BP_C.SetIceStateActive
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsActive                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFenrir_Character_BP_C::SetIceStateActive(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.SetIceStateActive");
		
		AFenrir_Character_BP_C_SetIceStateActive_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fenrir_Character_BP.Fenrir_Character_BP_C.BlueprintAnimNotifyCustomEvent
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        CustomEventName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class USkeletalMeshComponent*                      MeshComp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimSequenceBase*                           Animation                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UAnimNotify*                                 AnimNotifyObject                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFenrir_Character_BP_C::BlueprintAnimNotifyCustomEvent(const class FName& CustomEventName, class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimNotify* AnimNotifyObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.BlueprintAnimNotifyCustomEvent");
		
		AFenrir_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params {};
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
	 * 		Name   -> Function Fenrir_Character_BP.Fenrir_Character_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFenrir_Character_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.UserConstructionScript");
		
		AFenrir_Character_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fenrir_Character_BP.Fenrir_Character_BP_C.Fade_IceSpines__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AFenrir_Character_BP_C::Fade_IceSpines__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.Fade_IceSpines__FinishedFunc");
		
		AFenrir_Character_BP_C_Fade_IceSpines__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fenrir_Character_BP.Fenrir_Character_BP_C.Fade_IceSpines__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AFenrir_Character_BP_C::Fade_IceSpines__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.Fade_IceSpines__UpdateFunc");
		
		AFenrir_Character_BP_C_Fade_IceSpines__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fenrir_Character_BP.Fenrir_Character_BP_C.Timeline_PlayDissolve__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AFenrir_Character_BP_C::Timeline_PlayDissolve__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.Timeline_PlayDissolve__FinishedFunc");
		
		AFenrir_Character_BP_C_Timeline_PlayDissolve__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fenrir_Character_BP.Fenrir_Character_BP_C.Timeline_PlayDissolve__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AFenrir_Character_BP_C::Timeline_PlayDissolve__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.Timeline_PlayDissolve__UpdateFunc");
		
		AFenrir_Character_BP_C_Timeline_PlayDissolve__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fenrir_Character_BP.Fenrir_Character_BP_C.Timeline_ClearEmissive__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AFenrir_Character_BP_C::Timeline_ClearEmissive__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.Timeline_ClearEmissive__FinishedFunc");
		
		AFenrir_Character_BP_C_Timeline_ClearEmissive__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fenrir_Character_BP.Fenrir_Character_BP_C.Timeline_ClearEmissive__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AFenrir_Character_BP_C::Timeline_ClearEmissive__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.Timeline_ClearEmissive__UpdateFunc");
		
		AFenrir_Character_BP_C_Timeline_ClearEmissive__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fenrir_Character_BP.Fenrir_Character_BP_C.PlayFadeIceSpines
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFenrir_Character_BP_C::PlayFadeIceSpines()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.PlayFadeIceSpines");
		
		AFenrir_Character_BP_C_PlayFadeIceSpines_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fenrir_Character_BP.Fenrir_Character_BP_C.ReverseFadeIceSpines
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFenrir_Character_BP_C::ReverseFadeIceSpines()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.ReverseFadeIceSpines");
		
		AFenrir_Character_BP_C_ReverseFadeIceSpines_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fenrir_Character_BP.Fenrir_Character_BP_C.SetNewTime_Fade_IceSpines
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewTime                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFenrir_Character_BP_C::SetNewTime_Fade_IceSpines(float NewTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.SetNewTime_Fade_IceSpines");
		
		AFenrir_Character_BP_C_SetNewTime_Fade_IceSpines_Params params {};
		params.NewTime = NewTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fenrir_Character_BP.Fenrir_Character_BP_C.Multi_SetNewTime_Fade_IceSpines
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewTime                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFenrir_Character_BP_C::Multi_SetNewTime_Fade_IceSpines(float NewTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.Multi_SetNewTime_Fade_IceSpines");
		
		AFenrir_Character_BP_C_Multi_SetNewTime_Fade_IceSpines_Params params {};
		params.NewTime = NewTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fenrir_Character_BP.Fenrir_Character_BP_C.Multi_PlayFade
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AFenrir_Character_BP_C::Multi_PlayFade()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.Multi_PlayFade");
		
		AFenrir_Character_BP_C_Multi_PlayFade_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fenrir_Character_BP.Fenrir_Character_BP_C.Multi_HardSetSpinesActive
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsActive                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFenrir_Character_BP_C::Multi_HardSetSpinesActive(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.Multi_HardSetSpinesActive");
		
		AFenrir_Character_BP_C_Multi_HardSetSpinesActive_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fenrir_Character_BP.Fenrir_Character_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AFenrir_Character_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.ReceiveBeginPlay");
		
		AFenrir_Character_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fenrir_Character_BP.Fenrir_Character_BP_C.InitFenrir_NextTick
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFenrir_Character_BP_C::InitFenrir_NextTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.InitFenrir_NextTick");
		
		AFenrir_Character_BP_C_InitFenrir_NextTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fenrir_Character_BP.Fenrir_Character_BP_C.InitFenir_Event
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AFenrir_Character_BP_C::InitFenir_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.InitFenir_Event");
		
		AFenrir_Character_BP_C_InitFenir_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fenrir_Character_BP.Fenrir_Character_BP_C.Multi_PrepIceState
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Prevent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFenrir_Character_BP_C::Multi_PrepIceState(bool Prevent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.Multi_PrepIceState");
		
		AFenrir_Character_BP_C_Multi_PrepIceState_Params params {};
		params.Prevent = Prevent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fenrir_Character_BP.Fenrir_Character_BP_C.PlayDissolve
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Is0To1                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFenrir_Character_BP_C::PlayDissolve(bool Is0To1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.PlayDissolve");
		
		AFenrir_Character_BP_C_PlayDissolve_Params params {};
		params.Is0To1 = Is0To1;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fenrir_Character_BP.Fenrir_Character_BP_C.ClearEmissive
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              StartingEmissive                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFenrir_Character_BP_C::ClearEmissive(float StartingEmissive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.ClearEmissive");
		
		AFenrir_Character_BP_C_ClearEmissive_Params params {};
		params.StartingEmissive = StartingEmissive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0220B720
	 * 		Name   -> Function Fenrir_Character_BP.Fenrir_Character_BP_C.ExecuteUbergraph_Fenrir_Character_BP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AFenrir_Character_BP_C::ExecuteUbergraph_Fenrir_Character_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.ExecuteUbergraph_Fenrir_Character_BP");
		
		AFenrir_Character_BP_C_ExecuteUbergraph_Fenrir_Character_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AFenrir_Character_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFenrir_Character_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Fenrir_Character_BP.Fenrir_Character_BP_C");
		return ptr;
	}

}


